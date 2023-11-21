// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DnD/Public/WorldFeatureType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldFeatureType() {}
// Cross Module References
	DND_API UClass* Z_Construct_UClass_AWorldFeatureType();
	DND_API UClass* Z_Construct_UClass_AWorldFeatureType_NoRegister();
	DND_API UEnum* Z_Construct_UEnum_DnD_WorldFeature();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DnD();
// End Cross Module References
	void AWorldFeatureType::StaticRegisterNativesAWorldFeatureType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldFeatureType);
	UClass* Z_Construct_UClass_AWorldFeatureType_NoRegister()
	{
		return AWorldFeatureType::StaticClass();
	}
	struct Z_Construct_UClass_AWorldFeatureType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldFeatureType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DnD,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldFeatureType_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldFeatureType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldFeatureType.h" },
		{ "ModuleRelativePath", "Public/WorldFeatureType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldFeatureType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldFeatureType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldFeatureType_Statics::ClassParams = {
		&AWorldFeatureType::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldFeatureType_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldFeatureType_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AWorldFeatureType()
	{
		if (!Z_Registration_Info_UClass_AWorldFeatureType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldFeatureType.OuterSingleton, Z_Construct_UClass_AWorldFeatureType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorldFeatureType.OuterSingleton;
	}
	template<> DND_API UClass* StaticClass<AWorldFeatureType>()
	{
		return AWorldFeatureType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldFeatureType);
	AWorldFeatureType::~AWorldFeatureType() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_WorldFeature;
	static UEnum* WorldFeature_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_WorldFeature.OuterSingleton)
		{
			Z_Registration_Info_UEnum_WorldFeature.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DnD_WorldFeature, (UObject*)Z_Construct_UPackage__Script_DnD(), TEXT("WorldFeature"));
		}
		return Z_Registration_Info_UEnum_WorldFeature.OuterSingleton;
	}
	template<> DND_API UEnum* StaticEnum<WorldFeature>()
	{
		return WorldFeature_StaticEnum();
	}
	struct Z_Construct_UEnum_DnD_WorldFeature_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DnD_WorldFeature_Statics::Enumerators[] = {
		{ "WorldFeature::Lake", (int64)WorldFeature::Lake },
		{ "WorldFeature::Forest", (int64)WorldFeature::Forest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DnD_WorldFeature_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Forest.DisplayName", "Forest" },
		{ "Forest.Name", "WorldFeature::Forest" },
		{ "Lake.DisplayName", "Lake" },
		{ "Lake.Name", "WorldFeature::Lake" },
		{ "ModuleRelativePath", "Public/WorldFeatureType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DnD_WorldFeature_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DnD,
		nullptr,
		"WorldFeature",
		"WorldFeature",
		Z_Construct_UEnum_DnD_WorldFeature_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DnD_WorldFeature_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DnD_WorldFeature_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DnD_WorldFeature_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DnD_WorldFeature()
	{
		if (!Z_Registration_Info_UEnum_WorldFeature.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_WorldFeature.InnerSingleton, Z_Construct_UEnum_DnD_WorldFeature_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_WorldFeature.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_Statics::EnumInfo[] = {
		{ WorldFeature_StaticEnum, TEXT("WorldFeature"), &Z_Registration_Info_UEnum_WorldFeature, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3912490051U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWorldFeatureType, AWorldFeatureType::StaticClass, TEXT("AWorldFeatureType"), &Z_Registration_Info_UClass_AWorldFeatureType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldFeatureType), 426139922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_536261660(TEXT("/Script/DnD"),
		Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldFeatureType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
