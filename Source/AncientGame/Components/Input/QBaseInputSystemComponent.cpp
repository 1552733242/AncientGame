// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Input/QBaseInputSystemComponent.h"

#include "GameFramework/CharacterMovementComponent.h"


UQBaseInputSystemComponent::UQBaseInputSystemComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UQBaseInputSystemComponent::SetupPlayerInputComponent(APlayerController* PlayerController, UInputComponent* PlayerInputComponent)
{
	if (PlayerController)
	{
		EnhancedInputLocalPlayerSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		if (EnhancedInputLocalPlayerSubsystem)
		{
			AddNewInputContext(PlayerController, IMBase);
		}
	}
	BindAction(PlayerInputComponent);
}


void UQBaseInputSystemComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UQBaseInputSystemComponent::BindAction(UInputComponent* PlayerInputComponent)
{
	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	check(EnhancedInputComponent);

	if (EnhancedInputComponent) {
		if(Move)
		{
			EnhancedInputComponent->BindAction(Move, ETriggerEvent::Triggered, this, &ThisClass::OnMoveActive);
		}
		if (Look)
		{
			EnhancedInputComponent->BindAction(Look, ETriggerEvent::Triggered, this, &ThisClass::OnLookActive);
		}
		if (Jump)
		{
			EnhancedInputComponent->BindAction(Jump, ETriggerEvent::Started, this, &ThisClass::OnJumpStartActive);
			EnhancedInputComponent->BindAction(Jump, ETriggerEvent::Completed, this, &ThisClass::OnJumpEndActive);
		}
		if (Crouch)
		{
			EnhancedInputComponent->BindAction(Crouch, ETriggerEvent::Started, this, &ThisClass::OnCrouchStartActive);
			EnhancedInputComponent->BindAction(Crouch, ETriggerEvent::Completed, this, &ThisClass::OnCrouchEndActive);
		}
		if (Sprint)
		{
			EnhancedInputComponent->BindAction(Sprint, ETriggerEvent::Started, this, &ThisClass::OnSprintStartActive);
			EnhancedInputComponent->BindAction(Sprint, ETriggerEvent::Completed, this, &ThisClass::OnSprintEndActive);
		}
		if (Aim)
		{
			EnhancedInputComponent->BindAction(Aim, ETriggerEvent::Started, this, &ThisClass::OnAimStartActive);
			EnhancedInputComponent->BindAction(Aim, ETriggerEvent::Completed, this, &ThisClass::OnAimEndActive);
		}
		if (Roll)
		{
			EnhancedInputComponent->BindAction(Roll, ETriggerEvent::Completed, this, &ThisClass::OnRollActive);
		}
		if (Interaction)
		{
			EnhancedInputComponent->BindAction(Interaction, ETriggerEvent::Completed, this, &ThisClass::OnInteractionActive);
		}
	}
	

}

void UQBaseInputSystemComponent::AddNewInputContext(APlayerController* PlayerController,  UInputMappingContext* Context)
{
	if (PlayerController)
	{
		EnhancedInputLocalPlayerSubsystem->AddMappingContext(Context, ++ContextIndex);
	}
}

void UQBaseInputSystemComponent::RemoveInputContext(UInputMappingContext* Context)
{
	EnhancedInputLocalPlayerSubsystem->RemoveMappingContext(Context);
	--ContextIndex;
}

void UQBaseInputSystemComponent::OnMoveActive(const FInputActionValue& Value)
{
	OnMove.Broadcast(Value.Get<FVector2D>());
}

void UQBaseInputSystemComponent::OnLookActive(const FInputActionValue& Value)
{
	OnLook.Broadcast(Value.Get<FVector2D>());
}

void UQBaseInputSystemComponent::OnJumpStartActive()
{
	OnJumpStart.Broadcast();
}

void UQBaseInputSystemComponent::OnJumpEndActive()
{
	OnJumpEnd.Broadcast();
}

void UQBaseInputSystemComponent::OnCrouchStartActive()
{
	OnCrouchStart.Broadcast();
}

void UQBaseInputSystemComponent::OnCrouchEndActive()
{
	OnCrouchEnd.Broadcast();
}

void UQBaseInputSystemComponent::OnSprintStartActive()
{
	OnSprintStart.Broadcast();
}

void UQBaseInputSystemComponent::OnSprintEndActive()
{
	OnSprintEnd.Broadcast();
}

void UQBaseInputSystemComponent::OnAimStartActive()
{
	OnAimStart.Broadcast();
}

void UQBaseInputSystemComponent::OnAimEndActive()
{
	OnAimEnd.Broadcast();
}

void UQBaseInputSystemComponent::OnRollActive()
{
	OnRoll.Broadcast();
}

void UQBaseInputSystemComponent::OnInteractionActive()
{
	OnInteraction.Broadcast();
}
