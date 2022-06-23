// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API ISessionError
{
public:
	ISessionError();
	~ISessionError();

	FString message;		// message?: string;
};
