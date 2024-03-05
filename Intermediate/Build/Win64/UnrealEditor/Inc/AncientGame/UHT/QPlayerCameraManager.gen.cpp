// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cameras/Manager/QPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQPlayerCameraManager() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_AQPlayerCameraManager();
	ANCIENTGAME_API UClass* Z_Construct_UClass_AQPlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	void AQPlayerCameraManager::StaticRegisterNativesAQPlayerCameraManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQPlayerCameraManager);
	UClass* Z_Construct_UClass_AQPlayerCameraManager_NoRegister()
	{
		return AQPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_AQPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQPlayerCameraManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQPlayerCameraManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Cameras/Manager/QPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Cameras/Manager/QPlayerCameraManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQPlayerCameraManager_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "QPlayerCameraManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cameras/Manager/QPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQPlayerCameraManager_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQPlayerCameraManager, Camera), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQPlayerCameraManager_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_AQPlayerCameraManager_Statics::NewProp_Camera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQPlayerCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQPlayerCameraManager_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQPlayerCameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AQPlayerCameraManager_Statics::ClassParams = {
		&AQPlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AQPlayerCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AQPlayerCameraManager_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQPlayerCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AQPlayerCameraManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQPlayerCameraManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AQPlayerCameraManager()
	{
		if (!Z_Registration_Info_UClass_AQPlayerCameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQPlayerCameraManager.OuterSingleton, Z_Construct_UClass_AQPlayerCameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AQPlayerCameraManager.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<AQPlayerCameraManager>()
	{
		return AQPlayerCameraManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQPlayerCameraManager);
	AQPlayerCameraManager::~AQPlayerCameraManager() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Cameras_Manager_QPlayerCameraManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Cameras_Manager_QPlayerCameraManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AQPlayerCameraManager, AQPlayerCameraManager::StaticClass, TEXT("AQPlayerCameraManager"), &Z_Registration_Info_UClass_AQPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQPlayerCameraManager), 1570949694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Cameras_Manager_QPlayerCameraManager_h_226816440(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Cameras_Manager_QPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Cameras_Manager_QPlayerCameraManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
