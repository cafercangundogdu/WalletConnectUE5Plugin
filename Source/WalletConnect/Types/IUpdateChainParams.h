// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "INativeCurrency.h"

/**
 * 
 */
class WALLETCONNECT_API IUpdateChainParams
{
public:
	IUpdateChainParams();
	~IUpdateChainParams();

	int32 ChainId;						// chainId: number;
	int32 NetworkId;					// networkId: number;
	FString RpcUrl;						// rpcUrl: string;
	INativeCurrency NativeCurrency;		// 
};
