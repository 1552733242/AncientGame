// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "QBaseCharacter.generated.h"


class UQMainAnimationSystemComponent;
class UQBaseInputSystemComponent;
class UQBaseAbilitySystemComponent;
class UQInventorySystemComponent;
class UQCharacterDataAsset;
class UQCharacterStateComponent;

UCLASS()
class ANCIENTGAME_API AQBaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AQBaseCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	virtual UAbilitySystemComponent* GetAbilitySystemComponent()const  override;
	
	UFUNCTION(BlueprintCallable)
	UQBaseInputSystemComponent* GetInputSystemComponent()const;
	
	UFUNCTION(BlueprintCallable)
	UQMainAnimationSystemComponent* GetAnimationSystemCompont()const;

	UFUNCTION(BlueprintCallable)
	UQInventorySystemComponent* GetBackpackComponent()const;

	UFUNCTION(BlueprintCallable)
	UQCharacterStateComponent* GetCharacterStateComonent()const;

	UQCharacterDataAsset* GetCharacterData()const;

protected:

	virtual void PossessedBy(AController* NewController)override;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	UQMainAnimationSystemComponent* AnimationSystemComponent;
	
	UPROPERTY(EditDefaultsOnly)
	UQBaseInputSystemComponent* InputSystemComponent;

	UPROPERTY(EditDefaultsOnly)
	UQBaseAbilitySystemComponent* AbilitySystemComponent;
	
	UPROPERTY(EditDefaultsOnly)
	UQInventorySystemComponent* Backpack;

	UPROPERTY(EditDefaultsOnly)
	UQCharacterStateComponent* CharacterState;

	UPROPERTY(EditDefaultsOnly)
	UQCharacterDataAsset* CharacterDate;

private:
	UFUNCTION()
	void OnActionMove(const FVector2D& Delta);
	UFUNCTION()
	void OnActionLook(const FVector2D& Delta);
	
};
