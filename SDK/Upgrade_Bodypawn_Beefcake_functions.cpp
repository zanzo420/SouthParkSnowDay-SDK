#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Upgrade_Bodypawn_Beefcake.Upgrade_Bodypawn_Beefcake_C
// (None)

class UClass* UUpgrade_Bodypawn_Beefcake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Upgrade_Bodypawn_Beefcake_C");

	return Clss;
}


// Upgrade_Bodypawn_Beefcake_C Upgrade_Bodypawn_Beefcake.Default__Upgrade_Bodypawn_Beefcake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUpgrade_Bodypawn_Beefcake_C* UUpgrade_Bodypawn_Beefcake_C::GetDefaultObj()
{
	static class UUpgrade_Bodypawn_Beefcake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpgrade_Bodypawn_Beefcake_C*>(UUpgrade_Bodypawn_Beefcake_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Upgrade_Bodypawn_Beefcake.Upgrade_Bodypawn_Beefcake_C.OnSlottedEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       RolledData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               LoadedRunProgress                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUpgrade_Bodypawn_Beefcake_C::OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Upgrade_Bodypawn_Beefcake_C", "OnSlottedEvent");

	Params::UUpgrade_Bodypawn_Beefcake_C_OnSlottedEvent_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.RolledData = RolledData;
	Parms.LoadedRunProgress = LoadedRunProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Upgrade_Bodypawn_Beefcake.Upgrade_Bodypawn_Beefcake_C.OnUnslottedEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             PreviousSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       RolledData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUpgrade_Bodypawn_Beefcake_C::OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Upgrade_Bodypawn_Beefcake_C", "OnUnslottedEvent");

	Params::UUpgrade_Bodypawn_Beefcake_C_OnUnslottedEvent_Params Parms{};

	Parms.PreviousSlot = PreviousSlot;
	Parms.RolledData = RolledData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Upgrade_Bodypawn_Beefcake.Upgrade_Bodypawn_Beefcake_C.OnUpgradeRolledDataChangedEvent
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             OwningSlot                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       PreviousRolledData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnRolledUpgradeData       NewRolledData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUpgrade_Bodypawn_Beefcake_C::OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Upgrade_Bodypawn_Beefcake_C", "OnUpgradeRolledDataChangedEvent");

	Params::UUpgrade_Bodypawn_Beefcake_C_OnUpgradeRolledDataChangedEvent_Params Parms{};

	Parms.OwningSlot = OwningSlot;
	Parms.PreviousRolledData = PreviousRolledData;
	Parms.NewRolledData = NewRolledData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Upgrade_Bodypawn_Beefcake.Upgrade_Bodypawn_Beefcake_C.ExecuteUbergraph_Upgrade_Bodypawn_Beefcake
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             K2Node_Event_PreviousSlot                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_RolledData                                          (ConstParm)
// class UQtnUpgradeSlot*             K2Node_Event_OwningSlot                                          (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_PreviousRolledData                                  (ConstParm)
// struct FQtnRolledUpgradeData       K2Node_Event_NewRolledData                                       (ConstParm)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgradeSlot*             K2Node_Event_TargetSlot                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_RolledData_1                                        (ConstParm)
// bool                               K2Node_Event_LoadedRunProgress                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_IncreaseAttributeValue_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUpgrade_Bodypawn_Beefcake_C::ExecuteUbergraph_Upgrade_Bodypawn_Beefcake(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, float CallFunc_GetValueOfUpgrade_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, float CallFunc_GetValueOfUpgrade_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_IncreaseAttributeValue_self_CastInput, bool CallFunc_HasAuthority_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Upgrade_Bodypawn_Beefcake_C", "ExecuteUbergraph_Upgrade_Bodypawn_Beefcake");

	Params::UUpgrade_Bodypawn_Beefcake_C_ExecuteUbergraph_Upgrade_Bodypawn_Beefcake_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PreviousSlot = K2Node_Event_PreviousSlot;
	Parms.K2Node_Event_RolledData = K2Node_Event_RolledData;
	Parms.K2Node_Event_OwningSlot = K2Node_Event_OwningSlot;
	Parms.K2Node_Event_PreviousRolledData = K2Node_Event_PreviousRolledData;
	Parms.K2Node_Event_NewRolledData = K2Node_Event_NewRolledData;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue = CallFunc_GetValueOfUpgrade_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_1 = CallFunc_GetOwningBodyPawn_ReturnValue_1;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_TargetSlot = K2Node_Event_TargetSlot;
	Parms.K2Node_Event_RolledData_1 = K2Node_Event_RolledData_1;
	Parms.K2Node_Event_LoadedRunProgress = K2Node_Event_LoadedRunProgress;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue_1 = CallFunc_GetValueOfUpgrade_ReturnValue_1;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_2 = CallFunc_GetOwningBodyPawn_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetAttributeComponent_ReturnValue_1 = CallFunc_GetAttributeComponent_ReturnValue_1;
	Parms.CallFunc_IncreaseAttributeValue_self_CastInput = CallFunc_IncreaseAttributeValue_self_CastInput;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


