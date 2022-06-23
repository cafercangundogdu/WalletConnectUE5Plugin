// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IDevice
{
public:
	IDevice();
	~IDevice();

	FString Native;     // native: string;
	FString Universal;  // universal: string;
};
