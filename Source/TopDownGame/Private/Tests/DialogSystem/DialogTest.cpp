// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../DialogSystem/Dialog.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUDialogComponentTest, "TopDownGame.DialogSystem.UDialogComponent", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FUDialogComponentTest::RunTest(const FString& Parameters)
{
    auto DialogComponent = NewObject<UDialog>();
    TestNotNull("DialogComponent must be initialized", DialogComponent);

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS