// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L1/Galaga_USFX_L1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalaga_USFX_L1GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GALAGA_USFX_L1_API UClass* Z_Construct_UClass_AGalaga_USFX_L1GameMode();
	GALAGA_USFX_L1_API UClass* Z_Construct_UClass_AGalaga_USFX_L1GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L1();
// End Cross Module References
	void AGalaga_USFX_L1GameMode::StaticRegisterNativesAGalaga_USFX_L1GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGalaga_USFX_L1GameMode);
	UClass* Z_Construct_UClass_AGalaga_USFX_L1GameMode_NoRegister()
	{
		return AGalaga_USFX_L1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGalaga_USFX_L1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalaga_USFX_L1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_L1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Galaga_USFX_L1GameMode.h" },
		{ "ModuleRelativePath", "Galaga_USFX_L1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalaga_USFX_L1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalaga_USFX_L1GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGalaga_USFX_L1GameMode_Statics::ClassParams = {
		&AGalaga_USFX_L1GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_L1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_L1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalaga_USFX_L1GameMode()
	{
		if (!Z_Registration_Info_UClass_AGalaga_USFX_L1GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGalaga_USFX_L1GameMode.OuterSingleton, Z_Construct_UClass_AGalaga_USFX_L1GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGalaga_USFX_L1GameMode.OuterSingleton;
	}
	template<> GALAGA_USFX_L1_API UClass* StaticClass<AGalaga_USFX_L1GameMode>()
	{
		return AGalaga_USFX_L1GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalaga_USFX_L1GameMode);
	AGalaga_USFX_L1GameMode::~AGalaga_USFX_L1GameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_SpaceInvaders_Galaga_USFX_L1_Source_Galaga_USFX_L1_Galaga_USFX_L1GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_SpaceInvaders_Galaga_USFX_L1_Source_Galaga_USFX_L1_Galaga_USFX_L1GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGalaga_USFX_L1GameMode, AGalaga_USFX_L1GameMode::StaticClass, TEXT("AGalaga_USFX_L1GameMode"), &Z_Registration_Info_UClass_AGalaga_USFX_L1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGalaga_USFX_L1GameMode), 4260432938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_SpaceInvaders_Galaga_USFX_L1_Source_Galaga_USFX_L1_Galaga_USFX_L1GameMode_h_257247273(TEXT("/Script/Galaga_USFX_L1"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_SpaceInvaders_Galaga_USFX_L1_Source_Galaga_USFX_L1_Galaga_USFX_L1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_SpaceInvaders_Galaga_USFX_L1_Source_Galaga_USFX_L1_Galaga_USFX_L1GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
