// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AnimationInstance/QMainAnimInstance.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "DataAssets/Character/QCharacterAnimationDataAsset.h"
#include "Components/Animation/QMainAnimationSystemComponent.h"


void UQMainAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	if (OwnAnimationSystemComponent)
	{
		OwnAnimationSystemComponent->JumpDelegate.AddDynamic(this,&ThisClass::OnJump);
	}
	
}

void UQMainAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	UpdateLayerValues();
	if (Character)
	{
		if (GetState() == ECharacterMovementState::InAir)
		{
			UpdateInAirValues();
		}
	}
}

void UQMainAnimInstance::UpdateAimingValues()
{
	Super::UpdateAimingValues();
	SmoothedAimingRotation = FMath::RInterpTo(SmoothedAimingRotation, GetControlRotation(), DeltaTimeX, GetSmoothedAimingRotationInterpSpeed());

	FRotator SmoothedAngle = SmoothedAimingRotation - GetActorRotation();
	SmoothedAngle.Normalize();
	SmoothedAimingAngle = { SmoothedAngle.Yaw,SmoothedAngle.Pitch };

	if (GetRotationMode() == ECharacterMovementRotationMode::LookingDirection || GetRotationMode() == ECharacterMovementRotationMode::LookingDirection)
	{
		AimSweepTime = FMath::GetMappedRangeValueClamped(FVector2D(-90, 90), FVector2D(1, 0), AimingAngle.Y);

		SpineRotation = FRotator(0, AimingAngle.X / 4, 0);//Use the Aiming Yaw Angle divided by the number of spine+pelvis bones to get the amount of spine rotation needed to remain facing the camera direction.
	}
	else
	{
		if (bHasMovementInput) 
		{
			FRotator InputDir = GetMovementInput().Rotation();
			FRotator Angle = InputDir - GetActorRotation();
			Angle.Normalize();
			float InputYawTarget = FMath::GetMappedRangeValueClamped(FVector2D(-180.0, 180.0), FVector2D(0.0, 1.0), Angle.Yaw);
			InputYawOffsetTime = FMath::FInterpTo(InputYawOffsetTime, InputYawTarget, DeltaTimeX, GetInputYawOffsetInterpSpeed());
		}
	}
	LeftYawTime = FMath::GetMappedRangeValueClamped(FVector2D(0, 180.0), FVector2D(0.5, 0.0), fabs(SmoothedAimingAngle.X));
	RightYawTime = FMath::GetMappedRangeValueClamped(FVector2D(0, 180.0), FVector2D(0.5, 1.0), fabs(SmoothedAimingAngle.X));
	ForwardYawTime = FMath::GetMappedRangeValueClamped(FVector2D(-180.0, 180.0), FVector2D(0.0, 1.0), SmoothedAimingAngle.X);
}

void UQMainAnimInstance::UpdateInAirValues()
{
	FallSpeed = GetVelocity().Z;

	LandPrediction = CalculateLandPrediction();


	LeanAmount = InterpLeanAmount(LeanAmount, CalculateinAirLeanAmount(), GetInAirLeanInterpSpeed(), DeltaTimeX);
}

void UQMainAnimInstance::UpdateLayerValues()
{
	Enable_AimOffset = FMath::Lerp(1.0, 0.0, GetCurveValue(TEXT("Mask_AimOffset")));

	BasePose_N = GetCurveValue(TEXT("BasePose_N"));
	BasePose_CLF = GetCurveValue(TEXT("BasePose_CLF"));

	Spine_Add = GetCurveValue(TEXT("Layering_Spine_Add"));
	Head_Add = GetCurveValue(TEXT("Layering_Head_Add"));
	Arm_L_Add = GetCurveValue(TEXT("Layering_Arm_L_Add"));
	Arm_R_Add = GetCurveValue(TEXT("Layering_Arm_R_Add"));

	Hand_R = GetCurveValue(TEXT("Layering_Hand_R"));
	Hand_L = GetCurveValue(TEXT("Layering_Hand_L"));

	Enable_HandIK_L = FMath::Lerp(0.0, GetCurveValue(TEXT("Enable_HandIK_L")), GetCurveValue(TEXT("Layering_Arm_L")));
	Enable_HandIK_R = FMath::Lerp(0.0, GetCurveValue(TEXT("Enable_HandIK_R")), GetCurveValue(TEXT("Layering_Arm_R")));

	Arm_L_LS = GetCurveValue(TEXT("Layering_Arm_L_LS"));
	Arm_L_MS = 1 - FMath::Floor(Arm_L_LS);
	Arm_R_LS = GetCurveValue(TEXT("Layering_Arm_R_LS"));
	Arm_R_MS = 1 - FMath::Floor(Arm_R_LS);
}

float UQMainAnimInstance::CalculateLandPrediction()const
{
	if (FallSpeed >= -200.f)
	{
		return 0.0f;
	}

	
	UCapsuleComponent* CharacterCollision = Character->GetCapsuleComponent();

	FHitResult Hit;

	FVector TraceStart = CharacterCollision->GetComponentLocation();

	FVector Velocity = GetVelocity();

	Velocity.Z = FMath::Clamp(Velocity.Z, -4000.f, -200.f);

	float length = FMath::GetMappedRangeValueClamped(FVector2D(0, -4000), FVector2D(50, 2000), FallSpeed);

	FVector TraceEnd = TraceStart + length * Velocity.GetUnsafeNormal();

	TArray<AActor*>IngoreActor = { Character };

	if (UKismetSystemLibrary::CapsuleTraceSingleByProfile(GetWorld(), TraceStart, TraceEnd,
		CharacterCollision->GetUnscaledCapsuleRadius(),
		CharacterCollision->GetUnscaledCapsuleHalfHeight(), TEXT("QCharacter"),
		false, IngoreActor, EDrawDebugTrace::None, Hit, true))
	{
		if (Character->GetCharacterMovement()->IsWalkable(Hit))
		{
			float TempLandPrediction =  GetLandPredictionCurve()->GetFloatValue(Hit.Time);
		
			TempLandPrediction = FMath::Lerp(TempLandPrediction, 0.0, GetCurveValue(TEXT("Mask_LandPrediction")));

			return TempLandPrediction;
		}
	}

	return 0.0f;
}

FLeanAmount UQMainAnimInstance::CalculateinAirLeanAmount() const
{
	FVector Velocity = GetActorRotation().UnrotateVector(GetVelocity());
	Velocity.Z = 0;
	Velocity = Velocity / 350 * GetLeanInAirCurve()->GetFloatValue(FallSpeed);
	return FLeanAmount(Velocity.Y, Velocity.X);
}

FLeanAmount UQMainAnimInstance::InterpLeanAmount(const FLeanAmount& Current, const FLeanAmount& Target, float InterpSpeed, float DeltaTime) const
{
	return FLeanAmount(FMath::FInterpTo(Current.LR,Target.LR,DeltaTime,InterpSpeed), FMath::FInterpTo(Current.BF, Target.BF, DeltaTime, InterpSpeed));
}

void UQMainAnimInstance::OnJump()
{
	bJumped = true;
	JumpPlayRate = FMath::GetMappedRangeValueClamped(FVector2D(0, 600), FVector2D(1.2, 1.5), Speed);
	static FTimerHandle Timer;
	static FTimerDelegate TimerDelegate;
	TimerDelegate.BindLambda([&]() {
		bJumped = false;
		});
	GetWorld()->GetTimerManager().SetTimer(Timer, TimerDelegate, 0.1, false);
}

FVector UQMainAnimInstance::GetMovementInput() const
{
	if (OwnAnimationSystemComponent)
	{
		return OwnAnimationSystemComponent->GetMovementInput();
	}
	return FVector();
}

UCurveFloat* UQMainAnimInstance::GetLandPredictionCurve() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		if (CharacterAnimationAsset->CharacterMainAinmationData.LandPredictionCurve)
		{
			return CharacterAnimationAsset->CharacterMainAinmationData.LandPredictionCurve;
		}
	}
	return nullptr;
}

UCurveFloat* UQMainAnimInstance::GetLeanInAirCurve() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		if (CharacterAnimationAsset->CharacterMainAinmationData.LeanInAirCurve)
		{
			return CharacterAnimationAsset->CharacterMainAinmationData.LeanInAirCurve;
		}
	}
	return nullptr;
}

float UQMainAnimInstance::GetInAirLeanInterpSpeed() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->CharacterMainAinmationData.InAirLeanInterpSpeed;
	}
	return 0.f;
}

float UQMainAnimInstance::GetSmoothedAimingRotationInterpSpeed() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->CharacterMainAinmationData.SmoothedAimingRotationInterpSpeed;
	}
	return 0.f;
}

float UQMainAnimInstance::GetInputYawOffsetInterpSpeed() const
{
	if (UQCharacterAnimationDataAsset* CharacterAnimationAsset = GetCharacterAnimationDataAsset())
	{
		return CharacterAnimationAsset->CharacterMainAinmationData.InputYawOffsetInterpSpeed;
	}
	return 0.f;
}
