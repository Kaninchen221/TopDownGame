// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/TopDownCharacter.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FATopDownCharacterTest, "Project.UnitTests.ATopDownCharacter", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

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
        TestNotNull("InteractionComponent can't be null", InteractionComponent);
    }

    {
        auto Character = CreateCharacter();

        auto FloatingPawnMovementComponent = Character->GetFloatingPawnMovementComponent();
        TestNotNull("FloatingPawnMovementComponent can't be null", FloatingPawnMovementComponent);
    }

    {
        auto Character = CreateCharacter();

        const UTPStatusValueController* HealthStatus = Character->GetHealthStatus();
        TestNotNull("HealthStatus can't be null", HealthStatus);
    }

    {
        auto Character = CreateCharacter();

        const UTPStatusValueController* EnergyStatus = Character->GetEnergyStatus();
        TestNotNull("EnergyStatus can't be null", EnergyStatus);
    }

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS