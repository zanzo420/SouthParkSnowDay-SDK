#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WychfireDamageType.WychfireDamageType_C
// (None)

class UClass* UWychfireDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WychfireDamageType_C");

	return Clss;
}


// WychfireDamageType_C WychfireDamageType.Default__WychfireDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWychfireDamageType_C* UWychfireDamageType_C::GetDefaultObj()
{
	static class UWychfireDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWychfireDamageType_C*>(UWychfireDamageType_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WychfireDamageType.WychfireDamageType_C.ApplyIncomingDamage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      ActorToDamage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              IncomingDamageInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnDamageInfo              OutgoingDamageInfo                                               (Parm, OutParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         SuggestedHitReact                                                (Parm, OutParm)
// struct FQtnDamageInfo              CallFunc_ApplyIncomingDamage_outgoingDamageInfo                  (ContainsInstancedReference)
// struct FQtnHitReactionInfo         CallFunc_ApplyIncomingDamage_suggestedHitReact                   (None)

void UWychfireDamageType_C::ApplyIncomingDamage(class AActor* ActorToDamage, struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* SuggestedHitReact, const struct FQtnDamageInfo& CallFunc_ApplyIncomingDamage_outgoingDamageInfo, const struct FQtnHitReactionInfo& CallFunc_ApplyIncomingDamage_suggestedHitReact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WychfireDamageType_C", "ApplyIncomingDamage");

	Params::UWychfireDamageType_C_ApplyIncomingDamage_Params Parms{};

	Parms.ActorToDamage = ActorToDamage;
	Parms.IncomingDamageInfo = IncomingDamageInfo;
	Parms.CallFunc_ApplyIncomingDamage_outgoingDamageInfo = CallFunc_ApplyIncomingDamage_outgoingDamageInfo;
	Parms.CallFunc_ApplyIncomingDamage_suggestedHitReact = CallFunc_ApplyIncomingDamage_suggestedHitReact;

	UObject::ProcessEvent(Func, &Parms);

	if (OutgoingDamageInfo != nullptr)
		*OutgoingDamageInfo = std::move(Parms.OutgoingDamageInfo);

	if (SuggestedHitReact != nullptr)
		*SuggestedHitReact = std::move(Parms.SuggestedHitReact);

}

}


