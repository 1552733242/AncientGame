// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h"
#include "QGroundLocomotionAnimInstance.generated.h"


enum class EGroundedEntryState : uint8;

USTRUCT(BlueprintType)
struct FDynamicMontageParams
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite)
	UAnimSequenceBase* Animation;
	UPROPERTY(BlueprintReadWrite)
	float BlendInTime;
	UPROPERTY(BlueprintReadWrite)
	float BlendOutTime;
	UPROPERTY(BlueprintReadWrite)
	float PlayRate;
	UPROPERTY(BlueprintReadWrite)
	float StartTime;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayTransitionSignature, const FDynamicMontageParams&, Parameters);


UCLASS()
class ANCIENTGAME_API UQGroundLocomotionAnimInstance : public UQBaseLocomotionAnimInstance
{
	GENERATED_BODY()



public:
	virtual void NativeUpdateAnimation(float DeltaSeconds)override;
	virtual void NativeInitializeAnimation()override;


protected:
	virtual bool UpdateCharacterInfo()override;

	virtual void UpdateAimingValues();

	void UpdateFootIK();

	void SetFootOffsets(const FName& EnableFootIKCurve, const FName& IKFootBone,
		const FName& RootBone, FVector& CurrentLocationTarget,
		FVector& CurrentLocationOffset, FRotator& CurrentRotationOffset);

	void SetPelvisIKOffset(const FVector& FootOffset_L_Target, const FVector& FootOffset_R_Target);

	void SetFootLocking(const FName& EnableFootIKCurve, const FName& FootLockCurve,
		const FName& IKFootBone, float& CurrentFootLockAlpha,
		FVector& CurrentFootLockLocation, FRotator& CurrentFootLockRotation);

	void SetFootLockOffsets(FVector& LocalLocation, FRotator& LocalRotation);

	void ResetIKOffsets();

	bool ShouldMoveCheck();

	bool CanRotateInPlace();
	void RotateinPlaceWithCheck();

	bool  CanTurnInPlace();
	void TurnInPlaceCheck();
	void TurninPlace(const FRotator& TargetRotation, float PlayRateScale, float StartTime, bool OverrideCurrent);

	bool bIsMoving;

	FVector2D AimingAngle;

	float ElapsedDelayTime;

	float AimYawRate;

	UPROPERTY(BlueprintReadOnly)
	bool bHasMovementInput;

	UPROPERTY(BlueprintReadOnly)
	float RotationScale;

	UPROPERTY(BlueprintReadOnly)
	float RotateRate;

	UPROPERTY(BlueprintReadOnly)
	bool bShouldMove;

	UPROPERTY(BlueprintReadOnly)
	bool bRotate_L;

	UPROPERTY(BlueprintReadOnly)
	bool bRotate_R;

	UPROPERTY(BlueprintReadWrite)
	EGroundedEntryState GroundEntyState;

	UPROPERTY(BlueprintReadOnly)
	FVector FootLock_L_Location;
	
	UPROPERTY(BlueprintReadOnly)
	FRotator FootLock_L_Rotation;
	
	UPROPERTY(BlueprintReadOnly)
	float FootLock_L_Alpha;

	UPROPERTY(BlueprintReadOnly)
	FVector FootLock_R_Location;

	UPROPERTY(BlueprintReadOnly)
	FRotator FootLock_R_Rotation;

	UPROPERTY(BlueprintReadOnly)
	float FootLock_R_Alpha;

	UPROPERTY(BlueprintReadOnly)
	FVector FootOffset_L_Location;

	UPROPERTY(BlueprintReadOnly)
	FRotator FootOffset_L_Rotation;

	UPROPERTY(BlueprintReadOnly)
	FVector FootOffset_R_Location;

	UPROPERTY(BlueprintReadOnly)
	FRotator FootOffset_R_Rotation;

	UPROPERTY(BlueprintReadOnly)
	FVector PelvisOffset;	

	UPROPERTY(BlueprintReadOnly)
	float PelvisAlpha;

	UPROPERTY(BlueprintCallable)
	FPlayTransitionSignature PlayTransition;

	UFUNCTION()
	void OnPlayTransition(const FDynamicMontageParams& Parameters);

	bool IsMoving()const;
	bool HasMovementInput()const;

	float GetRotateMinThreshold()const;
	float GetRotateMaxThreshold()const;
	float GetAimYawRateMinRange()const;
	float GetAimYawRateMaxRange()const;

	float GetTurnCheckMinAngle()const;
	float GetTurn180Threshold()const;
	float GetAimYawRateLimit()const;
	float GetMinAngleDelay()const;
	float GetMaxAngleDelay()const;

	float GetMinPlayRate()const;
	float GetMaxPlayRate()const;

	float GetIK_TraceDistanceAboveFoot()const;
	float GetIK_TraceDistanceBelowFoot()const;
	float GetFootHeight()const;


	struct FTurnInPlaceAsset GetN_TurnIP_L90()const;
	struct FTurnInPlaceAsset GetN_TurnIP_R90()const;
	struct FTurnInPlaceAsset GetN_TurnIP_L180()const;
	struct FTurnInPlaceAsset GetN_TurnIP_R180()const;
	struct FTurnInPlaceAsset GetCLF_TurnIP_L90()const;
	struct FTurnInPlaceAsset GetCLF_TurnIP_R90()const;
	struct FTurnInPlaceAsset GetCLF_TurnIP_L180()const;
	struct FTurnInPlaceAsset GetCLF_TurnIP_R180()const;

};
