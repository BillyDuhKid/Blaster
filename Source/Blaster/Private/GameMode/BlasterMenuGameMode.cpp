// Fill out your copyright notice in the Description page of Project Settings.

#include "GameMode/BlasterMenuGameMode.h"
#include "GameInstanceSubsystems/TAB_GameCreatorSubsystem.h"

void ABlasterMenuGameMode::BeginPlay()
{
	// get GameCreator and overiride GameModes and LobbyMaps.
	UTAB_GameCreatorSubsystem* GameCreator = GetWorld()->GetGameInstance()->GetSubsystem<UTAB_GameCreatorSubsystem>();
	if (GameCreator != nullptr)
	{
		/*
			GameInstanceSubsystems/TAB_GameCreatorSubsystem.h
			void SetGameModes(const TArray<FGameModeStruct>&inGameModes);
			void SetLobbyGameModes(const TArray<FGameMapStruct>&inLobbyMaps);
			TArray<FGameModeStruct> GameModes{ FGameModeStruct("TAB_Unique678", 2, { FGameMapStruct(FText::FromString("Default Map"), "/TAB_Game/Maps/EXAMPLE_InGame") }) };
			TArray <FGameMapStruct> LobbyMaps{ FGameMapStruct(FText::FromString("Default Map"), "/TAB_Game/Maps/EXAMPLE_Lobby") };
		*/

		TArray<FGameModeStruct> GameModes{ FGameModeStruct("BlasterGameMode", 2, { FGameMapStruct(FText::FromString("Blaster Map"), "/Game/Maps/BlasterMap") }) };
		GameCreator->SetGameModes(GameModes);
		TArray <FGameMapStruct> LobbyMaps{ FGameMapStruct(FText::FromString("Blaster Lobby"), "/Game/Maps/Lobby") };
		GameCreator->SetLobbyGameModes(LobbyMaps);
	}

	Super::BeginPlay();
}
