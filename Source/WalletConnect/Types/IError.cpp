// Fill out your copyright notice in the Description page of Project Settings.


#include "IError.h"

IError::IError(FString res)
{
	Res = res;
}
IError::IError(FString res, int32 code)
{
	Res = res;
	Code = code;
}
