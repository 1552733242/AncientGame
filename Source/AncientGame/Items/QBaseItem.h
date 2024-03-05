// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DataAssets/Item/QItemDataAsset.h"
#include "QBaseItem.generated.h"



UCLASS()
class ANCIENTGAME_API AQBaseItem : public AActor
{
	GENERATED_BODY()

public:
	AQBaseItem();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(BlueprintReadWrite)
	FWorldItemData ItemData;
};
