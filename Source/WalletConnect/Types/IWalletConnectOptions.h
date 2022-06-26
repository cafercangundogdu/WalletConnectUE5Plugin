// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IWalletConnectSession.h"
#include "ISessionStorage.h"
#include "IClientMeta.h"
#include "IQRCodeModal.h"
#include "IQRCodeModalOptions.h"

/**
 * 
 */
class WALLETCONNECT_API IWalletConnectOptions
{
public:
	IWalletConnectOptions();
	~IWalletConnectOptions();

	FString Bridge;									// bridge?: string;
	FString Uri;									// uri?: string;
	FString StorageId;								// storageId?: string;
	TArray<FString> SigningMethods;					// signingMethods?: string[];
	IWalletConnectSession Session;					// session?: IWalletConnectSession;
	ISessionStorage Storage;						// storage?: ISessionStorage;
	IClientMeta ClientMeta;							// clientMeta?: IClientMeta;
	IQRCodeModal QrcodeModal;						// qrcodeModal?: IQRCodeModal;
	IQRCodeModalOptions QrcodeModalOptions;			// qrcodeModalOptions?: IQRCodeModalOptions;
};
