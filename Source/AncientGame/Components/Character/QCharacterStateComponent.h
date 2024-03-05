// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DataAssets/Item/QItemDataAsset.h"
#include "QCharacterStateComponent.generated.h"


class UQAttributeSetBase;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ANCIENTGAME_API UQCharacterStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UQCharacterStateComponent();

protected:
	virtual void BeginPlay() override;

public:	

	UPROPERTY(BlueprintReadWrite)
	FItemData LeftHand;

	UPROPERTY(Transient)
	UQAttributeSetBase* AttributeSet;

};
