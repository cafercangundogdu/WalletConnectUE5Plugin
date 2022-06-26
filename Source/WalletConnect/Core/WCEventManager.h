// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Types/IEventEmitter.h"
#include "../Types/IJsonRpcResponseError.h"

/**
 * 
 */
class WALLETCONNECT_API WCEventManager
{
private:
	TArray<IEventEmitter> EventEmitters;		// _eventEmitters: IEventEmitter[];

	Constants* _Constants;

	bool IsReservedEvent(FString Event);
	bool IsInternalEvent(IInternalEvent Event);

public:
	WCEventManager();

	void Subscribe(IEventEmitter EventEmitter);
	void Unsubscribe(FString Event);
	void TriggerRequest(IJsonRpcRequest Payload);
	void TriggerResponseSuccess(IJsonRpcResponseSuccess Payload);
	void TriggerResponseError(IJsonRpcResponseError Payload);
	void TriggerEvent(IInternalEvent Payload);
};
