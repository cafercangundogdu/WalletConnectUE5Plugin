// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IWCRpcConnectionOptions.h"
#include "IRPCMap.h"

/**
 * 
 */
class WALLETCONNECT_API IWCEthRpcConnectionOptions: public IWCRpcConnectionOptions
{
public:
	IWCEthRpcConnectionOptions();
	~IWCEthRpcConnectionOptions();

	IRPCMap Rpc;			// rpc?: IRPCMap;
	FString InfuraId;		// infuraId ? : string;
};
