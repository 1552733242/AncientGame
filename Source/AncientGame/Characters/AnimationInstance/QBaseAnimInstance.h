// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Characters/QBaseCharacter.h"
#include "QBaseAnimInstance.generated.h"



enum class ECharacterMovementGait : uint8;
enum class ECharacterMovementState : uint8;
enum class ECharacterMovementRotationMode : uint8;
enum class ECharacterMovementStance : uint8;
enum class ECharacterMovementAction : uint8;
enum class ECharacterViewMode : uint8;
enum class ECharacterOverlayState : uint8;



UCLASS()
class ANCIENTGAME_API UQBaseAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeUpdateAnimation(float DeltaSeconds)override;
	virtual void NativeInitializeAnimation()override;
	virtual bool UpdateCharacterInfo();

protected:
    class UQCharacterAnimationDataAsset* GetCharacterAnimationDataAsset()const;
	
	class UQMainAnimationSystemComponent* OwnAnimationSystemComponent;

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	ECharacterMovementGait GetGait()const;
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	ECharacterMovementState GetState()const;
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	ECharacterMovementRotationMode GetRotationMode()const;
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	ECharacterMovementStance GetStance()const;
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	ECharacterMovementAction GetAction()const;
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	ECharacterViewMode GetViewMode()const;
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	ECharacterOverlayState GetOverlayState()const;

	class AQBaseCharacter* Character;
	UPROPERTY(EditAnywhere, Category = "Animation")
	class UQCharacterAnimationDataAsset* DefaultCharacterAnimDataAsset;
};
