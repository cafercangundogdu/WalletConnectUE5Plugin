// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API INativeCurrency
{
public:
	INativeCurrency();
	~INativeCurrency();

	FString Name;		// name: string;
	FString Symbol;		// symbol: string;
};
