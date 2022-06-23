// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IEventEmitter
{
public:
	IEventEmitter();
	~IEventEmitter();

	FString Event;		// event: string;
	void callback();	// callback: (error: Error | null, request: any | null) => void;
};
