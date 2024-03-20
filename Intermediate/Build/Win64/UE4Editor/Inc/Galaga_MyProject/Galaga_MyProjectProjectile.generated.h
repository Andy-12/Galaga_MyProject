// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GALAGA_MYPROJECT_Galaga_MyProjectProjectile_generated_h
#error "Galaga_MyProjectProjectile.generated.h already included, missing '#pragma once' in Galaga_MyProjectProjectile.h"
#endif
#define GALAGA_MYPROJECT_Galaga_MyProjectProjectile_generated_h

#define Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_SPARSE_DATA
#define Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGalaga_MyProjectProjectile(); \
	friend struct Z_Construct_UClass_AGalaga_MyProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AGalaga_MyProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_MyProject"), NO_API) \
	DECLARE_SERIALIZER(AGalaga_MyProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGalaga_MyProjectProjectile(); \
	friend struct Z_Construct_UClass_AGalaga_MyProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AGalaga_MyProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_MyProject"), NO_API) \
	DECLARE_SERIALIZER(AGalaga_MyProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGalaga_MyProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGalaga_MyProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaga_MyProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaga_MyProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaga_MyProjectProjectile(AGalaga_MyProjectProjectile&&); \
	NO_API AGalaga_MyProjectProjectile(const AGalaga_MyProjectProjectile&); \
public:


#define Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaga_MyProjectProjectile(AGalaga_MyProjectProjectile&&); \
	NO_API AGalaga_MyProjectProjectile(const AGalaga_MyProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaga_MyProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaga_MyProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGalaga_MyProjectProjectile)


#define Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AGalaga_MyProjectProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGalaga_MyProjectProjectile, ProjectileMovement); }


#define Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_12_PROLOG
#define Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_SPARSE_DATA \
	Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_RPC_WRAPPERS \
	Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_INCLASS \
	Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_SPARSE_DATA \
	Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_MYPROJECT_API UClass* StaticClass<class AGalaga_MyProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_MyProject_Source_Galaga_MyProject_Galaga_MyProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
