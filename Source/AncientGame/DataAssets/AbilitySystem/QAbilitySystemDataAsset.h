// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Abilities/GameplayAbility.h"
#include "QAbilitySystemDataAsset.generated.h"




UCLASS()
class ANCIENTGAME_API UQAbilitySystemDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayAbility> Jump;
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayAbility> Crouch;
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayAbility> Sprint;
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayAbility> Aim;
};
