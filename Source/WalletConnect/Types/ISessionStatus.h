// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API ISessionStatus
{
public:
	ISessionStatus();
	~ISessionStatus();

	int32 ChainId;				// chainId: number;
	FString Accounts[255];		// accounts: string[];
	int32 NetwotkId;			// networkId?: number;
	FString RpcUrl;				// rpcUrl?: string;
};
