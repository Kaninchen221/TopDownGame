// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/DialogSystem/DialogComponent.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUDialogComponentTest, "Project.UnitTests.DialogSystem.UDialogComponent", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FUDialogComponentTest::RunTest(const FString& Parameters)
{
    auto CreateDialogComponent = [&]() {
        auto DialogComponent = NewObject<UDialogComponent>();
        TestNotNull("DialogComponent must be initialized", DialogComponent);
        return DialogComponent;
    };

    {
        CreateDialogComponent();
    }

    {
        UDialogComponent* DialogComponent = CreateDialogComponent();

        UDialogAsset* DialogAsset = DialogComponent->GetDialogAsset();
        TestNotNull("DialogAsset can't be null", DialogAsset);
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS