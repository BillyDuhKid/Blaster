// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterMainMenuGameMode.h"
#include "TAB_Game/Public/Utilities/TAB_GameCreator.h"

void ABlasterMainMenuGameMode::InitializeGameCreator()
{
	Super::InitializeGameCreator();
	if (GameCreator)
	{
		// Set the game modes for the game creator.
		TArray<FGameModeStruct> BlasterGameModes{ FGameModeStruct("BlasterGame_U678", 2, { FGameMapStruct(FText::FromString("Blaster Map"), "/Game/Maps/BlasterMap") }) };
		GameCreator->SetGameModes(BlasterGameModes);
		//GameCreator->SetLobbyGameModes();
	//	void SetGameModes(const TArray<FGameModeStruct>&inGameModes);
	//	void SetLobbyGameModes(const TArray <FGameModeStruct>&inGameModes);

	}
}
