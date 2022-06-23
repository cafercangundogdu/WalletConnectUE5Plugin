// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IParseURIResult
{
public:
	IParseURIResult();
	~IParseURIResult();

	FString protocol;			// protocol: string;
	FString handshakeTopic;		// handshakeTopic: string;
	int32 version;				// version: number;
	FString bridge;				// bridge: string;
	FString key;				// key: string;
};
