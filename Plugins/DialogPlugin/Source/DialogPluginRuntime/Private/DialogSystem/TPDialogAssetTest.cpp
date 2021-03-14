// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "TPDialogAsset.h"
#include "TPDialogNode.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTPDialogAssetTest, "Project.UnitTests.DialogSystem.UTPDialogAsset", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FTPDialogAssetTest::RunTest(const FString& Parameters)
{
	
	auto CreateDialogAsset = [&]() -> UTPDialogAsset*
	{
		UTPDialogAsset* DialogAsset = NewObject<UTPDialogAsset>();
		TestNotNull("After created DialogAsset can't be null", DialogAsset);
		return DialogAsset;
	};

	{
		UTPDialogAsset* DialogAsset = CreateDialogAsset();
	}

	{
		UTPDialogAsset* DialogAsset = CreateDialogAsset();

		FText ExpectedTopic = FText::FromString("Placeholder");

		DialogAsset->SetTopic(ExpectedTopic);
		FText ActualTopic = DialogAsset->GetTopic();

		TestTrue("SetTopic must affect 'topic' in Dialog", ExpectedTopic.EqualTo(ActualTopic));
	}

	{
		UTPDialogAsset* DialogAsset = CreateDialogAsset();

		int32 ActualDialogNodeIdex = DialogAsset->CreateDialogNode();
		TestEqual("First added dialog node must have 0 index", ActualDialogNodeIdex, 0);

		ActualDialogNodeIdex = DialogAsset->CreateDialogNode();
		TestEqual("Next added dialog node must have index increased by one", ActualDialogNodeIdex, 1);
	}

	{
		UTPDialogAsset* DialogAsset = CreateDialogAsset();

		int32 DialogNodeIdex = DialogAsset->CreateDialogNode();
		FTPDialogNode* DialogNode = DialogAsset->GetDialogNode(DialogNodeIdex);
	}

	{
		UTPDialogAsset* DialogAsset = CreateDialogAsset();

		int32 InvalidDialogNodeIndex = 10;
		FTPDialogNode* DialogNode = DialogAsset->GetDialogNode(InvalidDialogNodeIndex);
		TestNull("GetDialogNode invoked with invalid index must return nullptr", DialogNode);
	}

	{
		UTPDialogAsset* DialogAsset = CreateDialogAsset();

		int32 ActualDialogOptionIndex = DialogAsset->CreateDialogOption();
		int32 ExpectedDialogOptionIndex = 0;
		TestEqual("First created dialog option must have index 0", ActualDialogOptionIndex, ExpectedDialogOptionIndex);

		ActualDialogOptionIndex = DialogAsset->CreateDialogOption();
		ExpectedDialogOptionIndex = 1;
		TestEqual("Second created dialog option must have index 1", ActualDialogOptionIndex, ExpectedDialogOptionIndex);
	}

	{
		UTPDialogAsset* DialogAsset = CreateDialogAsset();

		int DialogOptionIndex = DialogAsset->CreateDialogOption();
		FTPDialogOption* DialogOption = DialogAsset->GetDialogOption(DialogOptionIndex);
	}

	{
		UTPDialogAsset* DialogAsset = CreateDialogAsset();

		int32 InvalidDialogOptionIndex = 10;
		FTPDialogOption* DialogOption = DialogAsset->GetDialogOption(InvalidDialogOptionIndex);
		TestNull("GetDialogOption invoked with invalid index must return nullptr", DialogOption);
	}

	{
		TArray<int> Array;
		int32 Size = 5;
		Array.Init(0, Size);

		int32 ExpectedLastIndex = Size - 1;
		int32 ActualLastIndex = UTPDialogAsset::GetLastIndexOf(Array);

		TestEqual("LastIndex must be equal: NumberOfElemtsInArray - 1", ActualLastIndex, ExpectedLastIndex);
	}

	return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS