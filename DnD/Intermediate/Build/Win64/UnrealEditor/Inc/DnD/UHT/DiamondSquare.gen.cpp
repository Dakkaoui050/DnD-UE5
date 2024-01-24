// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DnD/Public/DiamondSquare.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiamondSquare() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DND_API UClass* Z_Construct_UClass_ADiamondSquare();
	DND_API UClass* Z_Construct_UClass_ADiamondSquare_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DnD();
// End Cross Module References
	void ADiamondSquare::StaticRegisterNativesADiamondSquare()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADiamondSquare);
	UClass* Z_Construct_UClass_ADiamondSquare_NoRegister()
	{
		return ADiamondSquare::StaticClass();
	}
	struct Z_Construct_UClass_ADiamondSquare_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Traingles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Traingles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Traingles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADiamondSquare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DnD,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DiamondSquare.h" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADiamondSquare, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Vertices_MetaData), Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Vertices_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Traingles_Inner = { "Traingles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Traingles_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Traingles = { "Traingles", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADiamondSquare, Traingles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Traingles_MetaData), Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Traingles_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UV0_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADiamondSquare, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UV0_MetaData), Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UV0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADiamondSquare, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Material_MetaData), Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Material_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADiamondSquare_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Traingles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Traingles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADiamondSquare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADiamondSquare>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADiamondSquare_Statics::ClassParams = {
		&ADiamondSquare::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADiamondSquare_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::Class_MetaDataParams), Z_Construct_UClass_ADiamondSquare_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADiamondSquare()
	{
		if (!Z_Registration_Info_UClass_ADiamondSquare.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADiamondSquare.OuterSingleton, Z_Construct_UClass_ADiamondSquare_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADiamondSquare.OuterSingleton;
	}
	template<> DND_API UClass* StaticClass<ADiamondSquare>()
	{
		return ADiamondSquare::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADiamondSquare);
	ADiamondSquare::~ADiamondSquare() {}
	struct Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_GitHub_DnD_UE5_DnD_Source_DnD_Public_DiamondSquare_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_GitHub_DnD_UE5_DnD_Source_DnD_Public_DiamondSquare_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADiamondSquare, ADiamondSquare::StaticClass, TEXT("ADiamondSquare"), &Z_Registration_Info_UClass_ADiamondSquare, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADiamondSquare), 839676587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_GitHub_DnD_UE5_DnD_Source_DnD_Public_DiamondSquare_h_4251173946(TEXT("/Script/DnD"),
		Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_GitHub_DnD_UE5_DnD_Source_DnD_Public_DiamondSquare_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dakka_OneDrive_Documenten_GitHub_DnD_UE5_DnD_Source_DnD_Public_DiamondSquare_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
