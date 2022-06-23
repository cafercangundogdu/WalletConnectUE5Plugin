// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API ICryptoLib
{
public:
	ICryptoLib();
	~ICryptoLib();

	void generateKey();			// generateKey: (length?: number) => Promise<ArrayBuffer>;
	void encrypt();				// encrypt: (data: IJsonRpcRequest | IJsonRpcResponseSuccess | IJsonRpcResponseError, key: ArrayBuffer, iv?: ArrayBuffer) => Promise<IEncryptionPayload>;
	void decrypt();				// decrypt: (payload: IEncryptionPayload, key: ArrayBuffer) => Promise<IJsonRpcRequest | IJsonRpcResponseSuccess | IJsonRpcResponseError | null>;
};
