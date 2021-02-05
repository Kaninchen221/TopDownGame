// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DialogComponent.generated.h"

UCLASS( ClassGroup=(Dialog), Blueprintable, meta=(BlueprintSpawnableComponent) )
class TOPDOWNGAME_API UDialogComponent : public UActorComponent
{
	GENERATED_BODY()


public:	

	UDialogComponent();

private:

	void InitializeDialogAsset();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(Category = Dialog, EditAnywhere, BlueprintReadWrite)
	UDialogAsset* DialogAsset;

public:	
	
	UFUNCTION(BlueprintCallable)
	UDialogAsset* GetDialogAsset() noexcept { return DialogAsset; }

};
