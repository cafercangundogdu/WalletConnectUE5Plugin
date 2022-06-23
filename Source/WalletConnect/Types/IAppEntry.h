// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ImageUrl.h"
#include "IApp.h"
#include "IDevice.h"

/**
 * 
 */
class WALLETCONNECT_API IAppEntry
{
public:
	IAppEntry();
	~IAppEntry();

    FString Id;             // id: string;
    FString Name;           // name: string;
    FString HomePage;       // homepage: string;
    FString Chains[32];     // chains: string[];
    FString ImageId;        // image_id: string;

    ImageUrl ImageUrl;      // 
    IApp App;               //
    IDevice Mobile;         // 
    IDevice Desktop;        // 
};
