// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Types/ITransportLib.h"
#include "../Types/INetworkMonitor.h"
#include "../Types/ISocketMessage.h"
#include "../Types/ITransportEvent.h"

/**
 * 
 */
class WALLETCONNECT_API SocketTransport: public ITransportLib
{
public:
	SocketTransport(
		FString Protocol,					// protocol: string;
		int32 Version,						// version: number;
		FString Url,						// url: string;
		INetworkMonitor NetMonitor,			// netMonitor?: INetworkMonitor;
		TArray<FString> Subscriptions		// subscriptions?: string[];
	);

	FString Protocol;						// _protocol: string;
	int32 Version;							// _version: number;
	FString Url;							// _url: string;
	INetworkMonitor NetMonitor;				// _netMonitor: INetworkMonitor | null;
	FString socket;							// _socket: WebSocket | null;
	FString NextSocket;						// _nextSocket: WebSocket | null;
	ISocketMessage Queue;					// _queue: ISocketMessage[] = [];
	ITransportEvent Events;					// _events: ITransportEvent[] = [];
	TArray<FString> Subscriptions;			// _subscriptions: string[] = [];


private:
	static void SocketCreate(const SocketTransport* SocketTransportIns);
};