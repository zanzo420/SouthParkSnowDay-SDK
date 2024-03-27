#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WytchfireTorch_BP.WytchfireTorch_BP_C
// (Actor)

class UClass* AWytchfireTorch_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WytchfireTorch_BP_C");

	return Clss;
}


// WytchfireTorch_BP_C WytchfireTorch_BP.Default__WytchfireTorch_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWytchfireTorch_BP_C* AWytchfireTorch_BP_C::GetDefaultObj()
{
	static class AWytchfireTorch_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWytchfireTorch_BP_C*>(AWytchfireTorch_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.OnRep_GoalReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWytchfireTorch_BP_C::OnRep_GoalReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "OnRep_GoalReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.getWytchfireGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_Downtown_C*  K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_DT_Act3_FOS_Wytchfire_C*K2Node_DynamicCast_AsQtn_Goal_DT_Act_3_FOS_Wytchfire             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_DT_Act3_FOS_Wytchfire_C*K2Node_DynamicCast_AsQtn_Goal_DT_Act_3_FOS_Wytchfire_1           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWytchfireTorch_BP_C::GetWytchfireGoal(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_Downtown_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown, bool K2Node_DynamicCast_bSuccess, class UQtnGoal_DT_Act3_FOS_Wytchfire_C* K2Node_DynamicCast_AsQtn_Goal_DT_Act_3_FOS_Wytchfire, bool K2Node_DynamicCast_bSuccess_1, class UQtnGoal_DT_Act3_FOS_Wytchfire_C* K2Node_DynamicCast_AsQtn_Goal_DT_Act_3_FOS_Wytchfire_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "getWytchfireGoal");

	Params::AWytchfireTorch_BP_C_GetWytchfireGoal_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown = K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Goal_DT_Act_3_FOS_Wytchfire = K2Node_DynamicCast_AsQtn_Goal_DT_Act_3_FOS_Wytchfire;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsQtn_Goal_DT_Act_3_FOS_Wytchfire_1 = K2Node_DynamicCast_AsQtn_Goal_DT_Act_3_FOS_Wytchfire_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.UpdateLitStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWytchfireTorch_BP_C::UpdateLitStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "UpdateLitStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.LOCAL Update Toggle Vis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AWytchfireTorch_BP_C::LOCAL_Update_Toggle_Vis(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "LOCAL Update Toggle Vis");

	Params::AWytchfireTorch_BP_C_LOCAL_Update_Toggle_Vis_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWytchfireTorch_BP_C::UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "UserConstructionScript");

	Params::AWytchfireTorch_BP_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.FlareUp__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AWytchfireTorch_BP_C::FlareUp__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "FlareUp__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.FlareUp__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AWytchfireTorch_BP_C::FlareUp__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "FlareUp__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.REceivedEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnStatusEffect*            StatusEffect                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWytchfireTorch_BP_C::REceivedEffect(class UQtnStatusEffect* StatusEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "REceivedEffect");

	Params::AWytchfireTorch_BP_C_REceivedEffect_Params Parms{};

	Parms.StatusEffect = StatusEffect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.EffectRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnStatusEffect*            StatusEffect                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWytchfireTorch_BP_C::EffectRemoved(class UQtnStatusEffect* StatusEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "EffectRemoved");

	Params::AWytchfireTorch_BP_C_EffectRemoved_Params Parms{};

	Parms.StatusEffect = StatusEffect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.SetUpBindings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWytchfireTorch_BP_C::SetUpBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "SetUpBindings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.LitRemoveEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWytchfireTorch_BP_C::LitRemoveEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "LitRemoveEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.LightFlame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWytchfireTorch_BP_C::LightFlame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "LightFlame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWytchfireTorch_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.DEBUGONLY_DevChangeFeat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoalManager_Downtown_C*  Goal_manager                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWytchfireTorch_BP_C::DEBUGONLY_DevChangeFeat(class UQtnGoalManager_Downtown_C* Goal_manager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "DEBUGONLY_DevChangeFeat");

	Params::AWytchfireTorch_BP_C_DEBUGONLY_DevChangeFeat_Params Parms{};

	Parms.Goal_manager = Goal_manager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.FeatsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWytchfireTorch_BP_C::FeatsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "FeatsUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.bindGoalReadyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWytchfireTorch_BP_C::bindGoalReadyEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "bindGoalReadyEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.StartObjectiveHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWytchfireTorch_BP_C::StartObjectiveHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "StartObjectiveHighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.QtnReadyForGameplayEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerController*        LocalPlayerController                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                LocalPlayerUI                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                LocalOccupiedBodyPawn                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWytchfireTorch_BP_C::QtnReadyForGameplayEvent_Event_0(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI, class AQtnBodyPawn* LocalOccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "QtnReadyForGameplayEvent_Event_0");

	Params::AWytchfireTorch_BP_C_QtnReadyForGameplayEvent_Event_0_Params Parms{};

	Parms.LocalPlayerController = LocalPlayerController;
	Parms.LocalPlayerUI = LocalPlayerUI;
	Parms.LocalOccupiedBodyPawn = LocalOccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WytchfireTorch_BP.WytchfireTorch_BP_C.ExecuteUbergraph_WytchfireTorch_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UQtnStatusEffect*            K2Node_CustomEvent_statusEffect_1                                (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffect_Wytchfire_C*   K2Node_DynamicCast_AsStatus_Effect_Wytchfire                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnStatusEffect*            K2Node_CustomEvent_statusEffect                                  (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffect_Wytchfire_C*   K2Node_DynamicCast_AsStatus_Effect_Wytchfire_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager_Downtown_C*  K2Node_CustomEvent_goal_manager                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        K2Node_CustomEvent_localPlayerController                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                K2Node_CustomEvent_localPlayerUI                                 (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_localOccupiedBodyPawn                         (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWytchfireTorch_BP_C::ExecuteUbergraph_WytchfireTorch_BP(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UQtnStatusEffect* K2Node_CustomEvent_statusEffect_1, class UStatusEffect_Wytchfire_C* K2Node_DynamicCast_AsStatus_Effect_Wytchfire, bool K2Node_DynamicCast_bSuccess, class UQtnStatusEffect* K2Node_CustomEvent_statusEffect, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UStatusEffect_Wytchfire_C* K2Node_DynamicCast_AsStatus_Effect_Wytchfire_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager_Downtown_C* K2Node_CustomEvent_goal_manager, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_4, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerController* K2Node_CustomEvent_localPlayerController, class AQtnPlayerUI* K2Node_CustomEvent_localPlayerUI, class AQtnBodyPawn* K2Node_CustomEvent_localOccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WytchfireTorch_BP_C", "ExecuteUbergraph_WytchfireTorch_BP");

	Params::AWytchfireTorch_BP_C_ExecuteUbergraph_WytchfireTorch_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_statusEffect_1 = K2Node_CustomEvent_statusEffect_1;
	Parms.K2Node_DynamicCast_AsStatus_Effect_Wytchfire = K2Node_DynamicCast_AsStatus_Effect_Wytchfire;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_statusEffect = K2Node_CustomEvent_statusEffect;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatus_Effect_Wytchfire_1 = K2Node_DynamicCast_AsStatus_Effect_Wytchfire_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CustomEvent_goal_manager = K2Node_CustomEvent_goal_manager;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_CustomEvent_localPlayerController = K2Node_CustomEvent_localPlayerController;
	Parms.K2Node_CustomEvent_localPlayerUI = K2Node_CustomEvent_localPlayerUI;
	Parms.K2Node_CustomEvent_localOccupiedBodyPawn = K2Node_CustomEvent_localOccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


