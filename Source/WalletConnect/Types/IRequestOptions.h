// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IRequestOptions
{
public:
	IRequestOptions();
	~IRequestOptions();

	bool ForcePushNotification;			// forcePushNotification?: boolean;
};
