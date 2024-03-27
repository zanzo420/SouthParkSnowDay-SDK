#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkirmishTriggerOnWaveSpawned.SkirmishTriggerOnWaveSpawned_C
// (None)

class UClass* USkirmishTriggerOnWaveSpawned_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkirmishTriggerOnWaveSpawned_C");

	return Clss;
}


// SkirmishTriggerOnWaveSpawned_C SkirmishTriggerOnWaveSpawned.Default__SkirmishTriggerOnWaveSpawned_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkirmishTriggerOnWaveSpawned_C* USkirmishTriggerOnWaveSpawned_C::GetDefaultObj()
{
	static class USkirmishTriggerOnWaveSpawned_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkirmishTriggerOnWaveSpawned_C*>(USkirmishTriggerOnWaveSpawned_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkirmishTriggerOnWaveSpawned.SkirmishTriggerOnWaveSpawned_C.OnSkirmishInit
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                OwningSkirmish                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkirmishTriggerOnWaveSpawned_C::OnSkirmishInit(class AQtnSkirmish* OwningSkirmish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerOnWaveSpawned_C", "OnSkirmishInit");

	Params::USkirmishTriggerOnWaveSpawned_C_OnSkirmishInit_Params Parms{};

	Parms.OwningSkirmish = OwningSkirmish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishTriggerOnWaveSpawned.SkirmishTriggerOnWaveSpawned_C.MatchingGroupSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        GroupName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkirmishTriggerOnWaveSpawned_C::MatchingGroupSpawned(class FName GroupName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerOnWaveSpawned_C", "MatchingGroupSpawned");

	Params::USkirmishTriggerOnWaveSpawned_C_MatchingGroupSpawned_Params Parms{};

	Parms.GroupName = GroupName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishTriggerOnWaveSpawned.SkirmishTriggerOnWaveSpawned_C.ExecuteUbergraph_SkirmishTriggerOnWaveSpawned
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnSkirmish*                K2Node_Event_owningSkirmish                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASkirmishBase_C*             K2Node_DynamicCast_AsSkirmish_Base                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_GroupName                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void USkirmishTriggerOnWaveSpawned_C::ExecuteUbergraph_SkirmishTriggerOnWaveSpawned(int32 EntryPoint, bool CallFunc_EqualEqual_NameName_ReturnValue, class AQtnSkirmish* K2Node_Event_owningSkirmish, bool CallFunc_IsValid_ReturnValue, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_GroupName, bool CallFunc_EqualEqual_NameName_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerOnWaveSpawned_C", "ExecuteUbergraph_SkirmishTriggerOnWaveSpawned");

	Params::USkirmishTriggerOnWaveSpawned_C_ExecuteUbergraph_SkirmishTriggerOnWaveSpawned_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Event_owningSkirmish = K2Node_Event_owningSkirmish;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkirmish_Base = K2Node_DynamicCast_AsSkirmish_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_GroupName = K2Node_CustomEvent_GroupName;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


