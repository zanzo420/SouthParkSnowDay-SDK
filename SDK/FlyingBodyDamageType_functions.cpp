#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlyingBodyDamageType.FlyingBodyDamageType_C
// (None)

class UClass* UFlyingBodyDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlyingBodyDamageType_C");

	return Clss;
}


// FlyingBodyDamageType_C FlyingBodyDamageType.Default__FlyingBodyDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlyingBodyDamageType_C* UFlyingBodyDamageType_C::GetDefaultObj()
{
	static class UFlyingBodyDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlyingBodyDamageType_C*>(UFlyingBodyDamageType_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FlyingBodyDamageType.FlyingBodyDamageType_C.ApplyIncomingDamage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      ActorToDamage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              IncomingDamageInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnDamageInfo              OutgoingDamageInfo                                               (Parm, OutParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         SuggestedHitReact                                                (Parm, OutParm)
// struct FQtnDamageInfo              CallFunc_ApplyIncomingDamage_outgoingDamageInfo                  (ContainsInstancedReference)
// struct FQtnHitReactionInfo         CallFunc_ApplyIncomingDamage_suggestedHitReact                   (None)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlyingBodyDamageType_C::ApplyIncomingDamage(class AActor* ActorToDamage, struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* SuggestedHitReact, const struct FQtnDamageInfo& CallFunc_ApplyIncomingDamage_outgoingDamageInfo, const struct FQtnHitReactionInfo& CallFunc_ApplyIncomingDamage_suggestedHitReact, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlyingBodyDamageType_C", "ApplyIncomingDamage");

	Params::UFlyingBodyDamageType_C_ApplyIncomingDamage_Params Parms{};

	Parms.ActorToDamage = ActorToDamage;
	Parms.IncomingDamageInfo = IncomingDamageInfo;
	Parms.CallFunc_ApplyIncomingDamage_outgoingDamageInfo = CallFunc_ApplyIncomingDamage_outgoingDamageInfo;
	Parms.CallFunc_ApplyIncomingDamage_suggestedHitReact = CallFunc_ApplyIncomingDamage_suggestedHitReact;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutgoingDamageInfo != nullptr)
		*OutgoingDamageInfo = std::move(Parms.OutgoingDamageInfo);

	if (SuggestedHitReact != nullptr)
		*SuggestedHitReact = std::move(Parms.SuggestedHitReact);

}

}


