// Fill out your copyright notice in the Description page of Project Settings.


#include "SocketTransport.h"

SocketTransport::SocketTransport(
	FString _Protocol,					// protocol: string;
	int32 _Version,						// version: number;
	FString _Url,						// url: string;
	INetworkMonitor _NetMonitor,		// netMonitor?: INetworkMonitor;
	TArray<FString> _Subscriptions		// subscriptions?: string[];
)
{
	Protocol = _Protocol;
	Version = _Version;
	Url = _Url;
	NetMonitor = _NetMonitor;
	Subscriptions = _Subscriptions;

	NetMonitor.on("online", [this](){
		SocketTransport::SocketCreate(this);
	});
}

void SocketTransport::SocketCreate(const SocketTransport* _SocketTransportIns)
{
	if (*_SocketTransportIns->NextSocket != 0)
	{

	}
}