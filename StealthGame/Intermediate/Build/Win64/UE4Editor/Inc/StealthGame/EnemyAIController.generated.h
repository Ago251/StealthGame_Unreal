// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STEALTHGAME_EnemyAIController_generated_h
#error "EnemyAIController.generated.h already included, missing '#pragma once' in EnemyAIController.h"
#endif
#define STEALTHGAME_EnemyAIController_generated_h

#define StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_SPARSE_DATA
#define StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPerceptionUpdate_SenseManagement);


#define StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPerceptionUpdate_SenseManagement);


#define StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public:


#define StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyAIController)


#define StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_PRIVATE_PROPERTY_OFFSET
#define StealthGame_Source_StealthGame_Public_EnemyAIController_h_15_PROLOG
#define StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_SPARSE_DATA \
	StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_RPC_WRAPPERS \
	StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_INCLASS \
	StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_SPARSE_DATA \
	StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_Public_EnemyAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTHGAME_API UClass* StaticClass<class AEnemyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_StealthGame_Public_EnemyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
