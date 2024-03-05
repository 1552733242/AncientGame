// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/QGA_Jump.h"
#include "GameFramework/Character.h"
#include "Components/Animation/QMainAnimationSystemComponent.h"
#include "Characters/QBaseCharacter.h"

UQGA_Jump::UQGA_Jump()
{
    NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    InstancingPolicy = EGameplayAbilityInstancingPolicy::NonInstanced;
}

bool UQGA_Jump::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))return false;

	const ACharacter* Character = CastChecked<ACharacter>(ActorInfo->AvatarActor.Get(), ECastCheckedType::NullAllowed);

	return Character->CanJump();
}

void UQGA_Jump::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	if (HasAuthorityOrPredictionKey(ActorInfo, &ActivationInfo))
	{	
		if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
		{
			return;
		}
		Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

		AQBaseCharacter* Character = CastChecked<AQBaseCharacter>(ActorInfo->AvatarActor.Get());
		Character->Jump();
		Character->GetAnimationSystemCompont()->JumpDelegate.Broadcast();
	}
}

void UQGA_Jump::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	AQBaseCharacter* Character = CastChecked<AQBaseCharacter>(ActorInfo->AvatarActor.Get());
	Character->StopJumping();
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
