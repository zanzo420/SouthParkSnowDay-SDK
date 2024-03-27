#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GravityBomb_ProjectileVortex.GravityBomb_ProjectileVortex_C
// (None)

class UClass* UGravityBomb_ProjectileVortex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GravityBomb_ProjectileVortex_C");

	return Clss;
}


// GravityBomb_ProjectileVortex_C GravityBomb_ProjectileVortex.Default__GravityBomb_ProjectileVortex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGravityBomb_ProjectileVortex_C* UGravityBomb_ProjectileVortex_C::GetDefaultObj()
{
	static class UGravityBomb_ProjectileVortex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGravityBomb_ProjectileVortex_C*>(UGravityBomb_ProjectileVortex_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GravityBomb_ProjectileVortex.GravityBomb_ProjectileVortex_C.OnSlottedEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       RolledData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               LoadedRunProgress                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGravityBomb_ProjectileVortex_C::OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GravityBomb_ProjectileVortex_C", "OnSlottedEvent");

	Params::UGravityBomb_ProjectileVortex_C_OnSlottedEvent_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.RolledData = RolledData;
	Parms.LoadedRunProgress = LoadedRunProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GravityBomb_ProjectileVortex.GravityBomb_ProjectileVortex_C.OnUnslottedEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             PreviousSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       RolledData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGravityBomb_ProjectileVortex_C::OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GravityBomb_ProjectileVortex_C", "OnUnslottedEvent");

	Params::UGravityBomb_ProjectileVortex_C_OnUnslottedEvent_Params Parms{};

	Parms.PreviousSlot = PreviousSlot;
	Parms.RolledData = RolledData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GravityBomb_ProjectileVortex.GravityBomb_ProjectileVortex_C.OnUpgradeRolledDataChangedEvent
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             OwningSlot                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       PreviousRolledData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnRolledUpgradeData       NewRolledData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGravityBomb_ProjectileVortex_C::OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GravityBomb_ProjectileVortex_C", "OnUpgradeRolledDataChangedEvent");

	Params::UGravityBomb_ProjectileVortex_C_OnUpgradeRolledDataChangedEvent_Params Parms{};

	Parms.OwningSlot = OwningSlot;
	Parms.PreviousRolledData = PreviousRolledData;
	Parms.NewRolledData = NewRolledData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GravityBomb_ProjectileVortex.GravityBomb_ProjectileVortex_C.ExecuteUbergraph_GravityBomb_ProjectileVortex
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             K2Node_Event_TargetSlot                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_RolledData_1                                        (ConstParm)
// bool                               K2Node_Event_LoadedRunProgress                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgradeSlot*             K2Node_Event_PreviousSlot                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_RolledData                                          (ConstParm)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_GetOwningVerb_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGravityBombVerb_C*          K2Node_DynamicCast_AsGravity_Bomb_Verb                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_GetOwningVerb_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGravityBombVerb_C*          K2Node_DynamicCast_AsGravity_Bomb_Verb_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgradeSlot*             K2Node_Event_OwningSlot                                          (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_PreviousRolledData                                  (ConstParm)
// struct FQtnRolledUpgradeData       K2Node_Event_NewRolledData                                       (ConstParm)

void UGravityBomb_ProjectileVortex_C::ExecuteUbergraph_GravityBomb_ProjectileVortex(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UGravityBombVerb_C* K2Node_DynamicCast_AsGravity_Bomb_Verb, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, class UGravityBombVerb_C* K2Node_DynamicCast_AsGravity_Bomb_Verb_1, bool K2Node_DynamicCast_bSuccess_1, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GravityBomb_ProjectileVortex_C", "ExecuteUbergraph_GravityBomb_ProjectileVortex");

	Params::UGravityBomb_ProjectileVortex_C_ExecuteUbergraph_GravityBomb_ProjectileVortex_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TargetSlot = K2Node_Event_TargetSlot;
	Parms.K2Node_Event_RolledData_1 = K2Node_Event_RolledData_1;
	Parms.K2Node_Event_LoadedRunProgress = K2Node_Event_LoadedRunProgress;
	Parms.K2Node_Event_PreviousSlot = K2Node_Event_PreviousSlot;
	Parms.K2Node_Event_RolledData = K2Node_Event_RolledData;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_GetOwningVerb_ReturnValue = CallFunc_GetOwningVerb_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsGravity_Bomb_Verb = K2Node_DynamicCast_AsGravity_Bomb_Verb;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_1 = CallFunc_GetOwningBodyPawn_ReturnValue_1;
	Parms.CallFunc_GetOwningVerb_ReturnValue_1 = CallFunc_GetOwningVerb_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGravity_Bomb_Verb_1 = K2Node_DynamicCast_AsGravity_Bomb_Verb_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_OwningSlot = K2Node_Event_OwningSlot;
	Parms.K2Node_Event_PreviousRolledData = K2Node_Event_PreviousRolledData;
	Parms.K2Node_Event_NewRolledData = K2Node_Event_NewRolledData;

	UObject::ProcessEvent(Func, &Parms);

}

}


