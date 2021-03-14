// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"
#include "Internationalization/Text.h"

#include "TPDialogGraphEdge.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDialogGraphEdgeTest, "Project.UnitTests.DialogSystem.UTPDialogGraphEdge", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FDialogGraphEdgeTest::RunTest(const FString& Parameters)
{
    auto CreateGraphNode = [&]() -> UTPDialogGraphEdge* {
        UTPDialogGraphEdge* DialogGraphEdge = NewObject<UTPDialogGraphEdge>();
        TestNotNull("DialogGraphEdge can't be null", DialogGraphEdge);
        return DialogGraphEdge;
    };

    {
        UTPDialogGraphEdge* DialogGraphEdge = CreateGraphNode();
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS