// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_MyProject/MyNaveEnemigaEmpaladora.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNaveEnemigaEmpaladora() {}
// Cross Module References
	GALAGA_MYPROJECT_API UClass* Z_Construct_UClass_AMyNaveEnemigaEmpaladora_NoRegister();
	GALAGA_MYPROJECT_API UClass* Z_Construct_UClass_AMyNaveEnemigaEmpaladora();
	GALAGA_MYPROJECT_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Galaga_MyProject();
// End Cross Module References
	void AMyNaveEnemigaEmpaladora::StaticRegisterNativesAMyNaveEnemigaEmpaladora()
	{
	}
	UClass* Z_Construct_UClass_AMyNaveEnemigaEmpaladora_NoRegister()
	{
		return AMyNaveEnemigaEmpaladora::StaticClass();
	}
	struct Z_Construct_UClass_AMyNaveEnemigaEmpaladora_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyNaveEnemigaEmpaladora_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyNaveEnemigaEmpaladora_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyNaveEnemigaEmpaladora.h" },
		{ "ModuleRelativePath", "MyNaveEnemigaEmpaladora.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyNaveEnemigaEmpaladora_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyNaveEnemigaEmpaladora>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyNaveEnemigaEmpaladora_Statics::ClassParams = {
		&AMyNaveEnemigaEmpaladora::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyNaveEnemigaEmpaladora_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyNaveEnemigaEmpaladora_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyNaveEnemigaEmpaladora()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyNaveEnemigaEmpaladora_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyNaveEnemigaEmpaladora, 1358744767);
	template<> GALAGA_MYPROJECT_API UClass* StaticClass<AMyNaveEnemigaEmpaladora>()
	{
		return AMyNaveEnemigaEmpaladora::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyNaveEnemigaEmpaladora(Z_Construct_UClass_AMyNaveEnemigaEmpaladora, &AMyNaveEnemigaEmpaladora::StaticClass, TEXT("/Script/Galaga_MyProject"), TEXT("AMyNaveEnemigaEmpaladora"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyNaveEnemigaEmpaladora);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
