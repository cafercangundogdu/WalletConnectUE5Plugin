// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IPushServerOptions
{
public:
	IPushServerOptions();
	~IPushServerOptions();

	FString Url;			// url: string;
	FString Type;			// type: string;
	FString Token;			// token: string;
	bool PeerMeta;			// peerMeta?: boolean;
	FString Language;		// language?: string;
};
