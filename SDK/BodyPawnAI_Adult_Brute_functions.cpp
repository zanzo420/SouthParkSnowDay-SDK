#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAI_Adult_Brute.BodyPawnAI_Adult_Brute_C
// (Actor, Pawn)

class UClass* ABodyPawnAI_Adult_Brute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAI_Adult_Brute_C");

	return Clss;
}


// BodyPawnAI_Adult_Brute_C BodyPawnAI_Adult_Brute.Default__BodyPawnAI_Adult_Brute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAI_Adult_Brute_C* ABodyPawnAI_Adult_Brute_C::GetDefaultObj()
{
	static class ABodyPawnAI_Adult_Brute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAI_Adult_Brute_C*>(ABodyPawnAI_Adult_Brute_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawnAI_Adult_Brute.BodyPawnAI_Adult_Brute_C.BndEvt__DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnDamageReceptorComponent* DamagedReceptor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         HitReactionInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAI_Adult_Brute_C::BndEvt__DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAI_Adult_Brute_C", "BndEvt__DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature");

	Params::ABodyPawnAI_Adult_Brute_C_BndEvt__DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature_Params Parms{};

	Parms.DamagedReceptor = DamagedReceptor;
	Parms.DamageInfo = DamageInfo;
	Parms.HitReactionInfo = HitReactionInfo;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAI_Adult_Brute.BodyPawnAI_Adult_Brute_C.AlivenessEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AlivenessInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       OldBodyAliveness                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       bodyAliveness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAI_Adult_Brute_C::AlivenessEvent(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAI_Adult_Brute_C", "AlivenessEvent");

	Params::ABodyPawnAI_Adult_Brute_C_AlivenessEvent_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.AlivenessInstigator = AlivenessInstigator;
	Parms.OldBodyAliveness = OldBodyAliveness;
	Parms.bodyAliveness = bodyAliveness;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAI_Adult_Brute.BodyPawnAI_Adult_Brute_C.ExecuteUbergraph_BodyPawnAI_Adult_Brute
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUpgrade_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_ComponentBoundEvent_damageInfo                            (ConstParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         K2Node_ComponentBoundEvent_hitReactionInfo                       (ConstParm)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHealth_health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_maxHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasStatusEffect_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStatusEffect_Enrage_C*      CallFunc_AddStatusEffect_ServerOnly_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_Event_bodyPawn                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_alivenessInstigator                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_Event_oldBodyAliveness                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_Event_bodyAliveness                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasUpgrade_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasStatusEffect_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStatusEffect_Enrage_C*      CallFunc_GetStatusEffect_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawnAI_Adult_Brute_C::ExecuteUbergraph_BodyPawnAI_Adult_Brute(int32 EntryPoint, bool CallFunc_HasUpgrade_ReturnValue, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UStatusEffect_Enrage_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AQtnBodyPawn* K2Node_Event_bodyPawn, class AActor* K2Node_Event_alivenessInstigator, enum class EQtnBodyAliveness K2Node_Event_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_Event_bodyAliveness, bool K2Node_Event_isServer, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasUpgrade_ReturnValue_1, bool CallFunc_HasStatusEffect_ReturnValue_1, class UStatusEffect_Enrage_C* CallFunc_GetStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAI_Adult_Brute_C", "ExecuteUbergraph_BodyPawnAI_Adult_Brute");

	Params::ABodyPawnAI_Adult_Brute_C_ExecuteUbergraph_BodyPawnAI_Adult_Brute_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasUpgrade_ReturnValue = CallFunc_HasUpgrade_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_damagedReceptor = K2Node_ComponentBoundEvent_damagedReceptor;
	Parms.K2Node_ComponentBoundEvent_damageInfo = K2Node_ComponentBoundEvent_damageInfo;
	Parms.K2Node_ComponentBoundEvent_hitReactionInfo = K2Node_ComponentBoundEvent_hitReactionInfo;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.CallFunc_GetHealth_health = CallFunc_GetHealth_health;
	Parms.CallFunc_GetHealth_maxHealth = CallFunc_GetHealth_maxHealth;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_HasStatusEffect_ReturnValue = CallFunc_HasStatusEffect_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_AddStatusEffect_ServerOnly_ReturnValue = CallFunc_AddStatusEffect_ServerOnly_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_bodyPawn = K2Node_Event_bodyPawn;
	Parms.K2Node_Event_alivenessInstigator = K2Node_Event_alivenessInstigator;
	Parms.K2Node_Event_oldBodyAliveness = K2Node_Event_oldBodyAliveness;
	Parms.K2Node_Event_bodyAliveness = K2Node_Event_bodyAliveness;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_HasUpgrade_ReturnValue_1 = CallFunc_HasUpgrade_ReturnValue_1;
	Parms.CallFunc_HasStatusEffect_ReturnValue_1 = CallFunc_HasStatusEffect_ReturnValue_1;
	Parms.CallFunc_GetStatusEffect_ReturnValue = CallFunc_GetStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


