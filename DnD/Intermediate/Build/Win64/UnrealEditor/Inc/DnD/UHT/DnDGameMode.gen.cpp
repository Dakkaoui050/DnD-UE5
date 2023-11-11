// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DnD/DnDGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDnDGameMode() {}
// Cross Module References
	DND_API UClass* Z_Construct_UClass_ADnDGameMode();
	DND_API UClass* Z_Construct_UClass_ADnDGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DnD();
// End Cross Module References
	void ADnDGameMode::StaticRegisterNativesADnDGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADnDGameMode);
	UClass* Z_Construct_UClass_ADnDGameMode_NoRegister()
	{
		return ADnDGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADnDGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADnDGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DnD,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADnDGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADnDGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DnDGameMode.h" },
		{ "ModuleRelativePath", "DnDGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADnDGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADnDGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADnDGameMode_Statics::ClassParams = {
		&ADnDGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADnDGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADnDGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADnDGameMode()
	{
		if (!Z_Registration_Info_UClass_ADnDGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADnDGameMode.OuterSingleton, Z_Construct_UClass_ADnDGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADnDGameMode.OuterSingleton;
	}
	template<> DND_API UClass* StaticClass<ADnDGameMode>()
	{
		return ADnDGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADnDGameMode);
	ADnDGameMode::~ADnDGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_DnDGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_DnDGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADnDGameMode, ADnDGameMode::StaticClass, TEXT("ADnDGameMode"), &Z_Registration_Info_UClass_ADnDGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADnDGameMode), 836902680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_DnDGameMode_h_482774111(TEXT("/Script/DnD"),
		Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_DnDGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_DnDGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
