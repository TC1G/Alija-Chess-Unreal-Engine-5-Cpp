// Fill out your copyright notice in the Description page of Project Settings.


#include "WinningScreenWidget.h"
#include "UMG/Public/Components/Button.h"
#include "ChessPlayer.h"

#include "Components/TextBlock.h"
#include "ChessPiece_Base.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>
#include "ChessController.h"
#include "tile.h"
#include "ChessHUD.h"
#include "ChessPointsWidget.h"
#include "Projection2D.h"

void UWinningScreenWidget::NativeConstruct() {
	Super::NativeConstruct();
	ExitButton->OnClicked.AddDynamic(this, &UWinningScreenWidget::ExitGame);
}


	
	


void UWinningScreenWidget::SetWinner(FString winner) {
	WinnerTextBlock->SetText(FText::FromString(winner));
}





void UWinningScreenWidget::ExitGame() {
	GetWorld()->Exec(GetWorld(), TEXT("Exit"));
}
