// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IError
{
public:
	IError();
	~IError();

	FString res;	// res?: any;
	int32 code;		// code?: any;
};
