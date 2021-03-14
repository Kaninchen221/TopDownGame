// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"
#include "Internationalization/Text.h"

#include "TPDialogGraphNode.h"
#include "TPDialogGraphOption.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDialogGraphNodeTest, "Project.UnitTests.DialogSystem.UTPDialogGraphNode", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FDialogGraphNodeTest::RunTest(const FString& Parameters)
{
    auto CreateDialogGraphNode = [&]() -> UTPDialogGraphNode* {
        UTPDialogGraphNode* DialogNode = NewObject<UTPDialogGraphNode>();
        TestNotNull("DialogNode can't be null", DialogNode);
        return DialogNode;
    };

	auto CreateDialogGraphOption = [&]() -> UTPDialogGraphOption* {
		UTPDialogGraphOption* DialogOption = NewObject<UTPDialogGraphOption>();
		TestNotNull("DialogOption can't be null", DialogOption);
		return DialogOption;
	};

	{
        UTPDialogGraphNode* DialogNode = CreateDialogGraphNode();
        UTPDialogGraphNode* SecondDialogNode = CreateDialogGraphNode();

        FText ErrorMessage;
        bool bCanCreateConnection = DialogNode->CanCreateConnection(SecondDialogNode, ErrorMessage);

		TestFalse("DialogeNode can't create connection with DialogNode", bCanCreateConnection);
        TestFalse("ErrorMessage can't be empty", ErrorMessage.IsEmpty());
    }

    {
        UTPDialogGraphNode* DialogNode = CreateDialogGraphNode();
        UTPDialogGraphOption* DialogOption = CreateDialogGraphOption();

        FText ErrorMessage;
        bool bCanCreateConnection = DialogNode->CanCreateConnection(DialogOption, ErrorMessage);
        
        TestTrue("DialogeNode must can create connection with DialogOption " + ErrorMessage.ToString(), bCanCreateConnection);
        TestTrue("ErrorMessage should be empty", ErrorMessage.IsEmpty());
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS