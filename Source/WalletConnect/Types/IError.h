// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IError
{
public:
	IError(FString res);
	IError(FString res, int32 code);

	FString Res;	// res?: any;
	int32 Code;		// code?: any;
};
