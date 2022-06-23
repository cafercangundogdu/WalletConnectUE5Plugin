// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NetworkEvent.h"

/**
 * 
 */
class WALLETCONNECT_API INetworkEventEmitter
{
public:
	INetworkEventEmitter();
	~INetworkEventEmitter();

	NetworkEvent event;		// event: NetworkEvent;
	void callback();		// callback: () => void;
};
