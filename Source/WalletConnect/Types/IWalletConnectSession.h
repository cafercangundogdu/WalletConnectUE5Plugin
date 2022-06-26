// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IWalletConnectSession
{
public:
	IWalletConnectSession();
	~IWalletConnectSession();

	bool Connected;					// connected: boolean;
	TArray<FString> Accounts;		// accounts: string[];
	int32 ChainId;					// chainId: number;
	FString Bridge;					// bridge: string;
	FString Key;					// key: string;
	FString ClientId;				// clientId: string;
	IClientMeta ClientMeta;			// clientMeta: IClientMeta | null;
	FString PeerId;					// peerId: string;
	IClientMeta PeerMeta;			// peerMeta: IClientMeta | null;
	int32 HandshakeId;				// handshakeId: number;
	FString HandshakeTopic;			// handshakeTopic: string;
};
