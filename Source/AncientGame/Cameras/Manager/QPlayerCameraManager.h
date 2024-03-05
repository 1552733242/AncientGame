// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "QPlayerCameraManager.generated.h"

/**
 * 
 */
UCLASS()
class ANCIENTGAME_API AQPlayerCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()
	
public:
	AQPlayerCameraManager();
	void OnPossess(APawn* aPawn);

protected:
	virtual void UpdateViewTargetInternal(FTViewTarget& OutVT, float DeltaTime)override;
	bool NativeUpdateCamera(AActor* CameraTarget, FVector& NewCameraLocation, FRotator& NewCameraRotation, float& NewCameraFOV);

	void CustomCameraBehavior();

	float GetCameraBehaviorParam(FName CurveName);

	FVector CalculateAxisIndependentLag(const FVector& CurrentLocation, const FVector& TargetLocation, const FRotator& CameraRotation,
		const FVector& LagSpeed);
private:
	UPROPERTY(EditDefaultsOnly)
	USkeletalMeshComponent* Camera;

	class AQBasePlayerController* PlayerController;

	APawn* ControlledPawn;

	FRotator TargerCameraRotation;
	FVector TargetCameraLocation;
	FVector PivotLocation;
	FTransform SmoothedPivotTarget;
};
