#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SwordShield_EmpoweringBlocks.SwordShield_EmpoweringBlocks_C
// (None)

class UClass* USwordShield_EmpoweringBlocks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwordShield_EmpoweringBlocks_C");

	return Clss;
}


// SwordShield_EmpoweringBlocks_C SwordShield_EmpoweringBlocks.Default__SwordShield_EmpoweringBlocks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USwordShield_EmpoweringBlocks_C* USwordShield_EmpoweringBlocks_C::GetDefaultObj()
{
	static class USwordShield_EmpoweringBlocks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USwordShield_EmpoweringBlocks_C*>(USwordShield_EmpoweringBlocks_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SwordShield_EmpoweringBlocks.SwordShield_EmpoweringBlocks_C.CalculateDamageValues
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnUpgradeSlot*             OwningSlot                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    SourceVerb                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InBaseDamage                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnDamageType>  DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              OutDamageScalar                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutBonusDamage                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeleeVerbSwordShieldAirAttack_C*K2Node_DynamicCast_AsMelee_Verb_Sword_Shield_Air_Attack          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeleeVerbSwordShieldCombo3_C*K2Node_DynamicCast_AsMelee_Verb_Sword_Shield_Combo_3             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasStatusEffect_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void USwordShield_EmpoweringBlocks_C::CalculateDamageValues(class UQtnUpgradeSlot* OwningSlot, class UQtnVerb* SourceVerb, class AActor* TargetActor, float InBaseDamage, TSubclassOf<class UQtnDamageType> DamageType, float* OutDamageScalar, float* OutBonusDamage, class UMeleeVerbSwordShieldAirAttack_C* K2Node_DynamicCast_AsMelee_Verb_Sword_Shield_Air_Attack, bool K2Node_DynamicCast_bSuccess, class UMeleeVerbSwordShieldCombo3_C* K2Node_DynamicCast_AsMelee_Verb_Sword_Shield_Combo_3, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetValueOfUpgrade_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwordShield_EmpoweringBlocks_C", "CalculateDamageValues");

	Params::USwordShield_EmpoweringBlocks_C_CalculateDamageValues_Params Parms{};

	Parms.OwningSlot = OwningSlot;
	Parms.SourceVerb = SourceVerb;
	Parms.TargetActor = TargetActor;
	Parms.InBaseDamage = InBaseDamage;
	Parms.DamageType = DamageType;
	Parms.K2Node_DynamicCast_AsMelee_Verb_Sword_Shield_Air_Attack = K2Node_DynamicCast_AsMelee_Verb_Sword_Shield_Air_Attack;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsMelee_Verb_Sword_Shield_Combo_3 = K2Node_DynamicCast_AsMelee_Verb_Sword_Shield_Combo_3;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue = CallFunc_GetValueOfUpgrade_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_HasStatusEffect_ReturnValue = CallFunc_HasStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDamageScalar != nullptr)
		*OutDamageScalar = Parms.OutDamageScalar;

	if (OutBonusDamage != nullptr)
		*OutBonusDamage = Parms.OutBonusDamage;

}


// Function SwordShield_EmpoweringBlocks.SwordShield_EmpoweringBlocks_C.OnSlottedEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       RolledData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               LoadedRunProgress                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USwordShield_EmpoweringBlocks_C::OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwordShield_EmpoweringBlocks_C", "OnSlottedEvent");

	Params::USwordShield_EmpoweringBlocks_C_OnSlottedEvent_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.RolledData = RolledData;
	Parms.LoadedRunProgress = LoadedRunProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SwordShield_EmpoweringBlocks.SwordShield_EmpoweringBlocks_C.OnUnslottedEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             PreviousSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       RolledData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USwordShield_EmpoweringBlocks_C::OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwordShield_EmpoweringBlocks_C", "OnUnslottedEvent");

	Params::USwordShield_EmpoweringBlocks_C_OnUnslottedEvent_Params Parms{};

	Parms.PreviousSlot = PreviousSlot;
	Parms.RolledData = RolledData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SwordShield_EmpoweringBlocks.SwordShield_EmpoweringBlocks_C.OnUpgradeRolledDataChangedEvent
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             OwningSlot                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       PreviousRolledData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnRolledUpgradeData       NewRolledData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USwordShield_EmpoweringBlocks_C::OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwordShield_EmpoweringBlocks_C", "OnUpgradeRolledDataChangedEvent");

	Params::USwordShield_EmpoweringBlocks_C_OnUpgradeRolledDataChangedEvent_Params Parms{};

	Parms.OwningSlot = OwningSlot;
	Parms.PreviousRolledData = PreviousRolledData;
	Parms.NewRolledData = NewRolledData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SwordShield_EmpoweringBlocks.SwordShield_EmpoweringBlocks_C.ExecuteUbergraph_SwordShield_EmpoweringBlocks
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             K2Node_Event_OwningSlot                                          (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_PreviousRolledData                                  (ConstParm)
// struct FQtnRolledUpgradeData       K2Node_Event_NewRolledData                                       (ConstParm)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetOwningItem_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             K2Node_Event_TargetSlot                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_RolledData_1                                        (ConstParm)
// bool                               K2Node_Event_LoadedRunProgress                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeleeVerbSwordShieldCombo3_C*CallFunc_GetVerb_ReturnValue                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetOwningItem_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgradeSlot*             K2Node_Event_PreviousSlot                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_Event_RolledData                                          (ConstParm)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeleeVerbSwordShieldCombo3_C*CallFunc_GetVerb_ReturnValue_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetOwningItem_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeleeVerbSwordShieldCombo3_C*CallFunc_GetVerb_ReturnValue_2                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USwordShield_EmpoweringBlocks_C::ExecuteUbergraph_SwordShield_EmpoweringBlocks(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, float CallFunc_GetValueOfUpgrade_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetVerb_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetVerb_ReturnValue_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_2, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_2, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetVerb_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwordShield_EmpoweringBlocks_C", "ExecuteUbergraph_SwordShield_EmpoweringBlocks");

	Params::USwordShield_EmpoweringBlocks_C_ExecuteUbergraph_SwordShield_EmpoweringBlocks_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwningSlot = K2Node_Event_OwningSlot;
	Parms.K2Node_Event_PreviousRolledData = K2Node_Event_PreviousRolledData;
	Parms.K2Node_Event_NewRolledData = K2Node_Event_NewRolledData;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue = CallFunc_GetValueOfUpgrade_ReturnValue;
	Parms.CallFunc_GetOwningItem_ReturnValue = CallFunc_GetOwningItem_ReturnValue;
	Parms.K2Node_Event_TargetSlot = K2Node_Event_TargetSlot;
	Parms.K2Node_Event_RolledData_1 = K2Node_Event_RolledData_1;
	Parms.K2Node_Event_LoadedRunProgress = K2Node_Event_LoadedRunProgress;
	Parms.CallFunc_GetVerbComponent_ReturnValue = CallFunc_GetVerbComponent_ReturnValue;
	Parms.CallFunc_GetVerb_ReturnValue = CallFunc_GetVerb_ReturnValue;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue_1 = CallFunc_GetValueOfUpgrade_ReturnValue_1;
	Parms.CallFunc_GetOwningItem_ReturnValue_1 = CallFunc_GetOwningItem_ReturnValue_1;
	Parms.K2Node_Event_PreviousSlot = K2Node_Event_PreviousSlot;
	Parms.K2Node_Event_RolledData = K2Node_Event_RolledData;
	Parms.CallFunc_GetVerbComponent_ReturnValue_1 = CallFunc_GetVerbComponent_ReturnValue_1;
	Parms.CallFunc_GetVerb_ReturnValue_1 = CallFunc_GetVerb_ReturnValue_1;
	Parms.CallFunc_GetOwningItem_ReturnValue_2 = CallFunc_GetOwningItem_ReturnValue_2;
	Parms.CallFunc_GetVerbComponent_ReturnValue_2 = CallFunc_GetVerbComponent_ReturnValue_2;
	Parms.CallFunc_GetVerb_ReturnValue_2 = CallFunc_GetVerb_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


