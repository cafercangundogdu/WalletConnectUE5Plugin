// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IPushSubscription
{
public:
	IPushSubscription();
	~IPushSubscription();

	FString Bridge;			// bridge: string;
	FString Topic;			// topic: string;
	FString Type;			// type: string;
	FString Token;			// token: boolean;
	FString PeerName;		// peerName: string;
	FString Language;		// language: string;
};
