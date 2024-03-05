// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/QGA_Crounch.h"
#include "GameFramework/Character.h"
#include "Components/Animation/QMainAnimationSystemComponent.h"
#include "Characters/QBaseCharacter.h"

UQGA_Crounch::UQGA_Crounch()
{
}

bool UQGA_Crounch::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))return false;

	const ACharacter* Character = CastChecked<ACharacter>(ActorInfo->AvatarActor.Get(), ECastCheckedType::NullAllowed);

	return Character->CanCrouch();
}

void UQGA_Crounch::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	AQBaseCharacter* Character = CastChecked<AQBaseCharacter>(ActorInfo->AvatarActor.Get());
	Character->Crouch();
	Character->GetAnimationSystemCompont()->CrouchStartDelegate.Broadcast();
}

void UQGA_Crounch::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	AQBaseCharacter* Character = CastChecked<AQBaseCharacter>(ActorInfo->AvatarActor.Get());
	Character->UnCrouch();
	Character->GetAnimationSystemCompont()->CrouchEndDelegate.Broadcast();
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
