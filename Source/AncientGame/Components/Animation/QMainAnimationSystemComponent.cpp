// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Animation/QMainAnimationSystemComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
UQMainAnimationSystemComponent::UQMainAnimationSystemComponent()
{
	JumpDelegate.AddDynamic(this, &ThisClass::OnJumped);
	CrouchStartDelegate.AddDynamic(this, &ThisClass::OnCrouchStart);
	CrouchEndDelegate.AddDynamic(this, &ThisClass::OnCrouchEnd);
	SprintStartDelegate.AddDynamic(this, &ThisClass::OnSprintStart);
	SprintEndDelegate.AddDynamic(this, &ThisClass::OnSprintEnd);
	AimStartDelegate.AddDynamic(this, &ThisClass::OnAimStart);
	AimEndDelegate.AddDynamic(this, &ThisClass::OnAimEnd);
}

FVector UQMainAnimationSystemComponent::GetMovementInput() const
{
	if (OwnCharacter)
	{
		return OwnCharacter->GetCharacterMovement()->GetCurrentAcceleration();
	}
	return FVector();
}

void UQMainAnimationSystemComponent::OnCharacterMovementModeChanged(ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	if (Character->GetCharacterMovement()->MovementMode != EMovementMode::MOVE_Falling) 
	{
		SetState(ECharacterMovementState::OnGround);
	}
	else
	{
		SetState(ECharacterMovementState::InAir);
	}
}

void UQMainAnimationSystemComponent::OnJumped()
{
	if (Speed > 100.f)
	{
		InAirRotation = LastVelocityRotation;
	}
	else
	{
		InAirRotation = GetActorRotation();
	}
}

void UQMainAnimationSystemComponent::OnCrouchStart()
{
	SetStance(ECharacterMovementStance::Crouching);
}

void UQMainAnimationSystemComponent::OnCrouchEnd()
{
	SetStance(ECharacterMovementStance::Stance);
}

void UQMainAnimationSystemComponent::OnSprintStart()
{
	SetGait(ECharacterMovementGait::Sprint);
}

void UQMainAnimationSystemComponent::OnSprintEnd()
{
	SetGait(ECharacterMovementGait::Run);
}

void UQMainAnimationSystemComponent::OnAimStart()
{
	SetRotationMode(ECharacterMovementRotationMode::Aiming);
}

void UQMainAnimationSystemComponent::OnAimEnd()
{
	SetRotationMode(ECharacterMovementRotationMode::LookingDirection);
}
