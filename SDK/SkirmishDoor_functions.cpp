#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkirmishDoor.SkirmishDoor_C
// (Actor)

class UClass* ASkirmishDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkirmishDoor_C");

	return Clss;
}


// SkirmishDoor_C SkirmishDoor.Default__SkirmishDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASkirmishDoor_C* ASkirmishDoor_C::GetDefaultObj()
{
	static class ASkirmishDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASkirmishDoor_C*>(ASkirmishDoor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkirmishDoor.SkirmishDoor_C.OnRep_r_Locked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASkirmishDoor_C::OnRep_r_Locked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_C", "OnRep_r_Locked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkirmishDoor.SkirmishDoor_C.Locked State Presentation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASkirmishDoor_C::Locked_State_Presentation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_C", "Locked State Presentation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkirmishDoor.SkirmishDoor_C.server_ApplyOveride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASkirmishDoor_C::Server_ApplyOveride(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_C", "server_ApplyOveride");

	Params::ASkirmishDoor_C_Server_ApplyOveride_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishDoor.SkirmishDoor_C.LOCAL_UpdateToggleVis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASkirmishDoor_C::LOCAL_UpdateToggleVis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_C", "LOCAL_UpdateToggleVis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkirmishDoor.SkirmishDoor_C.OnRep_toggledOnToday
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASkirmishDoor_C::OnRep_toggledOnToday()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_C", "OnRep_toggledOnToday");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkirmishDoor.SkirmishDoor_C.Toggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantOn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASkirmishDoor_C::Toggle(bool WantOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_C", "Toggle");

	Params::ASkirmishDoor_C_Toggle_Params Parms{};

	Parms.WantOn = WantOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishDoor.SkirmishDoor_C.ToggleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantOn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASkirmishDoor_C::ToggleEvent(bool WantOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_C", "ToggleEvent");

	Params::ASkirmishDoor_C_ToggleEvent_Params Parms{};

	Parms.WantOn = WantOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishDoor.SkirmishDoor_C.TogglePickablePresetation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantPickable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Lock                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkirmishDoor_C::TogglePickablePresetation(bool WantPickable, class UObject* Lock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_C", "TogglePickablePresetation");

	Params::ASkirmishDoor_C_TogglePickablePresetation_Params Parms{};

	Parms.WantPickable = WantPickable;
	Parms.Lock = Lock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishDoor.SkirmishDoor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASkirmishDoor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkirmishDoor.SkirmishDoor_C.Toggle Lock Open Presentation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Want_locked                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Lock                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkirmishDoor_C::Toggle_Lock_Open_Presentation(bool Want_locked, class UObject* Lock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_C", "Toggle Lock Open Presentation");

	Params::ASkirmishDoor_C_Toggle_Lock_Open_Presentation_Params Parms{};

	Parms.Want_locked = Want_locked;
	Parms.Lock = Lock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishDoor.SkirmishDoor_C.SetUpLock_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASkirmishDoor_C::SetUpLock_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_C", "SetUpLock_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SkirmishDoor.SkirmishDoor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkirmishDoor_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_C", "ReceiveTick");

	Params::ASkirmishDoor_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishDoor.SkirmishDoor_C.ExecuteUbergraph_SkirmishDoor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_WantPickable                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_lock_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Want_Locked                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_lock                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_WantOn                                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASkirmishDoor_C::ExecuteUbergraph_SkirmishDoor(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool K2Node_Event_WantPickable, class UObject* K2Node_Event_lock_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_Want_Locked, class UObject* K2Node_Event_lock, int32 CallFunc_Array_AddUnique_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, bool K2Node_Event_WantOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishDoor_C", "ExecuteUbergraph_SkirmishDoor");

	Params::ASkirmishDoor_C_ExecuteUbergraph_SkirmishDoor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_WantPickable = K2Node_Event_WantPickable;
	Parms.K2Node_Event_lock_1 = K2Node_Event_lock_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_Want_Locked = K2Node_Event_Want_Locked;
	Parms.K2Node_Event_lock = K2Node_Event_lock;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue = CallFunc_IsReadyForGameplay_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_Event_WantOn = K2Node_Event_WantOn;

	UObject::ProcessEvent(Func, &Parms);

}

}


