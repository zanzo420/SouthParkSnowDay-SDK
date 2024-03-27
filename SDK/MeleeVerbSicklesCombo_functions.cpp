#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MeleeVerbSicklesCombo.MeleeVerbSicklesCombo_C
// (None)

class UClass* UMeleeVerbSicklesCombo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeleeVerbSicklesCombo_C");

	return Clss;
}


// MeleeVerbSicklesCombo_C MeleeVerbSicklesCombo.Default__MeleeVerbSicklesCombo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMeleeVerbSicklesCombo_C* UMeleeVerbSicklesCombo_C::GetDefaultObj()
{
	static class UMeleeVerbSicklesCombo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeleeVerbSicklesCombo_C*>(UMeleeVerbSicklesCombo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MeleeVerbSicklesCombo.MeleeVerbSicklesCombo_C.ApplyMeleeDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      MeleeVictim                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              DamageInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UMeleeVerbSicklesCombo_C::ApplyMeleeDamage(class AActor* MeleeVictim, const struct FQtnDamageInfo& DamageInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeleeVerbSicklesCombo_C", "ApplyMeleeDamage");

	Params::UMeleeVerbSicklesCombo_C_ApplyMeleeDamage_Params Parms{};

	Parms.MeleeVictim = MeleeVictim;
	Parms.DamageInfo = DamageInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MeleeVerbSicklesCombo.MeleeVerbSicklesCombo_C.ExecuteUbergraph_MeleeVerbSicklesCombo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnVerbTuningDataRow       CallFunc_GetVerbTuningData_ReturnValue                           (None)
// class AActor*                      K2Node_Event_meleeVictim                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_Event_DamageInfo                                          (ContainsInstancedReference)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnAI_C*               K2Node_DynamicCast_AsBody_Pawn_AI                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffect_DeathProof_C*  CallFunc_GetStatusEffect_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlly_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMeleeVerbSicklesCombo_C::ExecuteUbergraph_MeleeVerbSicklesCombo(int32 EntryPoint, const struct FQtnVerbTuningDataRow& CallFunc_GetVerbTuningData_ReturnValue, class AActor* K2Node_Event_meleeVictim, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, float CallFunc_Multiply_FloatFloat_ReturnValue, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UStatusEffect_DeathProof_C* CallFunc_GetStatusEffect_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeleeVerbSicklesCombo_C", "ExecuteUbergraph_MeleeVerbSicklesCombo");

	Params::UMeleeVerbSicklesCombo_C_ExecuteUbergraph_MeleeVerbSicklesCombo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetVerbTuningData_ReturnValue = CallFunc_GetVerbTuningData_ReturnValue;
	Parms.K2Node_Event_meleeVictim = K2Node_Event_meleeVictim;
	Parms.K2Node_Event_DamageInfo = K2Node_Event_DamageInfo;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AI = K2Node_DynamicCast_AsBody_Pawn_AI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_GetStatusEffect_ReturnValue = CallFunc_GetStatusEffect_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsAlly_ReturnValue = CallFunc_IsAlly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


