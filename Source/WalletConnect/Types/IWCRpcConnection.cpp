// Fill out your copyright notice in the Description page of Project Settings.


#include "IWCRpcConnection.h"
#include "../Types/IConnectorOpts.h"

IWCRpcConnection::IWCRpcConnection()
{
	IConnectorOpts opts = IConnectorOpts();
	Wc = new IConnector(opts);
	Connector = new IConnector(opts);
}

