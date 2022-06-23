// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API ITransportEvent
{
public:
	ITransportEvent();
	~ITransportEvent();

	FString Event;		// event: string;
	void callback();	// callback: (payload: any) => void;
};
