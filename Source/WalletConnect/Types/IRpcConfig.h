// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IRPCMap.h"

/**
 * 
 */
class WALLETCONNECT_API IRpcConfig
{
public:
	IRpcConfig();
	~IRpcConfig();

	FString InfuraId;		// string | undefined;
	IRPCMap custom;			// IRPCMap | undefined;
};
