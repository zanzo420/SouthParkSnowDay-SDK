#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyDamageReaction_Jockey.BodyDamageReaction_Jockey_C
// (None)

class UClass* UBodyDamageReaction_Jockey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyDamageReaction_Jockey_C");

	return Clss;
}


// BodyDamageReaction_Jockey_C BodyDamageReaction_Jockey.Default__BodyDamageReaction_Jockey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBodyDamageReaction_Jockey_C* UBodyDamageReaction_Jockey_C::GetDefaultObj()
{
	static class UBodyDamageReaction_Jockey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodyDamageReaction_Jockey_C*>(UBodyDamageReaction_Jockey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyDamageReaction_Jockey.BodyDamageReaction_Jockey_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ConfusionArrowTail                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ConfusionArrowHead                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UBodyDamageReaction_Jockey_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const struct FVector& ConfusionArrowTail, const struct FVector& ConfusionArrowHead, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Jockey_C", "OnDebugDisplay");

	Params::UBodyDamageReaction_Jockey_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.ConfusionArrowTail = ConfusionArrowTail;
	Parms.ConfusionArrowHead = ConfusionArrowHead;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetVictimPawn_ReturnValue = CallFunc_GetVictimPawn_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReaction_Jockey.BodyDamageReaction_Jockey_C.TickConfusionMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReaction_Jockey_C::TickConfusionMovement(float DeltaSeconds, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Jockey_C", "TickConfusionMovement");

	Params::UBodyDamageReaction_Jockey_C_TickConfusionMovement_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReaction_Jockey.BodyDamageReaction_Jockey_C.ShouldContinueBeingJockeyed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UQtnVerb*                    SourceVerb                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Yes                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAssassin_JockeyVerb_C*      K2Node_DynamicCast_AsAssassin_Jockey_Verb                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVerbActive_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReaction_Jockey_C::ShouldContinueBeingJockeyed(class UQtnVerb* SourceVerb, bool* Yes, class UAssassin_JockeyVerb_C* K2Node_DynamicCast_AsAssassin_Jockey_Verb, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVerbActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Jockey_C", "ShouldContinueBeingJockeyed");

	Params::UBodyDamageReaction_Jockey_C_ShouldContinueBeingJockeyed_Params Parms{};

	Parms.SourceVerb = SourceVerb;
	Parms.K2Node_DynamicCast_AsAssassin_Jockey_Verb = K2Node_DynamicCast_AsAssassin_Jockey_Verb;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsVerbActive_ReturnValue = CallFunc_IsVerbActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Yes != nullptr)
		*Yes = Parms.Yes;

}


// Function BodyDamageReaction_Jockey.BodyDamageReaction_Jockey_C.HandleOtherDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              OtherDamageInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         OtherReactInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               AllowNewReaction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReaction_Jockey_C::HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Jockey_C", "HandleOtherDamage");

	Params::UBodyDamageReaction_Jockey_C_HandleOtherDamage_Params Parms{};

	Parms.OtherDamageInfo = OtherDamageInfo;
	Parms.OtherReactInfo = OtherReactInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowNewReaction != nullptr)
		*AllowNewReaction = Parms.AllowNewReaction;

}


// Function BodyDamageReaction_Jockey.BodyDamageReaction_Jockey_C.AlterLocomotion
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     OriginalMovementIntention                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     AlteredMovementIntention                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SpeedScale                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 LocoBlendOverride                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReaction_Jockey_C::AlterLocomotion(struct FVector& OriginalMovementIntention, struct FVector* AlteredMovementIntention, float* SpeedScale, class UBlendSpace** LocoBlendOverride, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Jockey_C", "AlterLocomotion");

	Params::UBodyDamageReaction_Jockey_C_AlterLocomotion_Params Parms{};

	Parms.OriginalMovementIntention = OriginalMovementIntention;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AlteredMovementIntention != nullptr)
		*AlteredMovementIntention = std::move(Parms.AlteredMovementIntention);

	if (SpeedScale != nullptr)
		*SpeedScale = Parms.SpeedScale;

	if (LocoBlendOverride != nullptr)
		*LocoBlendOverride = Parms.LocoBlendOverride;

}


