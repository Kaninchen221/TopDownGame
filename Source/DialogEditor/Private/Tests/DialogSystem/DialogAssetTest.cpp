// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "DialogEditor/Public/DialogAsset.h"
#include "DialogEditor/Public/DialogNode.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FDialogAssetTest, "Project.UnitTests.DialogSystem.UDialogAsset", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FDialogAssetTest::RunTest(const FString& Parameters)
{
	
	auto CreateDialogAsset = [&]() -> UDialogAsset*
	{
		UDialogAsset* DialogAsset = NewObject<UDialogAsset>();
		TestNotNull("After created DialogAsset can't be null", DialogAsset);
		return DialogAsset;
	};

	{
		UDialogAsset* DialogAsset = CreateDialogAsset();
	}

	{
		UDialogAsset* DialogAsset = CreateDialogAsset();

		FText ExpectedTopic = FText::FromString("Placeholder");

		DialogAsset->SetTopic(ExpectedTopic);
		FText ActualTopic = DialogAsset->GetTopic();

		TestTrue("SetTopic must affect 'topic' in Dialog", ExpectedTopic.EqualTo(ActualTopic));
	}

	{
		UDialogAsset* DialogAsset = CreateDialogAsset();

		int32 ActualDialogNodeIdex = DialogAsset->CreateDialogNode();
		TestEqual("First added dialog node must have 0 index", ActualDialogNodeIdex, 0);

		ActualDialogNodeIdex = DialogAsset->CreateDialogNode();
		TestEqual("Next added dialog node must have index increased by one", ActualDialogNodeIdex, 1);
	}

	{
		UDialogAsset* DialogAsset = CreateDialogAsset();

		int32 DialogNodeIdex = DialogAsset->CreateDialogNode();
		FDialogNode* DialogNode = DialogAsset->GetDialogNode(DialogNodeIdex);
	}

	{
		UDialogAsset* DialogAsset = CreateDialogAsset();

		int32 InvalidDialogNodeIndex = 10;
		FDialogNode* DialogNode = DialogAsset->GetDialogNode(InvalidDialogNodeIndex);
		TestNull("GetDialogNode invoked with invalid index must return nullptr", DialogNode);
	}

	{
		UDialogAsset* DialogAsset = CreateDialogAsset();

		int32 ActualDialogOptionIndex = DialogAsset->CreateDialogOption();
		int32 ExpectedDialogOptionIndex = 0;
		TestEqual("First created dialog option must have index 0", ActualDialogOptionIndex, ExpectedDialogOptionIndex);

		ActualDialogOptionIndex = DialogAsset->CreateDialogOption();
		ExpectedDialogOptionIndex = 1;
		TestEqual("Second created dialog option must have index 1", ActualDialogOptionIndex, ExpectedDialogOptionIndex);
	}

	{
		UDialogAsset* DialogAsset = CreateDialogAsset();

		int DialogOptionIndex = DialogAsset->CreateDialogOption();
		FDialogOption* DialogOption = DialogAsset->GetDialogOption(DialogOptionIndex);
	}

	{
		UDialogAsset* DialogAsset = CreateDialogAsset();

		int32 InvalidDialogOptionIndex = 10;
		FDialogOption* DialogOption = DialogAsset->GetDialogOption(InvalidDialogOptionIndex);
		TestNull("GetDialogOption invoked with invalid index must return nullptr", DialogOption);
	}

	{
		TArray<int> Array;
		int32 Size = 5;
		Array.Init(0, Size);

		int32 ExpectedLastIndex = Size - 1;
		int32 ActualLastIndex = UDialogAsset::GetLastIndexOf(Array);

		TestEqual("LastIndex must be equal: NumberOfElemtsInArray - 1", ActualLastIndex, ExpectedLastIndex);
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS