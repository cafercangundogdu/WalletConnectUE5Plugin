// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "INetworkMonitor.h"

/**
 * 
 */
class WALLETCONNECT_API ISocketTransportOptions
{
public:
	ISocketTransportOptions();
	~ISocketTransportOptions();

	FString Protocol;					// protocol: string;
	int32 Version;						// version: number;
	FString Url;						// url: string;
	INetworkMonitor NetMonitor;			// netMonitor?: INetworkMonitor;
	FString Subscriptions[255];			// subscriptions?: string[];
};
