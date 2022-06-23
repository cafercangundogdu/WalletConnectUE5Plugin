// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API ISessionStorage
{
public:
	ISessionStorage();
	~ISessionStorage();

	void GetSession();			// getSession: () => IWalletConnectSession | null;
	void SetSession();			// setSession: (session: IWalletConnectSession) => IWalletConnectSession;
	void RemoveSession();		// removeSession: () => void;
};
