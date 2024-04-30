// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameModes/TAB_MenuGameMode.h"
#include "BlasterMenuGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BLASTER_API ABlasterMenuGameMode : public ATAB_MenuGameMode
{
	GENERATED_BODY()

public:
	// used to set the game modes before the menu uses them.
	virtual void BeginPlay() override;
};
