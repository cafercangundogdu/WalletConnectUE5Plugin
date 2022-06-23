// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IRequiredParamsResult
{
public:
	IRequiredParamsResult();
	~IRequiredParamsResult();

	FString HandshakeTopic;			// handshakeTopic: string;
	int32 Version;					// version: number;
};
