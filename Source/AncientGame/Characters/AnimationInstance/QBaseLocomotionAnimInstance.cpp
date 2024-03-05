// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h"
#include "DataAssets/Character/QCharacterAnimationDataAsset.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/Animation/QMainAnimationSystemComponent.h"
#include "Characters/QBaseCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "Curves/CurveVector.h"

void UQBaseLocomotionAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	DeltaTimeX = DeltaSeconds;
	if (Character)
	{
		if (GetState() == ECharacterMovementState::OnGround)
		{
			UpdateMovementValues();
			UpdateRotationValues();
		}
		

	}
}

void UQBaseLocomotionAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
}

void UQBaseLocomotionAnimInstance::UpdateMovementValues()
{
	VelocityBlend = InterpVelocityBlend(VelocityBlend, CalculateVelocityBlend(), GetVelocityBlendInterpSpeed(), DeltaTimeX);

	DiagonalScaleAmount = CalculateDiagonalScaleAmount();

	RelativeAccelerationAmount = CalculateRelativeAccelerationAmount();

	FLeanAmount NewLeanAmount = { RelativeAccelerationAmount.Y ,RelativeAccelerationAmount.X };

	LeanAmount = InterpLeanAmount(LeanAmount, NewLeanAmount, 4.0f, DeltaTimeX);
	WalkRunBlend = CalculateWalkRunBlend();
	StrideBlend = CalculateStrideBlend();

	StandingPlayRate = CalculateStandingPlayRate();
	CrouchingPlayRate = CalculateCrouchingPlayRate();

}

FVelocityBlend UQBaseLocomotionAnimInstance::CalculateVelocityBlend()
{
	FVector VelocityDir = GetVelocity().GetSafeNormal();
	FRotator CharacterDir = GetActorRotation();
	FVector LocRelativeVelocityDir = CharacterDir.UnrotateVector(VelocityDir);

	float Sum = fabs(LocRelativeVelocityDir.X) +
		fabs(LocRelativeVelocityDir.Y) +
		fabs(LocRelativeVelocityDir.Z);

	FVector RelativeDirection = LocRelativeVelocityDir / Sum;
	FVelocityBlend CVelocityBlend;
	CVelocityBlend.F = FMath::Clamp(RelativeDirection.X, 0.0, 1.0);
	CVelocityBlend.B = FMath::Abs(FMath::Clamp(RelativeDirection.X, -1.0, 0.0));
	CVelocityBlend.R = FMath::Clamp(RelativeDirection.Y, 0.0, 1.0);
	CVelocityBlend.L = FMath::Abs(FMath::Clamp(RelativeDirection.Y, -1.0, 0.0));

	//从各个方向取速度的比例来获取更好的混合，好像比BlendSpace效果好
	return CVelocityBlend;
}

float UQBaseLocomotionAnimInstance::CalculateDiagonalScaleAmount()
{
	float VelocityBlendLength = fabs(VelocityBlend.F + VelocityBlend.B);//F 和 B同时只会有一个有值

	if (UCurveFloat* DiagonalScaleAmountCurve = GetDiagonalScaleAmountCurve())
	{
		return DiagonalScaleAmountCurve->GetFloatValue(VelocityBlendLength);
	}
	return 0.f;
}

FVector UQBaseLocomotionAnimInstance::CalculateRelativeAccelerationAmount()
{
	FVector CRelativeAccelerationAmount;
	
		UCharacterMovementComponent* MovementComponent = Character->GetCharacterMovement();
		FRotator CharacterRotation = GetActorRotation();
		if (Acceleration.Dot(GetVelocity()) > 0.0f) //< 90
		{
			float MaxAcceleration = MovementComponent->GetMaxAcceleration();
			FVector AccelerationAmount = Acceleration.GetClampedToMaxSize(MaxAcceleration) / MaxAcceleration;
			CRelativeAccelerationAmount = CharacterRotation.UnrotateVector(AccelerationAmount);
			return CRelativeAccelerationAmount;
		}
		else
		{
			float MaxBrakingDeceleration = MovementComponent->GetMaxBrakingDeceleration();
			FVector AccelerationAmount = Acceleration.GetClampedToMaxSize(MaxBrakingDeceleration) / MaxBrakingDeceleration;
			CRelativeAccelerationAmount = CharacterRotation.UnrotateVector(AccelerationAmount);
			return CRelativeAccelerationAmount;
		}
	return FVector();
}

