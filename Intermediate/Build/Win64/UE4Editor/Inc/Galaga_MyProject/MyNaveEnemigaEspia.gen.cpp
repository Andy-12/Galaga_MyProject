// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_MyProject/MyNaveEnemigaEspia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNaveEnemigaEspia() {}
// Cross Module References
	GALAGA_MYPROJECT_API UClass* Z_Construct_UClass_AMyNaveEnemigaEspia_NoRegister();
	GALAGA_MYPROJECT_API UClass* Z_Construct_UClass_AMyNaveEnemigaEspia();
	GALAGA_MYPROJECT_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Galaga_MyProject();
// End Cross Module References
	void AMyNaveEnemigaEspia::StaticRegisterNativesAMyNaveEnemigaEspia()
	{
	}
	UClass* Z_Construct_UClass_AMyNaveEnemigaEspia_NoRegister()
	{
		return AMyNaveEnemigaEspia::StaticClass();
	}
	struct Z_Construct_UClass_AMyNaveEnemigaEspia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyNaveEnemigaEspia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyNaveEnemigaEspia_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyNaveEnemigaEspia.h" },
		{ "ModuleRelativePath", "MyNaveEnemigaEspia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyNaveEnemigaEspia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyNaveEnemigaEspia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyNaveEnemigaEspia_Statics::ClassParams = {
		&AMyNaveEnemigaEspia::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyNaveEnemigaEspia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyNaveEnemigaEspia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyNaveEnemigaEspia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyNaveEnemigaEspia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyNaveEnemigaEspia, 1709454695);
	template<> GALAGA_MYPROJECT_API UClass* StaticClass<AMyNaveEnemigaEspia>()
	{
		return AMyNaveEnemigaEspia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyNaveEnemigaEspia(Z_Construct_UClass_AMyNaveEnemigaEspia, &AMyNaveEnemigaEspia::StaticClass, TEXT("/Script/Galaga_MyProject"), TEXT("AMyNaveEnemigaEspia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyNaveEnemigaEspia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
