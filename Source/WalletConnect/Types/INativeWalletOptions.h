// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IClientMeta.h"
#include "IPushServerOptions.h"

/**
 * 
 */
class WALLETCONNECT_API INativeWalletOptions
{
public:
	INativeWalletOptions();
	~INativeWalletOptions();

	IClientMeta ClientMeta;			// clientMeta: IClientMeta;
	IPushServerOptions Push;		// push?: IPushServerOptions | null;
};
