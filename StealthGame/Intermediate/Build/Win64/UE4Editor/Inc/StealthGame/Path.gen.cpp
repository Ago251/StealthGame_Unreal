// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StealthGame/Public/Path.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePath() {}
// Cross Module References
	STEALTHGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPatrolPoint();
	UPackage* Z_Construct_UPackage__Script_StealthGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STEALTHGAME_API UClass* Z_Construct_UClass_APath_NoRegister();
	STEALTHGAME_API UClass* Z_Construct_UClass_APath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FPatrolPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEALTHGAME_API uint32 Get_Z_Construct_UScriptStruct_FPatrolPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPatrolPoint, Z_Construct_UPackage__Script_StealthGame(), TEXT("PatrolPoint"), sizeof(FPatrolPoint), Get_Z_Construct_UScriptStruct_FPatrolPoint_Hash());
	}
	return Singleton;
}
template<> STEALTHGAME_API UScriptStruct* StaticStruct<FPatrolPoint>()
{
	return FPatrolPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPatrolPoint(FPatrolPoint::StaticStruct, TEXT("/Script/StealthGame"), TEXT("PatrolPoint"), false, nullptr, nullptr);
static struct FScriptStruct_StealthGame_StaticRegisterNativesFPatrolPoint
{
	FScriptStruct_StealthGame_StaticRegisterNativesFPatrolPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PatrolPoint")),new UScriptStruct::TCppStructOps<FPatrolPoint>);
	}
} ScriptStruct_StealthGame_StaticRegisterNativesFPatrolPoint;
	struct Z_Construct_UScriptStruct_FPatrolPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Path.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPatrolPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewProp_time_MetaData[] = {
		{ "Category", "PatrolPoint" },
		{ "ModuleRelativePath", "Public/Path.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatrolPoint, time), METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewProp_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewProp_time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewProp_ViewDirection_MetaData[] = {
		{ "Category", "PatrolPoint" },
		{ "ModuleRelativePath", "Public/Path.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewProp_ViewDirection = { "ViewDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatrolPoint, ViewDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewProp_ViewDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewProp_ViewDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewProp_position_MetaData[] = {
		{ "Category", "PatrolPoint" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/Path.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatrolPoint, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewProp_position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPatrolPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewProp_ViewDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatrolPoint_Statics::NewProp_position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPatrolPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StealthGame,
		nullptr,
		&NewStructOps,
		"PatrolPoint",
		sizeof(FPatrolPoint),
		alignof(FPatrolPoint),
		Z_Construct_UScriptStruct_FPatrolPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPatrolPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatrolPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPatrolPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPatrolPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StealthGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PatrolPoint"), sizeof(FPatrolPoint), Get_Z_Construct_UScriptStruct_FPatrolPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPatrolPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPatrolPoint_Hash() { return 3015552279U; }
	DEFINE_FUNCTION(APath::execGetWaitTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWaitTime(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APath::execGetPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPoint(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APath::execGetNextPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNextPoint(Z_Param_index);
		P_NATIVE_END;
	}
	void APath::StaticRegisterNativesAPath()
	{
		UClass* Class = APath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNextPoint", &APath::execGetNextPoint },
			{ "GetPoint", &APath::execGetPoint },
			{ "GetWaitTime", &APath::execGetWaitTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APath_GetNextPoint_Statics
	{
		struct Path_eventGetNextPoint_Parms
		{
			int32 index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APath_GetNextPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Path_eventGetNextPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APath_GetNextPoint_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Path_eventGetNextPoint_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APath_GetNextPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APath_GetNextPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APath_GetNextPoint_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APath_GetNextPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "PatrolPath" },
		{ "ModuleRelativePath", "Public/Path.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APath_GetNextPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APath, nullptr, "GetNextPoint", nullptr, nullptr, sizeof(Path_eventGetNextPoint_Parms), Z_Construct_UFunction_APath_GetNextPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_GetNextPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APath_GetNextPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_GetNextPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APath_GetNextPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APath_GetNextPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APath_GetPoint_Statics
	{
		struct Path_eventGetPoint_Parms
		{
			int32 index;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APath_GetPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Path_eventGetPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APath_GetPoint_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Path_eventGetPoint_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APath_GetPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APath_GetPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APath_GetPoint_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APath_GetPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "PatrolPath" },
		{ "ModuleRelativePath", "Public/Path.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APath_GetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APath, nullptr, "GetPoint", nullptr, nullptr, sizeof(Path_eventGetPoint_Parms), Z_Construct_UFunction_APath_GetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_GetPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APath_GetPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_GetPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APath_GetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APath_GetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APath_GetWaitTime_Statics
	{
		struct Path_eventGetWaitTime_Parms
		{
			int32 index;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APath_GetWaitTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Path_eventGetWaitTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APath_GetWaitTime_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Path_eventGetWaitTime_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APath_GetWaitTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APath_GetWaitTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APath_GetWaitTime_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APath_GetWaitTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "PatrolPath" },
		{ "ModuleRelativePath", "Public/Path.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APath_GetWaitTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APath, nullptr, "GetWaitTime", nullptr, nullptr, sizeof(Path_eventGetWaitTime_Parms), Z_Construct_UFunction_APath_GetWaitTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_GetWaitTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APath_GetWaitTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APath_GetWaitTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APath_GetWaitTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APath_GetWaitTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APath_NoRegister()
	{
		return APath::StaticClass();
	}
	struct Z_Construct_UClass_APath_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StealthGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APath_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APath_GetNextPoint, "GetNextPoint" }, // 2588314293
		{ &Z_Construct_UFunction_APath_GetPoint, "GetPoint" }, // 34319949
		{ &Z_Construct_UFunction_APath_GetWaitTime, "GetWaitTime" }, // 3801264463
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Path.h" },
		{ "ModuleRelativePath", "Public/Path.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APath_Statics::NewProp_length_MetaData[] = {
		{ "Category", "Path Points" },
		{ "ModuleRelativePath", "Public/Path.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APath_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APath, length), METADATA_PARAMS(Z_Construct_UClass_APath_Statics::NewProp_length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::NewProp_length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APath_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Path Points" },
		{ "ModuleRelativePath", "Public/Path.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APath_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APath, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APath_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APath_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPatrolPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APath_Statics::NewProp_length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APath_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APath_Statics::NewProp_Points_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APath_Statics::ClassParams = {
		&APath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APath, 1622013479);
	template<> STEALTHGAME_API UClass* StaticClass<APath>()
	{
		return APath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APath(Z_Construct_UClass_APath, &APath::StaticClass, TEXT("/Script/StealthGame"), TEXT("APath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
