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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DND_API UClass* Z_Construct_UClass_AWorldGenerator();
	DND_API UClass* Z_Construct_UClass_AWorldGenerator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InputWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerrainScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TerrainScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTrees_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBushes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBushes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGenerator_Statics::NewProp_InputWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldGenerator_Statics::NewProp_InputWidgetClass = { "InputWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGenerator, InputWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::NewProp_InputWidgetClass_MetaData), Z_Construct_UClass_AWorldGenerator_Statics::NewProp_InputWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGenerator_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "World Generation" },
		{ "ModuleRelativePath", "Public/WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWorldGenerator_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGenerator, Input), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::NewProp_Input_MetaData), Z_Construct_UClass_AWorldGenerator_Statics::NewProp_Input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGenerator_Statics::NewProp_HeightScale_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldGenerator_Statics::NewProp_HeightScale = { "HeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGenerator, HeightScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::NewProp_HeightScale_MetaData), Z_Construct_UClass_AWorldGenerator_Statics::NewProp_HeightScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGenerator_Statics::NewProp_TerrainScale_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldGenerator_Statics::NewProp_TerrainScale = { "TerrainScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGenerator, TerrainScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::NewProp_TerrainScale_MetaData), Z_Construct_UClass_AWorldGenerator_Statics::NewProp_TerrainScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGenerator_Statics::NewProp_NoiseScale_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldGenerator_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGenerator, NoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::NewProp_NoiseScale_MetaData), Z_Construct_UClass_AWorldGenerator_Statics::NewProp_NoiseScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGenerator_Statics::NewProp_HeightFactor_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldGenerator_Statics::NewProp_HeightFactor = { "HeightFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGenerator, HeightFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::NewProp_HeightFactor_MetaData), Z_Construct_UClass_AWorldGenerator_Statics::NewProp_HeightFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGenerator_Statics::NewProp_NumTrees_MetaData[] = {
		{ "Category", "Trees" },
		{ "ModuleRelativePath", "Public/WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldGenerator_Statics::NewProp_NumTrees = { "NumTrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGenerator, NumTrees), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::NewProp_NumTrees_MetaData), Z_Construct_UClass_AWorldGenerator_Statics::NewProp_NumTrees_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGenerator_Statics::NewProp_NumBushes_MetaData[] = {
		{ "Category", "Bushes" },
		{ "ModuleRelativePath", "Public/WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldGenerator_Statics::NewProp_NumBushes = { "NumBushes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGenerator, NumBushes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::NewProp_NumBushes_MetaData), Z_Construct_UClass_AWorldGenerator_Statics::NewProp_NumBushes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGenerator_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "WorldGenerator" },
		{ "ModuleRelativePath", "Public/WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldGenerator_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGenerator, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::NewProp_Material_MetaData), Z_Construct_UClass_AWorldGenerator_Statics::NewProp_Material_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldGenerator_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGenerator_Statics::NewProp_UV0_MetaData[] = {
		{ "Category", "WorldGenerator" },
		{ "ModuleRelativePath", "Public/WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldGenerator_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGenerator, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGenerator_Statics::NewProp_UV0_MetaData), Z_Construct_UClass_AWorldGenerator_Statics::NewProp_UV0_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGenerator_Statics::NewProp_InputWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGenerator_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGenerator_Statics::NewProp_HeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGenerator_Statics::NewProp_TerrainScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGenerator_Statics::NewProp_NoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGenerator_Statics::NewProp_HeightFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGenerator_Statics::NewProp_NumTrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGenerator_Statics::NewProp_NumBushes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGenerator_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGenerator_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGenerator_Statics::NewProp_UV0,
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
		{ Z_Construct_UClass_AWorldGenerator, AWorldGenerator::StaticClass, TEXT("AWorldGenerator"), &Z_Registration_Info_UClass_AWorldGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldGenerator), 1032132557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldGenerator_h_661275336(TEXT("/Script/DnD"),
		Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorldGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
