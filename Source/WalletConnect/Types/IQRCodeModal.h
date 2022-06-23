// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IQRCodeModal
{
public:
	IQRCodeModal();
	~IQRCodeModal();

	void open();		// open(uri: string, cb: any, opts?: any): void;
	void clode();		// close(): void;
};
