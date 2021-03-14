// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreTypes.h"
#include "Misc/AutomationTest.h"

#include "TPDialogGraphValidator.h"
#include "TPDialogGraph.h"
#include "TPDialogGraphNode.h"
#include "TPDialogGraphOption.h"
#include "TPDialogGraphNodeMock.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FTPDialogGraphValidatorTest, "Project.UnitTests.DialogSystem.FTPDialogGraphValidator", EAutomationTestFlags::EditorContext | EAutomationTestFlags::SmokeFilter)

bool FTPDialogGraphValidatorTest::RunTest(const FString& Parameters)
{
    auto CreateEmptyDialogGraph = [&]() -> UTPDialogGraph*
    {
        UTPDialogGraph* DialogGraph = NewObject<UTPDialogGraph>();
        TestNotNull("DialogGraph can't be null", DialogGraph);
        return DialogGraph;
    };

    auto CreateDialogGraphNode = [&]() -> UTPDialogGraphNode*
    {
        UTPDialogGraphNode* DialogNode = NewObject<UTPDialogGraphNode>();
        TestNotNull("DialogGraphNode can't be null", DialogNode);
        return DialogNode;
    };

    auto CreateDialogGraphOption = [&]() -> UTPDialogGraphOption*
    {
        UTPDialogGraphOption* DialogOption = NewObject<UTPDialogGraphOption>();
        TestNotNull("DialogGraphOption can't be null", DialogOption);
        return DialogOption;
    };

	auto CreateDialogGraphNodeMock = [&]() -> UTPDialogGraphNodeMock*
	{
		UTPDialogGraphNodeMock* DialogNodeMock = NewObject<UTPDialogGraphNodeMock>();
		TestNotNull("DialogGraphNodeMock can't be null", DialogNodeMock);
		return DialogNodeMock;
	};

	auto FillDialogGraphWithValidData = [&](UTPDialogGraph* DialogGraph)
	{
		UTPDialogGraphNodeMock* RootNode = CreateDialogGraphNodeMock();
        RootNode->SetNodeTitle(FText::FromString("EndOption"));
		DialogGraph->RootNodes.Add(RootNode);
		DialogGraph->RootNodes.Add(RootNode);
		DialogGraph->AllNodes.Add(RootNode);

		UTPDialogGraphOption* DialogOptionNode = CreateDialogGraphOption();
		RootNode->ChildrenNodes.Add(DialogOptionNode);
		DialogOptionNode->ParentNodes.Add(RootNode);
		DialogGraph->AllNodes.Add(DialogOptionNode);

		UTPDialogGraphNode* DialogNode = CreateDialogGraphNode();
		DialogOptionNode->ChildrenNodes.Add(DialogNode);
		DialogNode->ParentNodes.Add(DialogOptionNode);
		DialogGraph->AllNodes.Add(DialogNode);

		UTPDialogGraphOption* DialogEndOptionNode = CreateDialogGraphOption();
        DialogEndOptionNode->SetNodeTitle(FText::FromString("EndOption"));
		DialogNode->ChildrenNodes.Add(DialogEndOptionNode);
		DialogEndOptionNode->ParentNodes.Add(DialogNode);
		DialogGraph->AllNodes.Add(DialogEndOptionNode);
	};

    {
        UTPDialogGraph* DialogGraph = nullptr;
        FString Result = FTPDialogGraphValidator::ValidateGraph(DialogGraph);
    
        TestFalse("ValidateGraph: nullptr should return NOT EMPTY Result text", Result.IsEmpty());
    }
    
    //{
    //    UTPDialogGraph* DialogGraph = CreateEmptyDialogGraph();
    //    
    //    FillDialogGraphWithValidData(DialogGraph);
    //
    //    FText Result = FTPDialogGraphValidator::ValidateGraph(DialogGraph);
    //    TestTrue("ValidateDialogGraph: UTPDialogGraph should return EMPTY Result text: " + Result.ToString(), Result.IsEmpty());
    //
	//	UTPDialogGraphNodeMock* RootNode = Cast<UTPDialogGraphNodeMock>(*DialogGraph->RootNodes.begin());
	//	int32 ActualCanCreateConnectionCallCount = RootNode->GetCanCreateConnectionCallCount();
	//	int32 ExpectedCanCreateConnectionCallCount = 1;
	//	TestEqual("Actual and Expected CanCreateConnectionCallCount must be equal", ActualCanCreateConnectionCallCount, ExpectedCanCreateConnectionCallCount);
    //}
    
    {
        UTPDialogGraph* DialogGraph = CreateEmptyDialogGraph();
        UTPDialogGraphOption* InvalidRootNode = CreateDialogGraphOption();
    
		FString Result = FTPDialogGraphValidator::ValidateRootNode(InvalidRootNode);
		TestFalse("ValidateRootNode: InvalidRootNode(UTPDialogGraphOption) should return NOT EMPTY Result text", Result.IsEmpty());
    }

	{
		UTPDialogGraphNode* DialogNode = CreateDialogGraphNode();
		FString Result = FTPDialogGraphValidator::ValidateRootNode(DialogNode);

		TestTrue("ValidateRootNode: UTPDialogGraphNode should return EMPTY Result text", Result.IsEmpty());
	}
    
	{
        UTPDialogGraphNode* DialogNode = nullptr;
		FString Result = FTPDialogGraphValidator::ValidateRootNode(DialogNode);
    
		TestFalse("ValidateRootNode: nullptr should return NOT EMPTY Result text", Result.IsEmpty());
	}
    
    {
        UTPDialogGraphOption* DialogOption = CreateDialogGraphOption();
        FString Result = FTPDialogGraphValidator::ValidateRootNode(DialogOption);
    
        TestFalse("ValidateRootNode: UTPDialogGraphOption should return NOT EMPTY Result text", Result.IsEmpty());
    }
    
	{
        UGenericGraphNode* Node = nullptr;
    
		FString Result = FTPDialogGraphValidator::ValidateNode(Node);
    
        TestFalse("ValidateNode: nullptr should return NOT EMPTY Result", Result.IsEmpty());
	}

 	{
 	    UTPDialogGraphNodeMock* DialogNodeMock = CreateDialogGraphNodeMock();
 	    UTPDialogGraphOption* DialogOption = CreateDialogGraphOption();
        DialogNodeMock->ChildrenNodes.Add(DialogOption);
        DialogOption->ParentNodes.Add(DialogNodeMock);

 	    FString Result = FTPDialogGraphValidator::ValidateNode(DialogNodeMock);
 	    TestTrue("ValidateNode: DialogOption(Child) - DialogNodeMock(Parent) should return EMPTY Result", Result.IsEmpty());

        int32 ActualCanCreateConnectionCallCount = DialogNodeMock->GetCanCreateConnectionCallCount();
        int32 ExpectedCanCreateConnectionCallCount = 1;
        TestEqual("Actual and Expected CanCreateConnectionCallCount must be equal", ActualCanCreateConnectionCallCount, ExpectedCanCreateConnectionCallCount);
 	}

    return true;
}

#endif /// WITH_DEV_AUTOMATION_TESTS