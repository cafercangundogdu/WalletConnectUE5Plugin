// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API ITransportLib
{
public:
	ITransportLib();
	~ITransportLib();

	void Open();			// open: () => void;
	void Close();			// close: () => void;
	void Send();			// send: (message: string, topic?: string, silent?: boolean) => void;
	void Subscribe();		// subscribe: (topic: string) => void;
	void On();				// on: (event: string, callback: (payload: any) => void) => void;
};
