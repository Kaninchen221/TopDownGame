// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "DialogEditor/Public/DialogOption.h"
#include "DialogEditor/Public/DialogNode.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDialogOptionTest, "Project.UnitTests.DialogSystem.UDialogOption", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FDialogOptionTest::RunTest(const FString& Parameters)
{
    {
        FDialogOption DialogOption;

        FText ExpectedText = FText::FromString("Placeholder");
        DialogOption.SetText(ExpectedText);
        FText ActualText = DialogOption.GetText();
        TestTrue("Setted text must be equal to getted text", ActualText.EqualTo(ExpectedText));
    }

    {
        FDialogOption DialogOption;

        int32 ExpectedResultNodeIndex = 3;
        DialogOption.SetResultNode(ExpectedResultNodeIndex);
        int32 ActualResultNodeIndex = DialogOption.GetResultNode();
        TestEqual("Setted index must be equal to getted index", ActualResultNodeIndex, ExpectedResultNodeIndex);
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS