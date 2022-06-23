// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IRequestOptions.h"

/**
 * 
 */
class WALLETCONNECT_API IInternalRequestOptions: IRequestOptions
{
public:
	IInternalRequestOptions();
	~IInternalRequestOptions();

	FString Topic;		// topic: string;
};
