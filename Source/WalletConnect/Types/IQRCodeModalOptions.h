// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IQRCodeModalOptions
{
public:
	IQRCodeModalOptions();
	~IQRCodeModalOptions();

	FString RegistryUrl;				// registryUrl?: string;
	TArray<FString> MobileLinks;		// mobileLinks?: string[];
	TArray<FString> DesktopLinks;		// desktopLinks?: string[];
};
