// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "WalletConnect.h"
#include "WalletConnectGameMode.generated.h"

UCLASS(minimalapi)
class AWalletConnectGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AWalletConnectGameMode();

	WalletConnect WalletConnectIns;
};



