// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StealthGame/Public/Cover.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCover() {}
// Cross Module References
	STEALTHGAME_API UClass* Z_Construct_UClass_ACover_NoRegister();
	STEALTHGAME_API UClass* Z_Construct_UClass_ACover();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StealthGame();
// End Cross Module References
	void ACover::StaticRegisterNativesACover()
	{
	}
	UClass* Z_Construct_UClass_ACover_NoRegister()
	{
		return ACover::StaticClass();
	}
	struct Z_Construct_UClass_ACover_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACover_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StealthGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACover_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cover.h" },
		{ "ModuleRelativePath", "Public/Cover.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACover_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACover>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACover_Statics::ClassParams = {
		&ACover::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACover_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACover_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACover()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACover_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACover, 2799910250);
	template<> STEALTHGAME_API UClass* StaticClass<ACover>()
	{
		return ACover::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACover(Z_Construct_UClass_ACover, &ACover::StaticClass, TEXT("/Script/StealthGame"), TEXT("ACover"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACover);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
