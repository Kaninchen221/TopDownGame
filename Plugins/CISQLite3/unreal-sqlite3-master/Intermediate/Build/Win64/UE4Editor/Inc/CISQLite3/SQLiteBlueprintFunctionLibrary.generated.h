// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSQLiteTableField;
struct FSQLiteIndex;
struct FSQLitePrimaryKey;
struct FSQLiteQueryLogicExpectedNode;
struct FSQLiteQueryFinalizedQuery;
struct FSQLiteQueryTermExpectedNode;
#ifdef CISQLITE3_SQLiteBlueprintFunctionLibrary_generated_h
#error "SQLiteBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in SQLiteBlueprintFunctionLibrary.h"
#endif
#define CISQLITE3_SQLiteBlueprintFunctionLibrary_generated_h

#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_SPARSE_DATA
#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSQLiteIndexFunction); \
	DECLARE_FUNCTION(execSQLitePrimaryKey); \
	DECLARE_FUNCTION(execSQLiteNUMERIC); \
	DECLARE_FUNCTION(execSQLiteREAL); \
	DECLARE_FUNCTION(execSQLiteTEXT); \
	DECLARE_FUNCTION(execSQLiteINTEGER); \
	DECLARE_FUNCTION(execQueryFinal); \
	DECLARE_FUNCTION(execQueryLogicOr); \
	DECLARE_FUNCTION(execQueryLogicAnd); \
	DECLARE_FUNCTION(execQueryTerm); \
	DECLARE_FUNCTION(execQueryEnd); \
	DECLARE_FUNCTION(execQueryStart); \
	DECLARE_FUNCTION(execCastToFloat); \
	DECLARE_FUNCTION(execCastToBoolean); \
	DECLARE_FUNCTION(execCastToInt);


#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSQLiteIndexFunction); \
	DECLARE_FUNCTION(execSQLitePrimaryKey); \
	DECLARE_FUNCTION(execSQLiteNUMERIC); \
	DECLARE_FUNCTION(execSQLiteREAL); \
	DECLARE_FUNCTION(execSQLiteTEXT); \
	DECLARE_FUNCTION(execSQLiteINTEGER); \
	DECLARE_FUNCTION(execQueryFinal); \
	DECLARE_FUNCTION(execQueryLogicOr); \
	DECLARE_FUNCTION(execQueryLogicAnd); \
	DECLARE_FUNCTION(execQueryTerm); \
	DECLARE_FUNCTION(execQueryEnd); \
	DECLARE_FUNCTION(execQueryStart); \
	DECLARE_FUNCTION(execCastToFloat); \
	DECLARE_FUNCTION(execCastToBoolean); \
	DECLARE_FUNCTION(execCastToInt);


#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQLiteBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USQLiteBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CISQLite3"), NO_API) \
	DECLARE_SERIALIZER(USQLiteBlueprintFunctionLibrary)


#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSQLiteBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_USQLiteBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USQLiteBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CISQLite3"), NO_API) \
	DECLARE_SERIALIZER(USQLiteBlueprintFunctionLibrary)


#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLiteBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLiteBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLiteBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLiteBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLiteBlueprintFunctionLibrary(USQLiteBlueprintFunctionLibrary&&); \
	NO_API USQLiteBlueprintFunctionLibrary(const USQLiteBlueprintFunctionLibrary&); \
public:


#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLiteBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLiteBlueprintFunctionLibrary(USQLiteBlueprintFunctionLibrary&&); \
	NO_API USQLiteBlueprintFunctionLibrary(const USQLiteBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLiteBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLiteBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLiteBlueprintFunctionLibrary)


#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET
#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_10_PROLOG
#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_SPARSE_DATA \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_RPC_WRAPPERS \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_INCLASS \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_SPARSE_DATA \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
	TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CISQLITE3_API UClass* StaticClass<class USQLiteBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownGame_Plugins_CISQLite3_unreal_sqlite3_master_Source_CISQLite3_Public_SQLiteBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
