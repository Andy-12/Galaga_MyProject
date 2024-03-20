// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_MyProject/MyNaveEnemigaReabastecimiento.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNaveEnemigaReabastecimiento() {}
// Cross Module References
	GALAGA_MYPROJECT_API UClass* Z_Construct_UClass_AMyNaveEnemigaReabastecimiento_NoRegister();
	GALAGA_MYPROJECT_API UClass* Z_Construct_UClass_AMyNaveEnemigaReabastecimiento();
	GALAGA_MYPROJECT_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Galaga_MyProject();
// End Cross Module References
	void AMyNaveEnemigaReabastecimiento::StaticRegisterNativesAMyNaveEnemigaReabastecimiento()
	{
	}
	UClass* Z_Construct_UClass_AMyNaveEnemigaReabastecimiento_NoRegister()
	{
		return AMyNaveEnemigaReabastecimiento::StaticClass();
	}
	struct Z_Construct_UClass_AMyNaveEnemigaReabastecimiento_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyNaveEnemigaReabastecimiento_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyNaveEnemigaReabastecimiento_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyNaveEnemigaReabastecimiento.h" },
		{ "ModuleRelativePath", "MyNaveEnemigaReabastecimiento.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyNaveEnemigaReabastecimiento_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyNaveEnemigaReabastecimiento>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyNaveEnemigaReabastecimiento_Statics::ClassParams = {
		&AMyNaveEnemigaReabastecimiento::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyNaveEnemigaReabastecimiento_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyNaveEnemigaReabastecimiento_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyNaveEnemigaReabastecimiento()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyNaveEnemigaReabastecimiento_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyNaveEnemigaReabastecimiento, 1826572694);
	template<> GALAGA_MYPROJECT_API UClass* StaticClass<AMyNaveEnemigaReabastecimiento>()
	{
		return AMyNaveEnemigaReabastecimiento::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyNaveEnemigaReabastecimiento(Z_Construct_UClass_AMyNaveEnemigaReabastecimiento, &AMyNaveEnemigaReabastecimiento::StaticClass, TEXT("/Script/Galaga_MyProject"), TEXT("AMyNaveEnemigaReabastecimiento"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyNaveEnemigaReabastecimiento);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
