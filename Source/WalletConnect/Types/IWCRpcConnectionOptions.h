// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IConnector.h"
#include "IQRCodeModalOptions.h"
#include "IClientMeta.h"

/**
 * 
 */
class WALLETCONNECT_API IWCRpcConnectionOptions
{
public:
	IWCRpcConnectionOptions();
	
	IConnector* Connector;						// connector?: IConnector;
	FString Bridge;								// bridge?: string;
	bool Qrcode;								// qrcode?: boolean;
	int32 ChainId;								// chainId?: number;
	FString StorageId;							// storageId?: string;
	TArray<FString> SigningMethods;				// signingMethods?: string[];
	IQRCodeModalOptions QrcodeModalOptions;		// qrcodeModalOptions?: IQRCodeModalOptions;
	IClientMeta ClientMeta;						// clientMeta?: IClientMeta;
};
