// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IQRCodeModalOptions.h"
#include "IConnector.h"

/**
 * 
 */
class WALLETCONNECT_API IWCRpcConnection
{
public:
	IWCRpcConnection();

	IConnector* Wc;													// wc: IConnector;
	IConnector* Connector;											// connector: IConnector;

	FString Bridge;													// bridge: string;
	bool Qrcode;													// qrcode: boolean;
	IQRCodeModalOptions QrcodeModalOptions;							// qrcodeModalOptions: IQRCodeModalOptions | undefined;
	
	int32 ChainId;													// chainId: number;
	bool Connected;													// connected: boolean;
													
	void Create(int32 ChainId);										// create(chainId?: number): void;
	void Open();													// open(): Promise<void>;
	void Close();													// close(): Promise<void>;
	void OnOpen();													// onOpen(): void;
	void OnClose();													// onClose(): void;

	template<class T>
	void OnError(T Payload, FString Message, int32 Code);			// onError(payload: any, message: string, code?: number): void;
	
	template<class T>
	void Send(T Payload);											// send(payload: any): Promise<any>;
	
	template<class T>
	void SendPayload(T Payload);									// sendPayload(payload: any): Promise<IJsonRpcResponseSuccess | IJsonRpcResponseError>;
};