float UQBaseLocomotionAnimInstance::CalculateWalkRunBlend()
{
	switch (GetGait())
	{
	case ECharacterMovementGait::Walk:		return 0.0f;
	case ECharacterMovementGait::Run:		return 1.0f;
	case ECharacterMovementGait::Sprint:	return 1.0f;
	}
	return 0.0f;
}

bool UQBaseLocomotionAnimInstance::UpdateCharacterInfo()
{
	if (!Super::UpdateCharacterInfo())return false;
	Speed = OwnAnimationSystemComponent->Speed;
	Acceleration = OwnAnimationSystemComponent->Acceleration;
	return true;
}

float UQBaseLocomotionAnimInstance::CalculateStrideBlend()
{
	float WalkBlend = GetStrideBlend_N_WalkCurve()->GetFloatValue(Speed);

	float RunBlend = GetStrideBlend_N_RunCurve()->GetFloatValue(Speed);

	float StandBlend = FMath::Lerp(WalkBlend, RunBlend, GetAnimCurveClamped(TEXT("Weight_Gait"), -1.0f, 0.0, 1.0));

	float CWalkBlend = GetStrideBlend_C_WalkCurve()->GetFloatValue(Speed);

	float Blend = FMath::Lerp(StandBlend, CWalkBlend, GetCurveValue(TEXT("BasePose_CLF")));

	return Blend;//曲线的取值是0-1，速度越快这个值越大，
}

float UQBaseLocomotionAnimInstance::CalculateStandingPlayRate()
{
	float NoSprintPlayRate = FMath::Lerp(
		Speed / GetAnimatedWalkSpeed(),
		Speed / GetAnimatedRunSpeed(),
		GetAnimCurveClamped(TEXT("Weight_Gait"), -1, 0.0f, 1.0f));

	float SprintPlayRate = Speed / GetAnimatedSprintSpeed();

	float PlayRate = FMath::Lerp(NoSprintPlayRate, SprintPlayRate, GetAnimCurveClamped(TEXT("Weight_Gait"), -2, 0.0f, 1.0f));
	//速度占比


	PlayRate /= StrideBlend;//除以步幅
	PlayRate /= GetOwningComponent()->GetComponentScale().Z;
	return FMath::Clamp(PlayRate, 0.0f, 3.0f);
}

float UQBaseLocomotionAnimInstance::CalculateCrouchingPlayRate()
{
	float PlayRate = Speed / GetAnimatedCrouchSpeed();
	PlayRate = PlayRate / StrideBlend;
	PlayRate = PlayRate / GetOwningComponent()->GetComponentScale().Z;
	return	FMath::Clamp(PlayRate, 0.0f, 2.0f);
}

void UQBaseLocomotionAnimInstance::UpdateRotationValues()
{
	MovementDirection = CalculateMovementDirection();
	FRotator Angle = GetControlRotation() - GetVelocity().Rotation();
	Angle.Normalize();
	Yaw.F = GetYawOffset_FBCurve()->GetVectorValue(Angle.Yaw).X;
	Yaw.B = GetYawOffset_FBCurve()->GetVectorValue(Angle.Yaw).Y;
	Yaw.L = GetYawOffset_LRCurve()->GetVectorValue(Angle.Yaw).X;
	Yaw.R = GetYawOffset_LRCurve()->GetVectorValue(Angle.Yaw).Y;
}

EMovementDirection UQBaseLocomotionAnimInstance::CalculateMovementDirection()
{
	if (GetGait() == ECharacterMovementGait::Sprint)
	{
		return EMovementDirection::Forward;
	}
	else
	{
		if (GetRotationMode() == ECharacterMovementRotationMode::VelocityDirection)
		{
			return EMovementDirection::Forward;
		}
		else
		{
			FRotator Angle = GetVelocity().Rotation() - GetControlRotation();
			Angle.Normalize();
			return CalculateQuadrant(MovementDirection, 70.f, -70.f, 110.f, -110.f, 5.f, Angle.Yaw);
		}
	

	}
}

EMovementDirection UQBaseLocomotionAnimInstance::CalculateQuadrant(EMovementDirection Current, float FRThreshold, float FLThreshold, float BRThreshold, float BLThreshold, float Buffer, float Angle)
{
	if (AngleInRange(Angle, FLThreshold, FRThreshold, Buffer, true)) {
		return EMovementDirection::Forward;
	}
	else if (AngleInRange(Angle, FRThreshold, BRThreshold, Buffer, true)) {
		return EMovementDirection::Right;

	}
	else if (AngleInRange(Angle, BLThreshold, FLThreshold, Buffer, true)) {
		return EMovementDirection::Left;
	}
	else {
		return EMovementDirection::Backward;
	}
}

