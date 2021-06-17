// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTHGAME_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define STEALTHGAME_HealthComponent_generated_h

#define StealthGame_Source_StealthGame_Public_HealthComponent_h_9_DELEGATE \
static inline void FHealtDelegate_DelegateWrapper(const FMulticastScriptDelegate& HealtDelegate) \
{ \
	HealtDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define StealthGame_Source_StealthGame_Public_HealthComponent_h_13_SPARSE_DATA
#define StealthGame_Source_StealthGame_Public_HealthComponent_h_13_RPC_WRAPPERS
#define StealthGame_Source_StealthGame_Public_HealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define StealthGame_Source_StealthGame_Public_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define StealthGame_Source_StealthGame_Public_HealthComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define StealthGame_Source_StealthGame_Public_HealthComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define StealthGame_Source_StealthGame_Public_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define StealthGame_Source_StealthGame_Public_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthDefaultValue() { return STRUCT_OFFSET(UHealthComponent, HealthDefaultValue); } \
	FORCEINLINE static uint32 __PPO__HealthMaxValue() { return STRUCT_OFFSET(UHealthComponent, HealthMaxValue); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(UHealthComponent, Health); }


#define StealthGame_Source_StealthGame_Public_HealthComponent_h_10_PROLOG
#define StealthGame_Source_StealthGame_Public_HealthComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_Public_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_Public_HealthComponent_h_13_SPARSE_DATA \
	StealthGame_Source_StealthGame_Public_HealthComponent_h_13_RPC_WRAPPERS \
	StealthGame_Source_StealthGame_Public_HealthComponent_h_13_INCLASS \
	StealthGame_Source_StealthGame_Public_HealthComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_StealthGame_Public_HealthComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_Public_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_Public_HealthComponent_h_13_SPARSE_DATA \
	StealthGame_Source_StealthGame_Public_HealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_Public_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_Public_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTHGAME_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_StealthGame_Public_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
