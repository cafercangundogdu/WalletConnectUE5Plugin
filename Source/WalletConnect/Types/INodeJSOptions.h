// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IClientMeta.h"

/**
 * 
 */
class WALLETCONNECT_API INodeJSOptions
{
public:
	INodeJSOptions();
	~INodeJSOptions();

	IClientMeta ClientMeta;		// clientMeta: IClientMeta;
};
