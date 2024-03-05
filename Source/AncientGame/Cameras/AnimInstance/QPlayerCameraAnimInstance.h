// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Components/Animation/QBaseAnimationSystemComponent.h"
#include "Controllers/QBasePlayerController.h"
#include "QPlayerCameraAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ANCIENTGAME_API UQPlayerCameraAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
	friend class AQPlayerCameraManager;

	virtual void NativeUpdateAnimation(float DeltaSeconds)override;
	void UpdatePlayerMovementInfo();

protected:
	UPROPERTY(BlueprintReadOnly)
	FCharacterMovementMainParameters MovementMainParameters;

	UPROPERTY(BlueprintReadOnly)
	FCameraParameters  CameraParameters;
private:
	
	UQBaseAnimationSystemComponent* AnimationSystemComponent;

	class AQBasePlayerController* PlayerController;
};
