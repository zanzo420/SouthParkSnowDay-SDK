#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BubbleShield_Regenerator.BubbleShield_Regenerator_C
// (None)

class UClass* UBubbleShield_Regenerator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BubbleShield_Regenerator_C");

	return Clss;
}


// BubbleShield_Regenerator_C BubbleShield_Regenerator.Default__BubbleShield_Regenerator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBubbleShield_Regenerator_C* UBubbleShield_Regenerator_C::GetDefaultObj()
{
	static class UBubbleShield_Regenerator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBubbleShield_Regenerator_C*>(UBubbleShield_Regenerator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BubbleShield_Regenerator.BubbleShield_Regenerator_C.OnSlottedEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       RolledData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               LoadedRunProgress                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBubbleShield_Regenerator_C::OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BubbleShield_Regenerator_C", "OnSlottedEvent");

	Params::UBubbleShield_Regenerator_C_OnSlottedEvent_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.RolledData = RolledData;
	Parms.LoadedRunProgress = LoadedRunProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BubbleShield_Regenerator.BubbleShield_Regenerator_C.OnUnslottedEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             PreviousSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       RolledData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBubbleShield_Regenerator_C::OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BubbleShield_Regenerator_C", "OnUnslottedEvent");

	Params::UBubbleShield_Regenerator_C_OnUnslottedEvent_Params Parms{};

	Parms.PreviousSlot = PreviousSlot;
	Parms.RolledData = RolledData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BubbleShield_Regenerator.BubbleShield_Regenerator_C.OnUpgradeRolledDataChangedEvent
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             OwningSlot                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       PreviousRolledData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnRolledUpgradeData       NewRolledData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBubbleShield_Regenerator_C::OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BubbleShield_Regenerator_C", "OnUpgradeRolledDataChangedEvent");

	Params::UBubbleShield_Regenerator_C_OnUpgradeRolledDataChangedEvent_Params Parms{};

	Parms.OwningSlot = OwningSlot;
	Parms.PreviousRolledData = PreviousRolledData;
	Parms.NewRolledData = NewRolledData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BubbleShield_Regenerator.BubbleShield_Regenerator_C.ExecuteUbergraph_BubbleShield_Regenerator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             K2Node_Event_OwningSlot                                          (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_PreviousRolledData                                  (ConstParm)
// struct FQtnRolledUpgradeData       K2Node_Event_NewRolledData                                       (ConstParm)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_GetOwningVerb_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             K2Node_Event_TargetSlot                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_RolledData_1                                        (ConstParm)
// bool                               K2Node_Event_LoadedRunProgress                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBubbleShieldVerb_C*         K2Node_DynamicCast_AsBubble_Shield_Verb                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_GetOwningVerb_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             K2Node_Event_PreviousSlot                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_RolledData                                          (ConstParm)
// class UBubbleShieldVerb_C*         K2Node_DynamicCast_AsBubble_Shield_Verb_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb*                    CallFunc_GetOwningVerb_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBubbleShieldVerb_C*         K2Node_DynamicCast_AsBubble_Shield_Verb_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBubbleShield_Regenerator_C::ExecuteUbergraph_BubbleShield_Regenerator(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, float CallFunc_GetValueOfUpgrade_ReturnValue, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UBubbleShieldVerb_C* K2Node_DynamicCast_AsBubble_Shield_Verb, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueOfUpgrade_ReturnValue_1, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue_1, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class UBubbleShieldVerb_C* K2Node_DynamicCast_AsBubble_Shield_Verb_1, bool K2Node_DynamicCast_bSuccess_1, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue_2, class UBubbleShieldVerb_C* K2Node_DynamicCast_AsBubble_Shield_Verb_2, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BubbleShield_Regenerator_C", "ExecuteUbergraph_BubbleShield_Regenerator");

	Params::UBubbleShield_Regenerator_C_ExecuteUbergraph_BubbleShield_Regenerator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwningSlot = K2Node_Event_OwningSlot;
	Parms.K2Node_Event_PreviousRolledData = K2Node_Event_PreviousRolledData;
	Parms.K2Node_Event_NewRolledData = K2Node_Event_NewRolledData;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue = CallFunc_GetValueOfUpgrade_ReturnValue;
	Parms.CallFunc_GetOwningVerb_ReturnValue = CallFunc_GetOwningVerb_ReturnValue;
	Parms.K2Node_Event_TargetSlot = K2Node_Event_TargetSlot;
	Parms.K2Node_Event_RolledData_1 = K2Node_Event_RolledData_1;
	Parms.K2Node_Event_LoadedRunProgress = K2Node_Event_LoadedRunProgress;
	Parms.K2Node_DynamicCast_AsBubble_Shield_Verb = K2Node_DynamicCast_AsBubble_Shield_Verb;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue_1 = CallFunc_GetValueOfUpgrade_ReturnValue_1;
	Parms.CallFunc_GetOwningVerb_ReturnValue_1 = CallFunc_GetOwningVerb_ReturnValue_1;
	Parms.K2Node_Event_PreviousSlot = K2Node_Event_PreviousSlot;
	Parms.K2Node_Event_RolledData = K2Node_Event_RolledData;
	Parms.K2Node_DynamicCast_AsBubble_Shield_Verb_1 = K2Node_DynamicCast_AsBubble_Shield_Verb_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwningVerb_ReturnValue_2 = CallFunc_GetOwningVerb_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBubble_Shield_Verb_2 = K2Node_DynamicCast_AsBubble_Shield_Verb_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


