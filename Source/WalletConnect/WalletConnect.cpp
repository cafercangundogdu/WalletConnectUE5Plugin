// Fill out your copyright notice in the Description page of Project Settings.


#include "WalletConnect.h"

WalletConnect::WalletConnect()
{
	HttpGet = &FHttpModule::Get();
	WALLET_CONNECT_URL = "https://bridge.walletconnect.org/hello";
// 	connect();

	UE_LOG(LogTemp, Log, TEXT("Loaded Module!"));
}

void WalletConnect::connect()
{
	TSharedRef<IHttpRequest> Request = HttpGet->CreateRequest();
	Request->OnProcessRequestComplete().BindRaw(this, &WalletConnect::OnConnectResponseReceivedInternal);
	Request->SetURL(WALLET_CONNECT_URL);
	Request->SetVerb("GET");
	Request->ProcessRequest();
}

void WalletConnect::generateQR()
{
	WalletConnect::connect();
}

void WalletConnect::OnConnectResponseReceivedInternal(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessfull)
{
	FString contentStr = Response->GetContentAsString();
	UE_LOG(LogTemp, Log, TEXT("OnResponseReceivedInternal: contentStr=%s"), *contentStr);
}
