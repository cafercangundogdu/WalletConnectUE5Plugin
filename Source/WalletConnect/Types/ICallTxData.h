// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API ICallTxData
{
public:
	ICallTxData();
	~ICallTxData();

	FString Type;			// type?: string;
	FString To;				// to?: string;
	int32 Value;			// value?: number | string;
	int32 Gas;				// gas?: number | string;
	int32 GasLimit;			// gasLimit?: number | string;
	int32 GasPrice;			// gasPrice?: number | string;
	int32 Nonce;			// nonce?: number | string;
	FString Data;			// data?: string;
};
