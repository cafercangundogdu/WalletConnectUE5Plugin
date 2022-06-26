// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IJsonRpcResponseSuccess
{
public:
	IJsonRpcResponseSuccess();
	~IJsonRpcResponseSuccess();

	int32 Id;				// id: number;
	FString JsonRpc;		// jsonrpc: string;
	FString Result;			// result: any;
};
