// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "TPDialogGraphValidator.h"
#include "DialogSystem/TPDialogGraph.h"
#include "DialogSystem/TPDialogGraphNode.h"
#include "DialogSystem/TPDialogGraphOption.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTPDialogGraphValidatorTest, "Project.UnitTests.DialogSystem.FTPDialogGraphValidator", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FTPDialogGraphValidatorTest::RunTest(const FString& Parameters)
{
	FTPDialogGraphValidator DialogGraphValidator;

    auto CreateEmptyDialogGraph = [&]() -> UTPDialogGraph*
    {
        UTPDialogGraph* DialogGraph = NewObject<UTPDialogGraph>();
        TestNotNull("DialogGraph can't be null", DialogGraph);
        return DialogGraph;
    };

    auto CreateDialogGraphNode = [&]() -> UTPDialogGraphNode*
    {
        UTPDialogGraphNode* DialogNode = NewObject<UTPDialogGraphNode>();
        TestNotNull("DialogGraphNode can't be null", DialogNode);
        return DialogNode;
    };

    auto CreateDialogGraphOption = [&]() -> UTPDialogGraphOption*
    {
        UTPDialogGraphOption* DialogOption = NewObject<UTPDialogGraphOption>();
        TestNotNull("DialogGraphOption can't be null", DialogOption);
        return DialogOption;
    };

    {
        UTPDialogGraph* DialogGraph = CreateEmptyDialogGraph();
        DialogGraphValidator.ValidateGraph(DialogGraph);
    }

    {
        UTPDialogGraphNode* DialogNode = CreateDialogGraphNode();
        FText Result = DialogGraphValidator.ValidateRootNode(DialogNode);

        TestTrue("ValidateRootNode: UTPDialogGraphNode should return EMPTY Result text", Result.IsEmpty());
    }

	{
        UTPDialogGraphNode* DialogNode = nullptr;
		FText Result = DialogGraphValidator.ValidateRootNode(DialogNode);

		TestFalse("ValidateRootNode: UTPDialogGraphNode should return NOT EMPTY Result text", Result.IsEmpty());
	}

    {
        UTPDialogGraphOption* DialogOption = CreateDialogGraphOption();
        FText Result = DialogGraphValidator.ValidateRootNode(DialogOption);

        TestFalse("ValidateRootNode: UTPDialogGraphOption should return NOT EMPTY Result text", Result.IsEmpty());
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS