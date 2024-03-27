#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyCheatActivationVerbBase.EnemyCheatActivationVerbBase_C
// (None)

class UClass* UEnemyCheatActivationVerbBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyCheatActivationVerbBase_C");

	return Clss;
}


// EnemyCheatActivationVerbBase_C EnemyCheatActivationVerbBase.Default__EnemyCheatActivationVerbBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyCheatActivationVerbBase_C* UEnemyCheatActivationVerbBase_C::GetDefaultObj()
{
	static class UEnemyCheatActivationVerbBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyCheatActivationVerbBase_C*>(UEnemyCheatActivationVerbBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnemyCheatActivationVerbBase.EnemyCheatActivationVerbBase_C.ApplyBullshitToBodyPawn_ServerOnly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnGameState*               ActiveGameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                Bullshitter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnemyCheatActivationVerbBase_C::ApplyBullshitToBodyPawn_ServerOnly(class AQtnGameState* ActiveGameState, class AQtnBodyPawn* Bullshitter, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCheatActivationVerbBase_C", "ApplyBullshitToBodyPawn_ServerOnly");

	Params::UEnemyCheatActivationVerbBase_C_ApplyBullshitToBodyPawn_ServerOnly_Params Parms{};

	Parms.ActiveGameState = ActiveGameState;
	Parms.Bullshitter = Bullshitter;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCheatActivationVerbBase.EnemyCheatActivationVerbBase_C.GatherValidBullshitCamTargets_ServerOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnGameState*               ActiveGameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        ValidCamTargets                                                  (Parm, OutParm, ContainsInstancedReference)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnemyCheatActivationVerbBase_C::GatherValidBullshitCamTargets_ServerOnly(class AQtnGameState* ActiveGameState, TArray<class AQtnBodyPawn*>* ValidCamTargets, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCheatActivationVerbBase_C", "GatherValidBullshitCamTargets_ServerOnly");

	Params::UEnemyCheatActivationVerbBase_C_GatherValidBullshitCamTargets_ServerOnly_Params Parms{};

	Parms.ActiveGameState = ActiveGameState;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidCamTargets != nullptr)
		*ValidCamTargets = std::move(Parms.ValidCamTargets);

}


// Function EnemyCheatActivationVerbBase.EnemyCheatActivationVerbBase_C.OnVerbStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     IntendedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnemyCheatActivationVerbBase_C::OnVerbStart(class UObject* IntendedTarget, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCheatActivationVerbBase_C", "OnVerbStart");

	Params::UEnemyCheatActivationVerbBase_C_OnVerbStart_Params Parms{};

	Parms.IntendedTarget = IntendedTarget;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCheatActivationVerbBase.EnemyCheatActivationVerbBase_C.RespondToBullshit_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnGameState*               ActiveGameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnemyCheatActivationVerbBase_C::RespondToBullshit_ServerOnly(class AQtnGameState* ActiveGameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCheatActivationVerbBase_C", "RespondToBullshit_ServerOnly");

	Params::UEnemyCheatActivationVerbBase_C_RespondToBullshit_ServerOnly_Params Parms{};

	Parms.ActiveGameState = ActiveGameState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCheatActivationVerbBase.EnemyCheatActivationVerbBase_C.ExecuteUbergraph_EnemyCheatActivationVerbBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               K2Node_CustomEvent_ActiveGameState                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_intendedTarget                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCheatBPBase_C*           CallFunc_GetStatusEffect_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)

void UEnemyCheatActivationVerbBase_C::ExecuteUbergraph_EnemyCheatActivationVerbBase(int32 EntryPoint, class AQtnGameState* K2Node_CustomEvent_ActiveGameState, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnCheatBPBase_C* CallFunc_GetStatusEffect_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCheatActivationVerbBase_C", "ExecuteUbergraph_EnemyCheatActivationVerbBase");

	Params::UEnemyCheatActivationVerbBase_C_ExecuteUbergraph_EnemyCheatActivationVerbBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ActiveGameState = K2Node_CustomEvent_ActiveGameState;
	Parms.K2Node_Event_intendedTarget = K2Node_Event_intendedTarget;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_GetStatusEffect_ReturnValue = CallFunc_GetStatusEffect_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_1 = CallFunc_GetOwningBodyPawn_ReturnValue_1;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


