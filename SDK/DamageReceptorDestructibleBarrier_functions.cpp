#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageReceptorDestructibleBarrier.DamageReceptorDestructibleBarrier_C
// (None)

class UClass* UDamageReceptorDestructibleBarrier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageReceptorDestructibleBarrier_C");

	return Clss;
}


// DamageReceptorDestructibleBarrier_C DamageReceptorDestructibleBarrier.Default__DamageReceptorDestructibleBarrier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageReceptorDestructibleBarrier_C* UDamageReceptorDestructibleBarrier_C::GetDefaultObj()
{
	static class UDamageReceptorDestructibleBarrier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageReceptorDestructibleBarrier_C*>(UDamageReceptorDestructibleBarrier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DamageReceptorDestructibleBarrier.DamageReceptorDestructibleBarrier_C.SetDestroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDamageReceptorDestructibleBarrier_C::SetDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageReceptorDestructibleBarrier_C", "SetDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DamageReceptorDestructibleBarrier.DamageReceptorDestructibleBarrier_C.PreProcessIncomingDamage
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              IncomingDamageInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         DamageSuggestedHitReact                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnDamageInfo              OutgoingDamageInfo                                               (Parm, OutParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         ActualHitReact                                                   (Parm, OutParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageReceptorDestructibleBarrier_C::PreProcessIncomingDamage(struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnHitReactionInfo& DamageSuggestedHitReact, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* ActualHitReact, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageReceptorDestructibleBarrier_C", "PreProcessIncomingDamage");

	Params::UDamageReceptorDestructibleBarrier_C_PreProcessIncomingDamage_Params Parms{};

	Parms.IncomingDamageInfo = IncomingDamageInfo;
	Parms.DamageSuggestedHitReact = DamageSuggestedHitReact;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutgoingDamageInfo != nullptr)
		*OutgoingDamageInfo = std::move(Parms.OutgoingDamageInfo);

	if (ActualHitReact != nullptr)
		*ActualHitReact = std::move(Parms.ActualHitReact);

}

}


