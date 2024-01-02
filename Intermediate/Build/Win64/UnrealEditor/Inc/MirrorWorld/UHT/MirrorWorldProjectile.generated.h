// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MirrorWorldProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MIRRORWORLD_MirrorWorldProjectile_generated_h
#error "MirrorWorldProjectile.generated.h already included, missing '#pragma once' in MirrorWorldProjectile.h"
#endif
#define MIRRORWORLD_MirrorWorldProjectile_generated_h

#define FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_15_SPARSE_DATA
#define FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_15_ACCESSORS
#define FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMirrorWorldProjectile(); \
	friend struct Z_Construct_UClass_AMirrorWorldProjectile_Statics; \
public: \
	DECLARE_CLASS(AMirrorWorldProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MirrorWorld"), NO_API) \
	DECLARE_SERIALIZER(AMirrorWorldProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMirrorWorldProjectile(AMirrorWorldProjectile&&); \
	NO_API AMirrorWorldProjectile(const AMirrorWorldProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMirrorWorldProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMirrorWorldProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMirrorWorldProjectile) \
	NO_API virtual ~AMirrorWorldProjectile();


#define FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_12_PROLOG
#define FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_15_SPARSE_DATA \
	FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_15_ACCESSORS \
	FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIRRORWORLD_API UClass* StaticClass<class AMirrorWorldProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_test_UE5_MirrorWorld_Source_MirrorWorld_MirrorWorldProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
