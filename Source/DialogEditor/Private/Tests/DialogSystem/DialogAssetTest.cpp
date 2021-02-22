// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "DialogEditor/Public/DialogAsset.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUDialogAssetTest, "Project.UnitTests.DialogSystem.UDialogAsset", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FUDialogAssetTest::RunTest(const FString& Parameters)
{
	

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS