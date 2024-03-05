// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/QBaseCharacter.h"
#include "Components/Animation/QMainAnimationSystemComponent.h"
#include "Components/Input/QBaseInputSystemComponent.h"
#include "Components/Ability/QBaseAbilitySystemComponent.h"
#include "Components/Inventory/QInventorySystemComponent.h"
AQBaseCharacter::AQBaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;


	AnimationSystemComponent = CreateDefaultSubobject<UQMainAnimationSystemComponent>("AnimationSystemComponent");
	InputSystemComponent = CreateDefaultSubobject<UQBaseInputSystemComponent>("InputSystemComponent");
	AbilitySystemComponent = CreateDefaultSubobject<UQBaseAbilitySystemComponent>("AbilitySystemComponent");
	Backpack = CreateDefaultSubobject<UQInventorySystemComponent>("Backpack");

	CharacterState = CreateDefaultSubobject<UQCharacterStateComponent>("CharacterState");
}

void AQBaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	MovementModeChangedDelegate.AddDynamic(AnimationSystemComponent, &UQMainAnimationSystemComponent::OnCharacterMovementModeChanged);


}

void AQBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UQMainAnimationSystemComponent* AQBaseCharacter::GetAnimationSystemCompont() const
{
	return AnimationSystemComponent;
}

UQInventorySystemComponent* AQBaseCharacter::GetBackpackComponent() const
{
	return Backpack;
}

UQCharacterStateComponent* AQBaseCharacter::GetCharacterStateComonent() const
{
	return CharacterState;
}

UQCharacterDataAsset* AQBaseCharacter::GetCharacterData() const
{
	return CharacterDate;
}

UQBaseInputSystemComponent* AQBaseCharacter::GetInputSystemComponent() const
{
	return InputSystemComponent;
}


void AQBaseCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	AbilitySystemComponent->InitAbilityActorInfo(this, this);

}

void AQBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputSystemComponent->SetupPlayerInputComponent(Cast<APlayerController>(GetController()), PlayerInputComponent);

	InputSystemComponent->OnMove.AddDynamic(this, &ThisClass::OnActionMove);
	InputSystemComponent->OnLook.AddDynamic(this, &ThisClass::OnActionLook);

}

UAbilitySystemComponent* AQBaseCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}


void AQBaseCharacter::OnActionMove(const FVector2D& Delta)
{
	FRotator Dir = FRotator(0, GetControlRotation().Yaw, 0);
	AddMovementInput(Dir.Quaternion().GetForwardVector(), Delta.X);
	AddMovementInput(Dir.Quaternion().GetRightVector(), Delta.Y);
}

void AQBaseCharacter::OnActionLook(const FVector2D& Delta)
{
	AddControllerYawInput(Delta.X);
	AddControllerPitchInput(Delta.Y);
}

