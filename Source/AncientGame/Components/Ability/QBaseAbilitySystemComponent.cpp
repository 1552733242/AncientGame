// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Ability/QBaseAbilitySystemComponent.h"
#include "Characters/QBaseCharacter.h"
#include "Components/Input/QBaseInputSystemComponent.h"
#include "DataAssets/Character/QCharacterDataAsset.h"
#include "DataAssets/Character/QCharacterAbilityDataAsset.h"
#include "DataAssets/AbilitySystem/QAbilitySystemDataAsset.h"
#include "Abilities/GameplayAbility.h"

UQCharacterAbilityDataAsset* UQBaseAbilitySystemComponent::GetCharacterAbilityDataAsset() const
{
	if (UQCharacterDataAsset* CharacterData = Character->GetCharacterData())
	{
		return CharacterData->CharacterAbilityDataAsset;
	}
	return DefaultCharacterAbilityDataAsset;
}

UQAbilitySystemDataAsset* UQBaseAbilitySystemComponent::GetAbilitySystemDataAsset() const
{
	return AbilitySystemDataAsset;
}

void UQBaseAbilitySystemComponent::BeginPlay()
{
	Super::BeginPlay();
	Character = Cast<AQBaseCharacter>(GetOwner());
	BindInput();
	GiveDefaultAbilities();
	ApplyStartupEffects();
}

void UQBaseAbilitySystemComponent::GiveDefaultAbilities()
{
	if (Character->HasAuthority()) {
		if (UQCharacterAbilityDataAsset* Data = GetCharacterAbilityDataAsset())
		{
			for (TSubclassOf<UGameplayAbility>DefaultAbility : Data->Abilities) {
				GiveAbility(FGameplayAbilitySpec(DefaultAbility));
			}
		}
	}
}

void UQBaseAbilitySystemComponent::ApplyStartupEffects()
{
	if (Character->HasAuthority()) {
		if (UQCharacterAbilityDataAsset* Data = GetCharacterAbilityDataAsset())
		{
			FGameplayEffectContextHandle EffectContext = MakeEffectContext();
			EffectContext.AddSourceObject(this);
			for (auto DefaultEffect : Data->Effects) {
				ApplyGameplayEffectToSelf(DefaultEffect, EffectContext);
			}
		}
	}
}

void UQBaseAbilitySystemComponent::BindInput()
{
	UQBaseInputSystemComponent* InputSystemComponent = Character->GetInputSystemComponent();

	if (InputSystemComponent)
	{
		InputSystemComponent->OnJumpStart.AddDynamic(this, &ThisClass::OnActionJumpStart);
		InputSystemComponent->OnJumpEnd.AddDynamic(this, &ThisClass::OnActionJumpEnd);

		InputSystemComponent->OnCrouchStart.AddDynamic(this, &ThisClass::OnActionCrouchStart);
		InputSystemComponent->OnCrouchEnd.AddDynamic(this, &ThisClass::OnActionCrouchEnd);

		InputSystemComponent->OnSprintStart.AddDynamic(this, &ThisClass::OnActionSprintStart);
		InputSystemComponent->OnSprintEnd.AddDynamic(this, &ThisClass::OnActionSprintEnd);

		InputSystemComponent->OnAimStart.AddDynamic(this, &ThisClass::OnActionAimStart);
		InputSystemComponent->OnAimEnd.AddDynamic(this, &ThisClass::OnActionAimEnd);

		InputSystemComponent->OnRoll.AddDynamic(this, &ThisClass::OnActionRoll);
	}
}

bool UQBaseAbilitySystemComponent::ApplyGameplayEffectToSelf(TSubclassOf<UGameplayEffect> Effect, FGameplayEffectContextHandle InEffectContext)
{
	if (!Effect.Get())return false;

	FGameplayEffectSpecHandle SpecHandle = MakeOutgoingSpec(Effect, 1, InEffectContext);
	if (SpecHandle.IsValid()) {

		FActiveGameplayEffectHandle ActiveHandle = ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());

		return ActiveHandle.WasSuccessfullyApplied();
	}
	return false;
}

void UQBaseAbilitySystemComponent::OnActionJumpStart()
{
	TSubclassOf<UGameplayAbility>Ability = AbilitySystemDataAsset->Jump;
	if (TryActivateAbilityByClass(Ability, true))
	{
		FGameplayAbilitySpec* Spec;
		
		Spec = FindAbilitySpecFromClass(Ability);

		if (Spec->IsActive())
		{
			return;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Jump Active failed"));
}

void UQBaseAbilitySystemComponent::OnActionJumpEnd()
{
	CancelAbilities(&AbilitySystemDataAsset->Jump.GetDefaultObject()->AbilityTags);
}

void UQBaseAbilitySystemComponent::OnActionCrouchStart()
{
	TSubclassOf<UGameplayAbility>Ability = AbilitySystemDataAsset->Crouch;
	if (!TryActivateAbilityByClass(Ability, true))
	{
		UE_LOG(LogTemp, Warning, TEXT("Crouch Active failed"));
	}
	
}

void UQBaseAbilitySystemComponent::OnActionCrouchEnd()
{
	CancelAbilities(&AbilitySystemDataAsset->Crouch.GetDefaultObject()->AbilityTags);
}

void UQBaseAbilitySystemComponent::OnActionSprintStart()
{
	TSubclassOf<UGameplayAbility>Ability = AbilitySystemDataAsset->Sprint;
	if (!TryActivateAbilityByClass(Ability, true))
	{
		UE_LOG(LogTemp, Warning, TEXT("Sprint Active failed"));
	}
}

void UQBaseAbilitySystemComponent::OnActionSprintEnd()
{
	CancelAbilities(&AbilitySystemDataAsset->Sprint.GetDefaultObject()->AbilityTags);
}

void UQBaseAbilitySystemComponent::OnActionAimStart()
{
	TSubclassOf<UGameplayAbility>Ability = AbilitySystemDataAsset->Aim;
	if (!TryActivateAbilityByClass(Ability, true))
	{
		UE_LOG(LogTemp, Warning, TEXT("Aim Active failed"));
	}
}

void UQBaseAbilitySystemComponent::OnActionAimEnd()
{
	CancelAbilities(&AbilitySystemDataAsset->Aim.GetDefaultObject()->AbilityTags);
}

void UQBaseAbilitySystemComponent::OnActionRoll()
{
}
