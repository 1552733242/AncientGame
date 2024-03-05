// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h"
#include "QMainAnimInstance.generated.h"






UCLASS()
class ANCIENTGAME_API UQMainAnimInstance : public UQGroundLocomotionAnimInstance
{
	GENERATED_BODY()
	

public:
	virtual void NativeInitializeAnimation()override;

	virtual void NativeUpdateAnimation(float DeltaSeconds)override;

	virtual void UpdateAimingValues() override;


	void UpdateInAirValues();

	void UpdateLayerValues();

protected:
	
	UPROPERTY(BlueprintReadWrite)
	bool bJumped;

	UPROPERTY(BlueprintReadWrite)
	float JumpPlayRate;

	UPROPERTY(BlueprintReadOnly)
	float FallSpeed;

	UPROPERTY(BlueprintReadOnly)
	float LandPrediction;
	
	UPROPERTY(BlueprintReadOnly)
	float AimSweepTime;//垂直瞄准角度归一化结果

	UPROPERTY(BlueprintReadOnly)
	FRotator SpineRotation;//盆骨旋转？

	UPROPERTY(BlueprintReadOnly)
	float InputYawOffsetTime;//速度方向归一化结果(经插值)

	UPROPERTY(BlueprintReadOnly)
	float LeftYawTime;

	UPROPERTY(BlueprintReadOnly)
	float RightYawTime;

	UPROPERTY(BlueprintReadOnly)
	float ForwardYawTime;

	UPROPERTY(BlueprintReadOnly)
	FVector2D SmoothedAimingAngle;

	FRotator SmoothedAimingRotation;

	FVector GetMovementInput()const;

protected:
	UPROPERTY(BlueprintReadWrite)
	float Enable_AimOffset;
	UPROPERTY(BlueprintReadWrite)
	float BasePose_N = 1.f;
	UPROPERTY(BlueprintReadWrite)
	float BasePose_CLF;
	UPROPERTY(BlueprintReadWrite)
	float Arm_L;
	UPROPERTY(BlueprintReadWrite)
	float Arm_L_Add;
	UPROPERTY(BlueprintReadWrite)
	float Arm_L_LS;
	UPROPERTY(BlueprintReadWrite)
	float Arm_L_MS;
	UPROPERTY(BlueprintReadWrite)
	float Arm_R;
	UPROPERTY(BlueprintReadWrite)
	float Arm_R_Add;
	UPROPERTY(BlueprintReadWrite)
	float Arm_R_LS;
	UPROPERTY(BlueprintReadWrite)
	float Arm_R_MS;
	UPROPERTY(BlueprintReadWrite)
	float Hand_L;
	UPROPERTY(BlueprintReadWrite)
	float Hand_R;
	UPROPERTY(BlueprintReadWrite)
	float Legs;
	UPROPERTY(BlueprintReadWrite)
	float Legs_Add;
	UPROPERTY(BlueprintReadWrite)
	float Pelvis;
	UPROPERTY(BlueprintReadWrite)
	float Pelvis_Add;
	UPROPERTY(BlueprintReadWrite)
	float Spine;
	UPROPERTY(BlueprintReadWrite)
	float Spine_Add;
	UPROPERTY(BlueprintReadWrite)
	float Head;
	UPROPERTY(BlueprintReadWrite)
	float Head_Add;
	UPROPERTY(BlueprintReadWrite)
	float Enable_HandIK_L;
	UPROPERTY(BlueprintReadWrite)
	float Enable_HandIK_R;
private:
	UFUNCTION()
	void OnJump();

	UCurveFloat* GetLandPredictionCurve()const;
	UCurveFloat* GetLeanInAirCurve()const;
	float GetInAirLeanInterpSpeed()const;
	float GetSmoothedAimingRotationInterpSpeed()const;
	float GetInputYawOffsetInterpSpeed()const;

	float CalculateLandPrediction()const;
	FLeanAmount CalculateinAirLeanAmount()const;
	FLeanAmount InterpLeanAmount(const FLeanAmount& Current, const FLeanAmount& Target, float InterpSpeed, float DeltaTime)const;

};
