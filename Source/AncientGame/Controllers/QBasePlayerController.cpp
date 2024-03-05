// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/QBasePlayerController.h"
#include "Cameras/Manager/QPlayerCameraManager.h"
AQBasePlayerController::AQBasePlayerController()
{
	CameraParameters = { 90.f ,90.f ,true };
}

void AQBasePlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
	if (AQPlayerCameraManager* CameraManager = Cast<AQPlayerCameraManager>(PlayerCameraManager))
	{
		CameraManager->OnPossess(aPawn);
	}
}


FCameraParameters AQBasePlayerController::GetCameraParameters() const
{
	return CameraParameters;
}
