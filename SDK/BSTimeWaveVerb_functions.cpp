#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BSTimeWaveVerb.BSTimeWaveVerb_C
// (None)

class UClass* UBSTimeWaveVerb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BSTimeWaveVerb_C");

	return Clss;
}


// BSTimeWaveVerb_C BSTimeWaveVerb.Default__BSTimeWaveVerb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBSTimeWaveVerb_C* UBSTimeWaveVerb_C::GetDefaultObj()
{
	static class UBSTimeWaveVerb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBSTimeWaveVerb_C*>(UBSTimeWaveVerb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BSTimeWaveVerb.BSTimeWaveVerb_C.StartCheatExecution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnBullshitManagerComponent*CallFunc_GetBullshitManager_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnTeam>        CallFunc_GetTeam_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBullshit_SpawnWave_C*       CallFunc_AddBullshit_ServerOnly_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBSTimeWaveVerb_C::StartCheatExecution(class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class UQtnBullshitManagerComponent* CallFunc_GetBullshitManager_ReturnValue, TSubclassOf<class UQtnTeam> CallFunc_GetTeam_ReturnValue, class UBullshit_SpawnWave_C* CallFunc_AddBullshit_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BSTimeWaveVerb_C", "StartCheatExecution");

	Params::UBSTimeWaveVerb_C_StartCheatExecution_Params Parms{};

	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue_1 = CallFunc_GetOwningPawn_ReturnValue_1;
	Parms.CallFunc_GetBullshitManager_ReturnValue = CallFunc_GetBullshitManager_ReturnValue;
	Parms.CallFunc_GetTeam_ReturnValue = CallFunc_GetTeam_ReturnValue;
	Parms.CallFunc_AddBullshit_ServerOnly_ReturnValue = CallFunc_AddBullshit_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BSTimeWaveVerb.BSTimeWaveVerb_C.AllowOtherVerbToInterrupt
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnVerb*                    OtherVerb                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBSTimeWaveVerb_C::AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BSTimeWaveVerb_C", "AllowOtherVerbToInterrupt");

	Params::UBSTimeWaveVerb_C_AllowOtherVerbToInterrupt_Params Parms{};

	Parms.OtherVerb = OtherVerb;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BSTimeWaveVerb.BSTimeWaveVerb_C.CanVerbStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     PotentialTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanVerbStart_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnBullshitManagerComponent*CallFunc_GetBullshitManager_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBullshitActive_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBSTimeWaveVerb_C::CanVerbStart(class UObject* PotentialTarget, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, class UQtnBullshitManagerComponent* CallFunc_GetBullshitManager_ReturnValue, bool CallFunc_IsBullshitActive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BSTimeWaveVerb_C", "CanVerbStart");

	Params::UBSTimeWaveVerb_C_CanVerbStart_Params Parms{};

	Parms.PotentialTarget = PotentialTarget;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_CanVerbStart_ReturnValue = CallFunc_CanVerbStart_ReturnValue;
	Parms.CallFunc_GetBullshitManager_ReturnValue = CallFunc_GetBullshitManager_ReturnValue;
	Parms.CallFunc_IsBullshitActive_ReturnValue = CallFunc_IsBullshitActive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


