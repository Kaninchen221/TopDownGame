// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/TopDownNonPlayerCharacter.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FATopDownNonPlayerCharacterTest, "Project.UnitTests.ATopDownNonPlayerCharacter", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FATopDownNonPlayerCharacterTest::RunTest(const FString& Parameters)
{
    auto CreateNonPlayerCharacter = [&]() -> ATopDownNonPlayerCharacter* {
        auto NonPlayerCharacter = NewObject<ATopDownNonPlayerCharacter>();
        TestNotNull("NonPlayerCharacter must be initialized", NonPlayerCharacter);
        return NonPlayerCharacter;
    };

    {
        CreateNonPlayerCharacter();
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS