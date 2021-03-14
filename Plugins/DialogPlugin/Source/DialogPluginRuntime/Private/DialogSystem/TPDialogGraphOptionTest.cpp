// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"
#include "Internationalization/Text.h"

#include "TPDialogGraphOption.h"
#include "TPDialogGraphNode.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDialogGraphOptionTest, "Project.UnitTests.DialogSystem.UTPDialogGraphOption", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FDialogGraphOptionTest::RunTest(const FString& Parameters)
{
    auto CreateDialogGraphOption = [&]() -> UTPDialogGraphOption* {
        UTPDialogGraphOption* DialogOption = NewObject<UTPDialogGraphOption>();
        TestNotNull("DialogOption can't be null", DialogOption);
        return DialogOption;
    };

    auto CreateDialogGraphNode = [&]() -> UTPDialogGraphNode* {
        UTPDialogGraphNode* DialogNode = NewObject<UTPDialogGraphNode>();
        TestNotNull("DialogNode can't be null", DialogNode);
        return DialogNode;
    };

	{
        UTPDialogGraphOption* DialogOption = CreateDialogGraphOption();
        UTPDialogGraphNode* DialogNode = CreateDialogGraphNode();

        FText ErrorMessage;
        bool bCanCreateConnection = DialogOption->CanCreateConnection(DialogNode, ErrorMessage);

        TestTrue("DialogOption must can create connection with DialogNode " + ErrorMessage.ToString(), bCanCreateConnection);
        TestTrue("ErrorMessage should be empty", ErrorMessage.IsEmpty());
    }

    {
        UTPDialogGraphOption* DialogOption = CreateDialogGraphOption();
        UTPDialogGraphOption* SecondDialogOption = CreateDialogGraphOption();

        FText ErrorMessage;
        bool bCanCreateConnection = DialogOption->CanCreateConnection(DialogOption, ErrorMessage);

        TestFalse("DialogOption can't create connection with other DialogOption", bCanCreateConnection);
        TestFalse("ErrorMessage shouldn't be empty", ErrorMessage.IsEmpty());
    }

    {
        UTPDialogGraphOption* DialogOption = CreateDialogGraphOption();
        UTPDialogGraphNode* DialogNode = CreateDialogGraphNode();
        DialogOption->ChildrenNodes.Add(DialogNode);

        FText ErrorMessage;
        bool bCanCreateConnection = DialogOption->CanCreateConnection(DialogNode, ErrorMessage);

        TestTrue("DialogOption can create connection with already connected node", bCanCreateConnection);
        TestTrue("ErrorMessage should be empty", ErrorMessage.IsEmpty());
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS