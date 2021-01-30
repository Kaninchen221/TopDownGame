// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

enum class EPaperTileFlags : uint32
{
	FlipHorizontal = (1U << 0),
	FlipVertical = (1U << 1),
	FlipDiagonal = (1U << 2),
};