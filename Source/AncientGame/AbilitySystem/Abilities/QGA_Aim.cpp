// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/QGA_Aim.h"
#include "Characters/QBaseCharacter.h"
#include "Components/Animation/QMainAnimationSystemComponent.h"

void UQGA_Aim::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	if (HasAuthorityOrPredictionKey(ActorInfo, &ActivationInfo))
	{
		if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
		{
			return;
		}
		Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

		AQBaseCharacter* Character = CastChecked<AQBaseCharacter>(ActorInfo->AvatarActor.Get());
		Character->GetAnimationSystemCompont()->AimStartDelegate.Broadcast();
	}
}

void UQGA_Aim::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	AQBaseCharacter* Character = CastChecked<AQBaseCharacter>(ActorInfo->AvatarActor.Get());
	Character->GetAnimationSystemCompont()->AimEndDelegate.Broadcast();

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
