// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/QBaseItem.h"
#include "QTrophy.generated.h"


class UBoxComponent;

/**
 * 
 */
UCLASS()
class ANCIENTGAME_API AQTrophy : public AQBaseItem
{
	GENERATED_BODY()
	

public:
	AQTrophy();
	UFUNCTION()
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:
	UBoxComponent* TriggerBox;

	UPROPERTY(EditAnywhere)
	TArray<FWorldItemData> Trophys;
};
