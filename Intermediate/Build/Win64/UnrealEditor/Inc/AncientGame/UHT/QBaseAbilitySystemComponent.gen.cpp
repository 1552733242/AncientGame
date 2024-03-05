// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Ability/QBaseAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQBaseAbilitySystemComponent() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQAbilitySystemDataAsset_NoRegister();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseAbilitySystemComponent();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseAbilitySystemComponent_NoRegister();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQCharacterAbilityDataAsset_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	DEFINE_FUNCTION(UQBaseAbilitySystemComponent::execOnActionRoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionRoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAbilitySystemComponent::execOnActionAimEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionAimEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAbilitySystemComponent::execOnActionAimStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionAimStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAbilitySystemComponent::execOnActionSprintEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionSprintEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAbilitySystemComponent::execOnActionSprintStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionSprintStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAbilitySystemComponent::execOnActionCrouchEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionCrouchEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAbilitySystemComponent::execOnActionCrouchStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionCrouchStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAbilitySystemComponent::execOnActionJumpEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionJumpEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAbilitySystemComponent::execOnActionJumpStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionJumpStart();
		P_NATIVE_END;
	}
	void UQBaseAbilitySystemComponent::StaticRegisterNativesUQBaseAbilitySystemComponent()
	{
		UClass* Class = UQBaseAbilitySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActionAimEnd", &UQBaseAbilitySystemComponent::execOnActionAimEnd },
			{ "OnActionAimStart", &UQBaseAbilitySystemComponent::execOnActionAimStart },
			{ "OnActionCrouchEnd", &UQBaseAbilitySystemComponent::execOnActionCrouchEnd },
			{ "OnActionCrouchStart", &UQBaseAbilitySystemComponent::execOnActionCrouchStart },
			{ "OnActionJumpEnd", &UQBaseAbilitySystemComponent::execOnActionJumpEnd },
			{ "OnActionJumpStart", &UQBaseAbilitySystemComponent::execOnActionJumpStart },
			{ "OnActionRoll", &UQBaseAbilitySystemComponent::execOnActionRoll },
			{ "OnActionSprintEnd", &UQBaseAbilitySystemComponent::execOnActionSprintEnd },
			{ "OnActionSprintStart", &UQBaseAbilitySystemComponent::execOnActionSprintStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Ability/QBaseAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAbilitySystemComponent, nullptr, "OnActionAimEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Ability/QBaseAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAbilitySystemComponent, nullptr, "OnActionAimStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimStart_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Ability/QBaseAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAbilitySystemComponent, nullptr, "OnActionCrouchEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Ability/QBaseAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAbilitySystemComponent, nullptr, "OnActionCrouchStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchStart_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Ability/QBaseAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAbilitySystemComponent, nullptr, "OnActionJumpEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Ability/QBaseAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAbilitySystemComponent, nullptr, "OnActionJumpStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpStart_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionRoll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionRoll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Ability/QBaseAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAbilitySystemComponent, nullptr, "OnActionRoll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionRoll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionRoll_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Ability/QBaseAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAbilitySystemComponent, nullptr, "OnActionSprintEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Ability/QBaseAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAbilitySystemComponent, nullptr, "OnActionSprintStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintStart_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQBaseAbilitySystemComponent);
	UClass* Z_Construct_UClass_UQBaseAbilitySystemComponent_NoRegister()
	{
		return UQBaseAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCharacterAbilityDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultCharacterAbilityDataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimEnd, "OnActionAimEnd" }, // 772018705
		{ &Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionAimStart, "OnActionAimStart" }, // 2068850288
		{ &Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchEnd, "OnActionCrouchEnd" }, // 2612176573
		{ &Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionCrouchStart, "OnActionCrouchStart" }, // 950663559
		{ &Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpEnd, "OnActionJumpEnd" }, // 521508271
		{ &Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionJumpStart, "OnActionJumpStart" }, // 2344316521
		{ &Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionRoll, "OnActionRoll" }, // 728096690
		{ &Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintEnd, "OnActionSprintEnd" }, // 1631794130
		{ &Z_Construct_UFunction_UQBaseAbilitySystemComponent_OnActionSprintStart, "OnActionSprintStart" }, // 219999902
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Components/Ability/QBaseAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Components/Ability/QBaseAbilitySystemComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::NewProp_DefaultCharacterAbilityDataAsset_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Components/Ability/QBaseAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::NewProp_DefaultCharacterAbilityDataAsset = { "DefaultCharacterAbilityDataAsset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseAbilitySystemComponent, DefaultCharacterAbilityDataAsset), Z_Construct_UClass_UQCharacterAbilityDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::NewProp_DefaultCharacterAbilityDataAsset_MetaData), Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::NewProp_DefaultCharacterAbilityDataAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::NewProp_AbilitySystemDataAsset_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Components/Ability/QBaseAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::NewProp_AbilitySystemDataAsset = { "AbilitySystemDataAsset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseAbilitySystemComponent, AbilitySystemDataAsset), Z_Construct_UClass_UQAbilitySystemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::NewProp_AbilitySystemDataAsset_MetaData), Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::NewProp_AbilitySystemDataAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::NewProp_DefaultCharacterAbilityDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::NewProp_AbilitySystemDataAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQBaseAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::ClassParams = {
		&UQBaseAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQBaseAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UQBaseAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQBaseAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQBaseAbilitySystemComponent.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQBaseAbilitySystemComponent>()
	{
		return UQBaseAbilitySystemComponent::StaticClass();
	}
	UQBaseAbilitySystemComponent::UQBaseAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQBaseAbilitySystemComponent);
	UQBaseAbilitySystemComponent::~UQBaseAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQBaseAbilitySystemComponent, UQBaseAbilitySystemComponent::StaticClass, TEXT("UQBaseAbilitySystemComponent"), &Z_Registration_Info_UClass_UQBaseAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQBaseAbilitySystemComponent), 3479546990U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_97132422(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
