// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StealthGame/StealthGameCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthGameCharacter() {}
// Cross Module References
	STEALTHGAME_API UClass* Z_Construct_UClass_AStealthGameCharacter_NoRegister();
	STEALTHGAME_API UClass* Z_Construct_UClass_AStealthGameCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_StealthGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStealthGameCharacter::execCanJumpCharacter)
	{
		P_GET_UBOOL(Z_Param_jumpButton);
		P_GET_UBOOL(Z_Param_crouchButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanJumpCharacter(Z_Param_jumpButton,Z_Param_crouchButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStealthGameCharacter::execHandleProgressCameraOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleProgressCameraOffset(Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStealthGameCharacter::execHandleProgressArmLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Length);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleProgressArmLength(Z_Param_Length);
		P_NATIVE_END;
	}
	void AStealthGameCharacter::StaticRegisterNativesAStealthGameCharacter()
	{
		UClass* Class = AStealthGameCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanJumpCharacter", &AStealthGameCharacter::execCanJumpCharacter },
			{ "HandleProgressArmLength", &AStealthGameCharacter::execHandleProgressArmLength },
			{ "HandleProgressCameraOffset", &AStealthGameCharacter::execHandleProgressCameraOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics
	{
		struct StealthGameCharacter_eventCanJumpCharacter_Parms
		{
			bool jumpButton;
			bool crouchButton;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_crouchButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_crouchButton;
		static void NewProp_jumpButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_jumpButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StealthGameCharacter_eventCanJumpCharacter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StealthGameCharacter_eventCanJumpCharacter_Parms), &Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::NewProp_crouchButton_SetBit(void* Obj)
	{
		((StealthGameCharacter_eventCanJumpCharacter_Parms*)Obj)->crouchButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::NewProp_crouchButton = { "crouchButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StealthGameCharacter_eventCanJumpCharacter_Parms), &Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::NewProp_crouchButton_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::NewProp_jumpButton_SetBit(void* Obj)
	{
		((StealthGameCharacter_eventCanJumpCharacter_Parms*)Obj)->jumpButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::NewProp_jumpButton = { "jumpButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StealthGameCharacter_eventCanJumpCharacter_Parms), &Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::NewProp_jumpButton_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::NewProp_crouchButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::NewProp_jumpButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyFuctions" },
		{ "ModuleRelativePath", "StealthGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthGameCharacter, nullptr, "CanJumpCharacter", nullptr, nullptr, sizeof(StealthGameCharacter_eventCanJumpCharacter_Parms), Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStealthGameCharacter_HandleProgressArmLength_Statics
	{
		struct StealthGameCharacter_eventHandleProgressArmLength_Parms
		{
			float Length;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStealthGameCharacter_HandleProgressArmLength_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthGameCharacter_eventHandleProgressArmLength_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthGameCharacter_HandleProgressArmLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameCharacter_HandleProgressArmLength_Statics::NewProp_Length,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthGameCharacter_HandleProgressArmLength_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// End of APawn interface\n" },
		{ "ModuleRelativePath", "StealthGameCharacter.h" },
		{ "ToolTip", "End of APawn interface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthGameCharacter_HandleProgressArmLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthGameCharacter, nullptr, "HandleProgressArmLength", nullptr, nullptr, sizeof(StealthGameCharacter_eventHandleProgressArmLength_Parms), Z_Construct_UFunction_AStealthGameCharacter_HandleProgressArmLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameCharacter_HandleProgressArmLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthGameCharacter_HandleProgressArmLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameCharacter_HandleProgressArmLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthGameCharacter_HandleProgressArmLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthGameCharacter_HandleProgressArmLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStealthGameCharacter_HandleProgressCameraOffset_Statics
	{
		struct StealthGameCharacter_eventHandleProgressCameraOffset_Parms
		{
			FVector Offset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStealthGameCharacter_HandleProgressCameraOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthGameCharacter_eventHandleProgressCameraOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthGameCharacter_HandleProgressCameraOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameCharacter_HandleProgressCameraOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthGameCharacter_HandleProgressCameraOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthGameCharacter_HandleProgressCameraOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthGameCharacter, nullptr, "HandleProgressCameraOffset", nullptr, nullptr, sizeof(StealthGameCharacter_eventHandleProgressCameraOffset_Parms), Z_Construct_UFunction_AStealthGameCharacter_HandleProgressCameraOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameCharacter_HandleProgressCameraOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthGameCharacter_HandleProgressCameraOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameCharacter_HandleProgressCameraOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthGameCharacter_HandleProgressCameraOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthGameCharacter_HandleProgressCameraOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStealthGameCharacter_NoRegister()
	{
		return AStealthGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AStealthGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OffsetCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jumpButtonDown_MetaData[];
#endif
		static void NewProp_jumpButtonDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_jumpButtonDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_crouchButtonDown_MetaData[];
#endif
		static void NewProp_crouchButtonDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_crouchButtonDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStealthGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_StealthGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStealthGameCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStealthGameCharacter_CanJumpCharacter, "CanJumpCharacter" }, // 1919913920
		{ &Z_Construct_UFunction_AStealthGameCharacter_HandleProgressArmLength, "HandleProgressArmLength" }, // 2386437128
		{ &Z_Construct_UFunction_AStealthGameCharacter_HandleProgressCameraOffset, "HandleProgressCameraOffset" }, // 1132518982
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StealthGameCharacter.h" },
		{ "ModuleRelativePath", "StealthGameCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_OffsetCurve_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "StealthGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_OffsetCurve = { "OffsetCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthGameCharacter, OffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_OffsetCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_OffsetCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_MovementCurve_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "StealthGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_MovementCurve = { "MovementCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthGameCharacter, MovementCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_MovementCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_MovementCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_jumpButtonDown_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "StealthGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_jumpButtonDown_SetBit(void* Obj)
	{
		((AStealthGameCharacter*)Obj)->jumpButtonDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_jumpButtonDown = { "jumpButtonDown", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStealthGameCharacter), &Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_jumpButtonDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_jumpButtonDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_jumpButtonDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_crouchButtonDown_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "StealthGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_crouchButtonDown_SetBit(void* Obj)
	{
		((AStealthGameCharacter*)Obj)->crouchButtonDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_crouchButtonDown = { "crouchButtonDown", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStealthGameCharacter), &Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_crouchButtonDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_crouchButtonDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_crouchButtonDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "StealthGameCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthGameCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "StealthGameCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthGameCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StealthGameCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthGameCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StealthGameCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthGameCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStealthGameCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_OffsetCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_MovementCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_jumpButtonDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_crouchButtonDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStealthGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthGameCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStealthGameCharacter_Statics::ClassParams = {
		&AStealthGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStealthGameCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStealthGameCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStealthGameCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStealthGameCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStealthGameCharacter, 2315664796);
	template<> STEALTHGAME_API UClass* StaticClass<AStealthGameCharacter>()
	{
		return AStealthGameCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStealthGameCharacter(Z_Construct_UClass_AStealthGameCharacter, &AStealthGameCharacter::StaticClass, TEXT("/Script/StealthGame"), TEXT("AStealthGameCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStealthGameCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
