// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../TopDownCharacter.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FATopDownCharacterTest, "TopDownGame.Character.ATopDownCharacter", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FATopDownCharacterTest::RunTest(const FString& Parameters)
{
    auto Character = NewObject<ATopDownCharacter>();
    TestNotNull("Character must be initialized", Character);

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS