#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HealingTotemDamageReceptor.HealingTotemDamageReceptor_C
// (None)

class UClass* UHealingTotemDamageReceptor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HealingTotemDamageReceptor_C");

	return Clss;
}


// HealingTotemDamageReceptor_C HealingTotemDamageReceptor.Default__HealingTotemDamageReceptor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHealingTotemDamageReceptor_C* UHealingTotemDamageReceptor_C::GetDefaultObj()
{
	static class UHealingTotemDamageReceptor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHealingTotemDamageReceptor_C*>(UHealingTotemDamageReceptor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HealingTotemDamageReceptor.HealingTotemDamageReceptor_C.ShouldAttractAimAssist
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnPawn*                    AttackingPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromCollateralDamage                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanHarmThisTotem_canHarm                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UHealingTotemDamageReceptor_C::ShouldAttractAimAssist(class AQtnPawn* AttackingPawn, bool FromCollateralDamage, bool CallFunc_CanHarmThisTotem_canHarm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealingTotemDamageReceptor_C", "ShouldAttractAimAssist");

	Params::UHealingTotemDamageReceptor_C_ShouldAttractAimAssist_Params Parms{};

	Parms.AttackingPawn = AttackingPawn;
	Parms.FromCollateralDamage = FromCollateralDamage;
	Parms.CallFunc_CanHarmThisTotem_canHarm = CallFunc_CanHarmThisTotem_canHarm;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HealingTotemDamageReceptor.HealingTotemDamageReceptor_C.CanHarmThisTotem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnPawn*                    Culprit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanHarm                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlly_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHealingTotemDamageReceptor_C::CanHarmThisTotem(class AQtnPawn*& Culprit, bool* CanHarm, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlly_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealingTotemDamageReceptor_C", "CanHarmThisTotem");

	Params::UHealingTotemDamageReceptor_C_CanHarmThisTotem_Params Parms{};

	Parms.Culprit = Culprit;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsAlly_ReturnValue = CallFunc_IsAlly_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanHarm != nullptr)
		*CanHarm = Parms.CanHarm;

}


// Function HealingTotemDamageReceptor.HealingTotemDamageReceptor_C.PreProcessIncomingDamage
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              IncomingDamageInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         DamageSuggestedHitReact                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnDamageInfo              OutgoingDamageInfo                                               (Parm, OutParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         ActualHitReact                                                   (Parm, OutParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanHarmThisTotem_canHarm                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHealingTotemDamageReceptor_C::PreProcessIncomingDamage(struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnHitReactionInfo& DamageSuggestedHitReact, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* ActualHitReact, bool CallFunc_IsServer_ReturnValue, bool CallFunc_CanHarmThisTotem_canHarm, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealingTotemDamageReceptor_C", "PreProcessIncomingDamage");

	Params::UHealingTotemDamageReceptor_C_PreProcessIncomingDamage_Params Parms{};

	Parms.IncomingDamageInfo = IncomingDamageInfo;
	Parms.DamageSuggestedHitReact = DamageSuggestedHitReact;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_CanHarmThisTotem_canHarm = CallFunc_CanHarmThisTotem_canHarm;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OutgoingDamageInfo != nullptr)
		*OutgoingDamageInfo = std::move(Parms.OutgoingDamageInfo);

	if (ActualHitReact != nullptr)
		*ActualHitReact = std::move(Parms.ActualHitReact);

}


// Function HealingTotemDamageReceptor.HealingTotemDamageReceptor_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UHealingTotemDamageReceptor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealingTotemDamageReceptor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HealingTotemDamageReceptor.HealingTotemDamageReceptor_C.ExecuteUbergraph_HealingTotemDamageReceptor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHealingTotem_C*             K2Node_DynamicCast_AsHealing_Totem                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHealingTotemDamageReceptor_C::ExecuteUbergraph_HealingTotemDamageReceptor(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AHealingTotem_C* K2Node_DynamicCast_AsHealing_Totem, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealingTotemDamageReceptor_C", "ExecuteUbergraph_HealingTotemDamageReceptor");

	Params::UHealingTotemDamageReceptor_C_ExecuteUbergraph_HealingTotemDamageReceptor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsHealing_Totem = K2Node_DynamicCast_AsHealing_Totem;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


