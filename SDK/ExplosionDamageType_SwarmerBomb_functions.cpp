#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ExplosionDamageType_SwarmerBomb.ExplosionDamageType_SwarmerBomb_C
// (None)

class UClass* UExplosionDamageType_SwarmerBomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExplosionDamageType_SwarmerBomb_C");

	return Clss;
}


// ExplosionDamageType_SwarmerBomb_C ExplosionDamageType_SwarmerBomb.Default__ExplosionDamageType_SwarmerBomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExplosionDamageType_SwarmerBomb_C* UExplosionDamageType_SwarmerBomb_C::GetDefaultObj()
{
	static class UExplosionDamageType_SwarmerBomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExplosionDamageType_SwarmerBomb_C*>(UExplosionDamageType_SwarmerBomb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ExplosionDamageType_SwarmerBomb.ExplosionDamageType_SwarmerBomb_C.ApplyIncomingDamage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      ActorToDamage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              IncomingDamageInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnDamageInfo              OutgoingDamageInfo                                               (Parm, OutParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         SuggestedHitReact                                                (Parm, OutParm)
// struct FQtnDamageInfo              CallFunc_ApplyIncomingDamage_outgoingDamageInfo                  (ContainsInstancedReference)
// struct FQtnHitReactionInfo         CallFunc_ApplyIncomingDamage_suggestedHitReact                   (None)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHealth_health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_maxHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              CallFunc_ApplyIncomingDamage_outgoingDamageInfo_1                (ContainsInstancedReference)
// struct FQtnHitReactionInfo         CallFunc_ApplyIncomingDamage_suggestedHitReact_1                 (None)

void UExplosionDamageType_SwarmerBomb_C::ApplyIncomingDamage(class AActor* ActorToDamage, struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* SuggestedHitReact, const struct FQtnDamageInfo& CallFunc_ApplyIncomingDamage_outgoingDamageInfo, const struct FQtnHitReactionInfo& CallFunc_ApplyIncomingDamage_suggestedHitReact, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FQtnDamageInfo& CallFunc_ApplyIncomingDamage_outgoingDamageInfo_1, const struct FQtnHitReactionInfo& CallFunc_ApplyIncomingDamage_suggestedHitReact_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExplosionDamageType_SwarmerBomb_C", "ApplyIncomingDamage");

	Params::UExplosionDamageType_SwarmerBomb_C_ApplyIncomingDamage_Params Parms{};

	Parms.ActorToDamage = ActorToDamage;
	Parms.IncomingDamageInfo = IncomingDamageInfo;
	Parms.CallFunc_ApplyIncomingDamage_outgoingDamageInfo = CallFunc_ApplyIncomingDamage_outgoingDamageInfo;
	Parms.CallFunc_ApplyIncomingDamage_suggestedHitReact = CallFunc_ApplyIncomingDamage_suggestedHitReact;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHealth_health = CallFunc_GetHealth_health;
	Parms.CallFunc_GetHealth_maxHealth = CallFunc_GetHealth_maxHealth;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_ApplyIncomingDamage_outgoingDamageInfo_1 = CallFunc_ApplyIncomingDamage_outgoingDamageInfo_1;
	Parms.CallFunc_ApplyIncomingDamage_suggestedHitReact_1 = CallFunc_ApplyIncomingDamage_suggestedHitReact_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutgoingDamageInfo != nullptr)
		*OutgoingDamageInfo = std::move(Parms.OutgoingDamageInfo);

	if (SuggestedHitReact != nullptr)
		*SuggestedHitReact = std::move(Parms.SuggestedHitReact);

}

}


