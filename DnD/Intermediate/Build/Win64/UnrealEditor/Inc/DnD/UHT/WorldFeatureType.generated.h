// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldFeatureType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DND_WorldFeatureType_generated_h
#error "WorldFeatureType.generated.h already included, missing '#pragma once' in WorldFeatureType.h"
#endif
#define DND_WorldFeatureType_generated_h

#define FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_12_SPARSE_DATA
#define FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_12_ACCESSORS
#define FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldFeatureType(); \
	friend struct Z_Construct_UClass_AWorldFeatureType_Statics; \
public: \
	DECLARE_CLASS(AWorldFeatureType, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DnD"), NO_API) \
	DECLARE_SERIALIZER(AWorldFeatureType)


#define FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldFeatureType(AWorldFeatureType&&); \
	NO_API AWorldFeatureType(const AWorldFeatureType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldFeatureType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldFeatureType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldFeatureType) \
	NO_API virtual ~AWorldFeatureType();


#define FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_9_PROLOG
#define FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_12_SPARSE_DATA \
	FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_12_ACCESSORS \
	FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DND_API UClass* StaticClass<class AWorldFeatureType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h


#define FOREACH_ENUM_WORLDFEATURE(op) \
	op(WorldFeature::Lake) \
	op(WorldFeature::Forest) 

enum class WorldFeature : uint8;
template<> struct TIsUEnumClass<WorldFeature> { enum { Value = true }; };
template<> DND_API UEnum* StaticEnum<WorldFeature>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
