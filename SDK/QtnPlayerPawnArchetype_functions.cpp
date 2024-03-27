#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnPlayerPawnArchetype.QtnPlayerPawnArchetype_C
// (Actor, Pawn)

class UClass* AQtnPlayerPawnArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnPlayerPawnArchetype_C");

	return Clss;
}


// QtnPlayerPawnArchetype_C QtnPlayerPawnArchetype.Default__QtnPlayerPawnArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQtnPlayerPawnArchetype_C* AQtnPlayerPawnArchetype_C::GetDefaultObj()
{
	static class AQtnPlayerPawnArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQtnPlayerPawnArchetype_C*>(AQtnPlayerPawnArchetype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnPlayerPawnArchetype.QtnPlayerPawnArchetype_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerPawnArchetype_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerPawnArchetype_C", "OnDebugDisplay");

	Params::AQtnPlayerPawnArchetype_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerPawnArchetype.QtnPlayerPawnArchetype_C.ServerSetCameraDirection
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     InCamDir                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InCamPos                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerPawnArchetype_C::ServerSetCameraDirection(const struct FVector& InCamDir, const struct FVector& InCamPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerPawnArchetype_C", "ServerSetCameraDirection");

	Params::AQtnPlayerPawnArchetype_C_ServerSetCameraDirection_Params Parms{};

	Parms.InCamDir = InCamDir;
	Parms.InCamPos = InCamPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerPawnArchetype.QtnPlayerPawnArchetype_C.ClientCacheCameraDirection
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnPlayerPawnArchetype_C::ClientCacheCameraDirection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerPawnArchetype_C", "ClientCacheCameraDirection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnPlayerPawnArchetype.QtnPlayerPawnArchetype_C.ServerSetPlayerMaxUnlockedArc
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxUnlockedArc                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerPawnArchetype_C::ServerSetPlayerMaxUnlockedArc(int32 MaxUnlockedArc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerPawnArchetype_C", "ServerSetPlayerMaxUnlockedArc");

	Params::AQtnPlayerPawnArchetype_C_ServerSetPlayerMaxUnlockedArc_Params Parms{};

	Parms.MaxUnlockedArc = MaxUnlockedArc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerPawnArchetype.QtnPlayerPawnArchetype_C.ClientSetRemainingTradeshowSeconds
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RemainingTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnPlayerPawnArchetype_C::ClientSetRemainingTradeshowSeconds(float RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerPawnArchetype_C", "ClientSetRemainingTradeshowSeconds");

	Params::AQtnPlayerPawnArchetype_C_ClientSetRemainingTradeshowSeconds_Params Parms{};

	Parms.RemainingTime = RemainingTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerPawnArchetype.QtnPlayerPawnArchetype_C.ClientDLCUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnPlayerPawnArchetype_C::ClientDLCUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerPawnArchetype_C", "ClientDLCUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnPlayerPawnArchetype.QtnPlayerPawnArchetype_C.ServerDLCUpdate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnPlayerPawnArchetype_C::ServerDLCUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerPawnArchetype_C", "ServerDLCUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnPlayerPawnArchetype.QtnPlayerPawnArchetype_C.ExecuteUbergraph_QtnPlayerPawnArchetype
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_InCamDir                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_InCamPos                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_maxUnlockedArc                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_remainingTime                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnPlayerPawnArchetype_C::ExecuteUbergraph_QtnPlayerPawnArchetype(int32 EntryPoint, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& K2Node_CustomEvent_InCamDir, const struct FVector& K2Node_CustomEvent_InCamPos, int32 K2Node_CustomEvent_maxUnlockedArc, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_remainingTime, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerPawnArchetype_C", "ExecuteUbergraph_QtnPlayerPawnArchetype");

	Params::AQtnPlayerPawnArchetype_C_ExecuteUbergraph_QtnPlayerPawnArchetype_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.K2Node_CustomEvent_InCamDir = K2Node_CustomEvent_InCamDir;
	Parms.K2Node_CustomEvent_InCamPos = K2Node_CustomEvent_InCamPos;
	Parms.K2Node_CustomEvent_maxUnlockedArc = K2Node_CustomEvent_maxUnlockedArc;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_remainingTime = K2Node_CustomEvent_remainingTime;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_1 = CallFunc_IsLocallyControlledPlayer_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnPlayerPawnArchetype.QtnPlayerPawnArchetype_C.OnDLCsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnPlayerPawnArchetype_C::OnDLCsUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerPawnArchetype_C", "OnDLCsUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnPlayerPawnArchetype.QtnPlayerPawnArchetype_C.OnRecievedCameraDirection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnPlayerPawnArchetype_C::OnRecievedCameraDirection__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnPlayerPawnArchetype_C", "OnRecievedCameraDirection__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


