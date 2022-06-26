// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IEvents
{
public:
	IEvents();

	void On(FString Event, int32 Listener);					// TODO: correct listener type!		listener: any
	void Once(FString Event, int32 Listener);				// TODO: correct listener type		listener: any
	void Off(FString Event, int32 Listener);				// TODO: correct listener type!		listener: any
	void RemoveListener(FString Event, int32 Listener);		// TODO: correct listener type!		listener: any
};
