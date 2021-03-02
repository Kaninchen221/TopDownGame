// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"
#include "Internationalization/Text.h"

#include "DialogSystem/TPDialogGraphNode.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDialogGraphNodeTest, "Project.UnitTests.DialogSystem.UTPDialogGraphNode", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FDialogGraphNodeTest::RunTest(const FString& Parameters)
{
    auto CreateGraphNode = [&]() -> UTPDialogGraphNode* {
        UTPDialogGraphNode* DialogGraphNode = NewObject<UTPDialogGraphNode>();
        TestNotNull("DialogGraphNode can't be null", DialogGraphNode);
        return DialogGraphNode;
    };

    {
        UTPDialogGraphNode* DialogGraphNode = CreateGraphNode();
        FLinearColor BackgroundColor = DialogGraphNode->GetBackgroundColor();
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS