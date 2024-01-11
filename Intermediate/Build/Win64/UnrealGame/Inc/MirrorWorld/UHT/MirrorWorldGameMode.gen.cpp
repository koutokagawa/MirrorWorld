// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirrorWorld/MirrorWorldGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirrorWorldGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MIRRORWORLD_API UClass* Z_Construct_UClass_AMirrorWorldGameMode();
	MIRRORWORLD_API UClass* Z_Construct_UClass_AMirrorWorldGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MirrorWorld();
// End Cross Module References
	void AMirrorWorldGameMode::StaticRegisterNativesAMirrorWorldGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMirrorWorldGameMode);
	UClass* Z_Construct_UClass_AMirrorWorldGameMode_NoRegister()
	{
		return AMirrorWorldGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMirrorWorldGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMirrorWorldGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MirrorWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMirrorWorldGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMirrorWorldGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MirrorWorldGameMode.h" },
		{ "ModuleRelativePath", "MirrorWorldGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMirrorWorldGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMirrorWorldGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMirrorWorldGameMode_Statics::ClassParams = {
		&AMirrorWorldGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMirrorWorldGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMirrorWorldGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMirrorWorldGameMode()
	{
		if (!Z_Registration_Info_UClass_AMirrorWorldGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMirrorWorldGameMode.OuterSingleton, Z_Construct_UClass_AMirrorWorldGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMirrorWorldGameMode.OuterSingleton;
	}
	template<> MIRRORWORLD_API UClass* StaticClass<AMirrorWorldGameMode>()
	{
		return AMirrorWorldGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMirrorWorldGameMode);
	AMirrorWorldGameMode::~AMirrorWorldGameMode() {}
	struct Z_CompiledInDeferFile_FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMirrorWorldGameMode, AMirrorWorldGameMode::StaticClass, TEXT("AMirrorWorldGameMode"), &Z_Registration_Info_UClass_AMirrorWorldGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMirrorWorldGameMode), 15177414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldGameMode_h_1720042936(TEXT("/Script/MirrorWorld"),
		Z_CompiledInDeferFile_FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
