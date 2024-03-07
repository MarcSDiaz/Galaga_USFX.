// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L1/Proyectil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectil() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GALAGA_USFX_L1_API UClass* Z_Construct_UClass_AProyectil();
	GALAGA_USFX_L1_API UClass* Z_Construct_UClass_AProyectil_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L1();
// End Cross Module References
	void AProyectil::StaticRegisterNativesAProyectil()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProyectil);
	UClass* Z_Construct_UClass_AProyectil_NoRegister()
	{
		return AProyectil::StaticClass();
	}
	struct Z_Construct_UClass_AProyectil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Proyectil.h" },
		{ "ModuleRelativePath", "Proyectil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectil>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProyectil_Statics::ClassParams = {
		&AProyectil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProyectil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectil()
	{
		if (!Z_Registration_Info_UClass_AProyectil.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProyectil.OuterSingleton, Z_Construct_UClass_AProyectil_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProyectil.OuterSingleton;
	}
	template<> GALAGA_USFX_L1_API UClass* StaticClass<AProyectil>()
	{
		return AProyectil::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectil);
	AProyectil::~AProyectil() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_SpaceInvaders_Galaga_USFX_L1_Source_Galaga_USFX_L1_Proyectil_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_SpaceInvaders_Galaga_USFX_L1_Source_Galaga_USFX_L1_Proyectil_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProyectil, AProyectil::StaticClass, TEXT("AProyectil"), &Z_Registration_Info_UClass_AProyectil, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProyectil), 2332900353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_SpaceInvaders_Galaga_USFX_L1_Source_Galaga_USFX_L1_Proyectil_h_4194016248(TEXT("/Script/Galaga_USFX_L1"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_SpaceInvaders_Galaga_USFX_L1_Source_Galaga_USFX_L1_Proyectil_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_SpaceInvaders_Galaga_USFX_L1_Source_Galaga_USFX_L1_Proyectil_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
