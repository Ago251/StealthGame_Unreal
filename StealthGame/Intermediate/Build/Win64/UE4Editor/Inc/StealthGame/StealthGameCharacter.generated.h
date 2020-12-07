// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTHGAME_StealthGameCharacter_generated_h
#error "StealthGameCharacter.generated.h already included, missing '#pragma once' in StealthGameCharacter.h"
#endif
#define STEALTHGAME_StealthGameCharacter_generated_h

#define StealthGame_Source_StealthGame_StealthGameCharacter_h_12_SPARSE_DATA
#define StealthGame_Source_StealthGame_StealthGameCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanJumpCharacter);


#define StealthGame_Source_StealthGame_StealthGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanJumpCharacter);


#define StealthGame_Source_StealthGame_StealthGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStealthGameCharacter(); \
	friend struct Z_Construct_UClass_AStealthGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AStealthGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AStealthGameCharacter)


#define StealthGame_Source_StealthGame_StealthGameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAStealthGameCharacter(); \
	friend struct Z_Construct_UClass_AStealthGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AStealthGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AStealthGameCharacter)


#define StealthGame_Source_StealthGame_StealthGameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStealthGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthGameCharacter(AStealthGameCharacter&&); \
	NO_API AStealthGameCharacter(const AStealthGameCharacter&); \
public:


#define StealthGame_Source_StealthGame_StealthGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthGameCharacter(AStealthGameCharacter&&); \
	NO_API AStealthGameCharacter(const AStealthGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStealthGameCharacter)


#define StealthGame_Source_StealthGame_StealthGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AStealthGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AStealthGameCharacter, FollowCamera); }


#define StealthGame_Source_StealthGame_StealthGameCharacter_h_9_PROLOG
#define StealthGame_Source_StealthGame_StealthGameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_12_SPARSE_DATA \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_12_RPC_WRAPPERS \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_12_INCLASS \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_StealthGame_StealthGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_12_SPARSE_DATA \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_StealthGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTHGAME_API UClass* StaticClass<class AStealthGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_StealthGame_StealthGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
