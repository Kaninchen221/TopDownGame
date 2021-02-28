// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"
#include "Internationalization/Text.h"

#include "DialogSystem/TPDialogNode.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDialogNodeTest, "Project.UnitTests.DialogSystem.UTPDialogNode", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FDialogNodeTest::RunTest(const FString& Parameters)
{
    {
        FTPDialogNode DialogNode;

        FText ExpectedText = FText::FromString("Placeholder");
        DialogNode.SetText(ExpectedText);
        FText ActualText = DialogNode.GetText();

        TestTrue("Setted text must be equal to getted text", ActualText.EqualTo(ExpectedText));
    }

    {
        FTPDialogNode DialogNode;

        int32 IndexOfDialogOption = 0;
        DialogNode.AddDialogOption(IndexOfDialogOption);
        const TArray<int32>& DialogOptions = DialogNode.GetDialogOptions();
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS