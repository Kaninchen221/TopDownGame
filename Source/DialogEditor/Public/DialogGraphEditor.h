// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GraphEditor.h"

class UDialogAsset;

class DIALOGEDITOR_API SDialogGraphEditor : public SGraphEditor
{

public:

	SLATE_BEGIN_ARGS(SDialogGraphEditor)
	{ }
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

};
