// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IJsonRpcSubscription
{
public:
	IJsonRpcSubscription();
	~IJsonRpcSubscription();

	int32 Number;			// id: number;
	FString JsonRpc;		// jsonrpc: string;
	FString Method;			// method: string;
	FString Params[2];		// params: any;			// TODO: use correct type!
};
