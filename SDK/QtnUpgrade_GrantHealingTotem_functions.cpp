#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnUpgrade_GrantHealingTotem.QtnUpgrade_GrantHealingTotem_C
// (None)

class UClass* UQtnUpgrade_GrantHealingTotem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnUpgrade_GrantHealingTotem_C");

	return Clss;
}


// QtnUpgrade_GrantHealingTotem_C QtnUpgrade_GrantHealingTotem.Default__QtnUpgrade_GrantHealingTotem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnUpgrade_GrantHealingTotem_C* UQtnUpgrade_GrantHealingTotem_C::GetDefaultObj()
{
	static class UQtnUpgrade_GrantHealingTotem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnUpgrade_GrantHealingTotem_C*>(UQtnUpgrade_GrantHealingTotem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnUpgrade_GrantHealingTotem.QtnUpgrade_GrantHealingTotem_C.OnSlottedEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       RolledData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               LoadedRunProgress                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnUpgrade_GrantHealingTotem_C::OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnUpgrade_GrantHealingTotem_C", "OnSlottedEvent");

	Params::UQtnUpgrade_GrantHealingTotem_C_OnSlottedEvent_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.RolledData = RolledData;
	Parms.LoadedRunProgress = LoadedRunProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnUpgrade_GrantHealingTotem.QtnUpgrade_GrantHealingTotem_C.ExecuteUbergraph_QtnUpgrade_GrantHealingTotem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             K2Node_Event_TargetSlot                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_RolledData                                          (ConstParm)
// bool                               K2Node_Event_LoadedRunProgress                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnUpgrade_GrantHealingTotem_C::ExecuteUbergraph_QtnUpgrade_GrantHealingTotem(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, bool K2Node_Event_LoadedRunProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnUpgrade_GrantHealingTotem_C", "ExecuteUbergraph_QtnUpgrade_GrantHealingTotem");

	Params::UQtnUpgrade_GrantHealingTotem_C_ExecuteUbergraph_QtnUpgrade_GrantHealingTotem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TargetSlot = K2Node_Event_TargetSlot;
	Parms.K2Node_Event_RolledData = K2Node_Event_RolledData;
	Parms.K2Node_Event_LoadedRunProgress = K2Node_Event_LoadedRunProgress;

	UObject::ProcessEvent(Func, &Parms);

}

}


