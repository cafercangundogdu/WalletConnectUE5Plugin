// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IClientMeta.h"
#include "IWalletConnectSession.h"

/**
 *
 */
class WALLETCONNECT_API IConnector
{
public:
	IConnector();
	~IConnector();

	FString Bridge;
	FString Key;
	FString ClientId;
	FString PeerId;
	FString HandshakeTopic;
	FString HandshakeId;
	FString Uri;
	int8 ChainId;					// TODO: check range from doc
	int8 NetworkId;					// TODO: check range from doc
	FString Accounts[255];			// TODO: check max account size from doc
	FString RpcUrl;
	bool Connected;
	bool Pending;

	IClientMeta ClientMeta;
	IClientMeta PeerMeta;
	IWalletConnectSession Session;

	void  on();						// on(event: string, callback: (error: Error | null, payload: any | null) => void): void;
	void  connect();				// connect(opts?: ICreateSessionOptions): Promise<ISessionStatus>;
	void  createSession();			// createSession(opts?: ICreateSessionOptions): Promise<void>;
	void  approveSession();			// approveSession(sessionStatus: ISessionStatus): void;
	void  rejectSession();			// rejectSession(sessionError?: ISessionError): void;
	void  updateSession();			// updateSession(sessionStatus: ISessionStatus): void;
	void  killSession();			// killSession(sessionError?: ISessionError): Promise<void>;

	void  sendTransaction();		// sendTransaction(tx: ITxData): Promise<any>;
	void  signTransaction();		// signTransaction(tx: ITxData): Promise<any>;
	void  signMessage();			// signMessage(params: any[]): Promise<any>;
	void  signPersonalMessage();	// signPersonalMessage(params: any[]): Promise<any>;
	void  signTypedData();			// signTypedData(params: any[]): Promise<any>;
	void  updateChain();			// updateChain(chainParams: IUpdateChainParams): Promise<any>;

	void  sendCustomRequest();		// sendCustomRequest(request: Partial<IJsonRpcRequest>, options?: IRequestOptions): Promise<any>;
	void  unsafeSend();				// unsafeSend(request: IJsonRpcRequest, options?: IRequestOptions): Promise<IJsonRpcResponseSuccess | IJsonRpcResponseError>;

	void  approveRequest();			// approveRequest(response: Partial<IJsonRpcResponseSuccess>): void;
	void  rejectRequest();			// rejectRequest(response: Partial<IJsonRpcResponseError>): void;
};
