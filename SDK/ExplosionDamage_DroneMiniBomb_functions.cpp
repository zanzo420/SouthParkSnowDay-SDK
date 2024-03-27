#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ExplosionDamage_DroneMiniBomb.ExplosionDamage_DroneMiniBomb_C
// (None)

class UClass* UExplosionDamage_DroneMiniBomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExplosionDamage_DroneMiniBomb_C");

	return Clss;
}


// ExplosionDamage_DroneMiniBomb_C ExplosionDamage_DroneMiniBomb.Default__ExplosionDamage_DroneMiniBomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExplosionDamage_DroneMiniBomb_C* UExplosionDamage_DroneMiniBomb_C::GetDefaultObj()
{
	static class UExplosionDamage_DroneMiniBomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExplosionDamage_DroneMiniBomb_C*>(UExplosionDamage_DroneMiniBomb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ExplosionDamage_DroneMiniBomb.ExplosionDamage_DroneMiniBomb_C.ApplyIncomingDamage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      ActorToDamage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              IncomingDamageInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnDamageInfo              OutgoingDamageInfo                                               (Parm, OutParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         SuggestedHitReact                                                (Parm, OutParm)
// bool                               CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnHitReactionInfo         CallFunc_GetDefaultHitReaction_suggestedHitReact                 (None)

void UExplosionDamage_DroneMiniBomb_C::ApplyIncomingDamage(class AActor* ActorToDamage, struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* SuggestedHitReact, bool CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply, const struct FQtnHitReactionInfo& CallFunc_GetDefaultHitReaction_suggestedHitReact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExplosionDamage_DroneMiniBomb_C", "ApplyIncomingDamage");

	Params::UExplosionDamage_DroneMiniBomb_C_ApplyIncomingDamage_Params Parms{};

	Parms.ActorToDamage = ActorToDamage;
	Parms.IncomingDamageInfo = IncomingDamageInfo;
	Parms.CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply = CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply;
	Parms.CallFunc_GetDefaultHitReaction_suggestedHitReact = CallFunc_GetDefaultHitReaction_suggestedHitReact;

	UObject::ProcessEvent(Func, &Parms);

	if (OutgoingDamageInfo != nullptr)
		*OutgoingDamageInfo = std::move(Parms.OutgoingDamageInfo);

	if (SuggestedHitReact != nullptr)
		*SuggestedHitReact = std::move(Parms.SuggestedHitReact);

}

}


