// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IError.h"
#include "IJsonRpcRequest.h"
#include "IJsonRpcResponseSuccess.h"
#include "IError.h"
#include "IInternalEvent.h"

/**
 * 
 */
class WALLETCONNECT_API IEventEmitter
{
public:
	IEventEmitter(FString Event, void (*RpcRequestCallback)(IJsonRpcRequest));
	IEventEmitter(FString Event, void (*RpcResponseSuccessCallback)(IJsonRpcResponseSuccess));
	IEventEmitter(FString Event, void (*RpcResponseErrorCallback)(IError));
	IEventEmitter(FString Event, void (*RpcInternalCallback)(IInternalEvent));

	FString Event;																	// event: string;
	void (*RpcRequestCallback)(IJsonRpcRequest);						// callback: (error: Error | null, request: any | null) => void;
	void (*RpcResponseSuccessCallback)(IJsonRpcResponseSuccess);
	void (*RpcResponseErrorCallback)(IError);
	void (*RpcInternalCallback)(IInternalEvent);
};
