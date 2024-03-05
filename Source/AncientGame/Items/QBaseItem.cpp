// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/QBaseItem.h"

AQBaseItem::AQBaseItem()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AQBaseItem::BeginPlay()
{
	Super::BeginPlay();
}

void AQBaseItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}




