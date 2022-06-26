// Fill out your copyright notice in the Description page of Project Settings.


#include "IEventEmitter.h"

IEventEmitter::IEventEmitter(FString Event, void (*_RpcRequestCallback)(IJsonRpcRequest))
{
	RpcRequestCallback = _RpcRequestCallback;
}

IEventEmitter::IEventEmitter(FString Event, void (*_RpcResponseSuccessCallback)(IJsonRpcResponseSuccess))
{
	RpcResponseSuccessCallback = _RpcResponseSuccessCallback;
}

IEventEmitter::IEventEmitter(FString Event, void (*_RpcResponseErrorCallback)(IError))
{
	RpcResponseErrorCallback = _RpcResponseErrorCallback;
}

IEventEmitter::IEventEmitter(FString Event, void (*_RpcInternalCallback)(IInternalEvent))
{
	RpcInternalCallback = _RpcInternalCallback;
}


