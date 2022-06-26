// Fill out your copyright notice in the Description page of Project Settings.


#include "WCEventManager.h"
#include "Constants.h"

WCEventManager::WCEventManager()
{
	_Constants = new Constants();
}

void WCEventManager::Subscribe(IEventEmitter EventEmitter)
{
	EventEmitters.Add(EventEmitter);
}

void WCEventManager::Unsubscribe(FString Event)
{
	EventEmitters = EventEmitters.FilterByPredicate([&](const IEventEmitter& EventEmitter) {
		return EventEmitter.Event != Event;
	});
}

void WCEventManager::TriggerRequest(IJsonRpcRequest Payload)
{
	FString Event = Payload.Method;
	TArray<IEventEmitter> _eventEmitters;
	if (*Event != 0 && !Event.IsEmpty()) 
	{
		_eventEmitters = EventEmitters.FilterByPredicate([&](const IEventEmitter& EventEmitter) {
			return EventEmitter.Event == Event;
		});
	}

	if (_eventEmitters.Num() > 0 && !IsReservedEvent(Event)) //  !isInternalEvent(event)
	{ 
		_eventEmitters = EventEmitters.FilterByPredicate([&](const IEventEmitter& EventEmitter) {
			return EventEmitter.Event == "call_request";
		});
	}

	for (IEventEmitter& _eventEmitter: _eventEmitters)
	{
		_eventEmitter.RpcRequestCallback(Payload);
	}
}

void WCEventManager::TriggerResponseSuccess(IJsonRpcResponseSuccess Payload)
{
	
	FString Event = "response:" + FString::FromInt(Payload.Id);
	TArray<IEventEmitter> _eventEmitters;
	if (*Event != 0 && !Event.IsEmpty()) {
		_eventEmitters = EventEmitters.FilterByPredicate([&](const IEventEmitter& EventEmitter) {
			return EventEmitter.Event == Event;
		});
	}

	if (_eventEmitters.Num() > 0 && !IsReservedEvent(Event)) { //  !isInternalEvent(event)
		_eventEmitters = EventEmitters.FilterByPredicate([&](const IEventEmitter& EventEmitter) {
			return EventEmitter.Event == "call_request";
		});
	}

	for (IEventEmitter& _eventEmitter : _eventEmitters)
	{
		_eventEmitter.RpcResponseSuccessCallback(Payload);
	}
}

void WCEventManager::TriggerResponseError(IJsonRpcResponseError Payload)
{

	FString Event = "response:" + FString::FromInt(Payload.Id);
	TArray<IEventEmitter> _eventEmitters;
	if (*Event != 0 && !Event.IsEmpty()) {
		_eventEmitters = EventEmitters.FilterByPredicate([&](const IEventEmitter& EventEmitter) {
			return EventEmitter.Event == Event;
		});
	}

	if (_eventEmitters.Num() > 0 && !IsReservedEvent(Event)) { //  !isInternalEvent(event)
		_eventEmitters = EventEmitters.FilterByPredicate([&](const IEventEmitter& EventEmitter) {
			return EventEmitter.Event == "call_request";
		});
	}

	for (IEventEmitter& _eventEmitter : _eventEmitters)
	{
		IError Error = IError(Payload.Error.Message, Payload.Error.Code);
		_eventEmitter.RpcResponseErrorCallback(Error);
	}
}

void WCEventManager::TriggerEvent(IInternalEvent Payload)
{
	FString Event = Payload.Event;
	TArray<IEventEmitter> _eventEmitters;
	if (*Event != 0 && !Event.IsEmpty()) {
		_eventEmitters = EventEmitters.FilterByPredicate([&](const IEventEmitter& EventEmitter) {
			return EventEmitter.Event == Event;
		});
	}

	if (_eventEmitters.Num() > 0 && !IsReservedEvent(Event)) { //  !isInternalEvent(event)
		_eventEmitters = EventEmitters.FilterByPredicate([&](const IEventEmitter& EventEmitter) {
			return EventEmitter.Event == "call_request";
		});
	}

	for (IEventEmitter& _eventEmitter : _eventEmitters)
	{
		_eventEmitter.RpcInternalCallback(Payload);
	}
}

bool WCEventManager::IsReservedEvent(FString Event)
{
	TArray<FString> _reservedEvents = _Constants->ReservedEvents.FilterByPredicate([&](const FString& ReservedEvent) {
		return ReservedEvent == Event;
	});

	return _reservedEvents.Num() > 0 || Event.StartsWith("wc_");
}

bool WCEventManager::IsInternalEvent(IInternalEvent Event)
{
	return !Event.Event.IsEmpty();
}