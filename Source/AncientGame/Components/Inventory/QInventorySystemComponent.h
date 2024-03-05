// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DataAssets/Item/QItemDataAsset.h"
#include "QInventorySystemComponent.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemSignature, FItemData, Item);



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ANCIENTGAME_API UQInventorySystemComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UQInventorySystemComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
	void AddItem(FItemData Item);
	
	void AddItem(TArray<FItemData>Items);
	
	void RemoveItem(FItemData Item);

	void RemoveItem(TArray<FItemData>Items);

	TArray<FItemData> FindItemFromName(const FString& Name);
	
	void MoveItem(FItemData Item, UQInventorySystemComponent* Target);
	
	void MoveItem(TArray<FItemData>Items, UQInventorySystemComponent* Target);

	UFUNCTION(BlueprintCallable, DisplayName = "MoveItem")
	void BP_MoveItem(FItemData Item, UQInventorySystemComponent* Target);

	UFUNCTION(BlueprintCallable, DisplayName = "MoveItems")
	void BP_MoveItems(TArray<FItemData> Items, UQInventorySystemComponent* Target);

	UFUNCTION(BlueprintCallable, DisplayName = "AddItem")
	void BP_AddItem(FItemData Item);

	UFUNCTION(BlueprintCallable, DisplayName = "AddItems")
	void BP_AddItems(TArray<FItemData> Items);
	
	UFUNCTION(BlueprintCallable, DisplayName = "RemoveItem")
	void BP_RemoveItem(FItemData Item);

	UFUNCTION(BlueprintCallable, DisplayName = "RemoveItems")
	void BP_RemoveItems(TArray<FItemData> Items);
	
	UFUNCTION(BlueprintCallable)
	TArray<FItemData>GetAllItems();

	UPROPERTY(BlueprintReadWrite)
	int InventorySize;

	FItemSignature ItemAddDelegate;
	FItemSignature ItemRemoveDelegate;
private:
	TArray<FItemData>ItemDataArray;
};
