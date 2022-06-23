// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API ITxData
{
public:
	ITxData();
	~ITxData();

	FString From;		// from: string;
};
