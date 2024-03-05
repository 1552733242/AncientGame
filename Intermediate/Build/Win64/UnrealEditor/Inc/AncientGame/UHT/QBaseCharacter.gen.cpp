// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/QBaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQBaseCharacter() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_AQBaseCharacter();
	ANCIENTGAME_API UClass* Z_Construct_UClass_AQBaseCharacter_NoRegister();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseAbilitySystemComponent_NoRegister();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseInputSystemComponent_NoRegister();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQCharacterDataAsset_NoRegister();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQCharacterStateComponent_NoRegister();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQInventorySystemComponent_NoRegister();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQMainAnimationSystemComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	DEFINE_FUNCTION(AQBaseCharacter::execOnActionLook)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionLook(Z_Param_Out_Delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQBaseCharacter::execOnActionMove)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionMove(Z_Param_Out_Delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQBaseCharacter::execGetCharacterStateComonent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQCharacterStateComponent**)Z_Param__Result=P_THIS->GetCharacterStateComonent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQBaseCharacter::execGetBackpackComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQInventorySystemComponent**)Z_Param__Result=P_THIS->GetBackpackComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQBaseCharacter::execGetAnimationSystemCompont)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQMainAnimationSystemComponent**)Z_Param__Result=P_THIS->GetAnimationSystemCompont();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQBaseCharacter::execGetInputSystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQBaseInputSystemComponent**)Z_Param__Result=P_THIS->GetInputSystemComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQBaseCharacter::execGetAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
		P_NATIVE_END;
	}
	void AQBaseCharacter::StaticRegisterNativesAQBaseCharacter()
	{
		UClass* Class = AQBaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAbilitySystemComponent", &AQBaseCharacter::execGetAbilitySystemComponent },
			{ "GetAnimationSystemCompont", &AQBaseCharacter::execGetAnimationSystemCompont },
			{ "GetBackpackComponent", &AQBaseCharacter::execGetBackpackComponent },
			{ "GetCharacterStateComonent", &AQBaseCharacter::execGetCharacterStateComonent },
			{ "GetInputSystemComponent", &AQBaseCharacter::execGetInputSystemComponent },
			{ "OnActionLook", &AQBaseCharacter::execOnActionLook },
			{ "OnActionMove", &AQBaseCharacter::execOnActionMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics
	{
		struct QBaseCharacter_eventGetAbilitySystemComponent_Parms
		{
			UAbilitySystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseCharacter_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/QBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQBaseCharacter, nullptr, "GetAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::QBaseCharacter_eventGetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::QBaseCharacter_eventGetAbilitySystemComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics
	{
		struct QBaseCharacter_eventGetAnimationSystemCompont_Parms
		{
			UQMainAnimationSystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseCharacter_eventGetAnimationSystemCompont_Parms, ReturnValue), Z_Construct_UClass_UQMainAnimationSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/QBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQBaseCharacter, nullptr, "GetAnimationSystemCompont", nullptr, nullptr, Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::QBaseCharacter_eventGetAnimationSystemCompont_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::QBaseCharacter_eventGetAnimationSystemCompont_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics
	{
		struct QBaseCharacter_eventGetBackpackComponent_Parms
		{
			UQInventorySystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseCharacter_eventGetBackpackComponent_Parms, ReturnValue), Z_Construct_UClass_UQInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/QBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQBaseCharacter, nullptr, "GetBackpackComponent", nullptr, nullptr, Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::QBaseCharacter_eventGetBackpackComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::QBaseCharacter_eventGetBackpackComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics
	{
		struct QBaseCharacter_eventGetCharacterStateComonent_Parms
		{
			UQCharacterStateComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseCharacter_eventGetCharacterStateComonent_Parms, ReturnValue), Z_Construct_UClass_UQCharacterStateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/QBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQBaseCharacter, nullptr, "GetCharacterStateComonent", nullptr, nullptr, Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::QBaseCharacter_eventGetCharacterStateComonent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::QBaseCharacter_eventGetCharacterStateComonent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics
	{
		struct QBaseCharacter_eventGetInputSystemComponent_Parms
		{
			UQBaseInputSystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseCharacter_eventGetInputSystemComponent_Parms, ReturnValue), Z_Construct_UClass_UQBaseInputSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/QBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQBaseCharacter, nullptr, "GetInputSystemComponent", nullptr, nullptr, Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::QBaseCharacter_eventGetInputSystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::QBaseCharacter_eventGetInputSystemComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics
	{
		struct QBaseCharacter_eventOnActionLook_Parms
		{
			FVector2D Delta;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseCharacter_eventOnActionLook_Parms, Delta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::NewProp_Delta_MetaData), Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::NewProp_Delta_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/QBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQBaseCharacter, nullptr, "OnActionLook", nullptr, nullptr, Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::QBaseCharacter_eventOnActionLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::QBaseCharacter_eventOnActionLook_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AQBaseCharacter_OnActionLook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQBaseCharacter_OnActionLook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics
	{
		struct QBaseCharacter_eventOnActionMove_Parms
		{
			FVector2D Delta;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseCharacter_eventOnActionMove_Parms, Delta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::NewProp_Delta_MetaData), Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::NewProp_Delta_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/QBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQBaseCharacter, nullptr, "OnActionMove", nullptr, nullptr, Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::QBaseCharacter_eventOnActionMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::QBaseCharacter_eventOnActionMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AQBaseCharacter_OnActionMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQBaseCharacter_OnActionMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQBaseCharacter);
	UClass* Z_Construct_UClass_AQBaseCharacter_NoRegister()
	{
		return AQBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AQBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputSystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Backpack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Backpack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterDate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AQBaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AQBaseCharacter_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 3410950809
		{ &Z_Construct_UFunction_AQBaseCharacter_GetAnimationSystemCompont, "GetAnimationSystemCompont" }, // 3869561021
		{ &Z_Construct_UFunction_AQBaseCharacter_GetBackpackComponent, "GetBackpackComponent" }, // 2756516205
		{ &Z_Construct_UFunction_AQBaseCharacter_GetCharacterStateComonent, "GetCharacterStateComonent" }, // 752079283
		{ &Z_Construct_UFunction_AQBaseCharacter_GetInputSystemComponent, "GetInputSystemComponent" }, // 3321457882
		{ &Z_Construct_UFunction_AQBaseCharacter_OnActionLook, "OnActionLook" }, // 1288150708
		{ &Z_Construct_UFunction_AQBaseCharacter_OnActionMove, "OnActionMove" }, // 773037348
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/QBaseCharacter.h" },
		{ "ModuleRelativePath", "Characters/QBaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_AnimationSystemComponent_MetaData[] = {
		{ "Category", "QBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/QBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_AnimationSystemComponent = { "AnimationSystemComponent", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQBaseCharacter, AnimationSystemComponent), Z_Construct_UClass_UQMainAnimationSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_AnimationSystemComponent_MetaData), Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_AnimationSystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_InputSystemComponent_MetaData[] = {
		{ "Category", "QBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/QBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_InputSystemComponent = { "InputSystemComponent", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQBaseCharacter, InputSystemComponent), Z_Construct_UClass_UQBaseInputSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_InputSystemComponent_MetaData), Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_InputSystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "QBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/QBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQBaseCharacter, AbilitySystemComponent), Z_Construct_UClass_UQBaseAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_Backpack_MetaData[] = {
		{ "Category", "QBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/QBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_Backpack = { "Backpack", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQBaseCharacter, Backpack), Z_Construct_UClass_UQInventorySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_Backpack_MetaData), Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_Backpack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_CharacterState_MetaData[] = {
		{ "Category", "QBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/QBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_CharacterState = { "CharacterState", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQBaseCharacter, CharacterState), Z_Construct_UClass_UQCharacterStateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_CharacterState_MetaData), Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_CharacterState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_CharacterDate_MetaData[] = {
		{ "Category", "QBaseCharacter" },
		{ "ModuleRelativePath", "Characters/QBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_CharacterDate = { "CharacterDate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQBaseCharacter, CharacterDate), Z_Construct_UClass_UQCharacterDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_CharacterDate_MetaData), Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_CharacterDate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQBaseCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_AnimationSystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_InputSystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_Backpack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_CharacterState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQBaseCharacter_Statics::NewProp_CharacterDate,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AQBaseCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AQBaseCharacter, IAbilitySystemInterface), false },  // 3195502011
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQBaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AQBaseCharacter_Statics::ClassParams = {
		&AQBaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AQBaseCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AQBaseCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AQBaseCharacter()
	{
		if (!Z_Registration_Info_UClass_AQBaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQBaseCharacter.OuterSingleton, Z_Construct_UClass_AQBaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AQBaseCharacter.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<AQBaseCharacter>()
	{
		return AQBaseCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQBaseCharacter);
	AQBaseCharacter::~AQBaseCharacter() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AQBaseCharacter, AQBaseCharacter::StaticClass, TEXT("AQBaseCharacter"), &Z_Registration_Info_UClass_AQBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQBaseCharacter), 2662036770U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_2477126979(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
