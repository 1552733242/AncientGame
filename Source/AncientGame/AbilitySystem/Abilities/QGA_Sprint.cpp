// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/QGA_Sprint.h"
#include "Characters/QBaseCharacter.h"
#include "Components/Animation/QMainAnimationSystemComponent.h"

void UQGA_Sprint::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	if (HasAuthorityOrPredictionKey(ActorInfo, &ActivationInfo))
	{
		if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
		{
			return;
		}
		Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

		AQBaseCharacter* Character = CastChecked<AQBaseCharacter>(ActorInfo->AvatarActor.Get());
		Character->GetAnimationSystemCompont()->SprintStartDelegate.Broadcast();
	}
}

void UQGA_Sprint::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	AQBaseCharacter* Character = CastChecked<AQBaseCharacter>(ActorInfo->AvatarActor.Get());
	Character->GetAnimationSystemCompont()->SprintEndDelegate.Broadcast();
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
