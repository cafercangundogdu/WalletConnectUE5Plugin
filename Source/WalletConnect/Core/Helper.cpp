// Fill out your copyright notice in the Description page of Project Settings.


#include "Helper.h"

Helper::Helper()
{
}

void Helper::GetWebSocketUrl(FString Url, FString Protocol, int32 Version)
{
	FString _Url = Url;

	if (_Url.StartsWith("https"))
	{
		_Url = _Url.Replace(TEXT("https"), TEXT("wss"), ESearchCase::IgnoreCase);
	}

	if (_Url.StartsWith("http"))
	{
		_Url = _Url.Replace(TEXT("http"), TEXT("ws"), ESearchCase::IgnoreCase);
	}

	FString LeftSide = TEXT("");
	FString RightSide = TEXT("");
	_Url.Split(TEXT("?"), &LeftSide, &RightSide);


}
