// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API INetworkMonitor
{
public:
	INetworkMonitor();
	~INetworkMonitor();

	void on();		// on: (event: NetworkEvent, callback: () => void) => void;
};
