// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/TPDatabaseInfo.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTPDatabaseInfoTest, "Project.UnitTests.FTPDatabaseInfo", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FTPDatabaseInfoTest::RunTest(const FString& Parameters)
{

	{
		FString ActualGameDatabaseRelativePath = FTPDatabaseInfo::GetGameDatabaseRelativePath();
		FString ExpectedGameDatabaseRelativePath = TEXT("Databases/TopDownGame.db");
		TestEqual("Actual and Expected GameDatabaseRelativePath must be equal", ActualGameDatabaseRelativePath, ExpectedGameDatabaseRelativePath);
	}

	{
		FString ActualGameDatabaseName = FTPDatabaseInfo::GetGameDatabaseName();
		FString ExpectedGameDatabaseName = FTPDatabaseInfo::GetGameDatabaseName();
		TestEqual("Actual and Expected GameDatabaseName must be equal", ActualGameDatabaseName, ExpectedGameDatabaseName);
	}

	{
		FTPDatabaseInfo::RegisterGameDatabase();

		bool bIsGameDatabaseRegistered = FTPDatabaseInfo::IsGameDatabaseRegistered();
		TestTrue("GameDatabase must be registered after registering", bIsGameDatabaseRegistered);
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS