// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"
#include "Internationalization/Text.h"

#include "../Public/DialogSystem/DialogNode.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUDialogNodeTest, "TopDownGame.DialogSystem.UDialogNode", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FUDialogNodeTest::RunTest(const FString& Parameters)
{
    auto DialogNode = NewObject<UDialogNode>();
    TestNotNull("DialogNode must be initialized", DialogNode);

    /// Add Dialog Option
    {
        auto ExpectedDialogOptionText = FText::FromString("Placeholder");
        bool ExpectedCanBeChoosen = true;
        size_t ExpectedCount = 1u;
        DialogNode->AddDialogOption(ExpectedDialogOptionText, ExpectedCanBeChoosen);

        auto Options = DialogNode->GetDialogOptions();
        auto Count = Options.Num();
        TestEqual("Options must have 1 option", Count, ExpectedCount);

        auto CreatedOption = *Options.begin();
        auto Text = CreatedOption->GetText();
        TestTrue("Text must be equal", Text.EqualTo(ExpectedDialogOptionText));

        auto CanBeChoosen = CreatedOption->IsCanBeChoosen();
        TestEqual("Can be choosen must be equal", CanBeChoosen, ExpectedCanBeChoosen);
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS