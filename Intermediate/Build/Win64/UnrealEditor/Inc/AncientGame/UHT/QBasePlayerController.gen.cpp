// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Controllers/QBasePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQBasePlayerController() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_AQBasePlayerController();
	ANCIENTGAME_API UClass* Z_Construct_UClass_AQBasePlayerController_NoRegister();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCameraParameters();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraParameters;
class UScriptStruct* FCameraParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraParameters, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("CameraParameters"));
	}
	return Z_Registration_Info_UScriptStruct_CameraParameters.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FCameraParameters>()
{
	return FCameraParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdPersonFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstPersonFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightShoulder_MetaData[];
#endif
		static void NewProp_RightShoulder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RightShoulder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Controllers/QBasePlayerController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_ThirdPersonFOV_MetaData[] = {
		{ "Category", "CameraParameters" },
		{ "ModuleRelativePath", "Controllers/QBasePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_ThirdPersonFOV = { "ThirdPersonFOV", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraParameters, ThirdPersonFOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_ThirdPersonFOV_MetaData), Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_ThirdPersonFOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_FirstPersonFOV_MetaData[] = {
		{ "Category", "CameraParameters" },
		{ "ModuleRelativePath", "Controllers/QBasePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_FirstPersonFOV = { "FirstPersonFOV", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraParameters, FirstPersonFOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_FirstPersonFOV_MetaData), Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_FirstPersonFOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_RightShoulder_MetaData[] = {
		{ "Category", "CameraParameters" },
		{ "ModuleRelativePath", "Controllers/QBasePlayerController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_RightShoulder_SetBit(void* Obj)
	{
		((FCameraParameters*)Obj)->RightShoulder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_RightShoulder = { "RightShoulder", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraParameters), &Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_RightShoulder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_RightShoulder_MetaData), Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_RightShoulder_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_ThirdPersonFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_FirstPersonFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraParameters_Statics::NewProp_RightShoulder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		&NewStructOps,
		"CameraParameters",
		Z_Construct_UScriptStruct_FCameraParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraParameters_Statics::PropPointers),
		sizeof(FCameraParameters),
		alignof(FCameraParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCameraParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraParameters.InnerSingleton, Z_Construct_UScriptStruct_FCameraParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraParameters.InnerSingleton;
	}
	void AQBasePlayerController::StaticRegisterNativesAQBasePlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQBasePlayerController);
	UClass* Z_Construct_UClass_AQBasePlayerController_NoRegister()
	{
		return AQBasePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AQBasePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQBasePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQBasePlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQBasePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/QBasePlayerController.h" },
		{ "ModuleRelativePath", "Controllers/QBasePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQBasePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQBasePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AQBasePlayerController_Statics::ClassParams = {
		&AQBasePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQBasePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AQBasePlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AQBasePlayerController()
	{
		if (!Z_Registration_Info_UClass_AQBasePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQBasePlayerController.OuterSingleton, Z_Construct_UClass_AQBasePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AQBasePlayerController.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<AQBasePlayerController>()
	{
		return AQBasePlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQBasePlayerController);
	AQBasePlayerController::~AQBasePlayerController() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Controllers_QBasePlayerController_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Controllers_QBasePlayerController_h_Statics::ScriptStructInfo[] = {
		{ FCameraParameters::StaticStruct, Z_Construct_UScriptStruct_FCameraParameters_Statics::NewStructOps, TEXT("CameraParameters"), &Z_Registration_Info_UScriptStruct_CameraParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraParameters), 535446968U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Controllers_QBasePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AQBasePlayerController, AQBasePlayerController::StaticClass, TEXT("AQBasePlayerController"), &Z_Registration_Info_UClass_AQBasePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQBasePlayerController), 3514654540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Controllers_QBasePlayerController_h_3640922830(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Controllers_QBasePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Controllers_QBasePlayerController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Controllers_QBasePlayerController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Controllers_QBasePlayerController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
