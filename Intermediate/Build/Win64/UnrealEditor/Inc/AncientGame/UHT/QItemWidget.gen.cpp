// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/QItemWidget.h"
#include "DataAssets/Item/QItemDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQItemWidget() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQItemWidget();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQItemWidget_NoRegister();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics
	{
		struct _Script_AncientGame_eventItemDetectionChangeEvent_Parms
		{
			UUserWidget* Sender;
			FItemData Item;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::NewProp_Sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AncientGame_eventItemDetectionChangeEvent_Parms, Sender), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::NewProp_Sender_MetaData), Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::NewProp_Sender_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AncientGame_eventItemDetectionChangeEvent_Parms, Item), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 3861944561
	void Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((_Script_AncientGame_eventItemDetectionChangeEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AncientGame_eventItemDetectionChangeEvent_Parms), &Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::NewProp_Sender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "UI/QItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "ItemDetectionChangeEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::_Script_AncientGame_eventItemDetectionChangeEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::_Script_AncientGame_eventItemDetectionChangeEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
bool FItemDetectionChangeEvent_DelegateWrapper(const FScriptDelegate& ItemDetectionChangeEvent, UUserWidget* Sender, FItemData Item)
{
	struct _Script_AncientGame_eventItemDetectionChangeEvent_Parms
	{
		UUserWidget* Sender;
		FItemData Item;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_AncientGame_eventItemDetectionChangeEvent_Parms()
			: ReturnValue(false)
		{
		}
	};
	_Script_AncientGame_eventItemDetectionChangeEvent_Parms Parms;
	Parms.Sender=Sender;
	Parms.Item=Item;
	ItemDetectionChangeEvent.ProcessDelegate<UObject>(&Parms);
	return !!Parms.ReturnValue;
}
	struct Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics
	{
		struct _Script_AncientGame_eventItemChangeEvent_Parms
		{
			UUserWidget* Sender;
			FItemData Item;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::NewProp_Sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AncientGame_eventItemChangeEvent_Parms, Sender), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::NewProp_Sender_MetaData), Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::NewProp_Sender_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AncientGame_eventItemChangeEvent_Parms, Item), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 3861944561
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::NewProp_Sender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "ItemChangeEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::_Script_AncientGame_eventItemChangeEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::_Script_AncientGame_eventItemChangeEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FItemChangeEvent_DelegateWrapper(const FScriptDelegate& ItemChangeEvent, UUserWidget* Sender, FItemData Item)
{
	struct _Script_AncientGame_eventItemChangeEvent_Parms
	{
		UUserWidget* Sender;
		FItemData Item;
	};
	_Script_AncientGame_eventItemChangeEvent_Parms Parms;
	Parms.Sender=Sender;
	Parms.Item=Item;
	ItemChangeEvent.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UQItemWidget::execHandleCanItemChange)
	{
		P_GET_STRUCT_REF(FItemData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleCanItemChange(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQItemWidget::execHandleOnItemChange)
	{
		P_GET_STRUCT_REF(FItemData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnItemChange(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	void UQItemWidget::StaticRegisterNativesUQItemWidget()
	{
		UClass* Class = UQItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCanItemChange", &UQItemWidget::execHandleCanItemChange },
			{ "HandleOnItemChange", &UQItemWidget::execHandleOnItemChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics
	{
		struct QItemWidget_eventHandleCanItemChange_Parms
		{
			FItemData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QItemWidget_eventHandleCanItemChange_Parms, Data), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::NewProp_Data_MetaData) }; // 3861944561
	void Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QItemWidget_eventHandleCanItemChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QItemWidget_eventHandleCanItemChange_Parms), &Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQItemWidget, nullptr, "HandleCanItemChange", nullptr, nullptr, Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::QItemWidget_eventHandleCanItemChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::QItemWidget_eventHandleCanItemChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQItemWidget_HandleCanItemChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQItemWidget_HandleCanItemChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics
	{
		struct QItemWidget_eventHandleOnItemChange_Parms
		{
			FItemData Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QItemWidget_eventHandleOnItemChange_Parms, Data), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::NewProp_Data_MetaData) }; // 3861944561
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQItemWidget, nullptr, "HandleOnItemChange", nullptr, nullptr, Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::QItemWidget_eventHandleOnItemChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::QItemWidget_eventHandleOnItemChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQItemWidget_HandleOnItemChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQItemWidget_HandleOnItemChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQItemWidget);
	UClass* Z_Construct_UClass_UQItemWidget_NoRegister()
	{
		return UQItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UQItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemChangeEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnItemChangeEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDetectionChangeEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ItemDetectionChangeEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQItemWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UQItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQItemWidget_HandleCanItemChange, "HandleCanItemChange" }, // 2381577653
		{ &Z_Construct_UFunction_UQItemWidget_HandleOnItemChange, "HandleOnItemChange" }, // 3512157679
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQItemWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQItemWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/QItemWidget.h" },
		{ "ModuleRelativePath", "UI/QItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQItemWidget_Statics::NewProp_OnItemChangeEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "UI/QItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UQItemWidget_Statics::NewProp_OnItemChangeEvent = { "OnItemChangeEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQItemWidget, OnItemChangeEvent), Z_Construct_UDelegateFunction_AncientGame_ItemChangeEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQItemWidget_Statics::NewProp_OnItemChangeEvent_MetaData), Z_Construct_UClass_UQItemWidget_Statics::NewProp_OnItemChangeEvent_MetaData) }; // 3250877266
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQItemWidget_Statics::NewProp_ItemDetectionChangeEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "UI/QItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UQItemWidget_Statics::NewProp_ItemDetectionChangeEvent = { "ItemDetectionChangeEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQItemWidget, ItemDetectionChangeEvent), Z_Construct_UDelegateFunction_AncientGame_ItemDetectionChangeEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQItemWidget_Statics::NewProp_ItemDetectionChangeEvent_MetaData), Z_Construct_UClass_UQItemWidget_Statics::NewProp_ItemDetectionChangeEvent_MetaData) }; // 2829093592
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQItemWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQItemWidget_Statics::NewProp_OnItemChangeEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQItemWidget_Statics::NewProp_ItemDetectionChangeEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQItemWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQItemWidget_Statics::ClassParams = {
		&UQItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQItemWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQItemWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UQItemWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQItemWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQItemWidget()
	{
		if (!Z_Registration_Info_UClass_UQItemWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQItemWidget.OuterSingleton, Z_Construct_UClass_UQItemWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQItemWidget.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQItemWidget>()
	{
		return UQItemWidget::StaticClass();
	}
	UQItemWidget::UQItemWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQItemWidget);
	UQItemWidget::~UQItemWidget() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQItemWidget, UQItemWidget::StaticClass, TEXT("UQItemWidget"), &Z_Registration_Info_UClass_UQItemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQItemWidget), 3032086708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_4042695684(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
