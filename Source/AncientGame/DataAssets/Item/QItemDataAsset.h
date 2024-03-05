// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "QItemDataAsset.generated.h"


UENUM(BlueprintType)
enum class EItemType : uint8
{
	Container UMETA(DisplayName = "Container"),//ÈÝÆ÷
	LeftHandWeapon UMETA(DisplayName = "Container"),//×óÊÖÎäÆ÷

};


USTRUCT(BlueprintType)
struct FItemData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ItemID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int UID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Image;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemType ItemType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Arg;

	bool operator==(const FItemData& Other)const 
	{
		return UID == Other.UID;
	}
};

USTRUCT(BlueprintType)
struct FWorldItemData : public FItemData
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool buseSkeletal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMesh* SkeletalMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* StaticMesh;
};



UCLASS()
class ANCIENTGAME_API UQItemDataAsset : public UDataAsset
{
	GENERATED_BODY()
	

	UDataTable* ItemDataTable;
	UDataTable* WorldItemDataTable;
};
