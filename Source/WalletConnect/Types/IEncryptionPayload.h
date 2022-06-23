// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IEncryptionPayload
{
public:
	IEncryptionPayload();
	~IEncryptionPayload();

	FString Data;		// data: string;
	FString Hmac;		// hmac: string;
	FString Iv;			// iv: string;
};
