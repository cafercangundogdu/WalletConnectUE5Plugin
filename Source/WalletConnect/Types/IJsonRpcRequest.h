// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IJsonRpcRequest
{
public:
	IJsonRpcRequest();
	~IJsonRpcRequest();

	int32 Id;				// id: number;
	FString JsonRpc;		// jsonrpc: string;
	FString Method;			// method: string;
	FString Params[2];		// params: any[];		// TODO: use correct type!
};
