// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IQueryParamsResult
{
public:
	IQueryParamsResult();
	~IQueryParamsResult();

	FString Bridge;			// bridge: string;
	FString Key;			// key: string;
};
