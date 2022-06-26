// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IClientMeta.h"
#include "IWalletConnectSession.h"
#include "../Types/ICryptoLib.h"
#include "../Types/ITransportLib.h"
#include "../Types/IEncryptionPayload.h"
#include "../Core/WCEventManager.h"
#include "ISessionStorage.h"
#include "IQRCodeModal.h"
#include "IQRCodeModalOptions.h"
#include "IConnectorOpts.h"

/**
 *
 */
class WALLETCONNECT_API IConnector
{
private:
	// -- connection
	FString Bridge;								// bridge: string;
	FString Key;								// key: string;
	
	// -- client
	FString ClientId;							// clientId: string;
	IClientMeta ClientMeta;						// readonly clientMeta: IClientMeta | null;

	// -- peer
	FString PeerId;								// peerId: string;
	IClientMeta PeerMeta;						// peerMeta: IClientMeta | null;

	// -- handshake 
	int32 HandshakeId;							// handshakeId: number;
	FString HandshakeTopic;						// handshakeTopic: string;

	// -- session
	bool Connected;								// readonly connected: boolean;
	TArray<FString> Accounts;					// accounts: string[];
	int32 ChainId;								// chainId: number;
	int32 NetworkId;							// networkId: number;
	FString RpcUrl;								// rpcUrl: string;

	// -- controllers
	ICryptoLib CryptoLib;						// _cryptoLib: ICryptoLib;
	ITransportLib Transport;					// _transport: ITransportLib;
	WCEventManager EventManager;				// _eventManager: EventManager = new EventManager();
	ISessionStorage SessionStorage;				// _sessionStorage: ISessionStorage | undefined;

	// -- qrcodeModal
	IQRCodeModal QrcodeModal;					// _qrcodeModal: IQRCodeModal | undefined;
	IQRCodeModalOptions QrcodeModalOptions;		// _qrcodeModalOptions: IQRCodeModalOptions | undefined;

	// -- method
	TArray<FString> SigningMethods;				// readonly _signingMethods: string[];

	void SubscribeToSessionResponse(int32 Id, FString ErrorMsg);
	void SubscribeToResponse();
	void SubscribeToCallResponse();
	void subscribeToResponse();
	void subscribeToSessionRequest();
	void handleIncomingMessages();
	void subscribeToInternalEvents();
	void initTransport();

	// -- uri
	void formatUri();
	void parseUri();

	// -- crypto
	FString GenerateKey();
	IEncryptionPayload Encrypt();											// param data: IJsonRpcRequest | IJsonRpcResponseSuccess | IJsonRpcResponseError
	void Decrypt(IEncryptionPayload Payload);								// return IJsonRpcRequest | IJsonRpcResponseSuccess | IJsonRpcResponseError | null

	// -- sessionStorage
	IWalletConnectSession GetStorageSession();
	void SetStorageSession();
	void RemoveStorageSession();
	void ManageStorageSession();

	// -- pushServer

	void RegisterPushServer();

public:
	IConnector(IConnectorOpts opts);

	const FString Protocol = "wc";
	const int32 Version = 1;

	FString Uri;								// uri: string;
	bool Pending;								// readonly pending: boolean;

	IWalletConnectSession Session;				// session: IWalletConnectSession;

	void On(FString Event);									// on(event: string, callback: (error: Error | null, payload: any | null) => void): void;
	void Connect();								// connect(opts?: ICreateSessionOptions): Promise<ISessionStatus>;
	void CreateSession();						// createSession(opts?: ICreateSessionOptions): Promise<void>;
	void ApproveSession();						// approveSession(sessionStatus: ISessionStatus): void;
	void RejectSession();						// rejectSession(sessionError?: ISessionError): void;
	void UpdateSession();						// updateSession(sessionStatus: ISessionStatus): void;
	void KillSession();							// killSession(sessionError?: ISessionError): Promise<void>;

	void SendTransaction();						// sendTransaction(tx: ITxData): Promise<any>;
	void SignTransaction();						// signTransaction(tx: ITxData): Promise<any>;
	void SignMessage();							// signMessage(params: any[]): Promise<any>;
	void SignPersonalMessage();					// signPersonalMessage(params: any[]): Promise<any>;
	void SignTypedData();						// signTypedData(params: any[]): Promise<any>;
	void UpdateChain();							// updateChain(chainParams: IUpdateChainParams): Promise<any>;

	void SendCustomRequest();					// sendCustomRequest(request: Partial<IJsonRpcRequest>, options?: IRequestOptions): Promise<any>;
	void UnsafeSend();							// unsafeSend(request: IJsonRpcRequest, options?: IRequestOptions): Promise<IJsonRpcResponseSuccess | IJsonRpcResponseError>;

	void ApproveRequest();						// approveRequest(response: Partial<IJsonRpcResponseSuccess>): void;
	void RejectRequest();						// rejectRequest(response: Partial<IJsonRpcResponseError>): void;
};
