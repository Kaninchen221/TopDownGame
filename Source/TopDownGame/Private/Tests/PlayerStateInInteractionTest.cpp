// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../TopDownPlayerStateInInteraction.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUTopDownPlayerStateInInteraction, "TopDownGame.Character.UTopDownPlayerStateInInteraction", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FUTopDownPlayerStateInInteraction::RunTest(const FString& Parameters)
{
    auto CreatePlayerStateInInteraction = [&]() {
        auto PlayerStateInInteraction = NewObject<UTopDownPlayerStateInInteraction>();
        TestNotNull("PlayerStateInInteraction can't be null", PlayerStateInInteraction);
        return PlayerStateInInteraction;
    };

    {
        auto StateInInteraction = CreatePlayerStateInInteraction();
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS