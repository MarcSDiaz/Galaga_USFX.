// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L1/Escudo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GALAGA_USFX_L1_API UClass* Z_Construct_UClass_AEscudo();
	GALAGA_USFX_L1_API UClass* Z_Construct_UClass_AEscudo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L1();
// End Cross Module References
	void AEscudo::StaticRegisterNativesAEscudo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEscudo);
	UClass* Z_Construct_UClass_AEscudo_NoRegister()
	{
		return AEscudo::StaticClass();
	}
	struct Z_Construct_UClass_AEscudo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscudo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Escudo.h" },
		{ "ModuleRelativePath", "Escudo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscudo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscudo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEscudo_Statics::ClassParams = {
		&AEscudo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscudo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscudo()
	{
		if (!Z_Registration_Info_UClass_AEscudo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEscudo.OuterSingleton, Z_Construct_UClass_AEscudo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEscudo.OuterSingleton;
	}
	template<> GALAGA_USFX_L1_API UClass* StaticClass<AEscudo>()
	{
		return AEscudo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscudo);
	AEscudo::~AEscudo() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_SpaceInvaders_Galaga_USFX_L1_Source_Galaga_USFX_L1_Escudo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_SpaceInvaders_Galaga_USFX_L1_Source_Galaga_USFX_L1_Escudo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEscudo, AEscudo::StaticClass, TEXT("AEscudo"), &Z_Registration_Info_UClass_AEscudo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEscudo), 1628338047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_SpaceInvaders_Galaga_USFX_L1_Source_Galaga_USFX_L1_Escudo_h_812135769(TEXT("/Script/Galaga_USFX_L1"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_SpaceInvaders_Galaga_USFX_L1_Source_Galaga_USFX_L1_Escudo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_SpaceInvaders_Galaga_USFX_L1_Source_Galaga_USFX_L1_Escudo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
