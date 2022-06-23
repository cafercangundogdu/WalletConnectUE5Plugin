// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API IApp
{
public:
	IApp();
	~IApp();

    FString Browser;    // browser: string;
    FString Ios;        // ios: string;
    FString Android;    // android: string;
    FString Mac;        // mac: string;
    FString Windows;    // windows: string;
    FString Linux;      // linux: string;
};
