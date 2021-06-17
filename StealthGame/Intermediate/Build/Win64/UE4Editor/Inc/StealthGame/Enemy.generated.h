// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHealthComponent;
#ifdef STEALTHGAME_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define STEALTHGAME_Enemy_generated_h

#define StealthGame_Source_StealthGame_Public_Enemy_h_15_SPARSE_DATA
#define StealthGame_Source_StealthGame_Public_Enemy_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHealthComponent);


#define StealthGame_Source_StealthGame_Public_Enemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHealthComponent);


#define StealthGame_Source_StealthGame_Public_Enemy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define StealthGame_Source_StealthGame_Public_Enemy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define StealthGame_Source_StealthGame_Public_Enemy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define StealthGame_Source_StealthGame_Public_Enemy_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define StealthGame_Source_StealthGame_Public_Enemy_h_15_PRIVATE_PROPERTY_OFFSET
#define StealthGame_Source_StealthGame_Public_Enemy_h_12_PROLOG
#define StealthGame_Source_StealthGame_Public_Enemy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_Public_Enemy_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_Public_Enemy_h_15_SPARSE_DATA \
	StealthGame_Source_StealthGame_Public_Enemy_h_15_RPC_WRAPPERS \
	StealthGame_Source_StealthGame_Public_Enemy_h_15_INCLASS \
	StealthGame_Source_StealthGame_Public_Enemy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_StealthGame_Public_Enemy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_Public_Enemy_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_Public_Enemy_h_15_SPARSE_DATA \
	StealthGame_Source_StealthGame_Public_Enemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_Public_Enemy_h_15_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_Public_Enemy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTHGAME_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_StealthGame_Public_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
