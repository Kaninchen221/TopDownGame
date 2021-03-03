// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"
#include "Internationalization/Text.h"

#include "DialogSystem/TPDialogGraphNodeBase.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDialogGraphNodeTest, "Project.UnitTests.DialogSystem.UTPDialogGraphNodeBase", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FDialogGraphNodeTest::RunTest(const FString& Parameters)
{

	{
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS