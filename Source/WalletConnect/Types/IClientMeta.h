// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IClientMeta
{
public:
	IClientMeta();

	FString Description;
	FString Url;
	FString Name;
};
