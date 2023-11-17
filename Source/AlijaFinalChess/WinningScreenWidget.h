// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WinningScreenWidget.generated.h"

/**
 * 
 */
UCLASS()
class ALIJAFINALCHESS_API UWinningScreenWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UButton* ToReplayButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* NewGameButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* ExitButton;



	

	UFUNCTION()
	void ExitGame();

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Ratio;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* WinnerTextBlock;

	void SetWinner(FString winner);
};
