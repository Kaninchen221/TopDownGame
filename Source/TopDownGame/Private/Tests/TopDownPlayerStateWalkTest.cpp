// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../TopDownPlayerStateWalk.h"
#include "../TopDownPlayerCharacter.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUTopDownPlayerStateWalk, "TopDownGame.Character.UTopDownPlayerStateWalk", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FUTopDownPlayerStateWalk::RunTest(const FString& Parameters)
{
    auto CreatePlayerStateWalk = [&]() {
        auto PlayerStateWalk = NewObject<UTopDownPlayerStateWalk>();
        TestNotNull("PlayerStateWalk can't be null", PlayerStateWalk);
        return PlayerStateWalk;
    };

    auto CreatePlayerCharacter = []() {
        auto PlayerCharacter = NewObject<ATopDownPlayerCharacter>();
        return PlayerCharacter;
    };

    {
        auto WalkState = CreatePlayerStateWalk();

        WalkState->MoveHorizontal(1.0f);
        auto ActualIsWalkingHorizontal = WalkState->IsWalkingHorizontal();

        TestTrue("After calling MoveHoriozntal with value greater than 0.0f IsWalkingHorizontal must return true", ActualIsWalkingHorizontal);
    }

    {
        auto WalkState = CreatePlayerStateWalk();

        WalkState->MoveVertical(1.0f);
        auto ActualIsWalkingVertical = WalkState->IsWalkingVertical();

        TestTrue("After calling MoveVertical with value greater than 0.0f IsWalkingVertical must return true", ActualIsWalkingVertical);
    }

    {
        auto WalkState = CreatePlayerStateWalk();

        WalkState->MoveVertical(1.0f);
        auto ActualIsWalkingUp = WalkState->IsWalkingUp();

        TestTrue("After calling MoveVertical with positive value IsWalkingUp must return true", ActualIsWalkingUp);
    }

    {
        auto WalkState = CreatePlayerStateWalk();

        WalkState->MoveVertical(-1.0f);
        auto ActualIsWalkingDown = WalkState->IsWalkingDown();

        TestTrue("After calling MoveVertical with negative value IsWalkingDown must return true", ActualIsWalkingDown);
    }

    {
        auto WalkState = CreatePlayerStateWalk();

        WalkState->MoveHorizontal(1.0f);
        auto ActualIsWalkingRight = WalkState->IsWalkingRight();

        TestTrue("After calling MoveHorizontal with positive value IsWalkingRight must return true", ActualIsWalkingRight);
    }

    {
        auto WalkState = CreatePlayerStateWalk();

        WalkState->MoveHorizontal(-1.0f);
        auto ActualIsWalkingLeft = WalkState->IsWalkingLeft();

        TestTrue("After calling MoveHorizontal with negative value IsWalkingLeft must return true", ActualIsWalkingLeft);
    }

    {
        auto WalkState = CreatePlayerStateWalk();
        auto PlayerCharacter = CreatePlayerCharacter();
        WalkState->Enter(PlayerCharacter);

        auto ExpectedDirection = ETopDownPlayerDirection::UP;
        WalkState->MoveVertical(1.0f);
        WalkState->Tick(0.f);

        auto ActualDirection = PlayerCharacter->GetCurrentDirection();
        TestEqual("The ActualDirection should be UP", ActualDirection, ExpectedDirection);
    }

    {
        auto WalkState = CreatePlayerStateWalk();
        auto PlayerCharacter = CreatePlayerCharacter();
        WalkState->Enter(PlayerCharacter);

        auto ExpectedDirection = ETopDownPlayerDirection::RIGHT;
        WalkState->MoveHorizontal(1.0f);
        WalkState->Tick(0.f);

        auto ActualDirection = PlayerCharacter->GetCurrentDirection();
        TestEqual("The ActualDirection should be RIGHT", ActualDirection, ExpectedDirection);
    }

    {
        auto WalkState = CreatePlayerStateWalk();
        auto PlayerCharacter = CreatePlayerCharacter();
        WalkState->Enter(PlayerCharacter);

        auto ExpectedDirection = ETopDownPlayerDirection::DOWN;
        WalkState->MoveVertical(-1.0f);
        WalkState->Tick(0.f);

        auto ActualDirection = PlayerCharacter->GetCurrentDirection();
        TestEqual("The ActualDirection should be DOWN", ActualDirection, ExpectedDirection);
    }

    {
        auto WalkState = CreatePlayerStateWalk();
        auto PlayerCharacter = CreatePlayerCharacter();
        WalkState->Enter(PlayerCharacter);

        auto ExpectedDirection = ETopDownPlayerDirection::LEFT;
        WalkState->MoveHorizontal(-1.0f);
        WalkState->Tick(0.f);

        auto ActualDirection = PlayerCharacter->GetCurrentDirection();
        TestEqual("The ActualDirection should be LEFT", ActualDirection, ExpectedDirection);
    }

    {
        auto WalkState = CreatePlayerStateWalk();
        auto PlayerCharacter = CreatePlayerCharacter();
        WalkState->Enter(PlayerCharacter);

        WalkState->MoveHorizontal(0.0f);
        WalkState->MoveVertical(0.0f);

        auto ActualShouldChangeStateToIdle = WalkState->ShouldChangeStateToIdle();
        TestTrue("ShouldChangeStateToIdle must return true", ActualShouldChangeStateToIdle);

        WalkState->MoveHorizontal(1.0f);
        ActualShouldChangeStateToIdle = WalkState->ShouldChangeStateToIdle();
        TestFalse("ShouldChangeStateToIdle must return false", ActualShouldChangeStateToIdle);

        WalkState->MoveHorizontal(0.0f);
        WalkState->MoveVertical(1.0f);
        ActualShouldChangeStateToIdle = WalkState->ShouldChangeStateToIdle();
        TestFalse("ShouldChangeStateToIdle must return false", ActualShouldChangeStateToIdle);
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS