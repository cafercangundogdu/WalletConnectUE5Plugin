// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API Helper
{
public:
	Helper();

	void GetWebSocketUrl(FString Url, FString Protocol, int32 Version);
};
