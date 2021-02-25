// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "DialogEditor/Public/DialogGraphSchema.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDialogGraphSchemaTest, "Project.UnitTests.DialogSystem.UDialogGraphSchema", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FDialogGraphSchemaTest::RunTest(const FString& Parameters)
{
	auto CreateDialogGraphSchema = [&]() -> UDialogGraphSchema*
	{
		UDialogGraphSchema* DialogGraphSchema = NewObject<UDialogGraphSchema>();
		TestNotNull("DialogGraphSchema can't be null", DialogGraphSchema);
		return DialogGraphSchema;
	};

	{
		UDialogGraphSchema* DialogGraphSchema = CreateDialogGraphSchema();
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS