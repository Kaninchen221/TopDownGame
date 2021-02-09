// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/TPItemInfo.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTPItemInfoTest, "Project.UnitTests.UTPDatabaseInfo", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FTPItemInfoTest::RunTest(const FString& Parameters)
{

	auto CreateItemInfo = [&]() -> UTPItemInfo* {
		UTPItemInfo* ItemInfo = NewObject<UTPItemInfo>();
		TestNotNull("ItemInfo can't be null", ItemInfo);
		return ItemInfo;
	};

	{
		UTPItemInfo* ItemInfo = CreateItemInfo();
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS