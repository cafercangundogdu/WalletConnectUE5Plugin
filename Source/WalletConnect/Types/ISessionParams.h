// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IClientMeta.h"

/**
 * 
 */
class WALLETCONNECT_API ISessionParams
{
public:
	ISessionParams();
	~ISessionParams();


	bool Approved;					// approved: boolean;
	int32 ChainId;					// chainId: number | null;
	int32 NetworkId;				// networkId: number | null;
	TArray<FString> Accounts;		// accounts: string[] | null;
	FString RpcUrl;					// rpcUrl ? : string | null;
	FString PeerId;					// peerId?: string | null;
	IClientMeta PeerMeta;			// peerMeta?: IClientMeta | null;
};
