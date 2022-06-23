// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IEvents.h"

/**
 * 
 */
class WALLETCONNECT_API IRpcConnection: public IEvents
{
public:
	IRpcConnection();
	~IRpcConnection();

	bool Connected;		// connected: boolean;
	void send();		// send(payload: any): Promise<any>;
	void open();		// open(): Promise<void>;
	void close();		// close(): Promise<void>;
};
