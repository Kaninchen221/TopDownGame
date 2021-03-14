// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "TPDialogOption.h"
#include "TPDialogNode.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTPDialogOptionTest, "Project.UnitTests.DialogSystem.UTPDialogOption", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FTPDialogOptionTest::RunTest(const FString& Parameters)
{
    {
        FTPDialogOption DialogOption;

        FText ExpectedText = FText::FromString("Placeholder");
        DialogOption.SetText(ExpectedText);
        FText ActualText = DialogOption.GetText();
        TestTrue("Setted text must be equal to getted text", ActualText.EqualTo(ExpectedText));
    }

    {
        FTPDialogOption DialogOption;

        int32 ExpectedResultNodeIndex = 3;
        DialogOption.SetResultNode(ExpectedResultNodeIndex);
        int32 ActualResultNodeIndex = DialogOption.GetResultNode();
        TestEqual("Setted index must be equal to getted index", ActualResultNodeIndex, ExpectedResultNodeIndex);
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS