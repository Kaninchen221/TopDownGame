// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CISQLite3/Public/SQLiteBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQLiteBlueprintFunctionLibrary() {}
// Cross Module References
	CISQLITE3_API UClass* Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_NoRegister();
	CISQLITE3_API UClass* Z_Construct_UClass_USQLiteBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CISQLite3();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteTableField();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteIndex();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLitePrimaryKey();
// End Cross Module References
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execSQLiteIndexFunction)
	{
		P_GET_TARRAY(FSQLiteTableField,Z_Param_Fields);
		P_GET_PROPERTY(FStrProperty,Z_Param_idxName);
		P_GET_UBOOL(Z_Param_Unique);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSQLiteIndex*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::SQLiteIndexFunction(Z_Param_Fields,Z_Param_idxName,Z_Param_Unique);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execSQLitePrimaryKey)
	{
		P_GET_TARRAY(FSQLiteTableField,Z_Param_Fields);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSQLitePrimaryKey*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::SQLitePrimaryKey(Z_Param_Fields);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execSQLiteNUMERIC)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_UBOOL(Z_Param_PK);
		P_GET_UBOOL(Z_Param_Unique);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSQLiteTableField*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::SQLiteNUMERIC(Z_Param_FieldName,Z_Param_PK,Z_Param_Unique);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execSQLiteREAL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_UBOOL(Z_Param_PK);
		P_GET_UBOOL(Z_Param_Unique);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSQLiteTableField*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::SQLiteREAL(Z_Param_FieldName,Z_Param_PK,Z_Param_Unique);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execSQLiteTEXT)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_UBOOL(Z_Param_PK);
		P_GET_UBOOL(Z_Param_Unique);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSQLiteTableField*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::SQLiteTEXT(Z_Param_FieldName,Z_Param_PK,Z_Param_Unique);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execSQLiteINTEGER)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_UBOOL(Z_Param_PK);
		P_GET_UBOOL(Z_Param_AI);
		P_GET_UBOOL(Z_Param_Unique);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSQLiteTableField*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::SQLiteINTEGER(Z_Param_FieldName,Z_Param_PK,Z_Param_AI,Z_Param_Unique);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execQueryFinal)
	{
		P_GET_STRUCT_REF(FSQLiteQueryLogicExpectedNode,Z_Param_Out_QueryEndNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSQLiteQueryFinalizedQuery*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::QueryFinal(Z_Param_Out_QueryEndNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execQueryLogicOr)
	{
		P_GET_STRUCT_REF(FSQLiteQueryLogicExpectedNode,Z_Param_Out_LHS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSQLiteQueryTermExpectedNode*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::QueryLogicOr(Z_Param_Out_LHS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execQueryLogicAnd)
	{
		P_GET_STRUCT_REF(FSQLiteQueryLogicExpectedNode,Z_Param_Out_LHS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSQLiteQueryTermExpectedNode*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::QueryLogicAnd(Z_Param_Out_LHS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execQueryTerm)
	{
		P_GET_STRUCT_REF(FSQLiteQueryTermExpectedNode,Z_Param_Out_LogicOperation);
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_PROPERTY(FStrProperty,Z_Param_Operator);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSQLiteQueryLogicExpectedNode*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::QueryTerm(Z_Param_Out_LogicOperation,Z_Param_Field,Z_Param_Operator,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execQueryEnd)
	{
		P_GET_STRUCT_REF(FSQLiteQueryLogicExpectedNode,Z_Param_Out_LastQueryTerm);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSQLiteQueryLogicExpectedNode*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::QueryEnd(Z_Param_Out_LastQueryTerm);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execQueryStart)
	{
		P_GET_STRUCT(FSQLiteQueryTermExpectedNode,Z_Param_LogicOperationOrNone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSQLiteQueryTermExpectedNode*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::QueryStart(Z_Param_LogicOperationOrNone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execCastToFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SQLiteResultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::CastToFloat(Z_Param_SQLiteResultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execCastToBoolean)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SQLiteResultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::CastToBoolean(Z_Param_SQLiteResultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteBlueprintFunctionLibrary::execCastToInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SQLiteResultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USQLiteBlueprintFunctionLibrary::CastToInt(Z_Param_SQLiteResultValue);
		P_NATIVE_END;
	}
	void USQLiteBlueprintFunctionLibrary::StaticRegisterNativesUSQLiteBlueprintFunctionLibrary()
	{
		UClass* Class = USQLiteBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CastToBoolean", &USQLiteBlueprintFunctionLibrary::execCastToBoolean },
			{ "CastToFloat", &USQLiteBlueprintFunctionLibrary::execCastToFloat },
			{ "CastToInt", &USQLiteBlueprintFunctionLibrary::execCastToInt },
			{ "QueryEnd", &USQLiteBlueprintFunctionLibrary::execQueryEnd },
			{ "QueryFinal", &USQLiteBlueprintFunctionLibrary::execQueryFinal },
			{ "QueryLogicAnd", &USQLiteBlueprintFunctionLibrary::execQueryLogicAnd },
			{ "QueryLogicOr", &USQLiteBlueprintFunctionLibrary::execQueryLogicOr },
			{ "QueryStart", &USQLiteBlueprintFunctionLibrary::execQueryStart },
			{ "QueryTerm", &USQLiteBlueprintFunctionLibrary::execQueryTerm },
			{ "SQLiteIndexFunction", &USQLiteBlueprintFunctionLibrary::execSQLiteIndexFunction },
			{ "SQLiteINTEGER", &USQLiteBlueprintFunctionLibrary::execSQLiteINTEGER },
			{ "SQLiteNUMERIC", &USQLiteBlueprintFunctionLibrary::execSQLiteNUMERIC },
			{ "SQLitePrimaryKey", &USQLiteBlueprintFunctionLibrary::execSQLitePrimaryKey },
			{ "SQLiteREAL", &USQLiteBlueprintFunctionLibrary::execSQLiteREAL },
			{ "SQLiteTEXT", &USQLiteBlueprintFunctionLibrary::execSQLiteTEXT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventCastToBoolean_Parms
		{
			FString SQLiteResultValue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SQLiteResultValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean_Statics::NewProp_SQLiteResultValue = { "SQLiteResultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventCastToBoolean_Parms, SQLiteResultValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQLiteBlueprintFunctionLibrary_eventCastToBoolean_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteBlueprintFunctionLibrary_eventCastToBoolean_Parms), &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean_Statics::NewProp_SQLiteResultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Value Conversion" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "CastToBoolean", nullptr, nullptr, sizeof(SQLiteBlueprintFunctionLibrary_eventCastToBoolean_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToFloat_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventCastToFloat_Parms
		{
			FString SQLiteResultValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SQLiteResultValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToFloat_Statics::NewProp_SQLiteResultValue = { "SQLiteResultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventCastToFloat_Parms, SQLiteResultValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventCastToFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToFloat_Statics::NewProp_SQLiteResultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Value Conversion" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "CastToFloat", nullptr, nullptr, sizeof(SQLiteBlueprintFunctionLibrary_eventCastToFloat_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToInt_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventCastToInt_Parms
		{
			FString SQLiteResultValue;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SQLiteResultValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToInt_Statics::NewProp_SQLiteResultValue = { "SQLiteResultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventCastToInt_Parms, SQLiteResultValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventCastToInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToInt_Statics::NewProp_SQLiteResultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Value Conversion" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "CastToInt", nullptr, nullptr, sizeof(SQLiteBlueprintFunctionLibrary_eventCastToInt_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventQueryEnd_Parms
		{
			FSQLiteQueryLogicExpectedNode LastQueryTerm;
			FSQLiteQueryLogicExpectedNode ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastQueryTerm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastQueryTerm;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics::NewProp_LastQueryTerm_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics::NewProp_LastQueryTerm = { "LastQueryTerm", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventQueryEnd_Parms, LastQueryTerm), Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics::NewProp_LastQueryTerm_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics::NewProp_LastQueryTerm_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventQueryEnd_Parms, ReturnValue), Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics::NewProp_LastQueryTerm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query" },
		{ "Comment", "/** End a query block. NOTE: To link this query to a Get Data node's query pin, link a Finalize Query node to the end of the query chain and link that to the pin. */" },
		{ "CompactNodeTitle", ")" },
		{ "DisplayName", "Query End" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
		{ "ToolTip", "End a query block. NOTE: To link this query to a Get Data node's query pin, link a Finalize Query node to the end of the query chain and link that to the pin." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "QueryEnd", nullptr, nullptr, sizeof(SQLiteBlueprintFunctionLibrary_eventQueryEnd_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventQueryFinal_Parms
		{
			FSQLiteQueryLogicExpectedNode QueryEndNode;
			FSQLiteQueryFinalizedQuery ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryEndNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryEndNode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics::NewProp_QueryEndNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics::NewProp_QueryEndNode = { "QueryEndNode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventQueryFinal_Parms, QueryEndNode), Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics::NewProp_QueryEndNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics::NewProp_QueryEndNode_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventQueryFinal_Parms, ReturnValue), Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics::NewProp_QueryEndNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query" },
		{ "Comment", "/** Finalizes the query. This node's output can be linked to a Get Data node's query source pin. */" },
		{ "DisplayName", "Finalize Query" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Finalizes the query. This node's output can be linked to a Get Data node's query source pin." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "QueryFinal", nullptr, nullptr, sizeof(SQLiteBlueprintFunctionLibrary_eventQueryFinal_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventQueryLogicAnd_Parms
		{
			FSQLiteQueryLogicExpectedNode LHS;
			FSQLiteQueryTermExpectedNode ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LHS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LHS;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics::NewProp_LHS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics::NewProp_LHS = { "LHS", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventQueryLogicAnd_Parms, LHS), Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics::NewProp_LHS_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics::NewProp_LHS_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventQueryLogicAnd_Parms, ReturnValue), Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics::NewProp_LHS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query|Logic" },
		{ "Comment", "/** AND logic node, combining two terms. */" },
		{ "CompactNodeTitle", "AND" },
		{ "DisplayName", "AND" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
		{ "ToolTip", "AND logic node, combining two terms." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "QueryLogicAnd", nullptr, nullptr, sizeof(SQLiteBlueprintFunctionLibrary_eventQueryLogicAnd_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventQueryLogicOr_Parms
		{
			FSQLiteQueryLogicExpectedNode LHS;
			FSQLiteQueryTermExpectedNode ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LHS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LHS;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics::NewProp_LHS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics::NewProp_LHS = { "LHS", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventQueryLogicOr_Parms, LHS), Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics::NewProp_LHS_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics::NewProp_LHS_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventQueryLogicOr_Parms, ReturnValue), Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics::NewProp_LHS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query|Logic" },
		{ "Comment", "/** OR logic node, combining two terms. */" },
		{ "CompactNodeTitle", "OR" },
		{ "DisplayName", "OR" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
		{ "ToolTip", "OR logic node, combining two terms." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "QueryLogicOr", nullptr, nullptr, sizeof(SQLiteBlueprintFunctionLibrary_eventQueryLogicOr_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryStart_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventQueryStart_Parms
		{
			FSQLiteQueryTermExpectedNode LogicOperationOrNone;
			FSQLiteQueryTermExpectedNode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LogicOperationOrNone;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryStart_Statics::NewProp_LogicOperationOrNone = { "LogicOperationOrNone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventQueryStart_Parms, LogicOperationOrNone), Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventQueryStart_Parms, ReturnValue), Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryStart_Statics::NewProp_LogicOperationOrNone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query" },
		{ "Comment", "/** Start a new query block. */" },
		{ "CompactNodeTitle", "(" },
		{ "DisplayName", "Query Start" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Start a new query block." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "QueryStart", nullptr, nullptr, sizeof(SQLiteBlueprintFunctionLibrary_eventQueryStart_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventQueryTerm_Parms
		{
			FSQLiteQueryTermExpectedNode LogicOperation;
			FString Field;
			FString Operator;
			FString Value;
			FSQLiteQueryLogicExpectedNode ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogicOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LogicOperation;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Operator;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::NewProp_LogicOperation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::NewProp_LogicOperation = { "LogicOperation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventQueryTerm_Parms, LogicOperation), Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::NewProp_LogicOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::NewProp_LogicOperation_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventQueryTerm_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventQueryTerm_Parms, Operator), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventQueryTerm_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventQueryTerm_Parms, ReturnValue), Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::NewProp_LogicOperation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::NewProp_Operator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query" },
		{ "Comment", "/** A query term. Basically creating a \"Key <operator> Value\" comparison. */" },
		{ "DisplayName", "Query Term" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
		{ "ToolTip", "A query term. Basically creating a \"Key <operator> Value\" comparison." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "QueryTerm", nullptr, nullptr, sizeof(SQLiteBlueprintFunctionLibrary_eventQueryTerm_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventSQLiteIndexFunction_Parms
		{
			TArray<FSQLiteTableField> Fields;
			FString idxName;
			bool Unique;
			FSQLiteIndex ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fields_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fields;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_idxName;
		static void NewProp_Unique_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Unique;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSQLiteTableField, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::NewProp_Fields_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventSQLiteIndexFunction_Parms, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::NewProp_Fields_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::NewProp_idxName = { "idxName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventSQLiteIndexFunction_Parms, idxName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::NewProp_Unique_SetBit(void* Obj)
	{
		((SQLiteBlueprintFunctionLibrary_eventSQLiteIndexFunction_Parms*)Obj)->Unique = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::NewProp_Unique = { "Unique", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteBlueprintFunctionLibrary_eventSQLiteIndexFunction_Parms), &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::NewProp_Unique_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventSQLiteIndexFunction_Parms, ReturnValue), Z_Construct_UScriptStruct_FSQLiteIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::NewProp_Fields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::NewProp_Fields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::NewProp_idxName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::NewProp_Unique,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query|DataTypes" },
		{ "DisplayName", "Index (SQLite)" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "SQLiteIndexFunction", nullptr, nullptr, sizeof(SQLiteBlueprintFunctionLibrary_eventSQLiteIndexFunction_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventSQLiteINTEGER_Parms
		{
			FString FieldName;
			bool PK;
			bool AI;
			bool Unique;
			FSQLiteTableField ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PK_MetaData[];
#endif
		static void NewProp_PK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AI_MetaData[];
#endif
		static void NewProp_AI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Unique_MetaData[];
#endif
		static void NewProp_Unique_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Unique;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventSQLiteINTEGER_Parms, FieldName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_PK_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_PK_SetBit(void* Obj)
	{
		((SQLiteBlueprintFunctionLibrary_eventSQLiteINTEGER_Parms*)Obj)->PK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_PK = { "PK", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteBlueprintFunctionLibrary_eventSQLiteINTEGER_Parms), &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_PK_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_PK_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_PK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_AI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_AI_SetBit(void* Obj)
	{
		((SQLiteBlueprintFunctionLibrary_eventSQLiteINTEGER_Parms*)Obj)->AI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_AI = { "AI", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteBlueprintFunctionLibrary_eventSQLiteINTEGER_Parms), &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_AI_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_AI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_AI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_Unique_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_Unique_SetBit(void* Obj)
	{
		((SQLiteBlueprintFunctionLibrary_eventSQLiteINTEGER_Parms*)Obj)->Unique = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_Unique = { "Unique", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteBlueprintFunctionLibrary_eventSQLiteINTEGER_Parms), &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_Unique_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_Unique_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_Unique_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventSQLiteINTEGER_Parms, ReturnValue), Z_Construct_UScriptStruct_FSQLiteTableField, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_PK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_AI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_Unique,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query|DataTypes" },
		{ "DisplayName", "INTEGER (SQLite)" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "SQLiteINTEGER", nullptr, nullptr, sizeof(SQLiteBlueprintFunctionLibrary_eventSQLiteINTEGER_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventSQLiteNUMERIC_Parms
		{
			FString FieldName;
			bool PK;
			bool Unique;
			FSQLiteTableField ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PK_MetaData[];
#endif
		static void NewProp_PK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Unique_MetaData[];
#endif
		static void NewProp_Unique_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Unique;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventSQLiteNUMERIC_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_PK_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_PK_SetBit(void* Obj)
	{
		((SQLiteBlueprintFunctionLibrary_eventSQLiteNUMERIC_Parms*)Obj)->PK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_PK = { "PK", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteBlueprintFunctionLibrary_eventSQLiteNUMERIC_Parms), &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_PK_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_PK_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_PK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_Unique_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_Unique_SetBit(void* Obj)
	{
		((SQLiteBlueprintFunctionLibrary_eventSQLiteNUMERIC_Parms*)Obj)->Unique = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_Unique = { "Unique", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteBlueprintFunctionLibrary_eventSQLiteNUMERIC_Parms), &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_Unique_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_Unique_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_Unique_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventSQLiteNUMERIC_Parms, ReturnValue), Z_Construct_UScriptStruct_FSQLiteTableField, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_PK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_Unique,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query|DataTypes" },
		{ "DisplayName", "NUMERIC (SQLite)" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "SQLiteNUMERIC", nullptr, nullptr, sizeof(SQLiteBlueprintFunctionLibrary_eventSQLiteNUMERIC_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventSQLitePrimaryKey_Parms
		{
			TArray<FSQLiteTableField> Fields;
			FSQLitePrimaryKey ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fields_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fields;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSQLiteTableField, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::NewProp_Fields_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventSQLitePrimaryKey_Parms, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::NewProp_Fields_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventSQLitePrimaryKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FSQLitePrimaryKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::NewProp_Fields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::NewProp_Fields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query|DataTypes" },
		{ "DisplayName", "Primary Key (SQLite)" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "SQLitePrimaryKey", nullptr, nullptr, sizeof(SQLiteBlueprintFunctionLibrary_eventSQLitePrimaryKey_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventSQLiteREAL_Parms
		{
			FString FieldName;
			bool PK;
			bool Unique;
			FSQLiteTableField ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PK_MetaData[];
#endif
		static void NewProp_PK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Unique_MetaData[];
#endif
		static void NewProp_Unique_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Unique;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventSQLiteREAL_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_PK_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_PK_SetBit(void* Obj)
	{
		((SQLiteBlueprintFunctionLibrary_eventSQLiteREAL_Parms*)Obj)->PK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_PK = { "PK", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteBlueprintFunctionLibrary_eventSQLiteREAL_Parms), &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_PK_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_PK_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_PK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_Unique_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_Unique_SetBit(void* Obj)
	{
		((SQLiteBlueprintFunctionLibrary_eventSQLiteREAL_Parms*)Obj)->Unique = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_Unique = { "Unique", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteBlueprintFunctionLibrary_eventSQLiteREAL_Parms), &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_Unique_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_Unique_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_Unique_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventSQLiteREAL_Parms, ReturnValue), Z_Construct_UScriptStruct_FSQLiteTableField, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_PK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_Unique,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query|DataTypes" },
		{ "DisplayName", "REAL (SQLite)" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "SQLiteREAL", nullptr, nullptr, sizeof(SQLiteBlueprintFunctionLibrary_eventSQLiteREAL_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics
	{
		struct SQLiteBlueprintFunctionLibrary_eventSQLiteTEXT_Parms
		{
			FString FieldName;
			bool PK;
			bool Unique;
			FSQLiteTableField ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PK_MetaData[];
#endif
		static void NewProp_PK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Unique_MetaData[];
#endif
		static void NewProp_Unique_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Unique;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventSQLiteTEXT_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_PK_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_PK_SetBit(void* Obj)
	{
		((SQLiteBlueprintFunctionLibrary_eventSQLiteTEXT_Parms*)Obj)->PK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_PK = { "PK", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteBlueprintFunctionLibrary_eventSQLiteTEXT_Parms), &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_PK_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_PK_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_PK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_Unique_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_Unique_SetBit(void* Obj)
	{
		((SQLiteBlueprintFunctionLibrary_eventSQLiteTEXT_Parms*)Obj)->Unique = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_Unique = { "Unique", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteBlueprintFunctionLibrary_eventSQLiteTEXT_Parms), &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_Unique_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_Unique_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_Unique_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteBlueprintFunctionLibrary_eventSQLiteTEXT_Parms, ReturnValue), Z_Construct_UScriptStruct_FSQLiteTableField, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_PK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_Unique,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query|DataTypes" },
		{ "DisplayName", "TEXT (SQLite)" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, nullptr, "SQLiteTEXT", nullptr, nullptr, sizeof(SQLiteBlueprintFunctionLibrary_eventSQLiteTEXT_Parms), Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_NoRegister()
	{
		return USQLiteBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CISQLite3,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToBoolean, "CastToBoolean" }, // 428104205
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToFloat, "CastToFloat" }, // 2823642431
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_CastToInt, "CastToInt" }, // 2995172107
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryEnd, "QueryEnd" }, // 2582159353
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryFinal, "QueryFinal" }, // 2941406294
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicAnd, "QueryLogicAnd" }, // 4226541490
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryLogicOr, "QueryLogicOr" }, // 3361709537
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryStart, "QueryStart" }, // 911305792
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_QueryTerm, "QueryTerm" }, // 463064188
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteIndexFunction, "SQLiteIndexFunction" }, // 2983652816
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteINTEGER, "SQLiteINTEGER" }, // 1056691462
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteNUMERIC, "SQLiteNUMERIC" }, // 420365100
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLitePrimaryKey, "SQLitePrimaryKey" }, // 2561313369
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteREAL, "SQLiteREAL" }, // 4075905277
		{ &Z_Construct_UFunction_USQLiteBlueprintFunctionLibrary_SQLiteTEXT, "SQLiteTEXT" }, // 3602414644
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09""Blueprint function library, convenience stuff.\n*/" },
		{ "IncludePath", "SQLiteBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Blueprint function library, convenience stuff." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQLiteBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::ClassParams = {
		&USQLiteBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQLiteBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQLiteBlueprintFunctionLibrary, 1865773305);
	template<> CISQLITE3_API UClass* StaticClass<USQLiteBlueprintFunctionLibrary>()
	{
		return USQLiteBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQLiteBlueprintFunctionLibrary(Z_Construct_UClass_USQLiteBlueprintFunctionLibrary, &USQLiteBlueprintFunctionLibrary::StaticClass, TEXT("/Script/CISQLite3"), TEXT("USQLiteBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQLiteBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
