// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Inventory/QInventorySystemComponent.h"
#include "DataAssets/Item/QItemDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQInventorySystemComponent() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQInventorySystemComponent();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQInventorySystemComponent_NoRegister();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature_Statics
	{
		struct _Script_AncientGame_eventItemSignature_Parms
		{
			FItemData Item;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AncientGame_eventItemSignature_Parms, Item), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 3861944561
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Inventory/QInventorySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "ItemSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature_Statics::_Script_AncientGame_eventItemSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature_Statics::_Script_AncientGame_eventItemSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_ItemSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FItemSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemSignature, FItemData Item)
{
	struct _Script_AncientGame_eventItemSignature_Parms
	{
		FItemData Item;
	};
	_Script_AncientGame_eventItemSignature_Parms Parms;
	Parms.Item=Item;
	ItemSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UQInventorySystemComponent::execGetAllItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FItemData>*)Z_Param__Result=P_THIS->GetAllItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQInventorySystemComponent::execBP_RemoveItems)
	{
		P_GET_TARRAY(FItemData,Z_Param_Items);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_RemoveItems(Z_Param_Items);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQInventorySystemComponent::execBP_RemoveItem)
	{
		P_GET_STRUCT(FItemData,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_RemoveItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQInventorySystemComponent::execBP_AddItems)
	{
		P_GET_TARRAY(FItemData,Z_Param_Items);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_AddItems(Z_Param_Items);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQInventorySystemComponent::execBP_AddItem)
	{
		P_GET_STRUCT(FItemData,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_AddItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQInventorySystemComponent::execBP_MoveItems)
	{
		P_GET_TARRAY(FItemData,Z_Param_Items);
		P_GET_OBJECT(UQInventorySystemComponent,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_MoveItems(Z_Param_Items,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQInventorySystemComponent::execBP_MoveItem)
	{
		P_GET_STRUCT(FItemData,Z_Param_Item);
		P_GET_OBJECT(UQInventorySystemComponent,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_MoveItem(Z_Param_Item,Z_Param_Target);
		P_NATIVE_END;
	}
	void UQInventorySystemComponent::StaticRegisterNativesUQInventorySystemComponent()
	{
		UClass* Class = UQInventorySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AddItem", &UQInventorySystemComponent::execBP_AddItem },
			{ "BP_AddItems", &UQInventorySystemComponent::execBP_AddItems },
			{ "BP_MoveItem", &UQInventorySystemComponent::execBP_MoveItem },
			{ "BP_MoveItems", &UQInventorySystemComponent::execBP_MoveItems },
			{ "BP_RemoveItem", &UQInventorySystemComponent::execBP_RemoveItem },
			{ "BP_RemoveItems", &UQInventorySystemComponent::execBP_RemoveItems },
			{ "GetAllItems", &UQInventorySystemComponent::execGetAllItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem_Statics
	{
		struct QInventorySystemComponent_eventBP_AddItem_Parms
		{
			FItemData Item;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QInventorySystemComponent_eventBP_AddItem_Parms, Item), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 3861944561
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "AddItem" },
		{ "ModuleRelativePath", "Components/Inventory/QInventorySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQInventorySystemComponent, nullptr, "BP_AddItem", nullptr, nullptr, Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem_Statics::QInventorySystemComponent_eventBP_AddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem_Statics::QInventorySystemComponent_eventBP_AddItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics
	{
		struct QInventorySystemComponent_eventBP_AddItems_Parms
		{
			TArray<FItemData> Items;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 3861944561
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QInventorySystemComponent_eventBP_AddItems_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3861944561
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics::NewProp_Items,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "AddItems" },
		{ "ModuleRelativePath", "Components/Inventory/QInventorySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQInventorySystemComponent, nullptr, "BP_AddItems", nullptr, nullptr, Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics::QInventorySystemComponent_eventBP_AddItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics::QInventorySystemComponent_eventBP_AddItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics
	{
		struct QInventorySystemComponent_eventBP_MoveItem_Parms
		{
			FItemData Item;
			UQInventorySystemComponent* Target;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QInventorySystemComponent_eventBP_MoveItem_Parms, Item), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 3861944561
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QInventorySystemComponent_eventBP_MoveItem_Parms, Target), Z_Construct_UClass_UQInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::NewProp_Target_MetaData), Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::NewProp_Target_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "MoveItem" },
		{ "ModuleRelativePath", "Components/Inventory/QInventorySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQInventorySystemComponent, nullptr, "BP_MoveItem", nullptr, nullptr, Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::QInventorySystemComponent_eventBP_MoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::QInventorySystemComponent_eventBP_MoveItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics
	{
		struct QInventorySystemComponent_eventBP_MoveItems_Parms
		{
			TArray<FItemData> Items;
			UQInventorySystemComponent* Target;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 3861944561
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QInventorySystemComponent_eventBP_MoveItems_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3861944561
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QInventorySystemComponent_eventBP_MoveItems_Parms, Target), Z_Construct_UClass_UQInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::NewProp_Target_MetaData), Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::NewProp_Target_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "MoveItems" },
		{ "ModuleRelativePath", "Components/Inventory/QInventorySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQInventorySystemComponent, nullptr, "BP_MoveItems", nullptr, nullptr, Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::QInventorySystemComponent_eventBP_MoveItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::QInventorySystemComponent_eventBP_MoveItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem_Statics
	{
		struct QInventorySystemComponent_eventBP_RemoveItem_Parms
		{
			FItemData Item;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QInventorySystemComponent_eventBP_RemoveItem_Parms, Item), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 3861944561
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "RemoveItem" },
		{ "ModuleRelativePath", "Components/Inventory/QInventorySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQInventorySystemComponent, nullptr, "BP_RemoveItem", nullptr, nullptr, Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem_Statics::QInventorySystemComponent_eventBP_RemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem_Statics::QInventorySystemComponent_eventBP_RemoveItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics
	{
		struct QInventorySystemComponent_eventBP_RemoveItems_Parms
		{
			TArray<FItemData> Items;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 3861944561
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QInventorySystemComponent_eventBP_RemoveItems_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3861944561
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics::NewProp_Items,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "RemoveItems" },
		{ "ModuleRelativePath", "Components/Inventory/QInventorySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQInventorySystemComponent, nullptr, "BP_RemoveItems", nullptr, nullptr, Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics::QInventorySystemComponent_eventBP_RemoveItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics::QInventorySystemComponent_eventBP_RemoveItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics
	{
		struct QInventorySystemComponent_eventGetAllItems_Parms
		{
			TArray<FItemData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 3861944561
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QInventorySystemComponent_eventGetAllItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3861944561
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Inventory/QInventorySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQInventorySystemComponent, nullptr, "GetAllItems", nullptr, nullptr, Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics::QInventorySystemComponent_eventGetAllItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics::QInventorySystemComponent_eventGetAllItems_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQInventorySystemComponent);
	UClass* Z_Construct_UClass_UQInventorySystemComponent_NoRegister()
	{
		return UQInventorySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQInventorySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQInventorySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQInventorySystemComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UQInventorySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItem, "BP_AddItem" }, // 3792814048
		{ &Z_Construct_UFunction_UQInventorySystemComponent_BP_AddItems, "BP_AddItems" }, // 3883169873
		{ &Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItem, "BP_MoveItem" }, // 2317152329
		{ &Z_Construct_UFunction_UQInventorySystemComponent_BP_MoveItems, "BP_MoveItems" }, // 1483980820
		{ &Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItem, "BP_RemoveItem" }, // 4178773567
		{ &Z_Construct_UFunction_UQInventorySystemComponent_BP_RemoveItems, "BP_RemoveItems" }, // 2006768481
		{ &Z_Construct_UFunction_UQInventorySystemComponent_GetAllItems, "GetAllItems" }, // 4081191292
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQInventorySystemComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQInventorySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/Inventory/QInventorySystemComponent.h" },
		{ "ModuleRelativePath", "Components/Inventory/QInventorySystemComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQInventorySystemComponent_Statics::NewProp_InventorySize_MetaData[] = {
		{ "Category", "QInventorySystemComponent" },
		{ "ModuleRelativePath", "Components/Inventory/QInventorySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQInventorySystemComponent_Statics::NewProp_InventorySize = { "InventorySize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQInventorySystemComponent, InventorySize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQInventorySystemComponent_Statics::NewProp_InventorySize_MetaData), Z_Construct_UClass_UQInventorySystemComponent_Statics::NewProp_InventorySize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQInventorySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQInventorySystemComponent_Statics::NewProp_InventorySize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQInventorySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQInventorySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQInventorySystemComponent_Statics::ClassParams = {
		&UQInventorySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQInventorySystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQInventorySystemComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQInventorySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UQInventorySystemComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQInventorySystemComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQInventorySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UQInventorySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQInventorySystemComponent.OuterSingleton, Z_Construct_UClass_UQInventorySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQInventorySystemComponent.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQInventorySystemComponent>()
	{
		return UQInventorySystemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQInventorySystemComponent);
	UQInventorySystemComponent::~UQInventorySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQInventorySystemComponent, UQInventorySystemComponent::StaticClass, TEXT("UQInventorySystemComponent"), &Z_Registration_Info_UClass_UQInventorySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQInventorySystemComponent), 3322315633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_2093451979(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
