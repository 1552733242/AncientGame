// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Inventory/QInventorySystemComponent.h"
#include "Items/QBaseItem.h"
UQInventorySystemComponent::UQInventorySystemComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}

void UQInventorySystemComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UQInventorySystemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UQInventorySystemComponent::AddItem(FItemData Item)
{
	ItemDataArray.Add(Item);
}

void UQInventorySystemComponent::AddItem(TArray<FItemData> Items)
{
	for (auto item : Items)
	{
		AddItem(item);
	}
}

void UQInventorySystemComponent::RemoveItem(FItemData Item)
{
	ItemDataArray.RemoveSingle(Item);
}

void UQInventorySystemComponent::RemoveItem(TArray<FItemData> Items)
{
	for (auto item : Items)
	{
		RemoveItem(item);
	}
}

TArray<FItemData> UQInventorySystemComponent::FindItemFromName(const FString& Name)
{

	return TArray<FItemData>();
}

void UQInventorySystemComponent::MoveItem(FItemData Item, UQInventorySystemComponent* Target)
{
	RemoveItem(Item);
	Target->AddItem(Item);
}

void UQInventorySystemComponent::MoveItem(TArray<FItemData> Items, UQInventorySystemComponent* Target)
{
	RemoveItem(Items);
	Target->AddItem(Items);
}

void UQInventorySystemComponent::BP_MoveItem(FItemData Item, UQInventorySystemComponent* Target)
{
	MoveItem(Item, Target);
}

void UQInventorySystemComponent::BP_MoveItems(TArray<FItemData> Items, UQInventorySystemComponent* Target)
{
	MoveItem(Items, Target);
}

void UQInventorySystemComponent::BP_AddItem(FItemData Item)
{
	AddItem(Item);
}

void UQInventorySystemComponent::BP_AddItems(TArray<FItemData> Items)
{
	AddItem(Items);
}

void UQInventorySystemComponent::BP_RemoveItem(FItemData Item)
{
	RemoveItem(Item);
}

void UQInventorySystemComponent::BP_RemoveItems(TArray<FItemData> Items)
{
	RemoveItem(Items);
}

TArray<FItemData> UQInventorySystemComponent::GetAllItems()
{
	return ItemDataArray;
}


