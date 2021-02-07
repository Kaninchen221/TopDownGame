// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CISQLite3/Public/SQLiteDatabaseStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQLiteDatabaseStructs() {}
// Cross Module References
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteTable();
	UPackage* Z_Construct_UPackage__Script_CISQLite3();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteTableField();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLitePrimaryKey();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteTableRowSimulator();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteIndex();
// End Cross Module References
class UScriptStruct* FSQLiteTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CISQLITE3_API uint32 Get_Z_Construct_UScriptStruct_FSQLiteTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLiteTable, Z_Construct_UPackage__Script_CISQLite3(), TEXT("SQLiteTable"), sizeof(FSQLiteTable), Get_Z_Construct_UScriptStruct_FSQLiteTable_Hash());
	}
	return Singleton;
}
template<> CISQLITE3_API UScriptStruct* StaticStruct<FSQLiteTable>()
{
	return FSQLiteTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQLiteTable(FSQLiteTable::StaticStruct, TEXT("/Script/CISQLite3"), TEXT("SQLiteTable"), false, nullptr, nullptr);
static struct FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteTable
{
	FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQLiteTable")),new UScriptStruct::TCppStructOps<FSQLiteTable>);
	}
} ScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteTable;
	struct Z_Construct_UScriptStruct_FSQLiteTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[];
#endif
		static void NewProp_Created_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Created;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSQLiteTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_DatabaseName_MetaData[] = {
		{ "Category", "SQLite Table" },
		{ "Comment", "/** Database name*/" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
		{ "ToolTip", "Database name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteTable, DatabaseName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_DatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_DatabaseName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_TableName_MetaData[] = {
		{ "Category", "SQLite Table" },
		{ "Comment", "/** Table name*/" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
		{ "ToolTip", "Table name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteTable, TableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_TableName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSQLiteTableField, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_Fields_MetaData[] = {
		{ "Category", "SQLite Table" },
		{ "Comment", "/** Array with Fields*/" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
		{ "ToolTip", "Array with Fields" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteTable, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_Fields_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_PK_MetaData[] = {
		{ "Category", "SQLite Table" },
		{ "Comment", "/** Primary Key */" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
		{ "ToolTip", "Primary Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_PK = { "PK", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteTable, PK), Z_Construct_UScriptStruct_FSQLitePrimaryKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_PK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_PK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_Created_MetaData[] = {
		{ "Category", "SQLite Table" },
		{ "Comment", "/** Created Key */" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
		{ "ToolTip", "Created Key" },
	};
#endif
	void Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_Created_SetBit(void* Obj)
	{
		((FSQLiteTable*)Obj)->Created = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSQLiteTable), &Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_Created_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_Created_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_Created_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLiteTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_DatabaseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_TableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_Fields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_Fields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_PK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteTable_Statics::NewProp_Created,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLiteTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CISQLite3,
		nullptr,
		&NewStructOps,
		"SQLiteTable",
		sizeof(FSQLiteTable),
		alignof(FSQLiteTable),
		Z_Construct_UScriptStruct_FSQLiteTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSQLiteTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSQLiteTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CISQLite3();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQLiteTable"), sizeof(FSQLiteTable), Get_Z_Construct_UScriptStruct_FSQLiteTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSQLiteTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQLiteTable_Hash() { return 548438454U; }
class UScriptStruct* FSQLiteTableRowSimulator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CISQLITE3_API uint32 Get_Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLiteTableRowSimulator, Z_Construct_UPackage__Script_CISQLite3(), TEXT("SQLiteTableRowSimulator"), sizeof(FSQLiteTableRowSimulator), Get_Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Hash());
	}
	return Singleton;
}
template<> CISQLITE3_API UScriptStruct* StaticStruct<FSQLiteTableRowSimulator>()
{
	return FSQLiteTableRowSimulator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQLiteTableRowSimulator(FSQLiteTableRowSimulator::StaticStruct, TEXT("/Script/CISQLite3"), TEXT("SQLiteTableRowSimulator"), false, nullptr, nullptr);
static struct FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteTableRowSimulator
{
	FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteTableRowSimulator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQLiteTableRowSimulator")),new UScriptStruct::TCppStructOps<FSQLiteTableRowSimulator>);
	}
} ScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteTableRowSimulator;
	struct Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rowsOfFields_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rowsOfFields_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rowsOfFields;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSQLiteTableRowSimulator>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::NewProp_rowsOfFields_Inner = { "rowsOfFields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSQLiteTableField, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::NewProp_rowsOfFields_MetaData[] = {
		{ "Category", "SQLite Index" },
		{ "Comment", "/** Index name*/" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
		{ "ToolTip", "Index name" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::NewProp_rowsOfFields = { "rowsOfFields", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteTableRowSimulator, rowsOfFields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::NewProp_rowsOfFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::NewProp_rowsOfFields_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::NewProp_rowsOfFields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::NewProp_rowsOfFields,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CISQLite3,
		nullptr,
		&NewStructOps,
		"SQLiteTableRowSimulator",
		sizeof(FSQLiteTableRowSimulator),
		alignof(FSQLiteTableRowSimulator),
		Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSQLiteTableRowSimulator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CISQLite3();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQLiteTableRowSimulator"), sizeof(FSQLiteTableRowSimulator), Get_Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQLiteTableRowSimulator_Hash() { return 1738483056U; }
class UScriptStruct* FSQLiteTableField::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CISQLITE3_API uint32 Get_Z_Construct_UScriptStruct_FSQLiteTableField_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLiteTableField, Z_Construct_UPackage__Script_CISQLite3(), TEXT("SQLiteTableField"), sizeof(FSQLiteTableField), Get_Z_Construct_UScriptStruct_FSQLiteTableField_Hash());
	}
	return Singleton;
}
template<> CISQLITE3_API UScriptStruct* StaticStruct<FSQLiteTableField>()
{
	return FSQLiteTableField::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQLiteTableField(FSQLiteTableField::StaticStruct, TEXT("/Script/CISQLite3"), TEXT("SQLiteTableField"), false, nullptr, nullptr);
static struct FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteTableField
{
	FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteTableField()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQLiteTableField")),new UScriptStruct::TCppStructOps<FSQLiteTableField>);
	}
} ScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteTableField;
	struct Z_Construct_UScriptStruct_FSQLiteTableField_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResultStr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteTableField_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSQLiteTableField>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_ResultStr_MetaData[] = {
		{ "Category", "SQLite Table Field" },
		{ "Comment", "/** String with piece if SQL script*/" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
		{ "ToolTip", "String with piece if SQL script" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_ResultStr = { "ResultStr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteTableField, ResultStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_ResultStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_ResultStr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_FieldName_MetaData[] = {
		{ "Category", "SQLite Table Field" },
		{ "Comment", "/** Field name*/" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
		{ "ToolTip", "Field name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteTableField, FieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_FieldType_MetaData[] = {
		{ "Category", "SQLite Table Field" },
		{ "Comment", "/** Field type*/" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
		{ "ToolTip", "Field type" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_FieldType = { "FieldType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteTableField, FieldType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_FieldType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_FieldType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "Category", "SQLite Table Field" },
		{ "Comment", "/** Field value*/" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
		{ "ToolTip", "Field value" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteTableField, FieldValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_FieldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLiteTableField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_ResultStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_FieldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_FieldType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteTableField_Statics::NewProp_FieldValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLiteTableField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CISQLite3,
		nullptr,
		&NewStructOps,
		"SQLiteTableField",
		sizeof(FSQLiteTableField),
		alignof(FSQLiteTableField),
		Z_Construct_UScriptStruct_FSQLiteTableField_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTableField_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteTableField_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteTableField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSQLiteTableField()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSQLiteTableField_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CISQLite3();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQLiteTableField"), sizeof(FSQLiteTableField), Get_Z_Construct_UScriptStruct_FSQLiteTableField_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSQLiteTableField_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQLiteTableField_Hash() { return 2826538565U; }
class UScriptStruct* FSQLitePrimaryKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CISQLITE3_API uint32 Get_Z_Construct_UScriptStruct_FSQLitePrimaryKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLitePrimaryKey, Z_Construct_UPackage__Script_CISQLite3(), TEXT("SQLitePrimaryKey"), sizeof(FSQLitePrimaryKey), Get_Z_Construct_UScriptStruct_FSQLitePrimaryKey_Hash());
	}
	return Singleton;
}
template<> CISQLITE3_API UScriptStruct* StaticStruct<FSQLitePrimaryKey>()
{
	return FSQLitePrimaryKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQLitePrimaryKey(FSQLitePrimaryKey::StaticStruct, TEXT("/Script/CISQLite3"), TEXT("SQLitePrimaryKey"), false, nullptr, nullptr);
static struct FScriptStruct_CISQLite3_StaticRegisterNativesFSQLitePrimaryKey
{
	FScriptStruct_CISQLite3_StaticRegisterNativesFSQLitePrimaryKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQLitePrimaryKey")),new UScriptStruct::TCppStructOps<FSQLitePrimaryKey>);
	}
} ScriptStruct_CISQLite3_StaticRegisterNativesFSQLitePrimaryKey;
	struct Z_Construct_UScriptStruct_FSQLitePrimaryKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResultStr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLitePrimaryKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSQLitePrimaryKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSQLitePrimaryKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLitePrimaryKey_Statics::NewProp_ResultStr_MetaData[] = {
		{ "Category", "SQLite Primary Key" },
		{ "Comment", "/** String with piece if SQL script*/" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
		{ "ToolTip", "String with piece if SQL script" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLitePrimaryKey_Statics::NewProp_ResultStr = { "ResultStr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLitePrimaryKey, ResultStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLitePrimaryKey_Statics::NewProp_ResultStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLitePrimaryKey_Statics::NewProp_ResultStr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLitePrimaryKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLitePrimaryKey_Statics::NewProp_ResultStr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLitePrimaryKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CISQLite3,
		nullptr,
		&NewStructOps,
		"SQLitePrimaryKey",
		sizeof(FSQLitePrimaryKey),
		alignof(FSQLitePrimaryKey),
		Z_Construct_UScriptStruct_FSQLitePrimaryKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLitePrimaryKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLitePrimaryKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLitePrimaryKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSQLitePrimaryKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSQLitePrimaryKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CISQLite3();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQLitePrimaryKey"), sizeof(FSQLitePrimaryKey), Get_Z_Construct_UScriptStruct_FSQLitePrimaryKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSQLitePrimaryKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQLitePrimaryKey_Hash() { return 1955565571U; }
class UScriptStruct* FSQLiteIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CISQLITE3_API uint32 Get_Z_Construct_UScriptStruct_FSQLiteIndex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLiteIndex, Z_Construct_UPackage__Script_CISQLite3(), TEXT("SQLiteIndex"), sizeof(FSQLiteIndex), Get_Z_Construct_UScriptStruct_FSQLiteIndex_Hash());
	}
	return Singleton;
}
template<> CISQLITE3_API UScriptStruct* StaticStruct<FSQLiteIndex>()
{
	return FSQLiteIndex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQLiteIndex(FSQLiteIndex::StaticStruct, TEXT("/Script/CISQLite3"), TEXT("SQLiteIndex"), false, nullptr, nullptr);
static struct FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteIndex
{
	FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteIndex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQLiteIndex")),new UScriptStruct::TCppStructOps<FSQLiteIndex>);
	}
} ScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteIndex;
	struct Z_Construct_UScriptStruct_FSQLiteIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResultStr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IndexName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteIndex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSQLiteIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSQLiteIndex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteIndex_Statics::NewProp_ResultStr_MetaData[] = {
		{ "Category", "SQLite Index" },
		{ "Comment", "/** String with piece if SQL script*/" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
		{ "ToolTip", "String with piece if SQL script" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteIndex_Statics::NewProp_ResultStr = { "ResultStr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteIndex, ResultStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteIndex_Statics::NewProp_ResultStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteIndex_Statics::NewProp_ResultStr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteIndex_Statics::NewProp_IndexName_MetaData[] = {
		{ "Category", "SQLite Index" },
		{ "Comment", "/** Index name*/" },
		{ "ModuleRelativePath", "Public/SQLiteDatabaseStructs.h" },
		{ "ToolTip", "Index name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteIndex_Statics::NewProp_IndexName = { "IndexName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteIndex, IndexName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteIndex_Statics::NewProp_IndexName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteIndex_Statics::NewProp_IndexName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLiteIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteIndex_Statics::NewProp_ResultStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteIndex_Statics::NewProp_IndexName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLiteIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CISQLite3,
		nullptr,
		&NewStructOps,
		"SQLiteIndex",
		sizeof(FSQLiteIndex),
		alignof(FSQLiteIndex),
		Z_Construct_UScriptStruct_FSQLiteIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSQLiteIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSQLiteIndex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CISQLite3();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQLiteIndex"), sizeof(FSQLiteIndex), Get_Z_Construct_UScriptStruct_FSQLiteIndex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSQLiteIndex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQLiteIndex_Hash() { return 1370852705U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
