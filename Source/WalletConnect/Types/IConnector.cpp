// Fill out your copyright notice in the Description page of Project Settings.


#include "IConnector.h"
#include "../Core/Constants.h"

IConnector::IConnector(IConnectorOpts opts)
{
	ClientMeta = opts.ConnectorOpts.ClientMeta;
	CryptoLib = opts.CryptoLib;
	SessionStorage = opts.SessionStorage;
	QrcodeModal = opts.ConnectorOpts.QrcodeModal;
	QrcodeModalOptions = opts.ConnectorOpts.QrcodeModalOptions;
	
	auto _signingMethods = SigningMethods;
	_signingMethods += opts.ConnectorOpts.SigningMethods;

	if (opts.ConnectorOpts.Bridge.IsEmpty() && opts.ConnectorOpts.Uri.IsEmpty() && opts.ConnectorOpts.Session.Bridge.IsEmpty())
	{
		return; // TODO: throw error!
	}

	if (!opts.ConnectorOpts.Bridge.IsEmpty())
	{
		Bridge = opts.ConnectorOpts.Bridge;
	}


	if (!opts.ConnectorOpts.Uri.IsEmpty())
	{
		Uri = opts.ConnectorOpts.Uri;
	}

	Session = opts.ConnectorOpts.Session; // getStorageSession();

	if (!HandshakeId)
	{
		SubscribeToSessionResponse(HandshakeId, "Session request rejected");
	}


	Transport = opts.Transport;
}

void IConnector::SubscribeToSessionResponse(int32 Id, FString ErrorMsg)
{

}
