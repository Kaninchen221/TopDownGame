// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../TopDownPlayerState.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUTopDownPlayerStateTest, "TopDownGame.Character.UTopDownPlayerState", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FUTopDownPlayerStateTest::RunTest(const FString& Parameters)
{
    auto CreatePlayerState = [&]() -> UTopDownPlayerState* {
        auto PlayerState = NewObject<UTopDownPlayerState>();
        TestNotNull("PlayerState must be initialized", PlayerState);
        return PlayerState;
    };

    {
        auto PlayerState = CreatePlayerState();

    }


    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS