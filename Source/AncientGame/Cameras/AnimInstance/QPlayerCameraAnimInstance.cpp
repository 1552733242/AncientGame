// Fill out your copyright notice in the Description page of Project Settings.


#include "Cameras/AnimInstance/QPlayerCameraAnimInstance.h"

void UQPlayerCameraAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	UpdatePlayerMovementInfo();
}



void UQPlayerCameraAnimInstance::UpdatePlayerMovementInfo()
{
	if (AnimationSystemComponent)
	{
		MovementMainParameters = AnimationSystemComponent->MovementMainParameters;
	}
	if (PlayerController)
	{
		CameraParameters = PlayerController->GetCameraParameters();
	}
}
