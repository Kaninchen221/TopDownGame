// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "../Public/DialogSystem/DialogAsset.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FUDialogAssetTest, "Project.UnitTests.DialogSystem.UDialogAsset", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FUDialogAssetTest::RunTest(const FString& Parameters)
{
	auto CreateDialogAsset = [&]() {
		auto DialogAsset = NewObject<UDialogAsset>();
		TestNotNull("DialogAsset must be initialized", DialogAsset);
		return DialogAsset;
	};

	{
		CreateDialogAsset();
	}

	{
		auto Dialog = CreateDialogAsset();

		auto ExpectedTopic = FText::FromString("Placeholder");
		Dialog->SetTopic(ExpectedTopic);

		auto ActualTopic = Dialog->GetTopic();
		TestTrue("ActualTopic and ExpectedTopic must be equal", ActualTopic.EqualTo(ExpectedTopic));
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS