#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyDamageReactionVomit.BodyDamageReactionVomit_C
// (None)

class UClass* UBodyDamageReactionVomit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyDamageReactionVomit_C");

	return Clss;
}


// BodyDamageReactionVomit_C BodyDamageReactionVomit.Default__BodyDamageReactionVomit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBodyDamageReactionVomit_C* UBodyDamageReactionVomit_C::GetDefaultObj()
{
	static class UBodyDamageReactionVomit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodyDamageReactionVomit_C*>(UBodyDamageReactionVomit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyDamageReactionVomit.BodyDamageReactionVomit_C.HandleOtherDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnDamageInfo              OtherDamageInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         OtherReactInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               AllowNewReaction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionVomit_C::HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionVomit_C", "HandleOtherDamage");

	Params::UBodyDamageReactionVomit_C_HandleOtherDamage_Params Parms{};

	Parms.OtherDamageInfo = OtherDamageInfo;
	Parms.OtherReactInfo = OtherReactInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowNewReaction != nullptr)
		*AllowNewReaction = Parms.AllowNewReaction;

}


// Function BodyDamageReactionVomit.BodyDamageReactionVomit_C.OnEnterReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionVomit_C::OnEnterReaction(bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionVomit_C", "OnEnterReaction");

	Params::UBodyDamageReactionVomit_C_OnEnterReaction_Params Parms{};

	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionVomit.BodyDamageReactionVomit_C.OnAnimNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnAnimNotify*              AnimNotify                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBodyDamageReactionVomit_C::OnAnimNotify(class UQtnAnimNotify* AnimNotify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionVomit_C", "OnAnimNotify");

	Params::UBodyDamageReactionVomit_C_OnAnimNotify_Params Parms{};

	Parms.AnimNotify = AnimNotify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionVomit.BodyDamageReactionVomit_C.OnExitReaction
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionVomit_C::OnExitReaction(bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionVomit_C", "OnExitReaction");

	Params::UBodyDamageReactionVomit_C_OnExitReaction_Params Parms{};

	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionVomit.BodyDamageReactionVomit_C.OnReactionMontageDone
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBodyDamageReactionVomit_C::OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionVomit_C", "OnReactionMontageDone");

	Params::UBodyDamageReactionVomit_C_OnReactionMontageDone_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyDamageReactionVomit.BodyDamageReactionVomit_C.ExecuteUbergraph_BodyDamageReactionVomit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHitReactionAnimationResultsTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EHitReactionAnimationResultsTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageReceptorBodyPawn_C*   K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffect_Vomit_C*       CallFunc_GetStatusEffect_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasStatusEffect_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAnimNotify*              K2Node_Event_animNotify                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify_Custom1_C*       K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_3                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_4                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_5                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_MakeStruct_QtnDamageInfo                                  (ContainsInstancedReference)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_6                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffect_Vomit_C*       CallFunc_GetStatusEffect_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_7                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStatusEffect_Vomit_C*       CallFunc_GetStatusEffect_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_Event_montage                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_8                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_9                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffect_Vomit_C*       CallFunc_GetStatusEffect_ReturnValue_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasStatusEffect_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHitReactionAnimationResultsK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFullBodyStateHitReaction*CallFunc_GetOwningHitReaction_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_10                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_PlayReactionMontage_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_11                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_12                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_MakeStruct_QtnDamageInfo_1                                (ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_13                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCameraComponent*         CallFunc_GetQtnCameraComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVomitCam_C*                 CallFunc_RequestCameraBehavior_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_14                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCameraComponent*         CallFunc_GetQtnCameraComponent_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_15                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_16                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_17                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetVictimBody_ReturnValue_18                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnDamageInfo              CallFunc_GetDamageInfo_ReturnValue                               (ConstParm, ContainsInstancedReference)

void UBodyDamageReactionVomit_C::ExecuteUbergraph_BodyDamageReactionVomit(int32 EntryPoint, enum class EHitReactionAnimationResults Temp_byte_Variable, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, enum class EHitReactionAnimationResults Temp_byte_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue, bool K2Node_Event_isServer_1, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_1, class UStatusEffect_Vomit_C* CallFunc_GetStatusEffect_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UQtnAnimNotify* K2Node_Event_animNotify, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_5, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, bool Temp_bool_Variable_1, bool K2Node_Event_isServer, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_6, class UStatusEffect_Vomit_C* CallFunc_GetStatusEffect_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_2, class UStatusEffect_Vomit_C* CallFunc_GetStatusEffect_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_8, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_9, class UStatusEffect_Vomit_C* CallFunc_GetStatusEffect_ReturnValue_3, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetAttributeValue_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue_1, enum class EHitReactionAnimationResults K2Node_Select_Default, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_10, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_PlayReactionMontage_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_11, const class FString& K2Node_Select_Default_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_12, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo_1, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_13, float Temp_float_Variable, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class UVomitCam_C* CallFunc_RequestCameraBehavior_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_14, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_15, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_16, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_17, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_18, bool CallFunc_IsLocallyControlledPlayer_ReturnValue_1, bool Temp_bool_IsClosed_Variable, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyDamageReactionVomit_C", "ExecuteUbergraph_BodyDamageReactionVomit");

	Params::UBodyDamageReactionVomit_C_ExecuteUbergraph_BodyDamageReactionVomit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue = CallFunc_GetOwningHitReaction_ReturnValue;
	Parms.CallFunc_GetVictimBody_ReturnValue = CallFunc_GetVictimBody_ReturnValue;
	Parms.K2Node_Event_isServer_1 = K2Node_Event_isServer_1;
	Parms.CallFunc_GetDamageReceptor_ReturnValue = CallFunc_GetDamageReceptor_ReturnValue;
	Parms.K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn = K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetVictimBody_ReturnValue_1 = CallFunc_GetVictimBody_ReturnValue_1;
	Parms.CallFunc_GetStatusEffect_ReturnValue = CallFunc_GetStatusEffect_ReturnValue;
	Parms.CallFunc_HasStatusEffect_ReturnValue = CallFunc_HasStatusEffect_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVictimBody_ReturnValue_2 = CallFunc_GetVictimBody_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_animNotify = K2Node_Event_animNotify;
	Parms.K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1 = K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetVictimBody_ReturnValue_3 = CallFunc_GetVictimBody_ReturnValue_3;
	Parms.CallFunc_GetVictimBody_ReturnValue_4 = CallFunc_GetVictimBody_ReturnValue_4;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetVictimBody_ReturnValue_5 = CallFunc_GetVictimBody_ReturnValue_5;
	Parms.K2Node_MakeStruct_QtnDamageInfo = K2Node_MakeStruct_QtnDamageInfo;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.CallFunc_GetVictimBody_ReturnValue_6 = CallFunc_GetVictimBody_ReturnValue_6;
	Parms.CallFunc_GetStatusEffect_ReturnValue_1 = CallFunc_GetStatusEffect_ReturnValue_1;
	Parms.CallFunc_GetVictimBody_ReturnValue_7 = CallFunc_GetVictimBody_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetStatusEffect_ReturnValue_2 = CallFunc_GetStatusEffect_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_montage = K2Node_Event_montage;
	Parms.K2Node_Event_interrupted = K2Node_Event_interrupted;
	Parms.CallFunc_GetVictimBody_ReturnValue_8 = CallFunc_GetVictimBody_ReturnValue_8;
	Parms.CallFunc_GetVictimBody_ReturnValue_9 = CallFunc_GetVictimBody_ReturnValue_9;
	Parms.CallFunc_GetStatusEffect_ReturnValue_3 = CallFunc_GetStatusEffect_ReturnValue_3;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetAttributeValue_ReturnValue = CallFunc_GetAttributeValue_ReturnValue;
	Parms.CallFunc_HasStatusEffect_ReturnValue_1 = CallFunc_HasStatusEffect_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetOwningHitReaction_ReturnValue_1 = CallFunc_GetOwningHitReaction_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetVictimBody_ReturnValue_10 = CallFunc_GetVictimBody_ReturnValue_10;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_PlayReactionMontage_ReturnValue = CallFunc_PlayReactionMontage_ReturnValue;
	Parms.CallFunc_GetVictimBody_ReturnValue_11 = CallFunc_GetVictimBody_ReturnValue_11;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetVictimBody_ReturnValue_12 = CallFunc_GetVictimBody_ReturnValue_12;
	Parms.K2Node_MakeStruct_QtnDamageInfo_1 = K2Node_MakeStruct_QtnDamageInfo_1;
	Parms.CallFunc_GetVictimBody_ReturnValue_13 = CallFunc_GetVictimBody_ReturnValue_13;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetQtnCameraComponent_ReturnValue = CallFunc_GetQtnCameraComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_RequestCameraBehavior_ReturnValue = CallFunc_RequestCameraBehavior_ReturnValue;
	Parms.CallFunc_GetVictimBody_ReturnValue_14 = CallFunc_GetVictimBody_ReturnValue_14;
	Parms.CallFunc_GetQtnCameraComponent_ReturnValue_1 = CallFunc_GetQtnCameraComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetVictimBody_ReturnValue_15 = CallFunc_GetVictimBody_ReturnValue_15;
	Parms.CallFunc_GetVictimBody_ReturnValue_16 = CallFunc_GetVictimBody_ReturnValue_16;
	Parms.CallFunc_GetVictimBody_ReturnValue_17 = CallFunc_GetVictimBody_ReturnValue_17;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_GetVictimBody_ReturnValue_18 = CallFunc_GetVictimBody_ReturnValue_18;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue_1 = CallFunc_IsLocallyControlledPlayer_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetDamageInfo_ReturnValue = CallFunc_GetDamageInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


