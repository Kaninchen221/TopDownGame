// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "DialogEditor/Public/DialogGraphEditor.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDialogGraphEditorTest, "Project.UnitTests.DialogSystem.SDialogGraphEditor", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FDialogGraphEditorTest::RunTest(const FString& Parameters)
{

	{
		//SDialogGraphEditor DialogGraphEditor;
		//DialogGraphEditor.Construct(SGraphEditor::FArguments());
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS