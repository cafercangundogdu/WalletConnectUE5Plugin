// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Online/HTTP/Public/Http.h"

/**
 * 
 */
class WALLETCONNECT_API WalletConnect
{
public:
	WalletConnect();
	void connect();
	void generateQR();

private:
	FHttpModule* HttpGet;
	FString WALLET_CONNECT_URL;

	/* Assign this function to call when the GET request processes sucessfully */
	void OnConnectResponseReceivedInternal(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
