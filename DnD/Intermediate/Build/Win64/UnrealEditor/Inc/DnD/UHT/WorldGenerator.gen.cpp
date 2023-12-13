// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DnD/Public/WorldGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldGenerator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DND_API UClass* Z_Construct_UClass_AWorldGenerator();
	DND_API UClass* Z_Construct_UClass_AWorldGenerator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DnD();
// End Cross Module References
	void AWorldGenerator::StaticRegisterNativesAWorldGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldGenerator);
	UClass* Z_Construct_UClass_AWorldGenerator_NoRegister()
	{
		return AWorldGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AWorldGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InputWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DnD,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldGenerator.h" },
		{ "ModuleRelativePath", "Public/WorldGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGenerator_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "World Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UProperty for storing the player's input\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UProperty for storing the player's input" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWorldGenerator_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGenerator, Input), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::NewProp_Input_MetaData), Z_Construct_UClass_AWorldGenerator_Statics::NewProp_Input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGenerator_Statics::NewProp_InputWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldGenerator_Statics::NewProp_InputWidgetClass = { "InputWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGenerator, InputWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::NewProp_InputWidgetClass_MetaData), Z_Construct_UClass_AWorldGenerator_Statics::NewProp_InputWidgetClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGenerator_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGenerator_Statics::NewProp_InputWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldGenerator_Statics::ClassParams = {
		&AWorldGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWorldGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldGenerator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWorldGenerator()
	{
		if (!Z_Registration_Info_UClass_AWorldGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldGenerator.OuterSingleton, Z_Construct_UClass_AWorldGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorldGenerator.OuterSingleton;
	}
	template<> DND_API UClass* StaticClass<AWorldGenerator>()
	{
		return AWorldGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldGenerator);
	AWorldGenerator::~AWorldGenerator() {}
	struct Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWorldGenerator, AWorldGenerator::StaticClass, TEXT("AWorldGenerator"), &Z_Registration_Info_UClass_AWorldGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldGenerator), 1511935711U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldGenerator_h_2551423222(TEXT("/Script/DnD"),
		Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
