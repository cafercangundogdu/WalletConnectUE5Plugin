// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IQRCodeModal.h"
#include "IWCEthRpcConnectionOptions.h"

/**
 * 
 */
class WALLETCONNECT_API IWalletConnectProviderOptions: public IWCEthRpcConnectionOptions
{
public:
	IWalletConnectProviderOptions();
	~IWalletConnectProviderOptions();

	int32 PollingInterval;			// pollingInterval?: number;
	IQRCodeModal QrcodeModal;		// qrcodeModal ? : IQRCodeModal;
};
