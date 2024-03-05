// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DataAssets/Item/QItemDataAsset.h"
#include "QItemWidget.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool,FItemDetectionChangeEvent, UUserWidget*,Sender, FItemData, Item);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FItemChangeEvent, UUserWidget*, Sender, FItemData, Item);


UCLASS()
class ANCIENTGAME_API UQItemWidget : public UUserWidget
{
	GENERATED_BODY()
	

public:
	UPROPERTY(EditAnywhere,Category = Events, meta = (IsBindableEvent = "True"))
	FItemChangeEvent OnItemChangeEvent;
	UPROPERTY(EditAnywhere, Category = Events, meta = (IsBindableEvent = "True"))
	FItemDetectionChangeEvent ItemDetectionChangeEvent;
protected:
	UFUNCTION(BlueprintCallable)
	void HandleOnItemChange(const FItemData& Data);
	UFUNCTION(BlueprintCallable)
	bool HandleCanItemChange(const FItemData& Data);
};
