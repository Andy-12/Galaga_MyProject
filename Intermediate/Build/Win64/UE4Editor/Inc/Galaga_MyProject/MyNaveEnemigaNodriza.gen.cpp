// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_MyProject/MyNaveEnemigaNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNaveEnemigaNodriza() {}
// Cross Module References
	GALAGA_MYPROJECT_API UClass* Z_Construct_UClass_AMyNaveEnemigaNodriza_NoRegister();
	GALAGA_MYPROJECT_API UClass* Z_Construct_UClass_AMyNaveEnemigaNodriza();
	GALAGA_MYPROJECT_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Galaga_MyProject();
// End Cross Module References
	void AMyNaveEnemigaNodriza::StaticRegisterNativesAMyNaveEnemigaNodriza()
	{
	}
	UClass* Z_Construct_UClass_AMyNaveEnemigaNodriza_NoRegister()
	{
		return AMyNaveEnemigaNodriza::StaticClass();
	}
	struct Z_Construct_UClass_AMyNaveEnemigaNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyNaveEnemigaNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyNaveEnemigaNodriza_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyNaveEnemigaNodriza.h" },
		{ "ModuleRelativePath", "MyNaveEnemigaNodriza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyNaveEnemigaNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyNaveEnemigaNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyNaveEnemigaNodriza_Statics::ClassParams = {
		&AMyNaveEnemigaNodriza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyNaveEnemigaNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyNaveEnemigaNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyNaveEnemigaNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyNaveEnemigaNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyNaveEnemigaNodriza, 1989430104);
	template<> GALAGA_MYPROJECT_API UClass* StaticClass<AMyNaveEnemigaNodriza>()
	{
		return AMyNaveEnemigaNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyNaveEnemigaNodriza(Z_Construct_UClass_AMyNaveEnemigaNodriza, &AMyNaveEnemigaNodriza::StaticClass, TEXT("/Script/Galaga_MyProject"), TEXT("AMyNaveEnemigaNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyNaveEnemigaNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
