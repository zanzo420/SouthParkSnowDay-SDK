#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InstantUpgradeAction_BullshitRefill.InstantUpgradeAction_BullshitRefill_C
// (None)

class UClass* UInstantUpgradeAction_BullshitRefill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstantUpgradeAction_BullshitRefill_C");

	return Clss;
}


// InstantUpgradeAction_BullshitRefill_C InstantUpgradeAction_BullshitRefill.Default__InstantUpgradeAction_BullshitRefill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInstantUpgradeAction_BullshitRefill_C* UInstantUpgradeAction_BullshitRefill_C::GetDefaultObj()
{
	static class UInstantUpgradeAction_BullshitRefill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInstantUpgradeAction_BullshitRefill_C*>(UInstantUpgradeAction_BullshitRefill_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InstantUpgradeAction_BullshitRefill.InstantUpgradeAction_BullshitRefill_C.K2_ActivateUpgrade
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetUser                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     RolledUpgradeSettings                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UQtn_CheatVerb_Archetype_C*  CallFunc_GetExistingVerb_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UInstantUpgradeAction_BullshitRefill_C::K2_ActivateUpgrade(class AQtnBodyPawn* TargetUser, struct FQtnRolledUpgradeResult& RolledUpgradeSettings, class UQtn_CheatVerb_Archetype_C* CallFunc_GetExistingVerb_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstantUpgradeAction_BullshitRefill_C", "K2_ActivateUpgrade");

	Params::UInstantUpgradeAction_BullshitRefill_C_K2_ActivateUpgrade_Params Parms{};

	Parms.TargetUser = TargetUser;
	Parms.RolledUpgradeSettings = RolledUpgradeSettings;
	Parms.CallFunc_GetExistingVerb_ReturnValue = CallFunc_GetExistingVerb_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


