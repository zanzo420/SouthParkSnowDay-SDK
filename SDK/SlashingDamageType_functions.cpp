#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlashingDamageType.SlashingDamageType_C
// (None)

class UClass* USlashingDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlashingDamageType_C");

	return Clss;
}


// SlashingDamageType_C SlashingDamageType.Default__SlashingDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlashingDamageType_C* USlashingDamageType_C::GetDefaultObj()
{
	static class USlashingDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlashingDamageType_C*>(USlashingDamageType_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SlashingDamageType.SlashingDamageType_C.ApplyIncomingDamage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      ActorToDamage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              IncomingDamageInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnDamageInfo              OutgoingDamageInfo                                               (Parm, OutParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         SuggestedHitReact                                                (Parm, OutParm)
// bool                               CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnHitReactionInfo         CallFunc_GetDefaultHitReaction_suggestedHitReact                 (None)

void USlashingDamageType_C::ApplyIncomingDamage(class AActor* ActorToDamage, struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* SuggestedHitReact, bool CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FQtnHitReactionInfo& CallFunc_GetDefaultHitReaction_suggestedHitReact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlashingDamageType_C", "ApplyIncomingDamage");

	Params::USlashingDamageType_C_ApplyIncomingDamage_Params Parms{};

	Parms.ActorToDamage = ActorToDamage;
	Parms.IncomingDamageInfo = IncomingDamageInfo;
	Parms.CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply = CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDefaultHitReaction_suggestedHitReact = CallFunc_GetDefaultHitReaction_suggestedHitReact;

	UObject::ProcessEvent(Func, &Parms);

	if (OutgoingDamageInfo != nullptr)
		*OutgoingDamageInfo = std::move(Parms.OutgoingDamageInfo);

	if (SuggestedHitReact != nullptr)
		*SuggestedHitReact = std::move(Parms.SuggestedHitReact);

}

}


