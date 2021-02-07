// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CISQLite3/Public/SQLiteDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQLiteDatabase() {}
// Cross Module References
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteQueryResult();
	UPackage* Z_Construct_UPackage__Script_CISQLite3();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteQueryResultRow();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteKeyValuePair();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteDatabaseReference();
	CISQLITE3_API UClass* Z_Construct_UClass_USQLiteDatabase_NoRegister();
	CISQLITE3_API UClass* Z_Construct_UClass_USQLiteDatabase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteIndex();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteTableField();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLitePrimaryKey();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteTable();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteTableRowSimulator();
// End Cross Module References
class UScriptStruct* FSQLiteQueryResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CISQLITE3_API uint32 Get_Z_Construct_UScriptStruct_FSQLiteQueryResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLiteQueryResult, Z_Construct_UPackage__Script_CISQLite3(), TEXT("SQLiteQueryResult"), sizeof(FSQLiteQueryResult), Get_Z_Construct_UScriptStruct_FSQLiteQueryResult_Hash());
	}
	return Singleton;
}
template<> CISQLITE3_API UScriptStruct* StaticStruct<FSQLiteQueryResult>()
{
	return FSQLiteQueryResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQLiteQueryResult(FSQLiteQueryResult::StaticStruct, TEXT("/Script/CISQLite3"), TEXT("SQLiteQueryResult"), false, nullptr, nullptr);
static struct FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteQueryResult
{
	FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteQueryResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQLiteQueryResult")),new UScriptStruct::TCppStructOps<FSQLiteQueryResult>);
	}
} ScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteQueryResult;
	struct Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultRows_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultRows_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultRows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSQLiteQueryResult>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_ResultRows_Inner = { "ResultRows", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSQLiteQueryResultRow, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_ResultRows_MetaData[] = {
		{ "Category", "SQLite Query Result" },
		{ "Comment", "/** The resulting rows from the query */" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "The resulting rows from the query" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_ResultRows = { "ResultRows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteQueryResult, ResultRows), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_ResultRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_ResultRows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_Success_MetaData[] = {
		{ "Category", "SQLite Query Result" },
		{ "Comment", "/** Was the query successful or not */" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Was the query successful or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FSQLiteQueryResult*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSQLiteQueryResult), &Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "SQLite Query Result" },
		{ "Comment", "/** If the query was unsuccessful a human readable error message will be populated here */" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "If the query was unsuccessful a human readable error message will be populated here" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteQueryResult, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_ResultRows_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_ResultRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::NewProp_ErrorMessage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CISQLite3,
		nullptr,
		&NewStructOps,
		"SQLiteQueryResult",
		sizeof(FSQLiteQueryResult),
		alignof(FSQLiteQueryResult),
		Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSQLiteQueryResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSQLiteQueryResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CISQLite3();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQLiteQueryResult"), sizeof(FSQLiteQueryResult), Get_Z_Construct_UScriptStruct_FSQLiteQueryResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQLiteQueryResult_Hash() { return 838829738U; }
class UScriptStruct* FSQLiteQueryResultRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CISQLITE3_API uint32 Get_Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLiteQueryResultRow, Z_Construct_UPackage__Script_CISQLite3(), TEXT("SQLiteQueryResultRow"), sizeof(FSQLiteQueryResultRow), Get_Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Hash());
	}
	return Singleton;
}
template<> CISQLITE3_API UScriptStruct* StaticStruct<FSQLiteQueryResultRow>()
{
	return FSQLiteQueryResultRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQLiteQueryResultRow(FSQLiteQueryResultRow::StaticStruct, TEXT("/Script/CISQLite3"), TEXT("SQLiteQueryResultRow"), false, nullptr, nullptr);
static struct FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteQueryResultRow
{
	FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteQueryResultRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQLiteQueryResultRow")),new UScriptStruct::TCppStructOps<FSQLiteQueryResultRow>);
	}
} ScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteQueryResultRow;
	struct Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fields_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fields;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSQLiteQueryResultRow>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSQLiteKeyValuePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::NewProp_Fields_MetaData[] = {
		{ "Category", "SQLite Query Result" },
		{ "Comment", "/** A list of field name, field value pairs */" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "A list of field name, field value pairs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteQueryResultRow, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::NewProp_Fields_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::NewProp_Fields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::NewProp_Fields,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CISQLite3,
		nullptr,
		&NewStructOps,
		"SQLiteQueryResultRow",
		sizeof(FSQLiteQueryResultRow),
		alignof(FSQLiteQueryResultRow),
		Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSQLiteQueryResultRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CISQLite3();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQLiteQueryResultRow"), sizeof(FSQLiteQueryResultRow), Get_Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Hash() { return 2961695569U; }
class UScriptStruct* FSQLiteKeyValuePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CISQLITE3_API uint32 Get_Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLiteKeyValuePair, Z_Construct_UPackage__Script_CISQLite3(), TEXT("SQLiteKeyValuePair"), sizeof(FSQLiteKeyValuePair), Get_Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Hash());
	}
	return Singleton;
}
template<> CISQLITE3_API UScriptStruct* StaticStruct<FSQLiteKeyValuePair>()
{
	return FSQLiteKeyValuePair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQLiteKeyValuePair(FSQLiteKeyValuePair::StaticStruct, TEXT("/Script/CISQLite3"), TEXT("SQLiteKeyValuePair"), false, nullptr, nullptr);
static struct FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteKeyValuePair
{
	FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteKeyValuePair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQLiteKeyValuePair")),new UScriptStruct::TCppStructOps<FSQLiteKeyValuePair>);
	}
} ScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteKeyValuePair;
	struct Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSQLiteKeyValuePair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "SQLite Key Value Pair" },
		{ "Comment", "/** The database table field name */" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "The database table field name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteKeyValuePair, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "SQLite Key Value Pair" },
		{ "Comment", "/** The value of the field */" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "The value of the field" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteKeyValuePair, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CISQLite3,
		nullptr,
		&NewStructOps,
		"SQLiteKeyValuePair",
		sizeof(FSQLiteKeyValuePair),
		alignof(FSQLiteKeyValuePair),
		Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSQLiteKeyValuePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CISQLite3();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQLiteKeyValuePair"), sizeof(FSQLiteKeyValuePair), Get_Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Hash() { return 598887136U; }
class UScriptStruct* FSQLiteDatabaseReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CISQLITE3_API uint32 Get_Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLiteDatabaseReference, Z_Construct_UPackage__Script_CISQLite3(), TEXT("SQLiteDatabaseReference"), sizeof(FSQLiteDatabaseReference), Get_Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Hash());
	}
	return Singleton;
}
template<> CISQLITE3_API UScriptStruct* StaticStruct<FSQLiteDatabaseReference>()
{
	return FSQLiteDatabaseReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQLiteDatabaseReference(FSQLiteDatabaseReference::StaticStruct, TEXT("/Script/CISQLite3"), TEXT("SQLiteDatabaseReference"), false, nullptr, nullptr);
static struct FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteDatabaseReference
{
	FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteDatabaseReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQLiteDatabaseReference")),new UScriptStruct::TCppStructOps<FSQLiteDatabaseReference>);
	}
} ScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteDatabaseReference;
	struct Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSQLiteDatabaseReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "Category", "SQLite Database Reference" },
		{ "Comment", "/** The database name (not the filename) */" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "The database name (not the filename)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteDatabaseReference, DatabaseName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::NewProp_DatabaseName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::NewProp_Tables_Inner = { "Tables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::NewProp_Tables_MetaData[] = {
		{ "Category", "SQLite Database Reference" },
		{ "Comment", "/** The database tables we want to get data from */" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "The database tables we want to get data from" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::NewProp_Tables = { "Tables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteDatabaseReference, Tables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::NewProp_Tables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::NewProp_Tables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::NewProp_Tables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::NewProp_Tables,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CISQLite3,
		nullptr,
		&NewStructOps,
		"SQLiteDatabaseReference",
		sizeof(FSQLiteDatabaseReference),
		alignof(FSQLiteDatabaseReference),
		Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSQLiteDatabaseReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CISQLite3();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQLiteDatabaseReference"), sizeof(FSQLiteDatabaseReference), Get_Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Hash() { return 113566860U; }
	DEFINE_FUNCTION(USQLiteDatabase::execExecSql)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DatabaseName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQLiteDatabase::ExecSql(Z_Param_DatabaseName,Z_Param_Query);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteDatabase::execVacuum)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DatabaseName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQLiteDatabase::Vacuum(Z_Param_DatabaseName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteDatabase::execInsertRowsIntoTable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DatabaseName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_TARRAY(FSQLiteTableRowSimulator,Z_Param_rowsOfFields);
		P_FINISH;
		P_NATIVE_BEGIN;
		USQLiteDatabase::InsertRowsIntoTable(Z_Param_DatabaseName,Z_Param_TableName,Z_Param_rowsOfFields);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteDatabase::execIsTableExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DatabaseName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQLiteDatabase::IsTableExists(Z_Param_DatabaseName,Z_Param_TableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteDatabase::execTruncateTable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DatabaseName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQLiteDatabase::TruncateTable(Z_Param_DatabaseName,Z_Param_TableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteDatabase::execDropTable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DatabaseName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQLiteDatabase::DropTable(Z_Param_DatabaseName,Z_Param_TableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteDatabase::execDropIndex)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DatabaseName);
		P_GET_PROPERTY(FStrProperty,Z_Param_IndexName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQLiteDatabase::DropIndex(Z_Param_DatabaseName,Z_Param_IndexName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteDatabase::execCreateIndex)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DatabaseName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_STRUCT(FSQLiteIndex,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQLiteDatabase::CreateIndex(Z_Param_DatabaseName,Z_Param_TableName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteDatabase::execCreateIndexes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DatabaseName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_TARRAY(FSQLiteIndex,Z_Param_Indexes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQLiteDatabase::CreateIndexes(Z_Param_DatabaseName,Z_Param_TableName,Z_Param_Indexes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteDatabase::execCreateTable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DatabaseName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_TARRAY(FSQLiteTableField,Z_Param_Fields);
		P_GET_STRUCT(FSQLitePrimaryKey,Z_Param_PK);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSQLiteTable*)Z_Param__Result=USQLiteDatabase::CreateTable(Z_Param_DatabaseName,Z_Param_TableName,Z_Param_Fields,Z_Param_PK);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteDatabase::execGetDataBP)
	{
		P_GET_STRUCT_REF(FSQLiteDatabaseReference,Z_Param_Out_DataSource);
		P_GET_TARRAY(FString,Z_Param_Fields);
		P_GET_STRUCT(FSQLiteQueryFinalizedQuery,Z_Param_Query);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_PROPERTY(FIntProperty,Z_Param_ResultOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSQLiteQueryResult*)Z_Param__Result=USQLiteDatabase::GetDataBP(Z_Param_Out_DataSource,Z_Param_Fields,Z_Param_Query,Z_Param_MaxResults,Z_Param_ResultOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteDatabase::execGetData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DatabaseName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSQLiteQueryResult*)Z_Param__Result=USQLiteDatabase::GetData(Z_Param_DatabaseName,Z_Param_Query);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteDatabase::execGetDataIntoObjectBP)
	{
		P_GET_STRUCT_REF(FSQLiteDatabaseReference,Z_Param_Out_DataSource);
		P_GET_TARRAY(FString,Z_Param_Fields);
		P_GET_STRUCT(FSQLiteQueryFinalizedQuery,Z_Param_Query);
		P_GET_OBJECT(UObject,Z_Param_ObjectToPopulate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQLiteDatabase::GetDataIntoObjectBP(Z_Param_Out_DataSource,Z_Param_Fields,Z_Param_Query,Z_Param_ObjectToPopulate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteDatabase::execGetDataIntoObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DatabaseName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Query);
		P_GET_OBJECT(UObject,Z_Param_ObjectToPopulate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQLiteDatabase::GetDataIntoObject(Z_Param_DatabaseName,Z_Param_Query,Z_Param_ObjectToPopulate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteDatabase::execIsDatabaseRegistered)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DatabaseName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQLiteDatabase::IsDatabaseRegistered(Z_Param_DatabaseName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQLiteDatabase::execRegisterDatabase)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_UBOOL(Z_Param_RelativeToGameContentDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQLiteDatabase::RegisterDatabase(Z_Param_Name,Z_Param_Filename,Z_Param_RelativeToGameContentDirectory);
		P_NATIVE_END;
	}
	void USQLiteDatabase::StaticRegisterNativesUSQLiteDatabase()
	{
		UClass* Class = USQLiteDatabase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateIndex", &USQLiteDatabase::execCreateIndex },
			{ "CreateIndexes", &USQLiteDatabase::execCreateIndexes },
			{ "CreateTable", &USQLiteDatabase::execCreateTable },
			{ "DropIndex", &USQLiteDatabase::execDropIndex },
			{ "DropTable", &USQLiteDatabase::execDropTable },
			{ "ExecSql", &USQLiteDatabase::execExecSql },
			{ "GetData", &USQLiteDatabase::execGetData },
			{ "GetDataBP", &USQLiteDatabase::execGetDataBP },
			{ "GetDataIntoObject", &USQLiteDatabase::execGetDataIntoObject },
			{ "GetDataIntoObjectBP", &USQLiteDatabase::execGetDataIntoObjectBP },
			{ "InsertRowsIntoTable", &USQLiteDatabase::execInsertRowsIntoTable },
			{ "IsDatabaseRegistered", &USQLiteDatabase::execIsDatabaseRegistered },
			{ "IsTableExists", &USQLiteDatabase::execIsTableExists },
			{ "RegisterDatabase", &USQLiteDatabase::execRegisterDatabase },
			{ "TruncateTable", &USQLiteDatabase::execTruncateTable },
			{ "Vacuum", &USQLiteDatabase::execVacuum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics
	{
		struct SQLiteDatabase_eventCreateIndex_Parms
		{
			FString DatabaseName;
			FString TableName;
			FSQLiteIndex Index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventCreateIndex_Parms, DatabaseName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_DatabaseName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventCreateIndex_Parms, TableName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_TableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventCreateIndex_Parms, Index), Z_Construct_UScriptStruct_FSQLiteIndex, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_Index_MetaData)) };
	void Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQLiteDatabase_eventCreateIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteDatabase_eventCreateIndex_Parms), &Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query" },
		{ "Comment", "/** Create index for table */" },
		{ "DisplayName", "Create Index" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Create index for table" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "CreateIndex", nullptr, nullptr, sizeof(SQLiteDatabase_eventCreateIndex_Parms), Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_CreateIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_CreateIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics
	{
		struct SQLiteDatabase_eventCreateIndexes_Parms
		{
			FString DatabaseName;
			FString TableName;
			TArray<FSQLiteIndex> Indexes;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Indexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Indexes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventCreateIndexes_Parms, DatabaseName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_DatabaseName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventCreateIndexes_Parms, TableName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_TableName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_Indexes_Inner = { "Indexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSQLiteIndex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_Indexes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_Indexes = { "Indexes", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventCreateIndexes_Parms, Indexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_Indexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_Indexes_MetaData)) };
	void Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQLiteDatabase_eventCreateIndexes_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteDatabase_eventCreateIndexes_Parms), &Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_Indexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_Indexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query" },
		{ "Comment", "/** Create indexes for table */" },
		{ "DisplayName", "Create Indexes" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Create indexes for table" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "CreateIndexes", nullptr, nullptr, sizeof(SQLiteDatabase_eventCreateIndexes_Parms), Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_CreateIndexes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_CreateIndexes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics
	{
		struct SQLiteDatabase_eventCreateTable_Parms
		{
			FString DatabaseName;
			FString TableName;
			TArray<FSQLiteTableField> Fields;
			FSQLitePrimaryKey PK;
			FSQLiteTable ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fields_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fields;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PK_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PK;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventCreateTable_Parms, DatabaseName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_DatabaseName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventCreateTable_Parms, TableName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_TableName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSQLiteTableField, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_Fields_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventCreateTable_Parms, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_Fields_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_PK_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_PK = { "PK", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventCreateTable_Parms, PK), Z_Construct_UScriptStruct_FSQLitePrimaryKey, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_PK_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_PK_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventCreateTable_Parms, ReturnValue), Z_Construct_UScriptStruct_FSQLiteTable, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_Fields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_Fields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_PK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query" },
		{ "Comment", "/** Create table in the database. */" },
		{ "DisplayName", "Create Table" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Create table in the database." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "CreateTable", nullptr, nullptr, sizeof(SQLiteDatabase_eventCreateTable_Parms), Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_CreateTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_CreateTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics
	{
		struct SQLiteDatabase_eventDropIndex_Parms
		{
			FString DatabaseName;
			FString IndexName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IndexName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventDropIndex_Parms, DatabaseName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::NewProp_DatabaseName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::NewProp_IndexName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::NewProp_IndexName = { "IndexName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventDropIndex_Parms, IndexName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::NewProp_IndexName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::NewProp_IndexName_MetaData)) };
	void Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQLiteDatabase_eventDropIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteDatabase_eventDropIndex_Parms), &Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::NewProp_IndexName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query" },
		{ "Comment", "/** Drop index*/" },
		{ "DisplayName", "Drop Index" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Drop index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "DropIndex", nullptr, nullptr, sizeof(SQLiteDatabase_eventDropIndex_Parms), Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_DropIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_DropIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics
	{
		struct SQLiteDatabase_eventDropTable_Parms
		{
			FString DatabaseName;
			FString TableName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventDropTable_Parms, DatabaseName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::NewProp_DatabaseName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventDropTable_Parms, TableName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::NewProp_TableName_MetaData)) };
	void Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQLiteDatabase_eventDropTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteDatabase_eventDropTable_Parms), &Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query" },
		{ "Comment", "/** Drop Table*/" },
		{ "DisplayName", "Drop Table" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Drop Table" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "DropTable", nullptr, nullptr, sizeof(SQLiteDatabase_eventDropTable_Parms), Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_DropTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_DropTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics
	{
		struct SQLiteDatabase_eventExecSql_Parms
		{
			FString DatabaseName;
			FString Query;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventExecSql_Parms, DatabaseName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::NewProp_DatabaseName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventExecSql_Parms, Query), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::NewProp_Query_MetaData)) };
	void Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQLiteDatabase_eventExecSql_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteDatabase_eventExecSql_Parms), &Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::NewProp_Query,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query" },
		{ "Comment", "/** Execute SQL (can be used for insert statement)*/" },
		{ "DisplayName", "Execute SQL" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Execute SQL (can be used for insert statement)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "ExecSql", nullptr, nullptr, sizeof(SQLiteDatabase_eventExecSql_Parms), Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_ExecSql()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_ExecSql_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteDatabase_GetData_Statics
	{
		struct SQLiteDatabase_eventGetData_Parms
		{
			FString DatabaseName;
			FString Query;
			FSQLiteQueryResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetData_Parms, DatabaseName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::NewProp_DatabaseName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetData_Parms, Query), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::NewProp_Query_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSQLiteQueryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::NewProp_Query,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite" },
		{ "Comment", "/** Get data from the database using a select statement and return the rows. */" },
		{ "DisplayName", "Get Data From Table(s) (manual query)" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Get data from the database using a select statement and return the rows." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "GetData", nullptr, nullptr, sizeof(SQLiteDatabase_eventGetData_Parms), Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_GetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_GetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics
	{
		struct SQLiteDatabase_eventGetDataBP_Parms
		{
			FSQLiteDatabaseReference DataSource;
			TArray<FString> Fields;
			FSQLiteQueryFinalizedQuery Query;
			int32 MaxResults;
			int32 ResultOffset;
			FSQLiteQueryResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataSource;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Fields_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fields;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResultOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_DataSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetDataBP_Parms, DataSource), Z_Construct_UScriptStruct_FSQLiteDatabaseReference, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_DataSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_DataSource_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetDataBP_Parms, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetDataBP_Parms, Query), Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetDataBP_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_ResultOffset = { "ResultOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetDataBP_Parms, ResultOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetDataBP_Parms, ReturnValue), Z_Construct_UScriptStruct_FSQLiteQueryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_DataSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_Fields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_Fields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_Query,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_ResultOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite" },
		{ "Comment", "/** Blueprint: Get data from the database. Returns the resulting rows. */" },
		{ "CPP_Default_MaxResults", "-1" },
		{ "CPP_Default_ResultOffset", "0" },
		{ "DisplayName", "Get Data From Table(s)" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Blueprint: Get data from the database. Returns the resulting rows." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "GetDataBP", nullptr, nullptr, sizeof(SQLiteDatabase_eventGetDataBP_Parms), Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_GetDataBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_GetDataBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics
	{
		struct SQLiteDatabase_eventGetDataIntoObject_Parms
		{
			FString DatabaseName;
			FString Query;
			UObject* ObjectToPopulate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToPopulate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetDataIntoObject_Parms, DatabaseName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_DatabaseName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetDataIntoObject_Parms, Query), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_Query_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_ObjectToPopulate = { "ObjectToPopulate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetDataIntoObject_Parms, ObjectToPopulate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQLiteDatabase_eventGetDataIntoObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteDatabase_eventGetDataIntoObject_Parms), &Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_Query,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_ObjectToPopulate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite" },
		{ "Comment", "/** Get data from the database using a select statement straight into an UObject, ie. populates its properties. */" },
		{ "DisplayName", "Get Data Into Object (manual query)" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Get data from the database using a select statement straight into an UObject, ie. populates its properties." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "GetDataIntoObject", nullptr, nullptr, sizeof(SQLiteDatabase_eventGetDataIntoObject_Parms), Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics
	{
		struct SQLiteDatabase_eventGetDataIntoObjectBP_Parms
		{
			FSQLiteDatabaseReference DataSource;
			TArray<FString> Fields;
			FSQLiteQueryFinalizedQuery Query;
			UObject* ObjectToPopulate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataSource;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Fields_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fields;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToPopulate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_DataSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetDataIntoObjectBP_Parms, DataSource), Z_Construct_UScriptStruct_FSQLiteDatabaseReference, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_DataSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_DataSource_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetDataIntoObjectBP_Parms, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetDataIntoObjectBP_Parms, Query), Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_ObjectToPopulate = { "ObjectToPopulate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventGetDataIntoObjectBP_Parms, ObjectToPopulate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQLiteDatabase_eventGetDataIntoObjectBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteDatabase_eventGetDataIntoObjectBP_Parms), &Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_DataSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_Fields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_Fields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_Query,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_ObjectToPopulate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite" },
		{ "Comment", "/** Blueprint: Gets data from the database using a select statement straight into an UObject, ie. populates its properties.\n\x09*   Note: Does not create a new object. ObjectToPopulate is the reference to the object you want to populate. */" },
		{ "DisplayName", "Get Data Into Object" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Blueprint: Gets data from the database using a select statement straight into an UObject, ie. populates its properties.\n Note: Does not create a new object. ObjectToPopulate is the reference to the object you want to populate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "GetDataIntoObjectBP", nullptr, nullptr, sizeof(SQLiteDatabase_eventGetDataIntoObjectBP_Parms), Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics
	{
		struct SQLiteDatabase_eventInsertRowsIntoTable_Parms
		{
			FString DatabaseName;
			FString TableName;
			TArray<FSQLiteTableRowSimulator> rowsOfFields;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rowsOfFields_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rowsOfFields;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventInsertRowsIntoTable_Parms, DatabaseName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::NewProp_DatabaseName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventInsertRowsIntoTable_Parms, TableName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::NewProp_TableName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::NewProp_rowsOfFields_Inner = { "rowsOfFields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSQLiteTableRowSimulator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::NewProp_rowsOfFields = { "rowsOfFields", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventInsertRowsIntoTable_Parms, rowsOfFields), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::NewProp_rowsOfFields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::NewProp_rowsOfFields,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query" },
		{ "Comment", "/** Insert rows into table */" },
		{ "DisplayName", "Insert Rows Into Table" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Insert rows into table" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "InsertRowsIntoTable", nullptr, nullptr, sizeof(SQLiteDatabase_eventInsertRowsIntoTable_Parms), Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered_Statics
	{
		struct SQLiteDatabase_eventIsDatabaseRegistered_Parms
		{
			FString DatabaseName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventIsDatabaseRegistered_Parms, DatabaseName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQLiteDatabase_eventIsDatabaseRegistered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteDatabase_eventIsDatabaseRegistered_Parms), &Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite" },
		{ "Comment", "/** Checks if the database is registered, ie. that it can be found in Databases. */" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Checks if the database is registered, ie. that it can be found in Databases." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "IsDatabaseRegistered", nullptr, nullptr, sizeof(SQLiteDatabase_eventIsDatabaseRegistered_Parms), Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics
	{
		struct SQLiteDatabase_eventIsTableExists_Parms
		{
			FString DatabaseName;
			FString TableName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventIsTableExists_Parms, DatabaseName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::NewProp_DatabaseName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventIsTableExists_Parms, TableName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::NewProp_TableName_MetaData)) };
	void Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQLiteDatabase_eventIsTableExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteDatabase_eventIsTableExists_Parms), &Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query" },
		{ "Comment", "/** Is table exists?*/" },
		{ "DisplayName", "Is table exists?" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Is table exists?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "IsTableExists", nullptr, nullptr, sizeof(SQLiteDatabase_eventIsTableExists_Parms), Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_IsTableExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_IsTableExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics
	{
		struct SQLiteDatabase_eventRegisterDatabase_Parms
		{
			FString Name;
			FString Filename;
			bool RelativeToGameContentDirectory;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_RelativeToGameContentDirectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RelativeToGameContentDirectory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventRegisterDatabase_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventRegisterDatabase_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::NewProp_RelativeToGameContentDirectory_SetBit(void* Obj)
	{
		((SQLiteDatabase_eventRegisterDatabase_Parms*)Obj)->RelativeToGameContentDirectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::NewProp_RelativeToGameContentDirectory = { "RelativeToGameContentDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteDatabase_eventRegisterDatabase_Parms), &Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::NewProp_RelativeToGameContentDirectory_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQLiteDatabase_eventRegisterDatabase_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteDatabase_eventRegisterDatabase_Parms), &Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::NewProp_RelativeToGameContentDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite" },
		{ "Comment", "/** Add a database to the list of databases. It will be checked that it's valid (will try to open it) */" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Add a database to the list of databases. It will be checked that it's valid (will try to open it)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "RegisterDatabase", nullptr, nullptr, sizeof(SQLiteDatabase_eventRegisterDatabase_Parms), Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics
	{
		struct SQLiteDatabase_eventTruncateTable_Parms
		{
			FString DatabaseName;
			FString TableName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TableName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventTruncateTable_Parms, DatabaseName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::NewProp_DatabaseName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventTruncateTable_Parms, TableName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::NewProp_TableName_MetaData)) };
	void Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQLiteDatabase_eventTruncateTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteDatabase_eventTruncateTable_Parms), &Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query" },
		{ "Comment", "/** Truncate Table*/" },
		{ "DisplayName", "Truncate Table" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Truncate Table" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "TruncateTable", nullptr, nullptr, sizeof(SQLiteDatabase_eventTruncateTable_Parms), Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_TruncateTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_TruncateTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics
	{
		struct SQLiteDatabase_eventVacuum_Parms
		{
			FString DatabaseName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLiteDatabase_eventVacuum_Parms, DatabaseName), METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::NewProp_DatabaseName_MetaData)) };
	void Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQLiteDatabase_eventVacuum_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQLiteDatabase_eventVacuum_Parms), &Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite|Query" },
		{ "Comment", "/** Compact database*/" },
		{ "DisplayName", "Compact database" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "Compact database" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLiteDatabase, nullptr, "Vacuum", nullptr, nullptr, sizeof(SQLiteDatabase_eventVacuum_Parms), Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLiteDatabase_Vacuum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLiteDatabase_Vacuum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USQLiteDatabase_NoRegister()
	{
		return USQLiteDatabase::StaticClass();
	}
	struct Z_Construct_UClass_USQLiteDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQLiteDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CISQLite3,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQLiteDatabase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQLiteDatabase_CreateIndex, "CreateIndex" }, // 3218949116
		{ &Z_Construct_UFunction_USQLiteDatabase_CreateIndexes, "CreateIndexes" }, // 372512905
		{ &Z_Construct_UFunction_USQLiteDatabase_CreateTable, "CreateTable" }, // 2260284940
		{ &Z_Construct_UFunction_USQLiteDatabase_DropIndex, "DropIndex" }, // 3285887162
		{ &Z_Construct_UFunction_USQLiteDatabase_DropTable, "DropTable" }, // 3941715078
		{ &Z_Construct_UFunction_USQLiteDatabase_ExecSql, "ExecSql" }, // 1227833896
		{ &Z_Construct_UFunction_USQLiteDatabase_GetData, "GetData" }, // 3635516478
		{ &Z_Construct_UFunction_USQLiteDatabase_GetDataBP, "GetDataBP" }, // 1901957950
		{ &Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObject, "GetDataIntoObject" }, // 3026869230
		{ &Z_Construct_UFunction_USQLiteDatabase_GetDataIntoObjectBP, "GetDataIntoObjectBP" }, // 2990118873
		{ &Z_Construct_UFunction_USQLiteDatabase_InsertRowsIntoTable, "InsertRowsIntoTable" }, // 914292200
		{ &Z_Construct_UFunction_USQLiteDatabase_IsDatabaseRegistered, "IsDatabaseRegistered" }, // 3151486884
		{ &Z_Construct_UFunction_USQLiteDatabase_IsTableExists, "IsTableExists" }, // 275539424
		{ &Z_Construct_UFunction_USQLiteDatabase_RegisterDatabase, "RegisterDatabase" }, // 2200326715
		{ &Z_Construct_UFunction_USQLiteDatabase_TruncateTable, "TruncateTable" }, // 1188614714
		{ &Z_Construct_UFunction_USQLiteDatabase_Vacuum, "Vacuum" }, // 3583009188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQLiteDatabase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* SQLite main database class.\n*/" },
		{ "IncludePath", "SQLiteDatabase.h" },
		{ "ModuleRelativePath", "Public/SQLiteDatabase.h" },
		{ "ToolTip", "SQLite main database class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQLiteDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQLiteDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USQLiteDatabase_Statics::ClassParams = {
		&USQLiteDatabase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USQLiteDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQLiteDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQLiteDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USQLiteDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQLiteDatabase, 2272595355);
	template<> CISQLITE3_API UClass* StaticClass<USQLiteDatabase>()
	{
		return USQLiteDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQLiteDatabase(Z_Construct_UClass_USQLiteDatabase, &USQLiteDatabase::StaticClass, TEXT("/Script/CISQLite3"), TEXT("USQLiteDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQLiteDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
