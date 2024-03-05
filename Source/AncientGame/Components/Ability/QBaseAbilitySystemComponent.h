// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "QBaseAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class ANCIENTGAME_API UQBaseAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
protected:
	class UQCharacterAbilityDataAsset* GetCharacterAbilityDataAsset()const;
	class UQAbilitySystemDataAsset* GetAbilitySystemDataAsset()const;
	virtual void BeginPlay()override;
	
private:
	void GiveDefaultAbilities();
	void ApplyStartupEffects();
	void BindInput();

	bool ApplyGameplayEffectToSelf(TSubclassOf<UGameplayEffect>Effect, FGameplayEffectContextHandle InEffectContext);

	class AQBaseCharacter* Character;

	UPROPERTY(EditAnywhere, Category = "Ability")
	class UQCharacterAbilityDataAsset* DefaultCharacterAbilityDataAsset;

	UPROPERTY(EditAnywhere,Category = "Ability")
	class UQAbilitySystemDataAsset* AbilitySystemDataAsset;

	UFUNCTION()
	void OnActionJumpStart();
	UFUNCTION()
	void OnActionJumpEnd();
	UFUNCTION()
	void OnActionCrouchStart();
	UFUNCTION()
	void OnActionCrouchEnd();
	UFUNCTION()
	void OnActionSprintStart();
	UFUNCTION()
	void OnActionSprintEnd();
	UFUNCTION()
	void OnActionAimStart();
	UFUNCTION()
	void OnActionAimEnd();
	UFUNCTION()
	void OnActionRoll();
	
};
