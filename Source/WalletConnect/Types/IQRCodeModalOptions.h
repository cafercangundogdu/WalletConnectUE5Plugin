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

	FString RegistryUrl;			// registryUrl?: string;
	FString MobileLinks[2];			// mobileLinks?: string[];
	FString DesktopLinks[2];		// desktopLinks?: string[];
};
