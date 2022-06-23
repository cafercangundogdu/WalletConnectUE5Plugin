// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ICryptoLib.h"
#include "IWalletConnectOptions.h"
#include "ITransportLib.h"
#include "ISessionStorage.h"
#include "IPushServerOptions.h"

/**
 * 
 */
class WALLETCONNECT_API IConnectorOpts
{
public:
	IConnectorOpts();
	~IConnectorOpts();

	ICryptoLib CryptoLib;					// cryptoLib: ICryptoLib;
	IWalletConnectOptions ConnectorOpts;	// connectorOpts: IWalletConnectOptions;
	ITransportLib Transport;				// transport?: ITransportLib;
	ISessionStorage SessionStorage;			// sessionStorage?: ISessionStorage;
	IPushServerOptions PushServerOpts;		// pushServerOpts?: IPushServerOptions;
};
