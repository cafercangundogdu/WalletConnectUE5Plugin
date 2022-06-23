// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IMobileLinkInfo
{
public:
	IMobileLinkInfo();
	~IMobileLinkInfo();

	FString Name;		// name: string;
	FString Href;		// href: string;
};
