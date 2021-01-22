// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownNonPlayerCharacter.h"

#include "Engine/CollisionProfile.h"

#include "Public/DialogSystem/DialogComponent.h"

ATopDownNonPlayerCharacter::ATopDownNonPlayerCharacter()
{
	InitializeDialogComponent();
}

void ATopDownNonPlayerCharacter::InitializeDialogComponent() 
{
	static FName DialogComponentName(TEXT("Dialog"));
	DialogComponent = CreateDefaultSubobject<UDialogComponent>(DialogComponentName);
	if (DialogComponent) {
		
	}
	else {
		throw std::exception("DialogComponent is null");
	}
}