// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IInternalEvent
{
public:
	IInternalEvent();
	~IInternalEvent();

	FString Event;		// event: string;
	FString Params;		// params: any;
};
