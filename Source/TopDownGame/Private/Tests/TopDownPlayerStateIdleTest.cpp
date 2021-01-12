// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../TopDownPlayerStateIdle.h"
#include "../TopDownPlayerCharacter.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUTopDownPlayerStateIdleTest, "TopDownGame.Character.UTopDownPlayerStateIdle", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

class TopDownPlayerState;

bool FUTopDownPlayerStateIdleTest::RunTest(const FString& Parameters)
{
    auto CreatePlayerStateIdle = [&]() -> UTopDownPlayerStateIdle* {
        auto PlayerStateIdle = NewObject<UTopDownPlayerStateIdle>();
        TestNotNull("PlayerStateIdle must be initialized", PlayerStateIdle);
        return PlayerStateIdle;
    };

    auto CreatePlayerStateIdleAsSubclass = [&]() -> TSubclassOf<UTopDownPlayerStateIdle> {
        TSubclassOf<UTopDownPlayerStateIdle> Subclass;
        Subclass = UTopDownPlayerStateIdle::StaticClass();
        return Subclass;
    };

    auto CreatePlayerCharacter = []() -> ATopDownPlayerCharacter* {
        auto PlayerCharacter = NewObject<ATopDownPlayerCharacter>();
        return PlayerCharacter;
    };

    {
        auto Player = CreatePlayerCharacter();

        auto SubclassOfIdleState = CreatePlayerStateIdleAsSubclass();
        Player->ChangePlayerState(SubclassOfIdleState);

        Player->MoveVertical(1.0f);
        auto CurrentState = Player->GetCurrentPlayerState();

        UTopDownPlayerState* NotExpected = SubclassOfIdleState.GetDefaultObject();
        TestNotEqual("After invoke MoveVertical with value greater than 0.0f Player State must change state", CurrentState, NotExpected);
       
    }

    {
        auto Player = CreatePlayerCharacter();

        auto SubclassOfIdleState = CreatePlayerStateIdleAsSubclass();
        Player->ChangePlayerState(SubclassOfIdleState);

        Player->MoveVertical(0.0f);
        auto CurrentState = Player->GetCurrentPlayerState();

        UTopDownPlayerState* Expected = SubclassOfIdleState.GetDefaultObject();
        TestEqual("After invoke MoveVertical with value 0.0f Player State must not change state", CurrentState, Expected);

    }

    {
        auto Player = CreatePlayerCharacter();

        auto SubclassOfIdleState = CreatePlayerStateIdleAsSubclass();
        Player->ChangePlayerState(SubclassOfIdleState);

        Player->MoveHorizontal(1.0f);
        auto CurrentState = Player->GetCurrentPlayerState();

        UTopDownPlayerState* NotExpected = SubclassOfIdleState.GetDefaultObject();
        TestNotEqual("After invoke MoveHorizontal with value greater than 0.0f Player State must change state", CurrentState, NotExpected);

    }

    {
        auto Player = CreatePlayerCharacter();

        auto SubclassOfIdleState = CreatePlayerStateIdleAsSubclass();
        Player->ChangePlayerState(SubclassOfIdleState);

        Player->MoveHorizontal(0.0f);
        auto CurrentState = Player->GetCurrentPlayerState();

        UTopDownPlayerState* Expected = SubclassOfIdleState.GetDefaultObject();
        TestEqual("After invoke MoveHorizontal with value 0.0f Player State must not change state", CurrentState, Expected);

    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS