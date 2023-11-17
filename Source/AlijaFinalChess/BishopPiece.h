// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ChessPiece_Base.h"
#include "BishopPiece.generated.h"

/**
 * 
 */
UCLASS()
class ALIJAFINALCHESS_API ABishopPiece : public AChessPiece_Base
{
	GENERATED_BODY()
public:
	ABishopPiece();

	//Overrides the function declared in the base class
	void DetectSelectableGrids(TArray<Atile*>* SelectableGrids) override final;

	// Returns the point of bishop piece
	int32 getPiecePoint() override final;
};

	

