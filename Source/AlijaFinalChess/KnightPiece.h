// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ChessPiece_Base.h"
#include "KnightPiece.generated.h"

/**
 * 
 */
UCLASS()
class ALIJAFINALCHESS_API AKnightPiece : public AChessPiece_Base
{
	GENERATED_BODY()
public:
	AKnightPiece();

	//Overrides the function declared in the base class
	void DetectSelectableGrids(TArray<Atile*>* SelectableGrids) override final;

	// Returns the point of knight piece
	int32 getPiecePoint() override final;

};
