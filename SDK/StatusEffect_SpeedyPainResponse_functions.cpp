#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StatusEffect_SpeedyPainResponse.StatusEffect_SpeedyPainResponse_C
// (None)

class UClass* UStatusEffect_SpeedyPainResponse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusEffect_SpeedyPainResponse_C");

	return Clss;
}


// StatusEffect_SpeedyPainResponse_C StatusEffect_SpeedyPainResponse.Default__StatusEffect_SpeedyPainResponse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusEffect_SpeedyPainResponse_C* UStatusEffect_SpeedyPainResponse_C::GetDefaultObj()
{
	static class UStatusEffect_SpeedyPainResponse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusEffect_SpeedyPainResponse_C*>(UStatusEffect_SpeedyPainResponse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatusEffect_SpeedyPainResponse.StatusEffect_SpeedyPainResponse_C.Get Speed Multiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnUpgradeSlot*             Upgrade_To_Check                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Speed_Multiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUpgrade*                 CallFunc_GetCurrentSlottedUpgrade_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUpgrade_Bodypawn_SpeedyPainResponse_C*K2Node_DynamicCast_AsUpgrade_Bodypawn_Speedy_Pain_Response       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_SpeedyPainResponse_C::Get_Speed_Multiplier(class UQtnUpgradeSlot* Upgrade_To_Check, float* Speed_Multiplier, class UQtnUpgrade* CallFunc_GetCurrentSlottedUpgrade_ReturnValue, class UUpgrade_Bodypawn_SpeedyPainResponse_C* K2Node_DynamicCast_AsUpgrade_Bodypawn_Speedy_Pain_Response, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueOfUpgrade_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_SpeedyPainResponse_C", "Get Speed Multiplier");

	Params::UStatusEffect_SpeedyPainResponse_C_Get_Speed_Multiplier_Params Parms{};

	Parms.Upgrade_To_Check = Upgrade_To_Check;
	Parms.CallFunc_GetCurrentSlottedUpgrade_ReturnValue = CallFunc_GetCurrentSlottedUpgrade_ReturnValue;
	Parms.K2Node_DynamicCast_AsUpgrade_Bodypawn_Speedy_Pain_Response = K2Node_DynamicCast_AsUpgrade_Bodypawn_Speedy_Pain_Response;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue = CallFunc_GetValueOfUpgrade_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Speed_Multiplier != nullptr)
		*Speed_Multiplier = Parms.Speed_Multiplier;

}


// Function StatusEffect_SpeedyPainResponse.StatusEffect_SpeedyPainResponse_C.Play Effects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_SpeedyPainResponse_C::Play_Effects(class AActor* Target_Actor, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_SpeedyPainResponse_C", "Play Effects");

	Params::UStatusEffect_SpeedyPainResponse_C_Play_Effects_Params Parms{};

	Parms.Target_Actor = Target_Actor;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_SpeedyPainResponse.StatusEffect_SpeedyPainResponse_C.OnStatusEffectBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      AffectedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_SpeedyPainResponse_C::OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_SpeedyPainResponse_C", "OnStatusEffectBegin");

	Params::UStatusEffect_SpeedyPainResponse_C_OnStatusEffectBegin_Params Parms{};

	Parms.AffectedActor = AffectedActor;
	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_SpeedyPainResponse.StatusEffect_SpeedyPainResponse_C.OnStatusEffectEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      AffectedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsActorBeingDestroyed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatusEffect_SpeedyPainResponse_C::OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_SpeedyPainResponse_C", "OnStatusEffectEnd");

	Params::UStatusEffect_SpeedyPainResponse_C_OnStatusEffectEnd_Params Parms{};

	Parms.AffectedActor = AffectedActor;
	Parms.Instigator = Instigator;
	Parms.IsActorBeingDestroyed = IsActorBeingDestroyed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusEffect_SpeedyPainResponse.StatusEffect_SpeedyPainResponse_C.ExecuteUbergraph_StatusEffect_SpeedyPainResponse
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnMovementComponent*       CallFunc_GetQtnMovementComponent_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMovementComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_affectedActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_instigator                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isActorBeingDestroyed                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_affectedActor_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_instigator_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnUpgradeSlot*             CallFunc_FindUpgrade_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Speed_Multiplier_Speed_Multiplier                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfUpgrade_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusEffect_SpeedyPainResponse_C::ExecuteUbergraph_StatusEffect_SpeedyPainResponse(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, class UQtnMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, float CallFunc_Get_Speed_Multiplier_Speed_Multiplier, float CallFunc_GetValueOfUpgrade_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusEffect_SpeedyPainResponse_C", "ExecuteUbergraph_StatusEffect_SpeedyPainResponse");

	Params::UStatusEffect_SpeedyPainResponse_C_ExecuteUbergraph_StatusEffect_SpeedyPainResponse_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetQtnMovementComponent_ReturnValue = CallFunc_GetQtnMovementComponent_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_Event_affectedActor = K2Node_Event_affectedActor;
	Parms.K2Node_Event_instigator = K2Node_Event_instigator;
	Parms.K2Node_Event_isActorBeingDestroyed = K2Node_Event_isActorBeingDestroyed;
	Parms.K2Node_Event_affectedActor_1 = K2Node_Event_affectedActor_1;
	Parms.K2Node_Event_instigator_1 = K2Node_Event_instigator_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindUpgrade_ReturnValue = CallFunc_FindUpgrade_ReturnValue;
	Parms.CallFunc_Get_Speed_Multiplier_Speed_Multiplier = CallFunc_Get_Speed_Multiplier_Speed_Multiplier;
	Parms.CallFunc_GetValueOfUpgrade_ReturnValue = CallFunc_GetValueOfUpgrade_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


