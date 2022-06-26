// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Core/SocketTransport.h"

/**
 * 
 */
class WALLETCONNECT_API INetworkMonitor
{
public:
	INetworkMonitor();

	// NetworkEvent -> online || offline
	// void on(FString Event, void (*callback)(SocketTransport));			
	template<typename F>
	void on(FString Event, F callback);												// on: (event: NetworkEvent, callback: () => void) => void;
};
