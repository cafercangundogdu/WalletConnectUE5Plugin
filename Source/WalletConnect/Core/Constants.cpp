// Fill out your copyright notice in the Description page of Project Settings.


#include "Constants.h"

Constants::Constants()
{
	ReservedEvents.Add("session_request");
	ReservedEvents.Add("session_update");
	ReservedEvents.Add("exchange_key");
	ReservedEvents.Add("connect");
	ReservedEvents.Add("disconnect");
	ReservedEvents.Add("display_uri");
	ReservedEvents.Add("modal_closed");
	ReservedEvents.Add("transport_open");
	ReservedEvents.Add("transport_close");
	ReservedEvents.Add("transport_error");

	SigningMethods.Add("eth_sendTransaction");
	SigningMethods.Add("eth_signTransaction");
	SigningMethods.Add("eth_sign");
	SigningMethods.Add("eth_signTypedData");
	SigningMethods.Add("eth_signTypedData_v1");
	SigningMethods.Add("eth_signTypedData_v2");
	SigningMethods.Add("eth_signTypedData_v3");
	SigningMethods.Add("eth_signTypedData_v4");
	SigningMethods.Add("personal_sign");
	SigningMethods.Add("wallet_addEthereumChain");
	SigningMethods.Add("wallet_switchEthereumChain");
	SigningMethods.Add("wallet_getPermissions");
	SigningMethods.Add("wallet_requestPermissions");
	SigningMethods.Add("wallet_registerOnboarding");
	SigningMethods.Add("wallet_watchAsset");
	SigningMethods.Add("wallet_scanQRCode");

	StateMethods.Add("eth_accounts");
	StateMethods.Add("eth_chainId");
	StateMethods.Add("net_version");

	InfuraNetworks.Add(1, "mainnet");
	InfuraNetworks.Add(3, "ropsten");
	InfuraNetworks.Add(4, "rinkeby");
	InfuraNetworks.Add(5, "goerli");
	InfuraNetworks.Add(42, "kovan");
}
