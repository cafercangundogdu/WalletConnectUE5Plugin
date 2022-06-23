// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IJsonRpcErrorMessage
{
public:
	IJsonRpcErrorMessage();
	~IJsonRpcErrorMessage();

	int32 Code;			// code?: number;
	FString Message;	// message: string;
};
