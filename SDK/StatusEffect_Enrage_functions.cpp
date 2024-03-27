#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StatusEffect_Enrage.StatusEffect_Enrage_C
// (None)

class UClass* UStatusEffect_Enrage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusEffect_Enrage_C");

	return Clss;
}


// StatusEffect_Enrage_C StatusEffect_Enrage.Default__StatusEffect_Enrage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusEffect_Enrage_C* UStatusEffect_Enrage_C::GetDefaultObj()
{
	static class UStatusEffect_Enrage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusEffect_Enrage_C*>(UStatusEffect_Enrage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatusEffect_Enrage.StatusEffect_Enrage_C.GetContactDamageAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      VictimActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TotalDamage                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BaseDamage                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Enrage_C::GetContactDamageAmount(class AActor*& VictimActor, float* TotalDamage, float* BaseDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_Enrage_C", "GetContactDamageAmount");

	Params::UStatusEffect_Enrage_C_GetContactDamageAmount_Params Parms{};

	Parms.VictimActor = VictimActor;

	UObject::ProcessEvent(Func, &Parms);

	if (TotalDamage != nullptr)
		*TotalDamage = Parms.TotalDamage;

	if (BaseDamage != nullptr)
		*BaseDamage = Parms.BaseDamage;

}


// Function StatusEffect_Enrage.StatusEffect_Enrage_C.Deal Contact Damage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExceedingMaxSpeed_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_4                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GatherActorsWithinRadius_otherActors                    (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetContactDamageAmount_totalDamage                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetContactDamageAmount_baseDamage                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageReceptorComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlly_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDamageReceptorBodyPawn_C*   K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_5                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_MakeStruct_QtnDamageInfo                                  (ContainsInstancedReference)

void UStatusEffect_Enrage_C::Deal_Contact_Damage(float A, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, bool CallFunc_IsPlayerControlled_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsExceedingMaxSpeed_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_4, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AActor*>& CallFunc_GatherActorsWithinRadius_otherActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetContactDamageAmount_totalDamage, float CallFunc_GetContactDamageAmount_baseDamage, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UQtnDamageReceptorComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsAlly_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_Enrage_C", "Deal Contact Damage");

	Params::UStatusEffect_Enrage_C_Deal_Contact_Damage_Params Parms{};

	Parms.A = A;
	Parms.CallFunc_GetAffectedBody_ReturnValue = CallFunc_GetAffectedBody_ReturnValue;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAffectedBody_ReturnValue_1 = CallFunc_GetAffectedBody_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAffectedBody_ReturnValue_2 = CallFunc_GetAffectedBody_ReturnValue_2;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsExceedingMaxSpeed_ReturnValue = CallFunc_IsExceedingMaxSpeed_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAffectedBody_ReturnValue_3 = CallFunc_GetAffectedBody_ReturnValue_3;
	Parms.CallFunc_GetAffectedBody_ReturnValue_4 = CallFunc_GetAffectedBody_ReturnValue_4;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GatherActorsWithinRadius_otherActors = CallFunc_GatherActorsWithinRadius_otherActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetContactDamageAmount_totalDamage = CallFunc_GetContactDamageAmount_totalDamage;
	Parms.CallFunc_GetContactDamageAmount_baseDamage = CallFunc_GetContactDamageAmount_baseDamage;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsAlly_ReturnValue = CallFunc_IsAlly_ReturnValue;
	Parms.K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn = K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetAffectedBody_ReturnValue_5 = CallFunc_GetAffectedBody_ReturnValue_5;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.K2Node_MakeStruct_QtnDamageInfo = K2Node_MakeStruct_QtnDamageInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_Enrage.StatusEffect_Enrage_C.OnStatusEffectTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Enrage_C::OnStatusEffectTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_Enrage_C", "OnStatusEffectTick");

	Params::UStatusEffect_Enrage_C_OnStatusEffectTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_Enrage.StatusEffect_Enrage_C.Footstep
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPhysicalSurface        PhysicalSurface                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactLocation                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FootstepLoudness                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Enrage_C::Footstep(enum class EPhysicalSurface PhysicalSurface, struct FVector& ImpactLocation, struct FVector& ImpactNormal, float FootstepLoudness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_Enrage_C", "Footstep");

	Params::UStatusEffect_Enrage_C_Footstep_Params Parms{};

	Parms.PhysicalSurface = PhysicalSurface;
	Parms.ImpactLocation = ImpactLocation;
	Parms.ImpactNormal = ImpactNormal;
	Parms.FootstepLoudness = FootstepLoudness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_Enrage.StatusEffect_Enrage_C.Landed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UStatusEffect_Enrage_C::Landed(class AQtnPawn* Pawn, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_Enrage_C", "Landed");

	Params::UStatusEffect_Enrage_C_Landed_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_Enrage.StatusEffect_Enrage_C.OnStatusEffectEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      AffectedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsActorBeingDestroyed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatusEffect_Enrage_C::OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_Enrage_C", "OnStatusEffectEnd");

	Params::UStatusEffect_Enrage_C_OnStatusEffectEnd_Params Parms{};

	Parms.AffectedActor = AffectedActor;
	Parms.Instigator = Instigator;
	Parms.IsActorBeingDestroyed = IsActorBeingDestroyed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_Enrage.StatusEffect_Enrage_C.Hit FX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Enrage_C::Hit_FX(class AActor* Target_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_Enrage_C", "Hit FX");

	Params::UStatusEffect_Enrage_C_Hit_FX_Params Parms{};

	Parms.Target_Actor = Target_Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_Enrage.StatusEffect_Enrage_C.OnStatusEffectBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      AffectedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Enrage_C::OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_Enrage_C", "OnStatusEffectBegin");

	Params::UStatusEffect_Enrage_C_OnStatusEffectBegin_Params Parms{};

	Parms.AffectedActor = AffectedActor;
	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_Enrage.StatusEffect_Enrage_C.ExecuteUbergraph_StatusEffect_Enrage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRangedFloat             K2Node_MakeStruct_QtnRangedFloat                                 (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        K2Node_CustomEvent_physicalSurface                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_impactLocation                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_impactNormal                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_footstepLoudness                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_CustomEvent_pawn                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hit                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      K2Node_Event_affectedActor_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_instigator_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isActorBeingDestroyed                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_Target_Actor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_4                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageReceptorBodyPawn_C*   K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_5                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageReceptorBodyPawn_C*   K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue_6                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCameraShakeBase*            CallFunc_StartCameraShake_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_affectedActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_instigator                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_Enrage_C::ExecuteUbergraph_StatusEffect_Enrage(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, enum class EPhysicalSurface K2Node_CustomEvent_physicalSurface, const struct FVector& K2Node_CustomEvent_impactLocation, const struct FVector& K2Node_CustomEvent_impactNormal, float K2Node_CustomEvent_footstepLoudness, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_3, class AQtnPawn* K2Node_CustomEvent_pawn, const struct FHitResult& K2Node_CustomEvent_Hit, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, bool K2Node_Event_isActorBeingDestroyed, class AActor* K2Node_CustomEvent_Target_Actor, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_4, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_5, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue_1, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_Enrage_C", "ExecuteUbergraph_StatusEffect_Enrage");

	Params::UStatusEffect_Enrage_C_ExecuteUbergraph_StatusEffect_Enrage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_MakeStruct_QtnRangedFloat = K2Node_MakeStruct_QtnRangedFloat;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAffectedBody_ReturnValue = CallFunc_GetAffectedBody_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_physicalSurface = K2Node_CustomEvent_physicalSurface;
	Parms.K2Node_CustomEvent_impactLocation = K2Node_CustomEvent_impactLocation;
	Parms.K2Node_CustomEvent_impactNormal = K2Node_CustomEvent_impactNormal;
	Parms.K2Node_CustomEvent_footstepLoudness = K2Node_CustomEvent_footstepLoudness;
	Parms.CallFunc_GetAffectedBody_ReturnValue_1 = CallFunc_GetAffectedBody_ReturnValue_1;
	Parms.CallFunc_GetAffectedBody_ReturnValue_2 = CallFunc_GetAffectedBody_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetAffectedBody_ReturnValue_3 = CallFunc_GetAffectedBody_ReturnValue_3;
	Parms.K2Node_CustomEvent_pawn = K2Node_CustomEvent_pawn;
	Parms.K2Node_CustomEvent_Hit = K2Node_CustomEvent_Hit;
	Parms.K2Node_Event_affectedActor_1 = K2Node_Event_affectedActor_1;
	Parms.K2Node_Event_instigator_1 = K2Node_Event_instigator_1;
	Parms.K2Node_Event_isActorBeingDestroyed = K2Node_Event_isActorBeingDestroyed;
	Parms.K2Node_CustomEvent_Target_Actor = K2Node_CustomEvent_Target_Actor;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetAffectedBody_ReturnValue_4 = CallFunc_GetAffectedBody_ReturnValue_4;
	Parms.CallFunc_GetDamageReceptor_ReturnValue = CallFunc_GetDamageReceptor_ReturnValue;
	Parms.K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn = K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAffectedBody_ReturnValue_5 = CallFunc_GetAffectedBody_ReturnValue_5;
	Parms.CallFunc_GetDamageReceptor_ReturnValue_1 = CallFunc_GetDamageReceptor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn_1 = K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.CallFunc_GetAffectedBody_ReturnValue_6 = CallFunc_GetAffectedBody_ReturnValue_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_StartCameraShake_ReturnValue = CallFunc_StartCameraShake_ReturnValue;
	Parms.K2Node_Event_affectedActor = K2Node_Event_affectedActor;
	Parms.K2Node_Event_instigator = K2Node_Event_instigator;

	UObject::ProcessEvent(Func, &Parms);

}

}


