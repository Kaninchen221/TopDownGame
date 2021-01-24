// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../TopDownNonPlayerCharacter.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FATopDownNonPlayerCharacterTest, "TopDownGame.Character.ATopDownNonPlayerCharacter", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FATopDownNonPlayerCharacterTest::RunTest(const FString& Parameters)
{
    auto CreateNonPlayerCharacter = [&]() -> ATopDownNonPlayerCharacter* {
        auto NonPlayerCharacter = NewObject<ATopDownNonPlayerCharacter>();
        TestNotNull("NonPlayerCharacter must be initialized", NonPlayerCharacter);
        return NonPlayerCharacter;
    };

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS