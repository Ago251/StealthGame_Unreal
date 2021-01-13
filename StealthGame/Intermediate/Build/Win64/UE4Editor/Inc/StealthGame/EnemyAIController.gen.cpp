// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StealthGame/Public/EnemyAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAIController() {}
// Cross Module References
	STEALTHGAME_API UClass* Z_Construct_UClass_AEnemyAIController_NoRegister();
	STEALTHGAME_API UClass* Z_Construct_UClass_AEnemyAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_StealthGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AEnemyAIController::execOnPerceptionUpdate_SenseManagement)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_UpdateActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerceptionUpdate_SenseManagement(Z_Param_Out_UpdateActors);
		P_NATIVE_END;
	}
	void AEnemyAIController::StaticRegisterNativesAEnemyAIController()
	{
		UClass* Class = AEnemyAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPerceptionUpdate_SenseManagement", &AEnemyAIController::execOnPerceptionUpdate_SenseManagement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics
	{
		struct EnemyAIController_eventOnPerceptionUpdate_SenseManagement_Parms
		{
			TArray<AActor*> UpdateActors;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpdateActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdateActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics::NewProp_UpdateActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics::NewProp_UpdateActors = { "UpdateActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyAIController_eventOnPerceptionUpdate_SenseManagement_Parms, UpdateActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics::NewProp_UpdateActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics::NewProp_UpdateActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics::NewProp_UpdateActors_Inner = { "UpdateActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics::NewProp_UpdateActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics::NewProp_UpdateActors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyAIController, nullptr, "OnPerceptionUpdate_SenseManagement", nullptr, nullptr, sizeof(EnemyAIController_eventOnPerceptionUpdate_SenseManagement_Parms), Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyAIController_NoRegister()
	{
		return AEnemyAIController::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviourTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviourTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_StealthGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyAIController_OnPerceptionUpdate_SenseManagement, "OnPerceptionUpdate_SenseManagement" }, // 3481583745
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EnemyAIController.h" },
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAIController_Statics::NewProp_BehaviourTree_MetaData[] = {
		{ "Category", "AI: behaviour tree" },
		{ "ModuleRelativePath", "Public/EnemyAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyAIController_Statics::NewProp_BehaviourTree = { "BehaviourTree", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyAIController, BehaviourTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_BehaviourTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::NewProp_BehaviourTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAIController_Statics::NewProp_BehaviourTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyAIController_Statics::ClassParams = {
		&AEnemyAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyAIController, 3455708911);
	template<> STEALTHGAME_API UClass* StaticClass<AEnemyAIController>()
	{
		return AEnemyAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyAIController(Z_Construct_UClass_AEnemyAIController, &AEnemyAIController::StaticClass, TEXT("/Script/StealthGame"), TEXT("AEnemyAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
