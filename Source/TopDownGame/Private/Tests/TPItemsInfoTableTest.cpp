// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/TPItemsInfoTable.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTPItemsInfoTableTest, "Project.UnitTests.UTPItemsInfoTableTest", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)


bool FTPItemsInfoTableTest::RunTest(const FString& Parameters)
{
	this->AddExpectedError("Query returned zero rows, no data to assign to object properties.", EAutomationExpectedErrorFlags::Contains, 1);

	auto CreateItemsInfoTable = [&]() -> UTPItemsInfoTable* {
		UTPItemsInfoTable* ItemsInfoTable = NewObject<UTPItemsInfoTable>();
		TestNotNull("ItemsInfoTable can't be null", ItemsInfoTable);
		return ItemsInfoTable;
	};

	{
		UTPItemsInfoTable* ItemsInfoTable = CreateItemsInfoTable();
	}

	{
		UTPItemsInfoTable* ItemsInfoTable = CreateItemsInfoTable();

		ItemsInfoTable->LoadItemsInfoFromDatabase();
		TArray<UTPItemInfo*> ItemsInfo = ItemsInfoTable->GetItemsInfo();
		int32 ActualCountOfItemsInfo = ItemsInfo.Num();
		int32 NotExpectedCount = 0;
		TestNotEqual("", ActualCountOfItemsInfo, NotExpectedCount);
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS