// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ChessHUD.generated.h"

/**
 * 
 */
UCLASS()
class ALIJAFINALCHESS_API AChessHUD : public AHUD
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChessUserWidget)
	class UChessPointsWidget* widgetPoint1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChessUserWidget)
	class UChessPointsWidget* widgetPoint2;

	
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UserWidget)
	class UWinningScreenWidget* winningScreen;

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projection2D)
	class UProjection2D* projection2DWidget;

public:
	AChessHUD();

	virtual void BeginPlay() override;

	void showWinningScreen();



	
};
