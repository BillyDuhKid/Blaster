// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/OverheadWidget.h"
#include "Components/TextBlock.h"

void UOverheadWidget::SetDisplayText(const FString& TextToDisplay)
{
	if (DisplayText)
	{
		DisplayText->SetText(FText::FromString(TextToDisplay));
	}
}

void UOverheadWidget::ShowPlayerNetRole(APawn* InPawn)
{
	//ENetRole RemoteRole = InPawn->GetRemoteRole();

	ENetRole LocalRole = InPawn->GetLocalRole();
	FString Role;

	switch (LocalRole)
	{
	case ROLE_Authority:
		Role = FString("Authority");	// on the server every pawn is an authority
		break;
	case ROLE_AutonomousProxy:
		Role = FString("Autonomous Proxy");	// version of your pawn on the client you are currently controlling. if you're the server it will show Authority.
		break;
	case ROLE_SimulatedProxy:
		Role = FString("Simulated Proxy");	// version of a pawn on another client being simulated form the Authority pawn on the server.
		break;
	case ROLE_None:
		Role = FString("None");
		break;
	}

	FString LocalRoleString = FString::Printf(TEXT("Local Role: %s"), *Role);
	SetDisplayText(LocalRoleString);
}

void UOverheadWidget::NativeDestruct()
{
	RemoveFromParent();
	Super::NativeDestruct();
}