// Function BodyDamageReaction_Jockey.BodyDamageReaction_Jockey_C.OnEnterReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReaction_Jockey_C::OnEnterReaction(bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Jockey_C", "OnEnterReaction");

	Params::UBodyDamageReaction_Jockey_C_OnEnterReaction_Params Parms{};

	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReaction_Jockey.BodyDamageReaction_Jockey_C.OnTickReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReaction_Jockey_C::OnTickReaction(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Jockey_C", "OnTickReaction");

	Params::UBodyDamageReaction_Jockey_C_OnTickReaction_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReaction_Jockey.BodyDamageReaction_Jockey_C.OnReactionMontageDone
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReaction_Jockey_C::OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Jockey_C", "OnReactionMontageDone");

	Params::UBodyDamageReaction_Jockey_C_OnReactionMontageDone_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReaction_Jockey.BodyDamageReaction_Jockey_C.OnExitReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReaction_Jockey_C::OnExitReaction(bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Jockey_C", "OnExitReaction");

	Params::UBodyDamageReaction_Jockey_C_OnExitReaction_Params Parms{};

	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReaction_Jockey.BodyDamageReaction_Jockey_C.ExecuteUbergraph_BodyDamageReaction_Jockey
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              CallFunc_GetDamageInfo_ReturnValue                               (ConstParm, ContainsInstancedReference)
// float                              CallFunc_PlayReactionMontage_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldContinueBeingJockeyed_yes                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_montage                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetButtonMashRatio_isFull                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetButtonMashRatio_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetVictimPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetDamagingCulprit_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetButtonMashRatio_isFull_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetButtonMashRatio_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue_3                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayReactionMontage_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReaction_Jockey_C::ExecuteUbergraph_BodyDamageReaction_Jockey(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_isServer_1, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, float CallFunc_PlayReactionMontage_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_ShouldContinueBeingJockeyed_yes, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_2, bool K2Node_Event_isServer, bool CallFunc_GetButtonMashRatio_isFull, float CallFunc_GetButtonMashRatio_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_GetButtonMashRatio_isFull_1, float CallFunc_GetButtonMashRatio_ReturnValue_1, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_3, float CallFunc_PlayReactionMontage_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReaction_Jockey_C", "ExecuteUbergraph_BodyDamageReaction_Jockey");

	Params::UBodyDamageReaction_Jockey_C_ExecuteUbergraph_BodyDamageReaction_Jockey_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_isServer_1 = K2Node_Event_isServer_1;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue = CallFunc_GetOwningHitReaction_ReturnValue;
	Parms.CallFunc_GetDamageInfo_ReturnValue = CallFunc_GetDamageInfo_ReturnValue;
	Parms.CallFunc_PlayReactionMontage_ReturnValue = CallFunc_PlayReactionMontage_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_ShouldContinueBeingJockeyed_yes = CallFunc_ShouldContinueBeingJockeyed_yes;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue_1 = CallFunc_GetOwningHitReaction_ReturnValue_1;
	Parms.K2Node_Event_montage = K2Node_Event_montage;
	Parms.K2Node_Event_interrupted = K2Node_Event_interrupted;
	Parms.CallFunc_GetVictimBody_ReturnValue = CallFunc_GetVictimBody_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue_2 = CallFunc_GetOwningHitReaction_ReturnValue_2;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.CallFunc_GetButtonMashRatio_isFull = CallFunc_GetButtonMashRatio_isFull;
	Parms.CallFunc_GetButtonMashRatio_ReturnValue = CallFunc_GetButtonMashRatio_ReturnValue;
	Parms.CallFunc_GetVictimPawn_ReturnValue = CallFunc_GetVictimPawn_ReturnValue;
	Parms.CallFunc_GetDamagingCulprit_ReturnValue = CallFunc_GetDamagingCulprit_ReturnValue;
	Parms.CallFunc_GetVerbComponent_ReturnValue = CallFunc_GetVerbComponent_ReturnValue;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_GetButtonMashRatio_isFull_1 = CallFunc_GetButtonMashRatio_isFull_1;
	Parms.CallFunc_GetButtonMashRatio_ReturnValue_1 = CallFunc_GetButtonMashRatio_ReturnValue_1;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue_3 = CallFunc_GetOwningHitReaction_ReturnValue_3;
	Parms.CallFunc_PlayReactionMontage_ReturnValue_1 = CallFunc_PlayReactionMontage_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


