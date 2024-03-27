#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CatapultIceChunk_BP.CatapultIceChunk_BP_C
// (Actor)

class UClass* ACatapultIceChunk_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CatapultIceChunk_BP_C");

	return Clss;
}


// CatapultIceChunk_BP_C CatapultIceChunk_BP.Default__CatapultIceChunk_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACatapultIceChunk_BP_C* ACatapultIceChunk_BP_C::GetDefaultObj()
{
	static class ACatapultIceChunk_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACatapultIceChunk_BP_C*>(ACatapultIceChunk_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CatapultIceChunk_BP.CatapultIceChunk_BP_C.Toggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantOn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACatapultIceChunk_BP_C::Toggle(bool WantOn, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CatapultIceChunk_BP_C", "Toggle");

	Params::ACatapultIceChunk_BP_C_Toggle_Params Parms{};

	Parms.WantOn = WantOn;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CatapultIceChunk_BP.CatapultIceChunk_BP_C.HandleDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACatapultIceChunk_BP_C::HandleDeath(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CatapultIceChunk_BP_C", "HandleDeath");

	Params::ACatapultIceChunk_BP_C_HandleDeath_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CatapultIceChunk_BP.CatapultIceChunk_BP_C.UpdateNavOnDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACatapultIceChunk_BP_C::UpdateNavOnDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CatapultIceChunk_BP_C", "UpdateNavOnDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CatapultIceChunk_BP.CatapultIceChunk_BP_C.Nav Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACatapultIceChunk_BP_C::Nav_Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CatapultIceChunk_BP_C", "Nav Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CatapultIceChunk_BP.CatapultIceChunk_BP_C.LOCAL Update Toggle Vis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACatapultIceChunk_BP_C::LOCAL_Update_Toggle_Vis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CatapultIceChunk_BP_C", "LOCAL Update Toggle Vis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CatapultIceChunk_BP.CatapultIceChunk_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACatapultIceChunk_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CatapultIceChunk_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CatapultIceChunk_BP.CatapultIceChunk_BP_C.ToggleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantOn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACatapultIceChunk_BP_C::ToggleEvent(bool WantOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CatapultIceChunk_BP_C", "ToggleEvent");

	Params::ACatapultIceChunk_BP_C_ToggleEvent_Params Parms{};

	Parms.WantOn = WantOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CatapultIceChunk_BP.CatapultIceChunk_BP_C.OnQtnReadyForGameplay
// (Event, Public, BlueprintEvent)
// Parameters:

void ACatapultIceChunk_BP_C::OnQtnReadyForGameplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CatapultIceChunk_BP_C", "OnQtnReadyForGameplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CatapultIceChunk_BP.CatapultIceChunk_BP_C.ExecuteUbergraph_CatapultIceChunk_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_WantOn                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACatapultIceChunk_BP_C::ExecuteUbergraph_CatapultIceChunk_BP(int32 EntryPoint, bool K2Node_Event_WantOn, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CatapultIceChunk_BP_C", "ExecuteUbergraph_CatapultIceChunk_BP");

	Params::ACatapultIceChunk_BP_C_ExecuteUbergraph_CatapultIceChunk_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_WantOn = K2Node_Event_WantOn;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue = CallFunc_IsReadyForGameplay_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


