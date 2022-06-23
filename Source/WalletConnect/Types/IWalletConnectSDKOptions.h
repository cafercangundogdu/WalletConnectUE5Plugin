// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IWalletConnectOptions.h"

/**
 * 
 */
class WALLETCONNECT_API IWalletConnectSDKOptions: public IWalletConnectOptions
{
public:
	IWalletConnectSDKOptions();
	~IWalletConnectSDKOptions();

	FString Bridge;			// bridge?: string;
};