float UQBaseLocomotionAnimInstance::GetSpeed() const
{
	if (OwnAnimationSystemComponent) 
	{
		return OwnAnimationSystemComponent->GetSpeed();
	}
	return 0.0f;
}

FVector UQBaseLocomotionAnimInstance::GetVelocity() const
{
	if (OwnAnimationSystemComponent)
	{
		return OwnAnimationSystemComponent->GetVelocity();
	}
	return FVector();
}

FRotator UQBaseLocomotionAnimInstance::GetActorRotation() const
{
	if (OwnAnimationSystemComponent)
	{
		return OwnAnimationSystemComponent->GetActorRotation();
	}
	return FRotator();
}

FRotator UQBaseLocomotionAnimInstance::GetControlRotation()const
{
	if (OwnAnimationSystemComponent)
	{
		return OwnAnimationSystemComponent->GetControlRotation();
	}
	return FRotator();
}

FVector UQBaseLocomotionAnimInstance::GetAcceleration() const
{
	if (OwnAnimationSystemComponent)
	{
		return OwnAnimationSystemComponent->GetAcceleration();
	}
	return FVector();
}

FLeanAmount UQBaseLocomotionAnimInstance::InterpLeanAmount(const FLeanAmount& Current, FLeanAmount& Target, float InterpSpeed, float DeltaTime)
{
	return { FMath::FInterpTo(Current.LR, Target.LR, DeltaTime, InterpSpeed),FMath::FInterpTo(Current.BF, Target.BF, DeltaTime, InterpSpeed) };
}

FVelocityBlend UQBaseLocomotionAnimInstance::InterpVelocityBlend(const FVelocityBlend& Current, const FVelocityBlend& Target, float InterpSpeed, float DeltaTime)
{
	FVelocityBlend InterpedVelocityBlend;
	InterpedVelocityBlend.F = FMath::FInterpTo(Current.F, Target.F, DeltaTime, InterpSpeed);
	InterpedVelocityBlend.B = FMath::FInterpTo(Current.B, Target.B, DeltaTime, InterpSpeed);
	InterpedVelocityBlend.L = FMath::FInterpTo(Current.L, Target.L, DeltaTime, InterpSpeed);
	InterpedVelocityBlend.R = FMath::FInterpTo(Current.R, Target.R, DeltaTime, InterpSpeed);
	return InterpedVelocityBlend;
}

float UQBaseLocomotionAnimInstance::GetAnimCurveClamped(FName name, float Bias, float ClampMin, float ClampMax)
{
	float CurveValue = GetCurveValue(TEXT("Weight_Gait"));
	return FMath::Clamp(CurveValue + Bias, ClampMin, ClampMax);
}

bool UQBaseLocomotionAnimInstance::AngleInRange(float Angle, float MinAngle, float MaxAngle, float Buffer, bool IncreaseBuffer)
{
	if (IncreaseBuffer) {
		return Angle >= MinAngle - Buffer && Angle <= MaxAngle + Buffer;
	}
	else {
		return Angle >= MinAngle + Buffer && Angle <= MaxAngle - Buffer;
	}
}

float UQBaseLocomotionAnimInstance::GetVelocityBlendInterpSpeed() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->BaseLocomotionAnimationData.VelocityBlendInterpSpeed;
	}
	return 0.f;
}

float UQBaseLocomotionAnimInstance::GetAnimatedCrouchSpeed() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->BaseLocomotionAnimationData.AnimatedCrouchSpeed;
	}
	return 0.f;
}

float UQBaseLocomotionAnimInstance::GetAnimatedWalkSpeed() const
{

	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{

		return CharacterAnimationAsset->BaseLocomotionAnimationData.AnimatedWalkSpeed;
	}
	return 0.f;
}

float UQBaseLocomotionAnimInstance::GetAnimatedRunSpeed() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->BaseLocomotionAnimationData.AnimatedRunSpeed;
	}
	return 0.f;
}

float UQBaseLocomotionAnimInstance::GetAnimatedSprintSpeed() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->BaseLocomotionAnimationData.AnimatedSprintSpeed;
	}
	return 0.f;
}

UBlendSpace* UQBaseLocomotionAnimInstance::GetN_WalkRun_F() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		if (CharacterAnimationAsset->BaseLocomotionAnimationData.N_WalkRun_F)
		{
			return CharacterAnimationAsset->BaseLocomotionAnimationData.N_WalkRun_F;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->BaseLocomotionAnimationData.N_WalkRun_F : nullptr;
}

UBlendSpace* UQBaseLocomotionAnimInstance::GetN_WalkRun_FL() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		if (CharacterAnimationAsset->BaseLocomotionAnimationData.N_WalkRun_FL)
		{
			return CharacterAnimationAsset->BaseLocomotionAnimationData.N_WalkRun_FL;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->BaseLocomotionAnimationData.N_WalkRun_FL : nullptr;
}

UBlendSpace* UQBaseLocomotionAnimInstance::GetN_WalkRun_FR() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		if (CharacterAnimationAsset->BaseLocomotionAnimationData.N_WalkRun_FR)
		{
			return CharacterAnimationAsset->BaseLocomotionAnimationData.N_WalkRun_FR;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->BaseLocomotionAnimationData.N_WalkRun_FR : nullptr;
}

UBlendSpace* UQBaseLocomotionAnimInstance::GetN_WalkRun_B() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		if (CharacterAnimationAsset->BaseLocomotionAnimationData.N_WalkRun_B)
		{
			return CharacterAnimationAsset->BaseLocomotionAnimationData.N_WalkRun_B;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->BaseLocomotionAnimationData.N_WalkRun_B : nullptr;
}

UBlendSpace* UQBaseLocomotionAnimInstance::GetN_WalkRun_BL() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		if (CharacterAnimationAsset->BaseLocomotionAnimationData.N_WalkRun_BL)
		{
			return CharacterAnimationAsset->BaseLocomotionAnimationData.N_WalkRun_BL;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->BaseLocomotionAnimationData.N_WalkRun_BL : nullptr;
}

UBlendSpace* UQBaseLocomotionAnimInstance::GetN_WalkRun_BR() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		if (CharacterAnimationAsset->BaseLocomotionAnimationData.N_WalkRun_BR)
		{
			return CharacterAnimationAsset->BaseLocomotionAnimationData.N_WalkRun_BR;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->BaseLocomotionAnimationData.N_WalkRun_BR : nullptr;
}

UCurveFloat* UQBaseLocomotionAnimInstance::GetDiagonalScaleAmountCurve() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		if (CharacterAnimationAsset->BaseLocomotionAnimationData.DiagonalScaleAmountCurve)
		{
			return CharacterAnimationAsset->BaseLocomotionAnimationData.DiagonalScaleAmountCurve;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->BaseLocomotionAnimationData.DiagonalScaleAmountCurve : nullptr;
}

UCurveFloat* UQBaseLocomotionAnimInstance::GetStrideBlend_N_WalkCurve() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		if (CharacterAnimationAsset->BaseLocomotionAnimationData.StrideBlend_N_Walk)
		{
			return CharacterAnimationAsset->BaseLocomotionAnimationData.StrideBlend_N_Walk;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->BaseLocomotionAnimationData.StrideBlend_N_Walk : nullptr;
}

UCurveFloat* UQBaseLocomotionAnimInstance::GetStrideBlend_N_RunCurve() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		if (CharacterAnimationAsset->BaseLocomotionAnimationData.StrideBlend_N_Run)
		{
			return CharacterAnimationAsset->BaseLocomotionAnimationData.StrideBlend_N_Run;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->BaseLocomotionAnimationData.StrideBlend_N_Run : nullptr;
}

UCurveFloat* UQBaseLocomotionAnimInstance::GetStrideBlend_C_WalkCurve() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		if (CharacterAnimationAsset->BaseLocomotionAnimationData.StrideBlend_C_Walk)
		{
			return CharacterAnimationAsset->BaseLocomotionAnimationData.StrideBlend_C_Walk;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->BaseLocomotionAnimationData.StrideBlend_C_Walk : nullptr;
}

UCurveVector* UQBaseLocomotionAnimInstance::GetYawOffset_FBCurve() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		if (CharacterAnimationAsset->BaseLocomotionAnimationData.YawOffset_FB)
		{
			return CharacterAnimationAsset->BaseLocomotionAnimationData.YawOffset_FB;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->BaseLocomotionAnimationData.YawOffset_FB : nullptr;
}

UCurveVector* UQBaseLocomotionAnimInstance::GetYawOffset_LRCurve() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		if (CharacterAnimationAsset->BaseLocomotionAnimationData.YawOffset_LR)
		{
			return CharacterAnimationAsset->BaseLocomotionAnimationData.YawOffset_LR;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->BaseLocomotionAnimationData.YawOffset_LR : nullptr;
}
