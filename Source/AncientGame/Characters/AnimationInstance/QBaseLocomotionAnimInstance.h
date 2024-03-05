// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/AnimationInstance/QBaseAnimInstance.h"
#include "QBaseLocomotionAnimInstance.generated.h"


enum class EMovementDirection : uint8;
enum class EHipsDirection : uint8;


USTRUCT(BlueprintType)
struct FLeanAmount
{
	GENERATED_USTRUCT_BODY()

	FLeanAmount() = default;
	FLeanAmount(float InLR, float InBF) :LR(InLR), BF(InBF) {}
	FLeanAmount(double InLR, double InBF) :LR(InLR), BF(InBF) {}

	UPROPERTY(BlueprintReadWrite)
	float LR;
	UPROPERTY(BlueprintReadWrite)
	float BF;
};
USTRUCT(BlueprintType)
struct FYaw
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite)
	float F;
	UPROPERTY(BlueprintReadWrite)
	float B;
	UPROPERTY(BlueprintReadWrite)
	float L;
	UPROPERTY(BlueprintReadWrite)
	float R;
};//记录角色偏航角，用于更新曲线
USTRUCT(BlueprintType)
struct FVelocityBlend
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	float F;
	UPROPERTY(BlueprintReadWrite)
	float B;
	UPROPERTY(BlueprintReadWrite)
	float L;
	UPROPERTY(BlueprintReadWrite)
	float R;
	
};
UENUM(BlueprintType)
enum class EMovementDirection : uint8
{
	Forward		UMETA(DisplayName = "Forward"),
	Right		UMETA(DisplayName = "Right"),
	Left		UMETA(DisplayName = "Left"),
	Backward	UMETA(DisplayName = "Backward"),
};
UENUM(BlueprintType)
enum class EHipsDirection : uint8
{
	F		UMETA(DisplayName = "F"),
	B		UMETA(DisplayName = "B"),
	RF		UMETA(DisplayName = "RF"),
	RB		UMETA(DisplayName = "RB"),
	LF		UMETA(DisplayName = "LF"),
	LB		UMETA(DisplayName = "LB")
};

UCLASS()
class ANCIENTGAME_API UQBaseLocomotionAnimInstance : public UQBaseAnimInstance
{
	GENERATED_BODY()
	
public:

	virtual void NativeUpdateAnimation(float DeltaSeconds)override;
	virtual void NativeInitializeAnimation()override;
	virtual bool UpdateCharacterInfo()override;

protected:
	UPROPERTY(BlueprintReadOnly)
	float StrideBlend;

	UPROPERTY(BlueprintReadOnly)
	float WalkRunBlend;

	UPROPERTY(BlueprintReadOnly)
	float StandingPlayRate = 1.f;
	
	UPROPERTY(BlueprintReadOnly)
	float CrouchingPlayRate = 1.0f;

	UPROPERTY(BlueprintReadOnly)
	FVector RelativeAccelerationAmount;

	UPROPERTY(BlueprintReadOnly)
	FLeanAmount LeanAmount;

	UPROPERTY(BlueprintReadOnly)
	FYaw Yaw;

	UPROPERTY(BlueprintReadOnly)
	float DiagonalScaleAmount; //用于FOOT_IK的对角线缩放

	UPROPERTY(BlueprintReadOnly)
	FVelocityBlend VelocityBlend;

	UPROPERTY(BlueprintReadOnly)
	EMovementDirection MovementDirection;

	UPROPERTY(BlueprintReadWrite)
	EHipsDirection HipsDirection;

	UPROPERTY(BlueprintReadOnly)
	float Speed;

	UPROPERTY(BlueprintReadWrite)
	bool bPivot;
	
	float DeltaTimeX;
	//Character Values;
	//float MovementInputAmount;
	FVector Acceleration;

	void UpdateMovementValues();
	FVelocityBlend CalculateVelocityBlend();
	float CalculateDiagonalScaleAmount();
	FVector CalculateRelativeAccelerationAmount();
	float CalculateWalkRunBlend();
	float CalculateStrideBlend();
	float CalculateStandingPlayRate();
	float CalculateCrouchingPlayRate();

	void UpdateRotationValues();
	EMovementDirection CalculateMovementDirection();
	EMovementDirection CalculateQuadrant(EMovementDirection Current, 
		float FRThreshold,
		float FLThreshold,
		float BRThreshold,
		float BLThreshold, float Buffer, float Angle);

	float GetSpeed()const;
	FVector GetVelocity()const;
	FRotator GetActorRotation()const;
	FRotator GetControlRotation()const;
	FVector GetAcceleration()const;


	FVelocityBlend InterpVelocityBlend(const FVelocityBlend& Current, const FVelocityBlend& Target, float InterpSpeed, float DeltaTime);
	FLeanAmount InterpLeanAmount(const FLeanAmount& Current, FLeanAmount& Target, float InterpSpeed, float DeltaTime);
	bool AngleInRange(float Angle, float MinAngle, float MaxAngle, float Buffer, bool IncreaseBuffer);

	//Common
	float GetAnimCurveClamped(FName name, float Bias, float ClampMin, float ClampMax);


	UCurveFloat* GetStrideBlend_N_WalkCurve()const;
	UCurveFloat* GetStrideBlend_N_RunCurve()const;
	UCurveFloat* GetStrideBlend_C_WalkCurve()const;
	
	UCurveFloat* GetDiagonalScaleAmountCurve()const;

	UCurveVector* GetYawOffset_FBCurve()const;
	UCurveVector* GetYawOffset_LRCurve()const;

	float GetVelocityBlendInterpSpeed()const;
	float GetAnimatedCrouchSpeed()const;
	float GetAnimatedWalkSpeed()const;
	float GetAnimatedRunSpeed()const;
	float GetAnimatedSprintSpeed()const;

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	UBlendSpace* GetN_WalkRun_F()const;
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	UBlendSpace* GetN_WalkRun_FL()const;
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	UBlendSpace* GetN_WalkRun_FR()const;
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	UBlendSpace* GetN_WalkRun_B()const;
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	UBlendSpace* GetN_WalkRun_BL()const;
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	UBlendSpace* GetN_WalkRun_BR()const;
};
