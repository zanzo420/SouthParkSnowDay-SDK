#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageReceptorSmashable.DamageReceptorSmashable_C
// (None)

class UClass* UDamageReceptorSmashable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageReceptorSmashable_C");

	return Clss;
}


// DamageReceptorSmashable_C DamageReceptorSmashable.Default__DamageReceptorSmashable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageReceptorSmashable_C* UDamageReceptorSmashable_C::GetDefaultObj()
{
	static class UDamageReceptorSmashable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageReceptorSmashable_C*>(UDamageReceptorSmashable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DamageReceptorSmashable.DamageReceptorSmashable_C.ShouldAttractAimAssist
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnPawn*                    AttackingPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromCollateralDamage                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHero_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDamageReceptorSmashable_C::ShouldAttractAimAssist(class AQtnPawn* AttackingPawn, bool FromCollateralDamage, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool CallFunc_IsHero_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageReceptorSmashable_C", "ShouldAttractAimAssist");

	Params::UDamageReceptorSmashable_C_ShouldAttractAimAssist_Params Parms{};

	Parms.AttackingPawn = AttackingPawn;
	Parms.FromCollateralDamage = FromCollateralDamage;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.CallFunc_IsHero_ReturnValue = CallFunc_IsHero_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DamageReceptorSmashable.DamageReceptorSmashable_C.PreProcessIncomingDamage
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FQtnDamageInfo              IncomingDamageInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         DamageSuggestedHitReact                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnDamageInfo              OutgoingDamageInfo                                               (Parm, OutParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         ActualHitReact                                                   (Parm, OutParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDamageReceptorSmashable_C::PreProcessIncomingDamage(struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnHitReactionInfo& DamageSuggestedHitReact, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* ActualHitReact, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageReceptorSmashable_C", "PreProcessIncomingDamage");

	Params::UDamageReceptorSmashable_C_PreProcessIncomingDamage_Params Parms{};

	Parms.IncomingDamageInfo = IncomingDamageInfo;
	Parms.DamageSuggestedHitReact = DamageSuggestedHitReact;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutgoingDamageInfo != nullptr)
		*OutgoingDamageInfo = std::move(Parms.OutgoingDamageInfo);

	if (ActualHitReact != nullptr)
		*ActualHitReact = std::move(Parms.ActualHitReact);

}

}


