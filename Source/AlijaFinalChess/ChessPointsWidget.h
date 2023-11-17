// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChessPointsWidget.generated.h"

/**
 * 
 */
UCLASS()
class ALIJAFINALCHESS_API UChessPointsWidget : public UUserWidget
{
	GENERATED_BODY()
private:
	friend class AChessHUD;
	int32 currentPoint = 0;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* PlayerPointTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text", meta = (BindWidget))
	FText PlayerPointText = FText::FromString("0 Points");

public:
	void addScore(int32 amount);
	
};
