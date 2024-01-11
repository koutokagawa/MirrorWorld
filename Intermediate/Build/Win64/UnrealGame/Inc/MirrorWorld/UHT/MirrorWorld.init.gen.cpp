// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirrorWorld_init() {}
	MIRRORWORLD_API UFunction* Z_Construct_UDelegateFunction_MirrorWorld_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MirrorWorld;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MirrorWorld()
	{
		if (!Z_Registration_Info_UPackage__Script_MirrorWorld.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MirrorWorld_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MirrorWorld",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE7CD7EA1,
				0xAFAFA6BE,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MirrorWorld.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MirrorWorld.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MirrorWorld(Z_Construct_UPackage__Script_MirrorWorld, TEXT("/Script/MirrorWorld"), Z_Registration_Info_UPackage__Script_MirrorWorld, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE7CD7EA1, 0xAFAFA6BE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
