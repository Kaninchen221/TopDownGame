// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/DialogSystem/DialogOption.h"
#include "../Public/DialogSystem/DialogNode.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUDialogOptionTest, "Project.UnitTests.DialogSystem.UDialogOption", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FUDialogOptionTest::RunTest(const FString& Parameters)
{
    auto InitializeDialogOption = [&]() -> UDialogOption* {
        auto DialogOption = NewObject<UDialogOption>();
        TestNotNull("DialogOption must be initialized", DialogOption);
        return DialogOption;
    };

    {
        auto DialogOption = InitializeDialogOption();
        auto ExpectedResultNodeText = FText::FromString("Placeholder");

        auto ResultNode = DialogOption->CreateResultNode(ExpectedResultNodeText);
        TestNotNull("ResultNode can't be null", ResultNode);

        auto ResultNodeText = ResultNode->GetText();
        TestTrue("Text must be equal", ResultNodeText.EqualTo(ExpectedResultNodeText));
    }

    {
        auto DialogOption = InitializeDialogOption();
        DialogOption->SetCanBeChoosen(true);
        auto ExpectedResultNode = DialogOption->CreateResultNode(FText::FromString("Placeholder"));

        auto ResultNode = DialogOption->Choose();
        TestEqual("Choose must return same pointer as CreateResultNode", ResultNode, ExpectedResultNode);
    }

    {
        auto DialogOption = InitializeDialogOption();
        DialogOption->SetCanBeChoosen(false);
        auto ExpectedResultNode = DialogOption->CreateResultNode(FText::FromString("Placeholder"));

        auto ResultNode = DialogOption->Choose();
        TestNull("If DialogOption can't be choosen then Choose must return nullptr", ResultNode);
    }

    {
        auto DialogOption = InitializeDialogOption();
        DialogOption->SetCanBeChoosen(true);

        auto ResultNode = DialogOption->Choose();
        TestNull("If DialogOption can't be choosen then Choose must return nullptr", ResultNode);
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS