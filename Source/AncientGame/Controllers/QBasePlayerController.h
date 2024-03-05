// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "QBasePlayerController.generated.h"


USTRUCT(BlueprintType)
struct FCameraParameters
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite)
	float ThirdPersonFOV;
	UPROPERTY(BlueprintReadWrite)
	float FirstPersonFOV;
	UPROPERTY(BlueprintReadWrite)
	bool RightShoulder;
};



UCLASS()
class ANCIENTGAME_API AQBasePlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:
	AQBasePlayerController();

	virtual void OnPossess(APawn* aPawn) override;

	FCameraParameters GetCameraParameters() const;

	FCameraParameters CameraParameters;
};
