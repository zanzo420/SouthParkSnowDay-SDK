#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChillingAuraComponent.ChillingAuraComponent_C
// (None)

class UClass* UChillingAuraComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChillingAuraComponent_C");

	return Clss;
}


// ChillingAuraComponent_C ChillingAuraComponent.Default__ChillingAuraComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChillingAuraComponent_C* UChillingAuraComponent_C::GetDefaultObj()
{
	static class UChillingAuraComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChillingAuraComponent_C*>(UChillingAuraComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChillingAuraComponent.ChillingAuraComponent_C.ApplyEffectToRelevantActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              LOCAL_RelevantActors                                             (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class AQtnPawn*>            CallFunc_GetPlayerAndAllyPawns_PlayerAndAllyPawns                (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChillingAuraComponent_C::ApplyEffectToRelevantActors(const TArray<class AActor*>& LOCAL_RelevantActors, TArray<class AQtnPawn*>& CallFunc_GetPlayerAndAllyPawns_PlayerAndAllyPawns, bool CallFunc_IsValid_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChillingAuraComponent_C", "ApplyEffectToRelevantActors");

	Params::UChillingAuraComponent_C_ApplyEffectToRelevantActors_Params Parms{};

	Parms.LOCAL_RelevantActors = LOCAL_RelevantActors;
	Parms.CallFunc_GetPlayerAndAllyPawns_PlayerAndAllyPawns = CallFunc_GetPlayerAndAllyPawns_PlayerAndAllyPawns;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChillingAuraComponent.ChillingAuraComponent_C.RemoveAuraEffect_ServerOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnBase_C*             VictimBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChillingAuraComponent_C::RemoveAuraEffect_ServerOnly(class ABodyPawnBase_C*& VictimBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChillingAuraComponent_C", "RemoveAuraEffect_ServerOnly");

	Params::UChillingAuraComponent_C_RemoveAuraEffect_ServerOnly_Params Parms{};

	Parms.VictimBody = VictimBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChillingAuraComponent.ChillingAuraComponent_C.ApplyAuraEffect_ServerOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnBase_C*             VictimBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChillingAuraComponent_C::ApplyAuraEffect_ServerOnly(class ABodyPawnBase_C*& VictimBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChillingAuraComponent_C", "ApplyAuraEffect_ServerOnly");

	Params::UChillingAuraComponent_C_ApplyAuraEffect_ServerOnly_Params Parms{};

	Parms.VictimBody = VictimBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChillingAuraComponent.ChillingAuraComponent_C.Setup_Aura_ServerOnly
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChillingAuraComponent_C::Setup_Aura_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChillingAuraComponent_C", "Setup_Aura_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChillingAuraComponent.ChillingAuraComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChillingAuraComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChillingAuraComponent_C", "ReceiveTick");

	Params::UChillingAuraComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChillingAuraComponent.ChillingAuraComponent_C.ApplyEffectToRelevantActors_ServerOnly
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChillingAuraComponent_C::ApplyEffectToRelevantActors_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChillingAuraComponent_C", "ApplyEffectToRelevantActors_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChillingAuraComponent.ChillingAuraComponent_C.ApplyEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChillingAuraComponent_C::ApplyEffect(class AQtnPawn* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChillingAuraComponent_C", "ApplyEffect");

	Params::UChillingAuraComponent_C_ApplyEffect_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChillingAuraComponent.ChillingAuraComponent_C.RemoveEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChillingAuraComponent_C::RemoveEffect(class AQtnPawn* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChillingAuraComponent_C", "RemoveEffect");

	Params::UChillingAuraComponent_C_RemoveEffect_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChillingAuraComponent.ChillingAuraComponent_C.ExecuteUbergraph_ChillingAuraComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Square_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAliveAndConscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    K2Node_Event_Target_1                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_Target                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChillingAuraComponent_C::ExecuteUbergraph_ChillingAuraComponent(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_Square_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, class AQtnPawn* K2Node_Event_Target_1, class AQtnPawn* K2Node_Event_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChillingAuraComponent_C", "ExecuteUbergraph_ChillingAuraComponent");

	Params::UChillingAuraComponent_C_ExecuteUbergraph_ChillingAuraComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Square_ReturnValue = CallFunc_Square_ReturnValue;
	Parms.CallFunc_IsAliveAndConscious_ReturnValue = CallFunc_IsAliveAndConscious_ReturnValue;
	Parms.K2Node_Event_Target_1 = K2Node_Event_Target_1;
	Parms.K2Node_Event_Target = K2Node_Event_Target;

	UObject::ProcessEvent(Func, &Parms);

}

}


