// Fill out your copyright notice in the Description page of Project Settings.


#include "IWCRpcConnectionOptions.h"

IWCRpcConnectionOptions::IWCRpcConnectionOptions()
{
	IConnectorOpts opts = IConnectorOpts();
	Connector = new IConnector(opts);
}
