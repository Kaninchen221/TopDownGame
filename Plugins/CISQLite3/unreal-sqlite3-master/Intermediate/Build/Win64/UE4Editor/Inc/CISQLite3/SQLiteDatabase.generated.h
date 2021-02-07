// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSQLiteTableRowSimulator;
struct FSQLiteIndex;
struct FSQLiteTableField;
struct FSQLitePrimaryKey;
struct FSQLiteTable;
struct FSQLiteDatabaseReference;
struct FSQLiteQueryFinalizedQuery;
struct FSQLiteQueryResult;
class UObject;
#ifdef CISQLITE3_SQLiteDatabase_generated_h
#error "SQLiteDatabase.generated.h already included, missing '#pragma once' in SQLiteDatabase.h"
#endif
#define CISQLITE3_SQLiteDatabase_generated_h

#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSQLiteQueryResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CISQLITE3_API UScriptStruct* StaticStruct<struct FSQLiteQueryResult>();

#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSQLiteQueryResultRow_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CISQLITE3_API UScriptStruct* StaticStruct<struct FSQLiteQueryResultRow>();

#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSQLiteKeyValuePair_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CISQLITE3_API UScriptStruct* StaticStruct<struct FSQLiteKeyValuePair>();

#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSQLiteDatabaseReference_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CISQLITE3_API UScriptStruct* StaticStruct<struct FSQLiteDatabaseReference>();

#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_SPARSE_DATA
#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExecSql); \
	DECLARE_FUNCTION(execVacuum); \
	DECLARE_FUNCTION(execInsertRowsIntoTable); \
	DECLARE_FUNCTION(execIsTableExists); \
	DECLARE_FUNCTION(execTruncateTable); \
	DECLARE_FUNCTION(execDropTable); \
	DECLARE_FUNCTION(execDropIndex); \
	DECLARE_FUNCTION(execCreateIndex); \
	DECLARE_FUNCTION(execCreateIndexes); \
	DECLARE_FUNCTION(execCreateTable); \
	DECLARE_FUNCTION(execGetDataBP); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execGetDataIntoObjectBP); \
	DECLARE_FUNCTION(execGetDataIntoObject); \
	DECLARE_FUNCTION(execIsDatabaseRegistered); \
	DECLARE_FUNCTION(execRegisterDatabase);


#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecSql); \
	DECLARE_FUNCTION(execVacuum); \
	DECLARE_FUNCTION(execInsertRowsIntoTable); \
	DECLARE_FUNCTION(execIsTableExists); \
	DECLARE_FUNCTION(execTruncateTable); \
	DECLARE_FUNCTION(execDropTable); \
	DECLARE_FUNCTION(execDropIndex); \
	DECLARE_FUNCTION(execCreateIndex); \
	DECLARE_FUNCTION(execCreateIndexes); \
	DECLARE_FUNCTION(execCreateTable); \
	DECLARE_FUNCTION(execGetDataBP); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execGetDataIntoObjectBP); \
	DECLARE_FUNCTION(execGetDataIntoObject); \
	DECLARE_FUNCTION(execIsDatabaseRegistered); \
	DECLARE_FUNCTION(execRegisterDatabase);


#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQLiteDatabase(); \
	friend struct Z_Construct_UClass_USQLiteDatabase_Statics; \
public: \
	DECLARE_CLASS(USQLiteDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CISQLite3"), NO_API) \
	DECLARE_SERIALIZER(USQLiteDatabase)


#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_INCLASS \
private: \
	static void StaticRegisterNativesUSQLiteDatabase(); \
	friend struct Z_Construct_UClass_USQLiteDatabase_Statics; \
public: \
	DECLARE_CLASS(USQLiteDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CISQLite3"), NO_API) \
	DECLARE_SERIALIZER(USQLiteDatabase)


#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLiteDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLiteDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLiteDatabase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLiteDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLiteDatabase(USQLiteDatabase&&); \
	NO_API USQLiteDatabase(const USQLiteDatabase&); \
public:


#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLiteDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLiteDatabase(USQLiteDatabase&&); \
	NO_API USQLiteDatabase(const USQLiteDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLiteDatabase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLiteDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLiteDatabase)


#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_PRIVATE_PROPERTY_OFFSET
#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_121_PROLOG
#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_PRIVATE_PROPERTY_OFFSET \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_SPARSE_DATA \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_RPC_WRAPPERS \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_INCLASS \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_PRIVATE_PROPERTY_OFFSET \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_SPARSE_DATA \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_INCLASS_NO_PURE_DECLS \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h_124_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SQLiteDatabase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CISQLITE3_API UClass* StaticClass<class USQLiteDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
