#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_HitReactionThreshold.AnimNotify_HitReactionThreshold_C
// (None)

class UClass* UAnimNotify_HitReactionThreshold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_HitReactionThreshold_C");

	return Clss;
}


// AnimNotify_HitReactionThreshold_C AnimNotify_HitReactionThreshold.Default__AnimNotify_HitReactionThreshold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_HitReactionThreshold_C* UAnimNotify_HitReactionThreshold_C::GetDefaultObj()
{
	static class UAnimNotify_HitReactionThreshold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_HitReactionThreshold_C*>(UAnimNotify_HitReactionThreshold_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotify_HitReactionThreshold.AnimNotify_HitReactionThreshold_C.OnVerbWindowEnd
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnPawn*                    AffectedPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    EncompassingVerb                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageReceptorBodyPawn_C*   K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnimNotify_HitReactionThreshold_C::OnVerbWindowEnd(class AQtnPawn* AffectedPawn, class UQtnVerb* EncompassingVerb, bool Interrupted, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_HitReactionThreshold_C", "OnVerbWindowEnd");

	Params::UAnimNotify_HitReactionThreshold_C_OnVerbWindowEnd_Params Parms{};

	Parms.AffectedPawn = AffectedPawn;
	Parms.EncompassingVerb = EncompassingVerb;
	Parms.Interrupted = Interrupted;
	Parms.CallFunc_GetDamageReceptor_ReturnValue = CallFunc_GetDamageReceptor_ReturnValue;
	Parms.K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn = K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimNotify_HitReactionThreshold.AnimNotify_HitReactionThreshold_C.OnVerbWindowBegin
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnPawn*                    AffectedPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    EncompassingVerb                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TotalDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageReceptorBodyPawn_C*   K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnimNotify_HitReactionThreshold_C::OnVerbWindowBegin(class AQtnPawn* AffectedPawn, class UQtnVerb* EncompassingVerb, float TotalDuration, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_HitReactionThreshold_C", "OnVerbWindowBegin");

	Params::UAnimNotify_HitReactionThreshold_C_OnVerbWindowBegin_Params Parms{};

	Parms.AffectedPawn = AffectedPawn;
	Parms.EncompassingVerb = EncompassingVerb;
	Parms.TotalDuration = TotalDuration;
	Parms.CallFunc_GetDamageReceptor_ReturnValue = CallFunc_GetDamageReceptor_ReturnValue;
	Parms.K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn = K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


