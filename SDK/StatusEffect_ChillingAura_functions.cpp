#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StatusEffect_ChillingAura.StatusEffect_ChillingAura_C
// (None)

class UClass* UStatusEffect_ChillingAura_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusEffect_ChillingAura_C");

	return Clss;
}


// StatusEffect_ChillingAura_C StatusEffect_ChillingAura.Default__StatusEffect_ChillingAura_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusEffect_ChillingAura_C* UStatusEffect_ChillingAura_C::GetDefaultObj()
{
	static class UStatusEffect_ChillingAura_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusEffect_ChillingAura_C*>(UStatusEffect_ChillingAura_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatusEffect_ChillingAura.StatusEffect_ChillingAura_C.UnRegister Aura
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseAuraComponent_C*        Aura_to_Remove                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseAuraComponent_C*        Temp_object_Variable                                             (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatusEffect_ChillingAura_C::UnRegister_Aura(class UBaseAuraComponent_C* Aura_to_Remove, class UBaseAuraComponent_C* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_ChillingAura_C", "UnRegister Aura");

	Params::UStatusEffect_ChillingAura_C_UnRegister_Aura_Params Parms{};

	Parms.Aura_to_Remove = Aura_to_Remove;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_ChillingAura.StatusEffect_ChillingAura_C.Register Aura
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBaseAuraComponent_C*        Aura_to_Register                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseAuraComponent_C*        Temp_object_Variable                                             (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_ChillingAura_C::Register_Aura(class UBaseAuraComponent_C* Aura_to_Register, class UBaseAuraComponent_C* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_ChillingAura_C", "Register Aura");

	Params::UStatusEffect_ChillingAura_C_Register_Aura_Params Parms{};

	Parms.Aura_to_Register = Aura_to_Register;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_ChillingAura.StatusEffect_ChillingAura_C.OnStatusEffectEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      AffectedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsActorBeingDestroyed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatusEffect_ChillingAura_C::OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_ChillingAura_C", "OnStatusEffectEnd");

	Params::UStatusEffect_ChillingAura_C_OnStatusEffectEnd_Params Parms{};

	Parms.AffectedActor = AffectedActor;
	Parms.Instigator = Instigator;
	Parms.IsActorBeingDestroyed = IsActorBeingDestroyed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_ChillingAura.StatusEffect_ChillingAura_C.StartFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatusEffect_ChillingAura_C::StartFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_ChillingAura_C", "StartFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatusEffect_ChillingAura.StatusEffect_ChillingAura_C.OnStatusEffectBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      AffectedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_ChillingAura_C::OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_ChillingAura_C", "OnStatusEffectBegin");

	Params::UStatusEffect_ChillingAura_C_OnStatusEffectBegin_Params Parms{};

	Parms.AffectedActor = AffectedActor;
	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_ChillingAura.StatusEffect_ChillingAura_C.OnStatusEffectTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_ChillingAura_C::OnStatusEffectTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_ChillingAura_C", "OnStatusEffectTick");

	Params::UStatusEffect_ChillingAura_C_OnStatusEffectTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_ChillingAura.StatusEffect_ChillingAura_C.ExecuteUbergraph_StatusEffect_ChillingAura
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       CallFunc_GetBodyAliveness_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetAffectedBody_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_GetNiagaraComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnBodyAliveness       CallFunc_GetBodyAliveness_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_affectedActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_instigator                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBaseAuraComponent_C*        CallFunc_Add_Aura_Component_NewAuraComponent                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChillingAuraComponent_C*    K2Node_DynamicCast_AsChilling_Aura_Component                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_affectedActor_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_instigator_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isActorBeingDestroyed                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base_3                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatusEffect_ChillingAura_C::ExecuteUbergraph_StatusEffect_ChillingAura(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_Abs_ReturnValue, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_1, bool K2Node_DynamicCast_bSuccess_1, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, float K2Node_Event_DeltaSeconds, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UBaseAuraComponent_C* CallFunc_Add_Aura_Component_NewAuraComponent, class UChillingAuraComponent_C* K2Node_DynamicCast_AsChilling_Aura_Component, bool K2Node_DynamicCast_bSuccess_3, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, bool K2Node_Event_isActorBeingDestroyed, bool CallFunc_IsServer_ReturnValue_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_ChillingAura_C", "ExecuteUbergraph_StatusEffect_ChillingAura");

	Params::UStatusEffect_ChillingAura_C_ExecuteUbergraph_StatusEffect_ChillingAura_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_GetBodyAliveness_ReturnValue = CallFunc_GetBodyAliveness_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAffectedBody_ReturnValue = CallFunc_GetAffectedBody_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_1 = CallFunc_BP_BeginEffect_ReturnValue_1;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_2 = CallFunc_BP_BeginEffect_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetNiagaraComponent_ReturnValue = CallFunc_GetNiagaraComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base_1 = K2Node_DynamicCast_AsBody_Pawn_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBodyAliveness_ReturnValue_1 = CallFunc_GetBodyAliveness_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Event_affectedActor = K2Node_Event_affectedActor;
	Parms.K2Node_Event_instigator = K2Node_Event_instigator;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base_2 = K2Node_DynamicCast_AsBody_Pawn_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_Aura_Component_NewAuraComponent = CallFunc_Add_Aura_Component_NewAuraComponent;
	Parms.K2Node_DynamicCast_AsChilling_Aura_Component = K2Node_DynamicCast_AsChilling_Aura_Component;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_Event_affectedActor_1 = K2Node_Event_affectedActor_1;
	Parms.K2Node_Event_instigator_1 = K2Node_Event_instigator_1;
	Parms.K2Node_Event_isActorBeingDestroyed = K2Node_Event_isActorBeingDestroyed;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base_3 = K2Node_DynamicCast_AsBody_Pawn_Base_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


