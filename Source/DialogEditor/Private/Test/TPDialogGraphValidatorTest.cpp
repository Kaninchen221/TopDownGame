// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "TPDialogGraphValidator.h"
#include "DialogSystem/TPDialogGraph.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTPDialogGraphValidatorTest, "Project.UnitTests.FTPDialogGraphValidator", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FTPDialogGraphValidatorTest::RunTest(const FString& Parameters)
{

    auto CreateEmptyDialogGraph = [&]() -> UTPDialogGraph*
    {
        UTPDialogGraph* DialogGraph = NewObject<UTPDialogGraph>();
        TestNotNull("DialogGraph can't be null", DialogGraph);
        return DialogGraph;
    };

    {
        UTPDialogGraph* DialogGraph = CreateEmptyDialogGraph();
        TPDialogGraphValidator DialogGraphValidator;
        DialogGraphValidator.Validate(DialogGraph);
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS