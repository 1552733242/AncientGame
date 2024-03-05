// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Animation/QBaseAnimationSystemComponent.h"
#include "QMainAnimationSystemComponent.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE(FJumpSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCrouchStartSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCrouchEndSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSprintStartSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSprintEndSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAimStartSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAimEndSignature);


UCLASS()
class ANCIENTGAME_API UQMainAnimationSystemComponent : public UQBaseAnimationSystemComponent
{
	GENERATED_BODY()
	
	
public:
	UQMainAnimationSystemComponent();


	
	FVector GetMovementInput()const;

	UFUNCTION()
	void OnCharacterMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);

	UPROPERTY(BlueprintCallable)
	FJumpSignature JumpDelegate;

	UPROPERTY(BlueprintCallable)
	FCrouchStartSignature CrouchStartDelegate;

	UPROPERTY(BlueprintCallable)
	FCrouchEndSignature CrouchEndDelegate;

	UPROPERTY(BlueprintCallable)
	FSprintStartSignature SprintStartDelegate;

	UPROPERTY(BlueprintCallable)
	FSprintEndSignature SprintEndDelegate;

	UPROPERTY(BlueprintCallable)
	FAimStartSignature AimStartDelegate;

	UPROPERTY(BlueprintCallable)
	FAimEndSignature AimEndDelegate;
private:
	UFUNCTION()
	void OnJumped();
	UFUNCTION()
	void OnCrouchStart();
	UFUNCTION()
	void OnCrouchEnd();
	UFUNCTION()
	void OnSprintStart();
	UFUNCTION()
	void OnSprintEnd();
	UFUNCTION()
	void OnAimStart();
	UFUNCTION()
	void OnAimEnd();
};
