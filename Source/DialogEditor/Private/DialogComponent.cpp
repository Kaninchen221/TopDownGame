// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogEditor/Public/DialogComponent.h"
#include "DialogEditor/Public/DialogAsset.h"

UDialogComponent::UDialogComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	InitializeDialogAsset();
}

void UDialogComponent::InitializeDialogAsset()
{
	DialogAsset = CreateDefaultSubobject<UDialogAsset>("DialogAsset");
	if (DialogAsset) {

	}
	else {
		UE_LOG(LogTemp, Error, TEXT("DialogAsset is null"));
	}
}

void UDialogComponent::BeginPlay()
{
	Super::BeginPlay();

}