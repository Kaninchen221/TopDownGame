// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CISQLite3/Public/SQLiteBlueprintNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQLiteBlueprintNodes() {}
// Cross Module References
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery();
	UPackage* Z_Construct_UPackage__Script_CISQLite3();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode();
	CISQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode();
// End Cross Module References
class UScriptStruct* FSQLiteQueryFinalizedQuery::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CISQLITE3_API uint32 Get_Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery, Z_Construct_UPackage__Script_CISQLite3(), TEXT("SQLiteQueryFinalizedQuery"), sizeof(FSQLiteQueryFinalizedQuery), Get_Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Hash());
	}
	return Singleton;
}
template<> CISQLITE3_API UScriptStruct* StaticStruct<FSQLiteQueryFinalizedQuery>()
{
	return FSQLiteQueryFinalizedQuery::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQLiteQueryFinalizedQuery(FSQLiteQueryFinalizedQuery::StaticStruct, TEXT("/Script/CISQLite3"), TEXT("SQLiteQueryFinalizedQuery"), false, nullptr, nullptr);
static struct FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteQueryFinalizedQuery
{
	FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteQueryFinalizedQuery()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQLiteQueryFinalizedQuery")),new UScriptStruct::TCppStructOps<FSQLiteQueryFinalizedQuery>);
	}
} ScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteQueryFinalizedQuery;
	struct Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSQLiteQueryFinalizedQuery>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Statics::NewProp_Query_MetaData[] = {
		{ "Category", "SQLite Database Query" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteQueryFinalizedQuery, Query), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Statics::NewProp_Query_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Statics::NewProp_Query,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CISQLite3,
		nullptr,
		&NewStructOps,
		"SQLiteQueryFinalizedQuery",
		sizeof(FSQLiteQueryFinalizedQuery),
		alignof(FSQLiteQueryFinalizedQuery),
		Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CISQLite3();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQLiteQueryFinalizedQuery"), sizeof(FSQLiteQueryFinalizedQuery), Get_Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQLiteQueryFinalizedQuery_Hash() { return 3691559105U; }
class UScriptStruct* FSQLiteQueryTermExpectedNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CISQLITE3_API uint32 Get_Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode, Z_Construct_UPackage__Script_CISQLite3(), TEXT("SQLiteQueryTermExpectedNode"), sizeof(FSQLiteQueryTermExpectedNode), Get_Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Hash());
	}
	return Singleton;
}
template<> CISQLITE3_API UScriptStruct* StaticStruct<FSQLiteQueryTermExpectedNode>()
{
	return FSQLiteQueryTermExpectedNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQLiteQueryTermExpectedNode(FSQLiteQueryTermExpectedNode::StaticStruct, TEXT("/Script/CISQLite3"), TEXT("SQLiteQueryTermExpectedNode"), false, nullptr, nullptr);
static struct FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteQueryTermExpectedNode
{
	FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteQueryTermExpectedNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQLiteQueryTermExpectedNode")),new UScriptStruct::TCppStructOps<FSQLiteQueryTermExpectedNode>);
	}
} ScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteQueryTermExpectedNode;
	struct Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSQLiteQueryTermExpectedNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Statics::NewProp_Query_MetaData[] = {
		{ "Category", "SQLite Database Query" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteQueryTermExpectedNode, Query), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Statics::NewProp_Query_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Statics::NewProp_Query,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CISQLite3,
		nullptr,
		&NewStructOps,
		"SQLiteQueryTermExpectedNode",
		sizeof(FSQLiteQueryTermExpectedNode),
		alignof(FSQLiteQueryTermExpectedNode),
		Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CISQLite3();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQLiteQueryTermExpectedNode"), sizeof(FSQLiteQueryTermExpectedNode), Get_Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQLiteQueryTermExpectedNode_Hash() { return 4120922142U; }
class UScriptStruct* FSQLiteQueryLogicExpectedNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CISQLITE3_API uint32 Get_Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode, Z_Construct_UPackage__Script_CISQLite3(), TEXT("SQLiteQueryLogicExpectedNode"), sizeof(FSQLiteQueryLogicExpectedNode), Get_Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Hash());
	}
	return Singleton;
}
template<> CISQLITE3_API UScriptStruct* StaticStruct<FSQLiteQueryLogicExpectedNode>()
{
	return FSQLiteQueryLogicExpectedNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQLiteQueryLogicExpectedNode(FSQLiteQueryLogicExpectedNode::StaticStruct, TEXT("/Script/CISQLite3"), TEXT("SQLiteQueryLogicExpectedNode"), false, nullptr, nullptr);
static struct FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteQueryLogicExpectedNode
{
	FScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteQueryLogicExpectedNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQLiteQueryLogicExpectedNode")),new UScriptStruct::TCppStructOps<FSQLiteQueryLogicExpectedNode>);
	}
} ScriptStruct_CISQLite3_StaticRegisterNativesFSQLiteQueryLogicExpectedNode;
	struct Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSQLiteQueryLogicExpectedNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Statics::NewProp_Query_MetaData[] = {
		{ "Category", "SQLite Database Query" },
		{ "ModuleRelativePath", "Public/SQLiteBlueprintNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSQLiteQueryLogicExpectedNode, Query), METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Statics::NewProp_Query_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Statics::NewProp_Query,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CISQLite3,
		nullptr,
		&NewStructOps,
		"SQLiteQueryLogicExpectedNode",
		sizeof(FSQLiteQueryLogicExpectedNode),
		alignof(FSQLiteQueryLogicExpectedNode),
		Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CISQLite3();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQLiteQueryLogicExpectedNode"), sizeof(FSQLiteQueryLogicExpectedNode), Get_Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQLiteQueryLogicExpectedNode_Hash() { return 218864936U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
