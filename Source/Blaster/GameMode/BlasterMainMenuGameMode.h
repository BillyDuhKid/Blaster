// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TAB_Game/Public/GameModes/TAB_MainMenuGameMode.h"
#include "BlasterMainMenuGameMode.generated.h"

UCLASS()
class BLASTER_API ABlasterMainMenuGameMode : public ATAB_MainMenuGameMode
{
	GENERATED_BODY()

protected:
	// Intialize the Game Creator and send it to screens that need it to create games.
	// Designed to be overriden by games to call SetGameModes(), SetLobbyGameModes(), etc. with game specific data.
	void InitializeGameCreator() override;

};
