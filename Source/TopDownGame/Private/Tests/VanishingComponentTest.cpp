// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/VanishingComponent.h"

#include "PaperSprite.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FVanishingComponentTest, "TopDownGame.UnitTests.UVanishingComponent", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FVanishingComponentTest::RunTest(const FString& Parameters)
{
	auto CreateVanishingComponent = [&]() -> UVanishingComponent* {
		UVanishingComponent* VanishingComponent = NewObject<UVanishingComponent>();
		TestNotNull("VanishingComponent can't be null", VanishingComponent);
		return VanishingComponent;
	};

	auto CreateSprite = [&]() -> UPaperSprite* {
		UPaperSprite* Sprite = NewObject<UPaperSprite>();
		TestNotNull("Sprite can't be null", Sprite);
		return Sprite;
	};

	{
		UVanishingComponent* Component = CreateVanishingComponent();
	}

	{
		UVanishingComponent* Component = CreateVanishingComponent();
		UPaperSprite* ExpectedSprite = CreateSprite();

		Component->SetControlledSprite(ExpectedSprite);
		UPaperSprite* ActualSprite = Component->GetControlledSprite();

		TestEqual("Expected and Actual sprites must be equal", ActualSprite, ExpectedSprite);
	}

	{
		UVanishingComponent* Component = CreateVanishingComponent();

		float ExpectedMinAlphaChannelValue = 0.65f;
		Component->SetMinAlphaChannelValue(ExpectedMinAlphaChannelValue);

		float ActualMinAlphaChannelValue = Component->GetMinAlphaChannelValue();
		TestEqual("Actual and Expected MinAlphaChannelValues must be equal", ActualMinAlphaChannelValue, ExpectedMinAlphaChannelValue);
	}

	{
		UVanishingComponent* Component = CreateVanishingComponent();

		USphereComponent* CollisionComponent = Component->GetCollisionComponent();
		TestNotNull("CollisionComponent can't be null", CollisionComponent);
	}

	{
		UVanishingComponent* Component = CreateVanishingComponent();

		const float ExpectedMaxAlphaChannelValue = 1.0f;
		float ActualMaxAlphaChannelValue = Component->GetMaxAlphaChannelValue();

		TestEqual("Expected and Actual MaxAlphaChannelValue must be equal", ActualMaxAlphaChannelValue, ExpectedMaxAlphaChannelValue);
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS