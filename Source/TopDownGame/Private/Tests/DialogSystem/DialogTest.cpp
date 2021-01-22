// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/DialogSystem/DialogComponent.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUDialogComponentTest, "TopDownGame.DialogSystem.UDialogComponent", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FUDialogComponentTest::RunTest(const FString& Parameters)
{
    auto CreateDialogComponent = [&]() {
        auto DialogComponent = NewObject<UDialogComponent>();
        TestNotNull("DialogComponent must be initialized", DialogComponent);
        return DialogComponent;
    };

    {
        auto Dialog = CreateDialogComponent();
        
        auto ExpectedTopic = FText::FromString("Placeholder");
        Dialog->SetTopic(ExpectedTopic);

        auto ActualTopic = Dialog->GetTopic();
        TestTrue("ActualTopic and ExpectedTopic must be equal", ActualTopic.EqualTo(ExpectedTopic));
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS