// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h"
#include "Components/Animation/QMainAnimationSystemComponent.h"
#include "DataAssets/Character/QCharacterAnimationDataAsset.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

#define Message2(key,Arg1,Arg2) GEngine->AddOnScreenDebugMessage(key, 1, FColor::Red,FString::Format(TEXT("{0}:{1}"), { FStringFormatArg(Arg1),FStringFormatArg(Arg2)}));


void UQGroundLocomotionAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);


	if (Character)
	{
	UpdateAimingValues();
	UpdateFootIK();
	if (GetState() == ECharacterMovementState::OnGround)
	{
		bool LastState = bShouldMove;
		bShouldMove = ShouldMoveCheck();
		if (!LastState && bShouldMove)
		{
			bRotate_L = false;
			bRotate_R = false;
			ElapsedDelayTime = 0.f;
		}
		if (CanRotateInPlace())
		{
			RotateinPlaceWithCheck();
		}
		else
		{
			bRotate_L = false;
			bRotate_R = false;
		}
		if (CanTurnInPlace())
		{
			TurnInPlaceCheck();
		}
		else
		{
			ElapsedDelayTime = 0.f;
		}
	}
	}

}

void UQGroundLocomotionAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	PlayTransition.AddDynamic(this, &ThisClass::OnPlayTransition);
}

bool UQGroundLocomotionAnimInstance::UpdateCharacterInfo()
{
	if (!Super::UpdateCharacterInfo())return false;
	
	bIsMoving = OwnAnimationSystemComponent->bIsMoving;
	bHasMovementInput = OwnAnimationSystemComponent->bHasMovementInput;
	AimYawRate = OwnAnimationSystemComponent->AimYawRate;
	return true;
}

void UQGroundLocomotionAnimInstance::UpdateAimingValues()
{
	FRotator Angle = GetControlRotation() - GetActorRotation();
	Angle.Normalize();
	AimingAngle = { Angle.Yaw,Angle.Pitch };
}

void UQGroundLocomotionAnimInstance::UpdateFootIK()
{
	SetFootLocking(TEXT("Enable_FootIK_L"), TEXT("FootLock_L"), TEXT("ik_foot_l"),
		FootLock_L_Alpha, FootLock_L_Location, FootLock_L_Rotation);//设置左脚Location Rotation
	SetFootLocking(TEXT("Enable_FootIK_R"), TEXT("FootLock_R"), TEXT("ik_foot_r"),
		FootLock_R_Alpha, FootLock_R_Location, FootLock_R_Rotation);

	if (GetState() == ECharacterMovementState::InAir)
	{
		SetPelvisIKOffset(FVector(0, 0, 0), FVector(0, 0, 0));
		ResetIKOffsets();
	}
	else if (GetState() != ECharacterMovementState::Ragdoll)
	{
		FVector FootOffset_L_Target, FootOffset_R_Target;
		SetFootOffsets(TEXT("Enable_FootIK_L"), TEXT("ik_foot_l"), TEXT("root"),
			FootOffset_L_Target, FootOffset_L_Location, FootOffset_L_Rotation);
		SetFootOffsets(TEXT("Enable_FootIK_R"), TEXT("ik_foot_r"), TEXT("root"),
			FootOffset_R_Target, FootOffset_R_Location, FootOffset_R_Rotation);
		SetPelvisIKOffset(FootOffset_L_Target, FootOffset_R_Target);
	}
}

void UQGroundLocomotionAnimInstance::SetFootOffsets(const FName& EnableFootIKCurve, const FName& IKFootBone, const FName& RootBone, FVector& CurrentLocationTarget, FVector& CurrentLocationOffset, FRotator& CurrentRotationOffset)
{
	if (GetCurveValue(EnableFootIKCurve) > 0.0f) {
		USkeletalMeshComponent* OwnerMesh = GetOwningComponent();

		FVector IKFootFloorLocation;
		IKFootFloorLocation.X = OwnerMesh->GetSocketLocation(IKFootBone).X;
		IKFootFloorLocation.Y = OwnerMesh->GetSocketLocation(IKFootBone).Y;
		IKFootFloorLocation.Z = OwnerMesh->GetSocketLocation(RootBone).Z;
		FVector FootTracBegin = FVector(IKFootFloorLocation.X, IKFootFloorLocation.Y, IKFootFloorLocation.Z + GetIK_TraceDistanceAboveFoot());
		FVector FootTracEnd = FVector(IKFootFloorLocation.X, IKFootFloorLocation.Y, IKFootFloorLocation.Z - GetIK_TraceDistanceBelowFoot());
		FHitResult HitResult;
		UKismetSystemLibrary::LineTraceSingle(this, FootTracBegin,
			FootTracEnd, UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_Visibility),
			false, TArray<AActor*, FDefaultAllocator>(), EDrawDebugTrace::Type::None,
			HitResult, true);
		FRotator TargetRotationOffset;
		
			if (Character->GetCharacterMovement()->IsWalkable(HitResult)) 
			{
				FVector OldFootFloorLocoation = GetFootHeight() * FVector(0, 0, 1) + IKFootFloorLocation;
					FVector NewFootFloorLocoation = GetFootHeight() * HitResult.ImpactNormal + HitResult.ImpactPoint;

					CurrentLocationTarget = NewFootFloorLocoation - OldFootFloorLocoation;
					
					TargetRotationOffset = FRotator(FMath::RadiansToDegrees(FMath::Atan2(HitResult.ImpactNormal.X, HitResult.ImpactNormal.Z)) * -1.f,
						0.f, FMath::RadiansToDegrees(FMath::Atan2(HitResult.ImpactNormal.Y, HitResult.ImpactNormal.Z)));
			}
			if (CurrentLocationOffset.Z > CurrentLocationTarget.Z) 
			{
				CurrentLocationOffset = FMath::VInterpTo(CurrentLocationOffset, CurrentLocationTarget, DeltaTimeX, 30.0f);
			}
			else 
			{
				CurrentLocationOffset = FMath::VInterpTo(CurrentLocationOffset, CurrentLocationTarget, DeltaTimeX, 15.0f);
			}
			CurrentRotationOffset = FMath::RInterpTo(CurrentRotationOffset, TargetRotationOffset, DeltaTimeX, 30.0f);
	}
	else {
		CurrentLocationOffset = FVector(0, 0, 0);
		CurrentRotationOffset = FRotator(0, 0, 0);
	}
}

void UQGroundLocomotionAnimInstance::SetPelvisIKOffset(const FVector& FootOffset_L_Target, const FVector& FootOffset_R_Target)
{
	PelvisAlpha = (GetCurveValue(TEXT("Enable_FootIK_L")) + GetCurveValue(TEXT("Enable_FootIK_R"))) / 2.0f;
	FVector PelvisTarget;
	if (PelvisAlpha > 0.0f) {
		if (FootOffset_L_Target.Z < FootOffset_R_Target.Z) {
			PelvisTarget = FootOffset_L_Target;
		}
		else {
			PelvisTarget = FootOffset_R_Target;//选定最考上的脚，逆向运动学修改盆骨位置
		}
		if (PelvisTarget.Z > PelvisOffset.Z) {
			PelvisOffset = FMath::VInterpTo(PelvisOffset, PelvisTarget, DeltaTimeX, 10.0f);
		}
		else {
			PelvisOffset = FMath::VInterpTo(PelvisOffset, PelvisTarget, DeltaTimeX, 15.0f);
		}
	}
	else {
		PelvisOffset = FVector(0, 0, 0);
	}
}

void UQGroundLocomotionAnimInstance::SetFootLocking(const FName& EnableFootIKCurve, const FName& FootLockCurve, const FName& IKFootBone, float& CurrentFootLockAlpha, FVector& CurrentFootLockLocation, FRotator& CurrentFootLockRotation)
{
	if (GetCurveValue(EnableFootIKCurve) > 0.0f) {
		float FootLockCurveValue = GetCurveValue(FootLockCurve);
		if (FootLockCurveValue >= 0.99f || FootLockCurveValue < CurrentFootLockAlpha) {
			CurrentFootLockAlpha = FootLockCurveValue;
		}
		if (CurrentFootLockAlpha >= 0.99f) {
			FTransform OwnerMeshTransform = GetOwningComponent()->GetSocketTransform(IKFootBone, ERelativeTransformSpace::RTS_Component);
			CurrentFootLockLocation = OwnerMeshTransform.GetLocation();
			CurrentFootLockRotation = OwnerMeshTransform.GetRotation().Rotator();
		}
		if (CurrentFootLockAlpha > 0.0f) {
			SetFootLockOffsets(CurrentFootLockLocation, CurrentFootLockRotation);
		}
	}
}

void UQGroundLocomotionAnimInstance::SetFootLockOffsets(FVector& LocalLocation, FRotator& LocalRotation)
{
	UCharacterMovementComponent* CharacterMovement = Character->GetCharacterMovement();
	FRotator RotationDifference = { 0,0,0 };
	if (CharacterMovement->IsMovingOnGround()) 
	{
		RotationDifference = Character->GetActorRotation() - CharacterMovement->GetLastUpdateRotation();
		RotationDifference.Normalize();
	}
	LocalRotation = LocalRotation - RotationDifference;
	LocalRotation.Normalize();


	FVector DeltaSecondVelocity = GetVelocity() * UGameplayStatics::GetWorldDeltaSeconds(GetWorld());
	FVector LocationDifference = GetOwningComponent()->GetComponentRotation().UnrotateVector(DeltaSecondVelocity);
	

	FVector AmountLocation = LocalLocation - LocationDifference;
	
	LocalLocation = AmountLocation.RotateAngleAxis(RotationDifference.Yaw, FVector(0.0, 0.0, -1.0));
}

void UQGroundLocomotionAnimInstance::ResetIKOffsets()
{
	FootOffset_L_Location = FMath::VInterpTo(FootOffset_L_Location, FVector(0, 0, 0), DeltaTimeX, 15.0f);
	FootOffset_R_Location = FMath::VInterpTo(FootOffset_L_Location, FVector(0, 0, 0), DeltaTimeX, 15.0f);
	FootOffset_L_Rotation = FMath::RInterpTo(FootOffset_L_Rotation, FRotator(0, 0, 0), DeltaTimeX, 15.0f);
	FootOffset_R_Rotation = FMath::RInterpTo(FootOffset_R_Rotation, FRotator(0, 0, 0), DeltaTimeX, 15.0f);
}

bool UQGroundLocomotionAnimInstance::ShouldMoveCheck()
{
	if (bIsMoving && bHasMovementInput)
	{
		return true;
	}
	if (Speed > 150.f)
	{
		return true;
	}
	return false;
}

bool UQGroundLocomotionAnimInstance::CanRotateInPlace()
{
	return GetRotationMode() == ECharacterMovementRotationMode::Aiming || GetViewMode() == ECharacterViewMode::FirstPerson;

}

void UQGroundLocomotionAnimInstance::RotateinPlaceWithCheck()
{
	bRotate_L = AimingAngle.X < GetRotateMinThreshold();
	bRotate_R = AimingAngle.X > GetRotateMaxThreshold();
	if (bRotate_L || bRotate_R) {
		RotateRate = FMath::GetMappedRangeValueClamped(TRange<float>(GetAimYawRateMinRange(), GetAimYawRateMaxRange()),
			TRange<float>(GetMinPlayRate(), GetMaxPlayRate()), AimYawRate);
	}
}

bool UQGroundLocomotionAnimInstance::CanTurnInPlace()
{
	if (GetRotationMode() == ECharacterMovementRotationMode::LookingDirection &&
		GetViewMode() == ECharacterViewMode::ThirdPerson &&
		GetCurveValue(TEXT("Enable_Transition"))) {
		return true;
	}
	return false;
}

void UQGroundLocomotionAnimInstance::TurnInPlaceCheck()
{
	if (fabs(AimingAngle.X) > GetTurnCheckMinAngle() && AimYawRate < GetAimYawRateLimit()) {
		ElapsedDelayTime += DeltaTimeX;
	}
	else {
		ElapsedDelayTime = 0.0f;
		return;
	}

	float ElapsedDelayTimeLimit = FMath::GetMappedRangeValueClamped(TRange<double>(GetTurnCheckMinAngle(), 180.0),
		TRange<double>(GetMinAngleDelay(), GetMaxAngleDelay()), fabs(AimingAngle.X));

	if (ElapsedDelayTime > ElapsedDelayTimeLimit) {
		//Message(1, AimRotation.Yaw);
		TurninPlace(FRotator(0.0, GetControlRotation().Yaw, 0.0), 1.0, 0.0, false);
	}
}

void UQGroundLocomotionAnimInstance::TurninPlace(const FRotator& TargetRotation, float PlayRateScale, float StartTime, bool OverrideCurrent)
{
	
	FRotator CharacterRotation = GetActorRotation();
	float TurnAngle = FMath::FindDeltaAngleDegrees(CharacterRotation.Yaw, TargetRotation.Yaw);
	FTurnInPlaceAsset TargetTurnAsset;
	if (fabs(TurnAngle) < GetTurn180Threshold()) {
		if (TurnAngle < 0) {
			switch (GetStance())
			{
			case ECharacterMovementStance::Stance:TargetTurnAsset = GetN_TurnIP_L90(); break;
			case ECharacterMovementStance::Crouching:TargetTurnAsset = GetCLF_TurnIP_L90(); break;
			}
		}
		else {
			switch (GetStance())
			{
			case ECharacterMovementStance::Stance:TargetTurnAsset = GetN_TurnIP_R90(); break;
			case ECharacterMovementStance::Crouching:TargetTurnAsset = GetCLF_TurnIP_R90(); break;
			}
		}
	}
	else {
		if (TurnAngle < 0) {
			switch (GetStance())
			{
			case ECharacterMovementStance::Stance:TargetTurnAsset = GetN_TurnIP_L180(); break;
			case ECharacterMovementStance::Crouching:TargetTurnAsset = GetCLF_TurnIP_L180(); break;
			}
		}
		else {
			switch (GetStance())
			{
			case ECharacterMovementStance::Stance:TargetTurnAsset = GetN_TurnIP_R180(); break;
			case ECharacterMovementStance::Crouching:TargetTurnAsset = GetCLF_TurnIP_R180(); break;
			}
		}
	}
	if (!IsPlayingSlotAnimation(TargetTurnAsset.Animation, TargetTurnAsset.SlotName) || OverrideCurrent) {

		PlaySlotAnimationAsDynamicMontage(TargetTurnAsset.Animation, TargetTurnAsset.SlotName,
			0.2, 0.2, PlayRateScale * TargetTurnAsset.PlayRate, 1, 0.0f, StartTime);
		if (TargetTurnAsset.ScaleTurnAngle) {
			RotationScale = TurnAngle / TargetTurnAsset.AnimatedAngle * TargetTurnAsset.PlayRate * PlayRateScale;
			//根据角度判定播放速度
		}
		else {
			RotationScale = TargetTurnAsset.PlayRate * PlayRateScale;
			//播放速度
		}
	}
}

void UQGroundLocomotionAnimInstance::OnPlayTransition(const FDynamicMontageParams& Parameters)
{
	if (Parameters.Animation)
	{
		PlaySlotAnimationAsDynamicMontage(Parameters.Animation, TEXT("Grounded Slot"),
			Parameters.BlendInTime,
			Parameters.BlendOutTime,
			Parameters.PlayRate, 1, 0.0f,
			Parameters.StartTime);
	}
}

bool UQGroundLocomotionAnimInstance::IsMoving() const
{
	if (OwnAnimationSystemComponent)
	{
		return OwnAnimationSystemComponent->IsMoving();
	}
	return false;
}

