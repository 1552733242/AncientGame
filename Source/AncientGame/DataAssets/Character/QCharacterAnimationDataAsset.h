// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "QCharacterAnimationDataAsset.generated.h"

USTRUCT(BlueprintType)
struct FTurnInPlaceAsset
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditDefaultsOnly)
	UAnimSequenceBase* Animation;
	UPROPERTY(EditDefaultsOnly)
	float AnimatedAngle;
	UPROPERTY(EditDefaultsOnly)
	FName SlotName;
	UPROPERTY(EditDefaultsOnly)
	float PlayRate;
	UPROPERTY(EditDefaultsOnly)
	bool ScaleTurnAngle;
};

USTRUCT(BlueprintType)
struct FCharacterBaseLocomotionAnimationData
{

	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditDefaultsOnly, Category = "Config|Speed")
	float AnimatedCrouchSpeed = 150.f;

	UPROPERTY(EditDefaultsOnly, Category = "Config|Speed")
	float AnimatedWalkSpeed = 150.f;

	UPROPERTY(EditDefaultsOnly, Category = "Config|Speed")
	float AnimatedRunSpeed = 350.f;

	UPROPERTY(EditDefaultsOnly, Category = "Config|Speed")
	float AnimatedSprintSpeed = 600.f;

	UPROPERTY(EditDefaultsOnly,Category = "Value")
	float VelocityBlendInterpSpeed = 12.f;

	UPROPERTY(EditDefaultsOnly,Category = "Stance" )
	class UBlendSpace* N_WalkRun_F = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Stance")
	class UBlendSpace* N_WalkRun_B = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Stance")
	class UBlendSpace* N_WalkRun_FL = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Stance")
	class UBlendSpace* N_WalkRun_FR = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Stance")
	class UBlendSpace* N_WalkRun_BL = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Stance")
	class UBlendSpace* N_WalkRun_BR = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Curve")
	class UCurveFloat* DiagonalScaleAmountCurve;

	UPROPERTY(EditDefaultsOnly, Category = "Curve")
	class UCurveFloat* StrideBlend_N_Walk;
	
	UPROPERTY(EditDefaultsOnly, Category = "Curve")
	class UCurveFloat* StrideBlend_N_Run;
	
	UPROPERTY(EditDefaultsOnly, Category = "Curve")
	class UCurveFloat* StrideBlend_C_Walk;

	UPROPERTY(EditDefaultsOnly, Category = "Curve")
	class UCurveVector* YawOffset_FB;

	UPROPERTY(EditDefaultsOnly, Category = "Curve")
	class UCurveVector* YawOffset_LR;
};

USTRUCT(BlueprintType)
struct FCharacterOnGroundLocomotionAinmationData
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditDefaultsOnly, Category = "Turn In Place")
	float TurnCheckMinAngle = 45.f;


	UPROPERTY(EditDefaultsOnly, Category = "Config|Rotate In Place")
	float RotateMinThreshold = -50.f;
	UPROPERTY(EditDefaultsOnly, Category = "Config|Rotate In Place")
	float RotateMaxThreshold = 50.f;

	UPROPERTY(EditDefaultsOnly, Category = "Config|Rotate In Place")
	float AimYawRateMinRange = 90.f;
	UPROPERTY(EditDefaultsOnly, Category = "Config|Rotate In Place")
	float AimYawRateMaxRange = 270.0;

	UPROPERTY(EditDefaultsOnly, Category = "Config|Rotate In Place")
	float MinPlayRate = 1.15f;
	UPROPERTY(EditDefaultsOnly, Category = "Config|Rotate In Place")
	float MaxPlayRate = 3.f;


	UPROPERTY(EditDefaultsOnly, Category = "Config|Turn In Place")
	float Turn180Threshold = 130.f;
	UPROPERTY(EditDefaultsOnly, Category = "Config|Turn In Place")
	float AimYawRateLimit = 50.f;

	UPROPERTY(EditDefaultsOnly, Category = "Config|Turn In Place")
	float MinAngleDelay = 0.75f;
	UPROPERTY(EditDefaultsOnly, Category = "Config|Turn In Place")
	float MaxAngleDelay = 0.f;


	UPROPERTY(EditDefaultsOnly, Category = "Config|FootIK")
	float IK_TraceDistanceAboveFoot = 50.0f;
	UPROPERTY(EditDefaultsOnly, Category = "Config|FootIK")
	float IK_TraceDistanceBelowFoot = 45.0f;
	UPROPERTY(EditDefaultsOnly, Category = "Config|FootIK")
	float FootHeight = 13.5f;


	UPROPERTY(EditDefaultsOnly, Category = "Config|Turn In Place")
	FTurnInPlaceAsset N_TurnIP_L90;
	UPROPERTY(EditDefaultsOnly, Category = "Config|Turn In Place")
	FTurnInPlaceAsset N_TurnIP_R90;
	UPROPERTY(EditDefaultsOnly, Category = "Config|Turn In Place")
	FTurnInPlaceAsset N_TurnIP_L180;
	UPROPERTY(EditDefaultsOnly, Category = "Config|Turn In Place")
	FTurnInPlaceAsset N_TurnIP_R180;
	UPROPERTY(EditDefaultsOnly, Category = "Config|Turn In Place")
	FTurnInPlaceAsset CLF_TurnIP_L90;
	UPROPERTY(EditDefaultsOnly, Category = "Config|Turn In Place")
	FTurnInPlaceAsset CLF_TurnIP_R90;
	UPROPERTY(EditDefaultsOnly, Category = "Config|Turn In Place")
	FTurnInPlaceAsset CLF_TurnIP_L180;
	UPROPERTY(EditDefaultsOnly, Category = "Config|Turn In Place")
	FTurnInPlaceAsset CLF_TurnIP_R180;
};

USTRUCT(BlueprintType)
struct FCharacterMainAinmationData
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditDefaultsOnly, Category = "Sp")
	float InAirLeanInterpSpeed = 4.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Sp")
	float SmoothedAimingRotationInterpSpeed = 10.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Sp")
	float InputYawOffsetInterpSpeed = 8.0;

	UPROPERTY(EditDefaultsOnly, Category = "Curve")
	class UCurveFloat* LandPredictionCurve;

	UPROPERTY(EditDefaultsOnly, Category = "Curve")
	class UCurveFloat* LeanInAirCurve;
};


UCLASS()
class ANCIENTGAME_API UQCharacterAnimationDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly,Category = "BaseLocomotion" )
	FCharacterBaseLocomotionAnimationData BaseLocomotionAnimationData;


	UPROPERTY(EditDefaultsOnly, Category = "OnGroundLocomotion")
	FCharacterOnGroundLocomotionAinmationData OnGroundLocomotionAinmationData;

	UPROPERTY(EditDefaultsOnly, Category = "MainLocomotion")
	FCharacterMainAinmationData CharacterMainAinmationData;
};
