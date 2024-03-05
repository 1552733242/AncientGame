// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "QCharacterDataAsset.generated.h"



USTRUCT(BlueprintType)
struct FCharacterMovementSetting 
{
	GENERATED_USTRUCT_BODY();


	UPROPERTY(EditDefaultsOnly)
	float WalkSpeed;
	UPROPERTY(EditDefaultsOnly)
	float RunSpeed;
	UPROPERTY(EditDefaultsOnly)
	float SprintSpeed;
	UPROPERTY(EditDefaultsOnly)
	class UCurveVector* MovementCurve;
	UPROPERTY(EditDefaultsOnly)
	class UCurveFloat* RotationRateCurve;
	bool IsVaild() {
		return MovementCurve && RotationRateCurve;
	}
};
USTRUCT(BlueprintType)
struct FCharacterMovementSettingStance 
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterMovementSetting Standing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterMovementSetting Crouching;
	bool IsVaild() {
		return Standing.IsVaild() && Crouching.IsVaild();
	}
};
USTRUCT(BlueprintType)
struct FCharacterMovementSettingModel : public FTableRowBase
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterMovementSettingStance VelocityDirection;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterMovementSettingStance LookingDirection;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterMovementSettingStance Aiming;
	bool IsVaild() {
		return VelocityDirection.IsVaild() && LookingDirection.IsVaild() && Aiming.IsVaild();
	}
};



UCLASS()
class ANCIENTGAME_API UQCharacterDataAsset : public UDataAsset
{
	GENERATED_BODY()
	

public:
	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	class UQCharacterAnimationDataAsset* CharacterAnimationDataAsset;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	FDataTableRowHandle CharacterMovementSetting;

	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	class UQCharacterAbilityDataAsset* CharacterAbilityDataAsset;
};
