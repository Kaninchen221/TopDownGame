// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "DialogEditor/Public/DialogGraph.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDialogGraphTest, "Project.UnitTests.DialogSystem.UDialogGraph", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FDialogGraphTest::RunTest(const FString& Parameters)
{
	auto CreateDialogGraph = [&]() -> UDialogGraph*
	{
		UDialogGraph* DialogGraph = NewObject<UDialogGraph>();
		TestNotNull("DialogGraph can't be null", DialogGraph);
		return DialogGraph;
	};

	{
		UDialogGraph* DialogGraph = CreateDialogGraph();
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS