// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DnD/Public/WorlodGeneratorAI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorlodGeneratorAI() {}
// Cross Module References
	DND_API UClass* Z_Construct_UClass_AWorlodGeneratorAI();
	DND_API UClass* Z_Construct_UClass_AWorlodGeneratorAI_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DnD();
// End Cross Module References
	void AWorlodGeneratorAI::StaticRegisterNativesAWorlodGeneratorAI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorlodGeneratorAI);
	UClass* Z_Construct_UClass_AWorlodGeneratorAI_NoRegister()
	{
		return AWorlodGeneratorAI::StaticClass();
	}
	struct Z_Construct_UClass_AWorlodGeneratorAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorlodGeneratorAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DnD,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorlodGeneratorAI_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorlodGeneratorAI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorlodGeneratorAI.h" },
		{ "ModuleRelativePath", "Public/WorlodGeneratorAI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorlodGeneratorAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorlodGeneratorAI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorlodGeneratorAI_Statics::ClassParams = {
		&AWorlodGeneratorAI::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorlodGeneratorAI_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorlodGeneratorAI_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AWorlodGeneratorAI()
	{
		if (!Z_Registration_Info_UClass_AWorlodGeneratorAI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorlodGeneratorAI.OuterSingleton, Z_Construct_UClass_AWorlodGeneratorAI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorlodGeneratorAI.OuterSingleton;
	}
	template<> DND_API UClass* StaticClass<AWorlodGeneratorAI>()
	{
		return AWorlodGeneratorAI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorlodGeneratorAI);
	AWorlodGeneratorAI::~AWorlodGeneratorAI() {}
	struct Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorlodGeneratorAI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorlodGeneratorAI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWorlodGeneratorAI, AWorlodGeneratorAI::StaticClass, TEXT("AWorlodGeneratorAI"), &Z_Registration_Info_UClass_AWorlodGeneratorAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorlodGeneratorAI), 3327770215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorlodGeneratorAI_h_3251607179(TEXT("/Script/DnD"),
		Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorlodGeneratorAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Driss_Documents_GitHub_DnD_UE5_DnD_Source_DnD_Public_WorlodGeneratorAI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
