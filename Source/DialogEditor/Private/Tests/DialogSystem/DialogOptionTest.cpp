// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "DialogEditor/Public/DialogOption.h"
#include "DialogEditor/Public/DialogNode.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUDialogOptionTest, "Project.UnitTests.DialogSystem.UDialogOption", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FUDialogOptionTest::RunTest(const FString& Parameters)
{
    

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS