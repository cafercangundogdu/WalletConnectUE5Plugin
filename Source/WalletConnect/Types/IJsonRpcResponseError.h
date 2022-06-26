// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IJsonRpcErrorMessage.h"

/**
 * 
 */
class WALLETCONNECT_API IJsonRpcResponseError
{
public:
	IJsonRpcResponseError();
	~IJsonRpcResponseError();

	int32 Id;					// id: number;
	FString JsonRpc;				// jsonrpc: string;
	IJsonRpcErrorMessage Error;		// error: IJsonRpcErrorMessage;
};
