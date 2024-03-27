#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageType_KissCharm.DamageType_KissCharm_C
// (None)

class UClass* UDamageType_KissCharm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageType_KissCharm_C");

	return Clss;
}


// DamageType_KissCharm_C DamageType_KissCharm.Default__DamageType_KissCharm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageType_KissCharm_C* UDamageType_KissCharm_C::GetDefaultObj()
{
	static class UDamageType_KissCharm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageType_KissCharm_C*>(UDamageType_KissCharm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DamageType_KissCharm.DamageType_KissCharm_C.ApplyIncomingDamage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      ActorToDamage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              IncomingDamageInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnDamageInfo              OutgoingDamageInfo                                               (Parm, OutParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         SuggestedHitReact                                                (Parm, OutParm)
// struct FQtnDamageInfo              CallFunc_ApplyIncomingDamage_outgoingDamageInfo                  (ContainsInstancedReference)
// struct FQtnHitReactionInfo         CallFunc_ApplyIncomingDamage_suggestedHitReact                   (None)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply(ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStatusEffect_Charmed_C*     CallFunc_AddStatusEffect_ServerOnly_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageType_KissCharm_C::ApplyIncomingDamage(class AActor* ActorToDamage, struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* SuggestedHitReact, const struct FQtnDamageInfo& CallFunc_ApplyIncomingDamage_outgoingDamageInfo, const struct FQtnHitReactionInfo& CallFunc_ApplyIncomingDamage_suggestedHitReact, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply, class UStatusEffect_Charmed_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageType_KissCharm_C", "ApplyIncomingDamage");

	Params::UDamageType_KissCharm_C_ApplyIncomingDamage_Params Parms{};

	Parms.ActorToDamage = ActorToDamage;
	Parms.IncomingDamageInfo = IncomingDamageInfo;
	Parms.CallFunc_ApplyIncomingDamage_outgoingDamageInfo = CallFunc_ApplyIncomingDamage_outgoingDamageInfo;
	Parms.CallFunc_ApplyIncomingDamage_suggestedHitReact = CallFunc_ApplyIncomingDamage_suggestedHitReact;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetDamageReceptor_ReturnValue = CallFunc_GetDamageReceptor_ReturnValue;
	Parms.CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply = CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply;
	Parms.CallFunc_AddStatusEffect_ServerOnly_ReturnValue = CallFunc_AddStatusEffect_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutgoingDamageInfo != nullptr)
		*OutgoingDamageInfo = std::move(Parms.OutgoingDamageInfo);

	if (SuggestedHitReact != nullptr)
		*SuggestedHitReact = std::move(Parms.SuggestedHitReact);

}

}


