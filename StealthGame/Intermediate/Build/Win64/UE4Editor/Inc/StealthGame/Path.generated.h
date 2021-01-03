// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef STEALTHGAME_Path_generated_h
#error "Path.generated.h already included, missing '#pragma once' in Path.h"
#endif
#define STEALTHGAME_Path_generated_h

#define StealthGame_Source_StealthGame_Public_Path_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPatrolPoint_Statics; \
	STEALTHGAME_API static class UScriptStruct* StaticStruct();


template<> STEALTHGAME_API UScriptStruct* StaticStruct<struct FPatrolPoint>();

#define StealthGame_Source_StealthGame_Public_Path_h_23_SPARSE_DATA
#define StealthGame_Source_StealthGame_Public_Path_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWaitTime); \
	DECLARE_FUNCTION(execGetPoint); \
	DECLARE_FUNCTION(execGetNextPoint);


#define StealthGame_Source_StealthGame_Public_Path_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWaitTime); \
	DECLARE_FUNCTION(execGetPoint); \
	DECLARE_FUNCTION(execGetNextPoint);


#define StealthGame_Source_StealthGame_Public_Path_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPath(); \
	friend struct Z_Construct_UClass_APath_Statics; \
public: \
	DECLARE_CLASS(APath, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(APath)


#define StealthGame_Source_StealthGame_Public_Path_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAPath(); \
	friend struct Z_Construct_UClass_APath_Statics; \
public: \
	DECLARE_CLASS(APath, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(APath)


#define StealthGame_Source_StealthGame_Public_Path_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APath(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APath) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APath); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APath(APath&&); \
	NO_API APath(const APath&); \
public:


#define StealthGame_Source_StealthGame_Public_Path_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APath(APath&&); \
	NO_API APath(const APath&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APath); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APath)


#define StealthGame_Source_StealthGame_Public_Path_h_23_PRIVATE_PROPERTY_OFFSET
#define StealthGame_Source_StealthGame_Public_Path_h_20_PROLOG
#define StealthGame_Source_StealthGame_Public_Path_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_Public_Path_h_23_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_Public_Path_h_23_SPARSE_DATA \
	StealthGame_Source_StealthGame_Public_Path_h_23_RPC_WRAPPERS \
	StealthGame_Source_StealthGame_Public_Path_h_23_INCLASS \
	StealthGame_Source_StealthGame_Public_Path_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_StealthGame_Public_Path_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_Public_Path_h_23_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_Public_Path_h_23_SPARSE_DATA \
	StealthGame_Source_StealthGame_Public_Path_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_Public_Path_h_23_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_Public_Path_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTHGAME_API UClass* StaticClass<class APath>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_StealthGame_Public_Path_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