bool UQGroundLocomotionAnimInstance::HasMovementInput() const
{
	if (OwnAnimationSystemComponent)
	{
		return OwnAnimationSystemComponent->HasMovementInput();
	}
	return false;
}

float UQGroundLocomotionAnimInstance::GetRotateMinThreshold() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.RotateMinThreshold;
	}
	return 0.f;
}

float UQGroundLocomotionAnimInstance::GetRotateMaxThreshold() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.RotateMaxThreshold;
	}
	return 0.f;
}

float UQGroundLocomotionAnimInstance::GetAimYawRateMinRange() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.AimYawRateMinRange;
	}
	return 0.f;
}

float UQGroundLocomotionAnimInstance::GetAimYawRateMaxRange() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.AimYawRateMaxRange;
	}
	return 0.f;
}

float UQGroundLocomotionAnimInstance::GetTurnCheckMinAngle() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.TurnCheckMinAngle;
	}
	return 0.f;
}

float UQGroundLocomotionAnimInstance::GetTurn180Threshold() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.Turn180Threshold;
	}
	return 0.f;
}

float UQGroundLocomotionAnimInstance::GetAimYawRateLimit() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.AimYawRateLimit;
	}
	return 0.f;
}

float UQGroundLocomotionAnimInstance::GetMinAngleDelay() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.MinAngleDelay;
	}
	return 0.f;
}

float UQGroundLocomotionAnimInstance::GetMaxAngleDelay() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.MaxAngleDelay;
	}
	return 0.f;
}

float UQGroundLocomotionAnimInstance::GetMinPlayRate() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.MinPlayRate;
	}
	return 0.f;
}

float UQGroundLocomotionAnimInstance::GetMaxPlayRate() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.MaxPlayRate;
	}
	return 0.f;
}

float UQGroundLocomotionAnimInstance::GetIK_TraceDistanceAboveFoot() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.IK_TraceDistanceAboveFoot;
	}
	return 0.f;
}

float UQGroundLocomotionAnimInstance::GetIK_TraceDistanceBelowFoot() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.IK_TraceDistanceBelowFoot;
	}
	return 0.f;
}

float UQGroundLocomotionAnimInstance::GetFootHeight() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.FootHeight;
	}
	return 0.f;
}

FTurnInPlaceAsset UQGroundLocomotionAnimInstance::GetN_TurnIP_L90() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.N_TurnIP_L90;
	}
	return FTurnInPlaceAsset();
}

FTurnInPlaceAsset UQGroundLocomotionAnimInstance::GetN_TurnIP_R90() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.N_TurnIP_R90;
	}
	return FTurnInPlaceAsset();
}

FTurnInPlaceAsset UQGroundLocomotionAnimInstance::GetN_TurnIP_L180() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.N_TurnIP_L180;
	}
	return FTurnInPlaceAsset();
}

FTurnInPlaceAsset UQGroundLocomotionAnimInstance::GetN_TurnIP_R180() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.N_TurnIP_R180;
	}
	return FTurnInPlaceAsset();
}

FTurnInPlaceAsset UQGroundLocomotionAnimInstance::GetCLF_TurnIP_L90() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.CLF_TurnIP_L90;
	}
	return FTurnInPlaceAsset();
}

FTurnInPlaceAsset UQGroundLocomotionAnimInstance::GetCLF_TurnIP_R90() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.CLF_TurnIP_R90;
	}
	return FTurnInPlaceAsset();
}

FTurnInPlaceAsset UQGroundLocomotionAnimInstance::GetCLF_TurnIP_L180() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.CLF_TurnIP_L180;
	}
	return FTurnInPlaceAsset();
}

FTurnInPlaceAsset UQGroundLocomotionAnimInstance::GetCLF_TurnIP_R180() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->OnGroundLocomotionAinmationData.CLF_TurnIP_R180;
	}
	return FTurnInPlaceAsset();
}


