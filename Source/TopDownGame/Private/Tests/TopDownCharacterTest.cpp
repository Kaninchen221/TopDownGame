// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../TopDownCharacter.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FATopDownCharacterTest, "TopDownGame.Character.ATopDownCharacter", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FATopDownCharacterTest::RunTest(const FString& Parameters)
{
    auto CreateCharacter = [&]() -> ATopDownCharacter* {
        auto Character = NewObject<ATopDownCharacter>();
        TestNotNull("Character must be initialized", Character);
        return Character;
    };

    {
        auto Character = CreateCharacter();

        auto ExpectedName = FText::FromString("Placeholder");
        Character->SetName(ExpectedName);

        auto Name = Character->GetName();
        TestTrue("GetName must return equal FText to param of SetName", Name.EqualTo(ExpectedName));
    }

    {
        auto Character = CreateCharacter();

        auto CapsuleComponent = Character->GetCapsuleComponent();
        TestNotNull("CapsuleComponent can't be null", CapsuleComponent);
    }

    {
        auto Character = CreateCharacter();

        auto CurrentAnimationComponent = Character->GetCurrentAnimationComponent();
        TestNotNull("CurrentAnimationComponent can't be null", CurrentAnimationComponent);
    }

    {
        auto Character = CreateCharacter();

        auto InteractionComponent = Character->GetInteractionComponent();
        TestNotNull("InteractionComponent", InteractionComponent);
    }

    {
        auto Character = CreateCharacter();

        auto FloatingPawnMovementComponent = Character->GetFloatingPawnMovementComponent();
        TestNotNull("FloatingPawnMovementComponent can't be null", FloatingPawnMovementComponent);
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS