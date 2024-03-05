// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DataAssets/Character/QCharacterDataAsset.h"
#include "QBaseAnimationSystemComponent.generated.h"

UENUM(BlueprintType)
enum class ECharacterMovementGait : uint8
{
	Walk	UMETA(DisplayName = "Walk"),
	Run		UMETA(DisplayName = "Run"),
	Sprint	UMETA(DisplayName = "Sprint"),
};
UENUM(BlueprintType)
enum class ECharacterMovementState : uint8
{
	None,
	InAir		UMETA(DisplayName = "InAir"),
	OnGround	UMETA(DisplayName = "OnGround"),
	Mantling	UMETA(DisplayName = "Mantling"),
	Ragdoll		UMETA(DisplayName = "Ragdoll")
};
UENUM(BlueprintType)
enum class ECharacterMovementRotationMode : uint8
{
	VelocityDirection	UMETA(DisplayName = "VelocityDirection"),
	LookingDirection	UMETA(DisplayName = "LookingDirection"),
	Aiming				UMETA(DisplayName = "Aiming")
};
UENUM(BlueprintType)
enum class ECharacterMovementStance : uint8
{
	Stance		UMETA(DisplayName = "Stance"),
	Crouching	UMETA(DisplayName = "Crouching"),
};
UENUM(BlueprintType)
enum class ECharacterMovementAction : uint8
{
	None		UMETA(DisplayName = "None"),
	LowMantle	UMETA(DisplayName = "LowMantle"),
	HighMantle	UMETA(DisplayName = "HighMantle"),
	Rolling		UMETA(DisplayName = "Rolling"),
	GettingUp		UMETA(DisplayName = "GettingUp"),
};
UENUM(BlueprintType)
enum class ECharacterViewMode : uint8
{
	ThirdPerson		UMETA(DisplayName = "ThirdPerson"),
	FirstPerson		UMETA(DisplayName = "FirstPerson"),
};
UENUM(BlueprintType)
enum class ECharacterOverlayState : uint8
{
	Default		UMETA(DisplayName = "Default"),
	Bow 		UMETA(DisplayName = "Bow"),
	Sword		UMETA(DisplayName = "Sword"),
};

UENUM(BlueprintType)
enum class EGroundedEntryState : uint8
{
	None		UMETA(DisplayName = "None"),
	Roll		UMETA(DisplayName = "Roll"),
};

USTRUCT(BlueprintType)
struct FCharacterMovementMainParameters
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite)
	ECharacterMovementState MovementState;
	UPROPERTY(BlueprintReadWrite)
	ECharacterMovementState PrevMovementState;
	UPROPERTY(BlueprintReadWrite)
	ECharacterMovementAction MovementAction;
	UPROPERTY(BlueprintReadWrite)
	ECharacterMovementRotationMode RotationMode;
	UPROPERTY(BlueprintReadWrite)
	ECharacterMovementGait	ActualGait;
	UPROPERTY(BlueprintReadWrite)
	ECharacterMovementStance ActualStance;
	UPROPERTY(BlueprintReadWrite)
	ECharacterViewMode ViewMode;
	UPROPERTY(BlueprintReadWrite)
	ECharacterOverlayState OverlayState;
};

USTRUCT(BlueprintType)
struct FCharacterMovementEssentialValues
{

	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite)
	FVector Velocity;
	UPROPERTY(BlueprintReadWrite)
	FVector Acceleration;
	UPROPERTY(BlueprintReadWrite)
	FVector MovementInput;
	UPROPERTY(BlueprintReadWrite)
	bool IsMoving;
	UPROPERTY(BlueprintReadWrite)
	bool HasMovementInput;
	UPROPERTY(BlueprintReadWrite)
	float Speed;
	UPROPERTY(BlueprintReadWrite)
	float MovementInputAmount;
	UPROPERTY(BlueprintReadWrite)
	FRotator AimingRotation;
	UPROPERTY(BlueprintReadWrite)
	float AimYawRate;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOverlayStateChangeSignature, ECharacterOverlayState, NewOverlayState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnViewModeChangeSignature, ECharacterViewMode, NewViewMode);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovementGaitChangeSignature, ECharacterMovementGait, NewGait);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovementRotationModeChangeSignature, ECharacterMovementRotationMode, NewRotationMode);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovementActionChangeSignature, ECharacterMovementAction, NewAction);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovementStateChangeSignature, ECharacterMovementState, NewState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovementStanceChangeSignature, ECharacterMovementStance, NewSStance);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ANCIENTGAME_API UQBaseAnimationSystemComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UQBaseAnimationSystemComponent();

protected:
	virtual void BeginPlay() override;
public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	void CacheValues();
	void UpdateEssentialValues();

	void UpdateCharacterMovement();
	void UpdateGroundRotation();

	void UpdateInAirRotation();

	void UpdateDynamicMovementSettings(ECharacterMovementGait AllowedGait);

public:
	bool IsMoving()const;
	bool HasMovementInput()const;

	FVector GetVelocity()const;
	FRotator GetActorRotation()const;
	FRotator GetControlRotation()const;
	FVector GetAcceleration()const;
	float GetSpeed()const;
	float GetMovementInputAmount()const;
	float GetAimYawRate()const;

	float AimYawRate;
	float MovementInputAmount;
	float Speed;
	FVector Acceleration;
	bool bIsMoving;
	bool bHasMovementInput;

private:
	ECharacterMovementGait GetAllowedGait();				//获取允许的步态	
	bool CanSprint();

	ECharacterMovementGait GetActualGait(ECharacterMovementGait AllowedGait);

	bool CanUpdateMovingRotation();
	void SmoothCharacterRotation(const FRotator& Target, float TargetInterpSpeed, float ActorInterpSpeed);
	void LimitRotation(float AimYawMin, float AimYawMax, float InterpSpeed);
	float CalcuateGroundRotationRate()const;
	float GetMappedSpeed()const;
	float GetAnimCurveValue(const FName& CurveName)const;

	struct FCharacterMovementSetting GetTargetMovementSettings();
public:
	UFUNCTION(BlueprintCallable)
	void SetGait(ECharacterMovementGait NewGait);
	UFUNCTION(BlueprintCallable)
	void SetState(ECharacterMovementState NewState);
	UFUNCTION(BlueprintCallable)
	void SetRotationMode(ECharacterMovementRotationMode NewRotationMode);
	UFUNCTION(BlueprintCallable)
	void SetStance(ECharacterMovementStance NewStance);
	UFUNCTION(BlueprintCallable)
	void SetAction(ECharacterMovementAction NewAction);
	UFUNCTION(BlueprintCallable)
	void SetViewMode(ECharacterViewMode NewViewMode);
	UFUNCTION(BlueprintCallable)
	void SetOverlayState(ECharacterOverlayState NewOverlayState);
private:
	struct FCharacterMovementSettingModel GetCharacterMovementModel()const;
	void UpdateGait(ECharacterMovementGait NewGait);

	ECharacterMovementGait DesiredGit;
private:
	FRotator TargetRotation;
	FVector PreviousVelocity;
	float PreviousAimYaw;
	FRotator LastMovementInputRotation;
	class UAnimInstance* MainAnimInstacne;


	FCharacterMovementSetting CurrentMovementSetting;
	FCharacterMovementSettingModel CharacterMovementSettingModel;

protected:
	FRotator LastVelocityRotation;
	FRotator InAirRotation;

	ACharacter* OwnCharacter;
public:
	FOnMovementGaitChangeSignature OnMovementGaitChangeDelegate;
	FOnMovementRotationModeChangeSignature OnMovementRotationModeChangeDelegate;
	FOnMovementActionChangeSignature OnMovementActionChangeDelegate;
	FOnMovementStateChangeSignature OnMovementStateChangeDelegate;
	FOnOverlayStateChangeSignature OnOverlayStateChangeDelegate;
	FOnViewModeChangeSignature    OnViewModeChangeDelegate;
	FOnMovementStanceChangeSignature OnMovementStanceChangeDelegate;
	FCharacterMovementMainParameters MovementMainParameters;
};
