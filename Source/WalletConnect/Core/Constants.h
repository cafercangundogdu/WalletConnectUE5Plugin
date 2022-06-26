// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WALLETCONNECT_API Constants
{
public:
	Constants();

	TArray<FString> ReservedEvents;
	TArray<FString> SigningMethods;
	TArray<FString> StateMethods;
	TMap<int32, FString> InfuraNetworks;

	const FString ERROR_SESSION_CONNECTED = "Session currently connected";
	const FString ERROR_SESSION_DISCONNECTED = "Session currently disconnected";
	const FString ERROR_SESSION_REJECTED = "Session Rejected";

	const FString ERROR_MISSING_JSON_RPC = "Missing JSON RPC response";
	const FString ERROR_MISSING_RESULT = "JSON-RPC success response must include 'result' field";
	const FString ERROR_MISSING_ERROR = "JSON-RPC error response must include 'error' field";
	const FString ERROR_MISSING_METHOD = "JSON RPC request must have valid 'method' value";
	const FString ERROR_MISSING_ID = "JSON RPC request must have valid 'id' value";
	const FString ERROR_MISSING_REQUIRED = "Missing one of the required parameters: bridge / uri / session";

	const FString ERROR_INVALID_RESPONSE = "JSON RPC response format is invalid";
	const FString ERROR_INVALID_URI = "URI format is invalid";

	const FString ERROR_QRCODE_MODAL_NOT_PROVIDED = "QRCode Modal not provided";
	const FString ERROR_QRCODE_MODAL_USER_CLOSED = "User close QRCode Modal";
};
