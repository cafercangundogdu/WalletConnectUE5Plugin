// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API ISocketMessage
{
public:
	ISocketMessage();
	~ISocketMessage();

	FString Topic;			// topic: string;
	FString Type;			// type: string;
	FString Payload;		// payload: string;
	bool Silent;			// silent: boolean;
};
