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
	~IClientMeta();

	FString Description;
	FString Url;
	FString Icons[255]; // TODO: check max icons size from doc
	FString Name;
};
