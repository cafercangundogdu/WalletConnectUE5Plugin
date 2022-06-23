// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IMobileRegistryEntry
{
public:
	IMobileRegistryEntry();
	~IMobileRegistryEntry();

	FString Name;				// name: string;
	FString ShortName;			// shortName: string;
	FString Color;				// color: string;
	FString Logo;				// logo: string;
	FString UniversalLink;		// universalLink: string;
	FString DeepLink;			// deepLink: string;
};
