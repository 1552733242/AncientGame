// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/QTrophy.h"
#include "Components/BoxComponent.h"
#include "Characters/QBaseCharacter.h"
#include "Components/Input/QBaseInputSystemComponent.h"
AQTrophy::AQTrophy()
{

	TriggerBox = CreateDefaultSubobject<UBoxComponent>("TriggerBox");
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AQTrophy::OnOverlapBegin);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &AQTrophy::OnOverlapEnd);


}

void AQTrophy::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}

void AQTrophy::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}
