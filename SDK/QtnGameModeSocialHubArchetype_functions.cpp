#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGameModeSocialHubArchetype.QtnGameModeSocialHubArchetype_C
// (Actor)

class UClass* AQtnGameModeSocialHubArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGameModeSocialHubArchetype_C");

	return Clss;
}


// QtnGameModeSocialHubArchetype_C QtnGameModeSocialHubArchetype.Default__QtnGameModeSocialHubArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQtnGameModeSocialHubArchetype_C* AQtnGameModeSocialHubArchetype_C::GetDefaultObj()
{
	static class AQtnGameModeSocialHubArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQtnGameModeSocialHubArchetype_C*>(AQtnGameModeSocialHubArchetype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGameModeSocialHubArchetype.QtnGameModeSocialHubArchetype_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AQtnGameModeSocialHubArchetype_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameModeSocialHubArchetype_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameModeSocialHubArchetype.QtnGameModeSocialHubArchetype_C.DisplayFailedToJoinHordeModeMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnGameModeSocialHubArchetype_C::DisplayFailedToJoinHordeModeMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameModeSocialHubArchetype_C", "DisplayFailedToJoinHordeModeMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGameModeSocialHubArchetype.QtnGameModeSocialHubArchetype_C.FailedToJoinHordeModeMapDialogFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Accepted                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnGameModeSocialHubArchetype_C::FailedToJoinHordeModeMapDialogFinished(bool Accepted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameModeSocialHubArchetype_C", "FailedToJoinHordeModeMapDialogFinished");

	Params::AQtnGameModeSocialHubArchetype_C_FailedToJoinHordeModeMapDialogFinished_Params Parms{};

	Parms.Accepted = Accepted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGameModeSocialHubArchetype.QtnGameModeSocialHubArchetype_C.ExecuteUbergraph_QtnGameModeSocialHubArchetype
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerPawn_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerPawn_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetPlayerUI_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_QueueModalDialog_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_accepted                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnGameModeSocialHubArchetype_C::ExecuteUbergraph_QtnGameModeSocialHubArchetype(int32 EntryPoint, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerPawn_outputPin, class AQtnPlayerPawn* CallFunc_GetLocalPlayerPawn_ReturnValue, class AQtnPlayerUI* CallFunc_GetPlayerUI_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, class UUserWidget* CallFunc_QueueModalDialog_ReturnValue, bool K2Node_CustomEvent_accepted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGameModeSocialHubArchetype_C", "ExecuteUbergraph_QtnGameModeSocialHubArchetype");

	Params::AQtnGameModeSocialHubArchetype_C_ExecuteUbergraph_QtnGameModeSocialHubArchetype_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerPawn_outputPin = CallFunc_GetLocalPlayerPawn_outputPin;
	Parms.CallFunc_GetLocalPlayerPawn_ReturnValue = CallFunc_GetLocalPlayerPawn_ReturnValue;
	Parms.CallFunc_GetPlayerUI_ReturnValue = CallFunc_GetPlayerUI_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_QueueModalDialog_ReturnValue = CallFunc_QueueModalDialog_ReturnValue;
	Parms.K2Node_CustomEvent_accepted = K2Node_CustomEvent_accepted;

	UObject::ProcessEvent(Func, &Parms);

}

}


