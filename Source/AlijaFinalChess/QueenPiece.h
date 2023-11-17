// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ChessPiece_Base.h"
#include "QueenPiece.generated.h"

/**
 * 
 */
UCLASS()
class ALIJAFINALCHESS_API AQueenPiece : public AChessPiece_Base
{
	GENERATED_BODY()
public:
	AQueenPiece();

	//Overrides the function declared in the base class
	void DetectSelectableGrids(TArray<Atile*>* SelectableGrids) override final;

	// Returns the point of queen piece
	int32 getPiecePoint() override final;
};

