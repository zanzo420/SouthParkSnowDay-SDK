#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionEventComponent.MissionEventComponent_C
// (None)

class UClass* UMissionEventComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionEventComponent_C");

	return Clss;
}


// MissionEventComponent_C MissionEventComponent.Default__MissionEventComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionEventComponent_C* UMissionEventComponent_C::GetDefaultObj()
{
	static class UMissionEventComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionEventComponent_C*>(UMissionEventComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionEventComponent.MissionEventComponent_C.SetMapEntryCountdown_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Countdown                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::SetMapEntryCountdown_ServerOnly(int32 Countdown, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "SetMapEntryCountdown_ServerOnly");

	Params::UMissionEventComponent_C_SetMapEntryCountdown_ServerOnly_Params Parms{};

	Parms.Countdown = Countdown;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.GetGoalManagerBase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UQtnGoalManagerBase_C*       NewParam                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::GetGoalManagerBase(class UQtnGoalManagerBase_C** NewParam, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "GetGoalManagerBase");

	Params::UMissionEventComponent_C_GetGoalManagerBase_Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function MissionEventComponent.MissionEventComponent_C.GetSocialHubCutsceneManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Found_manager                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACutsceneManagerActor_C*     Manager                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::GetSocialHubCutsceneManager(bool* Found_manager, class ACutsceneManagerActor_C** Manager, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "GetSocialHubCutsceneManager");

	Params::UMissionEventComponent_C_GetSocialHubCutsceneManager_Params Parms{};

	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Found_manager != nullptr)
		*Found_manager = Parms.Found_manager;

	if (Manager != nullptr)
		*Manager = Parms.Manager;

}


// Function MissionEventComponent.MissionEventComponent_C.This Player Carrying Heavy Front Item
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Carrying_heavy_item                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnCarryComponent*>  CallFunc_GetManagedCarryComponents_ReturnValue                   (ConstParm, ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCarryComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GoalPickup_C*            K2Node_DynamicCast_AsBP_Goal_Pickup                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::This_Player_Carrying_Heavy_Front_Item(class ABodyPawnPlayer_C* Player, bool* Carrying_heavy_item, TArray<class UQtnCarryComponent*>& CallFunc_GetManagedCarryComponents_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UQtnCarryComponent* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class ABP_GoalPickup_C* K2Node_DynamicCast_AsBP_Goal_Pickup, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "This Player Carrying Heavy Front Item");

	Params::UMissionEventComponent_C_This_Player_Carrying_Heavy_Front_Item_Params Parms{};

	Parms.Player = Player;
	Parms.CallFunc_GetManagedCarryComponents_ReturnValue = CallFunc_GetManagedCarryComponents_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsBP_Goal_Pickup = K2Node_DynamicCast_AsBP_Goal_Pickup;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Carrying_heavy_item != nullptr)
		*Carrying_heavy_item = Parms.Carrying_heavy_item;

}


// Function MissionEventComponent.MissionEventComponent_C.removeCarriedCannonball
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Cannonball_C*            LOCAL_Cannonball                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GoalPickup_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Cannonball_C*            K2Node_DynamicCast_AsBP_Cannonball                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::RemoveCarriedCannonball(class ABodyPawnPlayer_C* Player, class ABP_Cannonball_C* LOCAL_Cannonball, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABP_GoalPickup_C* CallFunc_Array_Get_Item, class ABP_Cannonball_C* K2Node_DynamicCast_AsBP_Cannonball, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "removeCarriedCannonball");

	Params::UMissionEventComponent_C_RemoveCarriedCannonball_Params Parms{};

	Parms.Player = Player;
	Parms.LOCAL_Cannonball = LOCAL_Cannonball;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Cannonball = K2Node_DynamicCast_AsBP_Cannonball;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.Is Carrying This Item
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Item_Class                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found_Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GoalPickup_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::Is_Carrying_This_Item(class UClass* Item_Class, bool* Found_Item, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_GoalPickup_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "Is Carrying This Item");

	Params::UMissionEventComponent_C_Is_Carrying_This_Item_Params Parms{};

	Parms.Item_Class = Item_Class;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found_Item != nullptr)
		*Found_Item = Parms.Found_Item;

}


// Function MissionEventComponent.MissionEventComponent_C.CheckDispenseReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAmbrosiaDispenser_BP_C*     Dispenser                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Item_that_left_zone                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::CheckDispenseReset(class AAmbrosiaDispenser_BP_C* Dispenser, class AActor* Item_that_left_zone, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "CheckDispenseReset");

	Params::UMissionEventComponent_C_CheckDispenseReset_Params Parms{};

	Parms.Dispenser = Dispenser;
	Parms.Item_that_left_zone = Item_that_left_zone;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.Dispense
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAmbrosiaDispenser_BP_C*     Dispenser                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           Frobber                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Cannonball_C*            K2Node_DynamicCast_AsBP_Cannonball                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Ambrosia_C*              K2Node_DynamicCast_AsBP_Ambrosia                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::Dispense(class AAmbrosiaDispenser_BP_C* Dispenser, class ABodyPawnPlayer_C* Frobber, bool CallFunc_IsServer_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class ABP_Cannonball_C* K2Node_DynamicCast_AsBP_Cannonball, bool K2Node_DynamicCast_bSuccess, class ABP_Ambrosia_C* K2Node_DynamicCast_AsBP_Ambrosia, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "Dispense");

	Params::UMissionEventComponent_C_Dispense_Params Parms{};

	Parms.Dispenser = Dispenser;
	Parms.Frobber = Frobber;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Cannonball = K2Node_DynamicCast_AsBP_Cannonball;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Ambrosia = K2Node_DynamicCast_AsBP_Ambrosia;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.Deliver Ambrosia
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Ambrosia_C*              Ambrosia                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWheelbarrow_BP_C*           Wheelbarrow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_findGoodDropLocation_success                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Deliver_Ambrosia(class ABP_Ambrosia_C* Ambrosia, class AWheelbarrow_BP_C* Wheelbarrow, bool CallFunc_IsServer_ReturnValue, bool CallFunc_findGoodDropLocation_success, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "Deliver Ambrosia");

	Params::UMissionEventComponent_C_Deliver_Ambrosia_Params Parms{};

	Parms.Ambrosia = Ambrosia;
	Parms.Wheelbarrow = Wheelbarrow;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_findGoodDropLocation_success = CallFunc_findGoodDropLocation_success;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.DEBUGONLY_TurnOffCharacterInteractions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Turn_off                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AUpgradeStation_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUpgradeStation_BP_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::DEBUGONLY_TurnOffCharacterInteractions(bool Turn_off, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AUpgradeStation_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsServer_ReturnValue, class AUpgradeStation_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "DEBUGONLY_TurnOffCharacterInteractions");

	Params::UMissionEventComponent_C_DEBUGONLY_TurnOffCharacterInteractions_Params Parms{};

	Parms.Turn_off = Turn_off;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.truckDelivery
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_QtnGoal_SP_Day1_StartTruck_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_SP_Day_1_Start_Truck     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoal*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_2              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_QtnGoal_SP_Day1_DeliveryParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_SP_Day_1_Delivery_Parent (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_QtnGoal_SP_Day1_DeliveryParent_C>K2Node_DynamicCast_AsInterface_Qtn_Goal_SP_Day_1_Delivery_Parent_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::TruckDelivery(class FName Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_2, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_2, class UQtnGoal* CallFunc_Array_Get_Item, TScriptInterface<class IInterface_QtnGoal_SP_Day1_StartTruck_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_SP_Day_1_Start_Truck, bool K2Node_DynamicCast_bSuccess_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_1, bool K2Node_DynamicCast_bSuccess_2, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_2, class UQtnGoal* CallFunc_Array_Get_Item_1, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_2, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IInterface_QtnGoal_SP_Day1_DeliveryParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_SP_Day_1_Delivery_Parent, bool K2Node_DynamicCast_bSuccess_4, class UQtnGoal* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class IInterface_QtnGoal_SP_Day1_DeliveryParent_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_SP_Day_1_Delivery_Parent_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_2, int32 CallFunc_Array_Length_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "truckDelivery");

	Params::UMissionEventComponent_C_TruckDelivery_Params Parms{};

	Parms.Tag = Tag;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable_2 = Temp_bool_True_if_break_was_hit_Variable_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_SP_Day_1_Start_Truck = K2Node_DynamicCast_AsInterface_Qtn_Goal_SP_Day_1_Start_Truck;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue_1 = CallFunc_GetGoalManager_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_1 = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGoalManager_ReturnValue_2 = CallFunc_GetGoalManager_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_2 = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_SP_Day_1_Delivery_Parent = K2Node_DynamicCast_AsInterface_Qtn_Goal_SP_Day_1_Delivery_Parent;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsInterface_Qtn_Goal_SP_Day_1_Delivery_Parent_1 = K2Node_DynamicCast_AsInterface_Qtn_Goal_SP_Day_1_Delivery_Parent_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsObjectOfType_outputPin_1 = CallFunc_IsObjectOfType_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsObjectOfType_outputPin_2 = CallFunc_IsObjectOfType_outputPin_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.OnRep_hasQuestItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::OnRep_hasQuestItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "OnRep_hasQuestItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_OverrideGoals
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              OrderedGoalList                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMissionEventComponent_C::Server_OverrideGoals(TArray<class UClass*>& OrderedGoalList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_OverrideGoals");

	Params::UMissionEventComponent_C_Server_OverrideGoals_Params Parms{};

	Parms.OrderedGoalList = OrderedGoalList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_OverrideSpokes
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Spokes                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        Starting                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Teleport_to_starting                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Teleport_to_Gas                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Teleport_to_Keys                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::Server_OverrideSpokes(TArray<class FName>& Spokes, class FName Starting, bool Teleport_to_starting, bool Teleport_to_Gas, bool Teleport_to_Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_OverrideSpokes");

	Params::UMissionEventComponent_C_Server_OverrideSpokes_Params Parms{};

	Parms.Spokes = Spokes;
	Parms.Starting = Starting;
	Parms.Teleport_to_starting = Teleport_to_starting;
	Parms.Teleport_to_Gas = Teleport_to_Gas;
	Parms.Teleport_to_Keys = Teleport_to_Keys;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_UpdateCurrentGoalDescription
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        New_description                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        New_Goal_title                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UMissionEventComponent_C::Server_UpdateCurrentGoalDescription(class FText New_description, class FText New_Goal_title)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_UpdateCurrentGoalDescription");

	Params::UMissionEventComponent_C_Server_UpdateCurrentGoalDescription_Params Parms{};

	Parms.New_description = New_description;
	Parms.New_Goal_title = New_Goal_title;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.Server_ CutsceneReadyToAdvance
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASubGoalArchetype_C*         SubGoal                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server__CutsceneReadyToAdvance(class ASubGoalArchetype_C* SubGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "Server_ CutsceneReadyToAdvance");

	Params::UMissionEventComponent_C_Server__CutsceneReadyToAdvance_Params Parms{};

	Parms.SubGoal = SubGoal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.Server_MovePlayerToDestination
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  TargetTransform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::Server_MovePlayerToDestination(const struct FTransform& TargetTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "Server_MovePlayerToDestination");

	Params::UMissionEventComponent_C_Server_MovePlayerToDestination_Params Parms{};

	Parms.TargetTransform = TargetTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_confirmFrobAction
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           Relevant_player                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnStruct_VOLine           VO                                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_confirmFrobAction(class FName ActionTag, class ABodyPawnPlayer_C* Relevant_player, const struct FQtnStruct_VOLine& VO)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_confirmFrobAction");

	Params::UMissionEventComponent_C_Server_confirmFrobAction_Params Parms{};

	Parms.ActionTag = ActionTag;
	Parms.Relevant_player = Relevant_player;
	Parms.VO = VO;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_RevertGoalMessage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        UseThisTitle                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        UseThisText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               UseSuppliedText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::Server_RevertGoalMessage(class FText UseThisTitle, class FText UseThisText, bool UseSuppliedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_RevertGoalMessage");

	Params::UMissionEventComponent_C_Server_RevertGoalMessage_Params Parms{};

	Parms.UseThisTitle = UseThisTitle;
	Parms.UseThisText = UseThisText;
	Parms.UseSuppliedText = UseSuppliedText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_TurnOffUpgradeInteractions
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Turning_off                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::Server_TurnOffUpgradeInteractions(bool Turning_off)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_TurnOffUpgradeInteractions");

	Params::UMissionEventComponent_C_Server_TurnOffUpgradeInteractions_Params Parms{};

	Parms.Turning_off = Turning_off;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_WinCurrentGoals
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_WinCurrentGoals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_WinCurrentGoals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_FacetimeReadyToAdvance
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_FacetimeReadyToAdvance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_FacetimeReadyToAdvance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_ForceAmbush
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_ForceAmbush(const class FString& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_ForceAmbush");

	Params::UMissionEventComponent_C_Server_ForceAmbush_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_ApplyStatusEffect
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Status_effect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_ApplyStatusEffect(class UClass* Status_effect, class AQtnBodyPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_ApplyStatusEffect");

	Params::UMissionEventComponent_C_Server_ApplyStatusEffect_Params Parms{};

	Parms.Status_effect = Status_effect;
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_DeliverAmbrosia
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Ambrosia_C*              Ambrosia                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWheelbarrow_BP_C*           Wheelbarrow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_DeliverAmbrosia(class ABP_Ambrosia_C* Ambrosia, class AWheelbarrow_BP_C* Wheelbarrow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_DeliverAmbrosia");

	Params::UMissionEventComponent_C_Server_DeliverAmbrosia_Params Parms{};

	Parms.Ambrosia = Ambrosia;
	Parms.Wheelbarrow = Wheelbarrow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SetAmbrosiaFrobTargetting
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Allow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Ambrosia_C*              Ambrosia                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_SetAmbrosiaFrobTargetting(bool Allow, class ABP_Ambrosia_C* Ambrosia)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SetAmbrosiaFrobTargetting");

	Params::UMissionEventComponent_C_Server_SetAmbrosiaFrobTargetting_Params Parms{};

	Parms.Allow = Allow;
	Parms.Ambrosia = Ambrosia;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_DispenseAmbrosia
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAmbrosiaDispenser_BP_C*     Dispenser                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           Frobber                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_DispenseAmbrosia(class AAmbrosiaDispenser_BP_C* Dispenser, class ABodyPawnPlayer_C* Frobber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_DispenseAmbrosia");

	Params::UMissionEventComponent_C_Server_DispenseAmbrosia_Params Parms{};

	Parms.Dispenser = Dispenser;
	Parms.Frobber = Frobber;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_CheckDispenseReset
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAmbrosiaDispenser_BP_C*     Dispenser                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Item_that_left                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_CheckDispenseReset(class AAmbrosiaDispenser_BP_C* Dispenser, class AActor* Item_that_left)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_CheckDispenseReset");

	Params::UMissionEventComponent_C_Server_CheckDispenseReset_Params Parms{};

	Parms.Dispenser = Dispenser;
	Parms.Item_that_left = Item_that_left;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_RestorehealthDEBUGONLY
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_RestorehealthDEBUGONLY(class ABodyPawnPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_RestorehealthDEBUGONLY");

	Params::UMissionEventComponent_C_Server_RestorehealthDEBUGONLY_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SetMagazine
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMagazine_BP_C*              Mag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_SetMagazine(class AMagazine_BP_C* Mag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SetMagazine");

	Params::UMissionEventComponent_C_Server_SetMagazine_Params Parms{};

	Parms.Mag = Mag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_MoveObstacleTruck
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AObstacle_BP_C*              Truck                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_MoveObstacleTruck(class AObstacle_BP_C* Truck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_MoveObstacleTruck");

	Params::UMissionEventComponent_C_Server_MoveObstacleTruck_Params Parms{};

	Parms.Truck = Truck;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "ReceiveTick");

	Params::UMissionEventComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.serverSavedDay
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    Goal                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::ServerSavedDay(class UQtnGoal* Goal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "serverSavedDay");

	Params::UMissionEventComponent_C_ServerSavedDay_Params Parms{};

	Parms.Goal = Goal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_HellsPassSkipChurch
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_HellsPassSkipChurch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_HellsPassSkipChurch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SkipToDay3Church
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SkipToDay3Church()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SkipToDay3Church");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.Server_PlayerRequestCutsceneSkip
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACinematicSceneArchetype_BP_C*SceneRequestingSkip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_PlayerRequestCutsceneSkip(class ACinematicSceneArchetype_BP_C* SceneRequestingSkip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "Server_PlayerRequestCutsceneSkip");

	Params::UMissionEventComponent_C_Server_PlayerRequestCutsceneSkip_Params Parms{};

	Parms.SceneRequestingSkip = SceneRequestingSkip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.Multi_SkipCutscene
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACinematicSceneArchetype_BP_C*SceneToSkip                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Multi_SkipCutscene(class ACinematicSceneArchetype_BP_C* SceneToSkip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "Multi_SkipCutscene");

	Params::UMissionEventComponent_C_Multi_SkipCutscene_Params Parms{};

	Parms.SceneToSkip = SceneToSkip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.Multi_UpdateSkipUI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACinematicSceneArchetype_BP_C*SceneToUpdate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumRequesting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalRequired                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Multi_UpdateSkipUI(class ACinematicSceneArchetype_BP_C* SceneToUpdate, int32 NumRequesting, int32 TotalRequired)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "Multi_UpdateSkipUI");

	Params::UMissionEventComponent_C_Multi_UpdateSkipUI_Params Parms{};

	Parms.SceneToUpdate = SceneToUpdate;
	Parms.NumRequesting = NumRequesting;
	Parms.TotalRequired = TotalRequired;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_StarksPondSkipToSiege
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_StarksPondSkipToSiege()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_StarksPondSkipToSiege");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_MainStreetSkipToCentral
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_MainStreetSkipToCentral()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_MainStreetSkipToCentral");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_MainStreetSkipToTheatre
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_MainStreetSkipToTheatre()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_MainStreetSkipToTheatre");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_ResetThisPlayersVendingMachine
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARestoreHealthVendingMachine_BP_C*CallingVendingMachine                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_ResetThisPlayersVendingMachine(class ARestoreHealthVendingMachine_BP_C* CallingVendingMachine, class ABodyPawnPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_ResetThisPlayersVendingMachine");

	Params::UMissionEventComponent_C_Server_ResetThisPlayersVendingMachine_Params Parms{};

	Parms.CallingVendingMachine = CallingVendingMachine;
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_RemoveCannonball
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           FromThisPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_RemoveCannonball(class ABodyPawnPlayer_C* FromThisPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_RemoveCannonball");

	Params::UMissionEventComponent_C_Server_RemoveCannonball_Params Parms{};

	Parms.FromThisPlayer = FromThisPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_ReadyForTravelUI
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           body_Ready                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_ReadyForTravelUI(class ABodyPawnPlayer_C* body_Ready)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_ReadyForTravelUI");

	Params::UMissionEventComponent_C_Server_ReadyForTravelUI_Params Parms{};

	Parms.body_Ready = body_Ready;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.MULTI_UpdateExitUI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           BodyReady                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::MULTI_UpdateExitUI(class ABodyPawnPlayer_C* BodyReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "MULTI_UpdateExitUI");

	Params::UMissionEventComponent_C_MULTI_UpdateExitUI_Params Parms{};

	Parms.BodyReady = BodyReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_ReadyToStartUI
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_ReadyToStartUI(class ABodyPawnPlayer_C* Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_ReadyToStartUI");

	Params::UMissionEventComponent_C_Server_ReadyToStartUI_Params Parms{};

	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_WinMission
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_WinMission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_WinMission");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_MainStreetSkipToShiTpaTown
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_MainStreetSkipToShiTpaTown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_MainStreetSkipToShiTpaTown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_MainStreetForceShitPaTownLocations
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Item1                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Item2                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Item3                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Item1_Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Item2_Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Item3_Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_MainStreetForceShitPaTownLocations(const class FString& Item1, const class FString& Item2, const class FString& Item3, const class FString& Item1_Loc, const class FString& Item2_Loc, const class FString& Item3_Loc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_MainStreetForceShitPaTownLocations");

	Params::UMissionEventComponent_C_Server_MainStreetForceShitPaTownLocations_Params Parms{};

	Parms.Item1 = Item1;
	Parms.Item2 = Item2;
	Parms.Item3 = Item3;
	Parms.Item1_Loc = Item1_Loc;
	Parms.Item2_Loc = Item2_Loc;
	Parms.Item3_Loc = Item3_Loc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SkipToStanPhase
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SkipToStanPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SkipToStanPhase");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SkipToRandyPhase
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SkipToRandyPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SkipToRandyPhase");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.Server_UpdateVoteNo
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           BodyReady                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_UpdateVoteNo(class ABodyPawnPlayer_C* BodyReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "Server_UpdateVoteNo");

	Params::UMissionEventComponent_C_Server_UpdateVoteNo_Params Parms{};

	Parms.BodyReady = BodyReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SewagePlant_KillHankey
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SewagePlant_KillHankey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SewagePlant_KillHankey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SkipToMantleGoal
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SkipToMantleGoal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SkipToMantleGoal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SkipToFartEscape
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SkipToFartEscape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SkipToFartEscape");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SkipToSwarmerFight
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SkipToSwarmerFight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SkipToSwarmerFight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SkipToRangedFight
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SkipToRangedFight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SkipToRangedFight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SkipToChase
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SkipToChase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SkipToChase");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_ThisPlayerNeedsDMPLoot
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Need_loot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::Server_ThisPlayerNeedsDMPLoot(class AQtnPlayerPawn* Player, bool Need_loot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_ThisPlayerNeedsDMPLoot");

	Params::UMissionEventComponent_C_Server_ThisPlayerNeedsDMPLoot_Params Parms{};

	Parms.Player = Player;
	Parms.Need_loot = Need_loot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SpawnSwarmerProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      FromThisCannon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnSkirmish*                NotifyThisSkirmish                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_SpawnSwarmerProjectile(class AActor* FromThisCannon, class AQtnSkirmish* NotifyThisSkirmish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SpawnSwarmerProjectile");

	Params::UMissionEventComponent_C_Server_SpawnSwarmerProjectile_Params Parms{};

	Parms.FromThisCannon = FromThisCannon;
	Parms.NotifyThisSkirmish = NotifyThisSkirmish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_MainStreetSkipToDump
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      DesiredLocations                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMissionEventComponent_C::Server_MainStreetSkipToDump(TArray<int32>& DesiredLocations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_MainStreetSkipToDump");

	Params::UMissionEventComponent_C_Server_MainStreetSkipToDump_Params Parms{};

	Parms.DesiredLocations = DesiredLocations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.CheckSkipOnExit
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACinematicSceneArchetype_BP_C*CinematicScene                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::CheckSkipOnExit(class ACinematicSceneArchetype_BP_C* CinematicScene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "CheckSkipOnExit");

	Params::UMissionEventComponent_C_CheckSkipOnExit_Params Parms{};

	Parms.CinematicScene = CinematicScene;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_RegisterCannonFire
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_RegisterCannonFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_RegisterCannonFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SkipToCentralDay3
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SkipToCentralDay3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SkipToCentralDay3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.LOCAL_SetCurrentTraining
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATrainingMoment_BP_C*        Current_training                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Reset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::LOCAL_SetCurrentTraining(class ATrainingMoment_BP_C* Current_training, bool Reset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "LOCAL_SetCurrentTraining");

	Params::UMissionEventComponent_C_LOCAL_SetCurrentTraining_Params Parms{};

	Parms.Current_training = Current_training;
	Parms.Reset = Reset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_Starks_TruckReadyVO
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnStruct_VOLine           VO                                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_Starks_TruckReadyVO(const struct FQtnStruct_VOLine& VO)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_Starks_TruckReadyVO");

	Params::UMissionEventComponent_C_Server_Starks_TruckReadyVO_Params Parms{};

	Parms.VO = VO;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SkipToCartmanDay3
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SkipToCartmanDay3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SkipToCartmanDay3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SkipToHealingTotem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SkipToHealingTotem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SkipToHealingTotem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SkipToTrailCombat
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SkipToTrailCombat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SkipToTrailCombat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.Server_EndCutscene
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACinematicSceneArchetype_BP_C*SceneToEnd                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_EndCutscene(class ACinematicSceneArchetype_BP_C* SceneToEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "Server_EndCutscene");

	Params::UMissionEventComponent_C_Server_EndCutscene_Params Parms{};

	Parms.SceneToEnd = SceneToEnd;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_reportRulebookFTUXDone
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFTUXManager_C*              FTUXManager                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           This_player                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_reportRulebookFTUXDone(class AFTUXManager_C* FTUXManager, class ABodyPawnPlayer_C* This_player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_reportRulebookFTUXDone");

	Params::UMissionEventComponent_C_Server_reportRulebookFTUXDone_Params Parms{};

	Parms.FTUXManager = FTUXManager;
	Parms.This_player = This_player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.SoloSceneEndedClient
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyEnding                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACinematicSceneSolo_Archetype_C*SceneActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::SoloSceneEndedClient(class AQtnBodyPawn* bodyEnding, class ACinematicSceneSolo_Archetype_C* SceneActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "SoloSceneEndedClient");

	Params::UMissionEventComponent_C_SoloSceneEndedClient_Params Parms{};

	Parms.bodyEnding = bodyEnding;
	Parms.SceneActor = SceneActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_PlayHankeyLocalSceneForPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHankyIntroScene_Local_C*    Scene                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_PlayHankeyLocalSceneForPlayer(class ABodyPawnPlayer_C* Player, class AHankyIntroScene_Local_C* Scene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_PlayHankeyLocalSceneForPlayer");

	Params::UMissionEventComponent_C_Server_PlayHankeyLocalSceneForPlayer_Params Parms{};

	Parms.Player = Player;
	Parms.Scene = Scene;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_CheckWarTableLock
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATrainingMoment_DMP_C*       DMP_Training_Moment                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              PlayerWhoCompletedTraining                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_CheckWarTableLock(class ATrainingMoment_DMP_C* DMP_Training_Moment, class AQtnPlayerPawn* PlayerWhoCompletedTraining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_CheckWarTableLock");

	Params::UMissionEventComponent_C_Server_CheckWarTableLock_Params Parms{};

	Parms.DMP_Training_Moment = DMP_Training_Moment;
	Parms.PlayerWhoCompletedTraining = PlayerWhoCompletedTraining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SkipToBullshitBoss
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SkipToBullshitBoss()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SkipToBullshitBoss");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.Client_CutsceneLateJoin
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACinematicSceneArchetype_BP_C*CutsceneActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Client_CutsceneLateJoin(class ACinematicSceneArchetype_BP_C* CutsceneActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "Client_CutsceneLateJoin");

	Params::UMissionEventComponent_C_Client_CutsceneLateJoin_Params Parms{};

	Parms.CutsceneActor = CutsceneActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.Client_EndScene
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACinematicSceneArchetype_BP_C*CutsceneActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Client_EndScene(class ACinematicSceneArchetype_BP_C* CutsceneActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "Client_EndScene");

	Params::UMissionEventComponent_C_Client_EndScene_Params Parms{};

	Parms.CutsceneActor = CutsceneActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SkipToPolice
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SkipToPolice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SkipToPolice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_MainStreetAmbush
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMissionEventComponent_C::Server_MainStreetAmbush(const class FString& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_MainStreetAmbush");

	Params::UMissionEventComponent_C_Server_MainStreetAmbush_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_SkipToKenny
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_SkipToKenny()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_SkipToKenny");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.server_MainStreet_ForceAmbushes
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Slot_A                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Slot_B                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Teleport_A                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Teleport_B                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::Server_MainStreet_ForceAmbushes(const class FString& Slot_A, const class FString& Slot_B, bool Teleport_A, bool Teleport_B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_MainStreet_ForceAmbushes");

	Params::UMissionEventComponent_C_Server_MainStreet_ForceAmbushes_Params Parms{};

	Parms.Slot_A = Slot_A;
	Parms.Slot_B = Slot_B;
	Parms.Teleport_A = Teleport_A;
	Parms.Teleport_B = Teleport_B;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_ConfirmAmbushesFoothills
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Slot_A                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Slot_B                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               TeleportToA                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TeleportToB                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::Server_ConfirmAmbushesFoothills(const class FString& Slot_A, const class FString& Slot_B, bool TeleportToA, bool TeleportToB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_ConfirmAmbushesFoothills");

	Params::UMissionEventComponent_C_Server_ConfirmAmbushesFoothills_Params Parms{};

	Parms.Slot_A = Slot_A;
	Parms.Slot_B = Slot_B;
	Parms.TeleportToA = TeleportToA;
	Parms.TeleportToB = TeleportToB;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_DowntownForceSpokes
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Spokes                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      BonusZone                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               TeleportToFeat                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TeleportToBonus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::Server_DowntownForceSpokes(TArray<class FName>& Spokes, const class FString& BonusZone, bool TeleportToFeat, bool TeleportToBonus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_DowntownForceSpokes");

	Params::UMissionEventComponent_C_Server_DowntownForceSpokes_Params Parms{};

	Parms.Spokes = Spokes;
	Parms.BonusZone = BonusZone;
	Parms.TeleportToFeat = TeleportToFeat;
	Parms.TeleportToBonus = TeleportToBonus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_StarksForceAmbush
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      AmbushAGas                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      AmbushBKeys                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Teleport                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::Server_StarksForceAmbush(const class FString& AmbushAGas, const class FString& AmbushBKeys, bool Teleport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_StarksForceAmbush");

	Params::UMissionEventComponent_C_Server_StarksForceAmbush_Params Parms{};

	Parms.AmbushAGas = AmbushAGas;
	Parms.AmbushBKeys = AmbushBKeys;
	Parms.Teleport = Teleport;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionEventComponent.MissionEventComponent_C.server_StarksSkipToHub
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionEventComponent_C::Server_StarksSkipToHub()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "server_StarksSkipToHub");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionEventComponent.MissionEventComponent_C.ExecuteUbergraph_MissionEventComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_turning_off                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_3                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_4                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_5                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_selection_1                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_6                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Status_effect                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_pawn                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnStatusEffect*            CallFunc_AddStatusEffect_ServerOnly_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Ambrosia_C*              K2Node_CustomEvent_ambrosia_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWheelbarrow_BP_C*           K2Node_CustomEvent_wheelbarrow                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_allow                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Ambrosia_C*              K2Node_CustomEvent_ambrosia                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAmbrosiaDispenser_BP_C*     K2Node_CustomEvent_dispenser_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_frobber                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmbrosiaDispenser_BP_C*     K2Node_CustomEvent_dispenser                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_item_that_left                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_player_3                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMagazine_BP_C*              K2Node_CustomEvent_mag                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AObstacle_BP_C*              K2Node_CustomEvent_truck                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal*                    K2Node_CustomEvent_goal                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGoalBase_C*                 K2Node_DynamicCast_AsGoal_Base                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_7                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_HellsPass_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Hells_Pass                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_useThisTitle                                  (None)
// class FText                        K2Node_CustomEvent_useThisText                                   (None)
// bool                               K2Node_CustomEvent_useSuppliedText                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_8                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_Foothills_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACinematicSceneArchetype_BP_C*K2Node_CustomEvent_SceneRequestingSkip                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACinematicSceneArchetype_BP_C*K2Node_CustomEvent_SceneToSkip                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACinematicSceneArchetype_BP_C*K2Node_CustomEvent_sceneToUpdate                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_numRequesting                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_totalRequired                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ActionTag                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_relevant_player                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnStruct_VOLine           K2Node_CustomEvent_VO_1                                          (NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_9                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_10                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_Downtown_C*  K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ARestoreHealthVendingMachine_BP_C*K2Node_CustomEvent_callingVendingMachine                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_player_2                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_fromThisPlayer                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_body_Ready                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_BodyReady_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_Body                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMenuMapExit_Screen_C*       CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMenuMapExit_Widget_C*       K2Node_DynamicCast_AsMenu_Map_Exit_Widget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_11                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_Downtown_C*  K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_item1                                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_item2                                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_item3                                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_item1_Loc                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_item2_Loc                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_item3_Loc                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_12                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_Downtown_C*  K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_13                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_Playground_Boss_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Playground_Boss            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_14                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_Playground_Boss_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Playground_Boss_1          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_BodyReady                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_15                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_16                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_17                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_18                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_3                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_25                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_19                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_4                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_player_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_need_loot                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_26                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_fromThisCannon                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnSkirmish*                K2Node_CustomEvent_notifyThisSkirmish                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_AimableCannonPawn_Stan_C>K2Node_DynamicCast_AsInterface_Aimable_Cannon_Pawn_Stan          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_25                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_AimableCannonPawn_Stan_C>K2Node_DynamicCast_AsInterface_Aimable_Cannon_Pawn_Stan_1        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_26                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_27                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_GetMuzzle_muzzle                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_CustomEvent_TargetTransform                               (IsPlainOldData, NoDestructor)
// class ASubGoalArchetype_C*         K2Node_CustomEvent_SubGoal                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_CustomEvent_DesiredLocations                              (ConstParm, ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue_28                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_20                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_Downtown_C*  K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_3                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_27                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnPlayerPawn*>      CallFunc_GetAllPlayerPawns_foundPlayerPawns                      (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_28                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACinematicSceneArchetype_BP_C*K2Node_CustomEvent_CinematicScene                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_3                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_29                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_new_description                               (None)
// class FText                        K2Node_CustomEvent_New_Goal_title                                (None)
// bool                               CallFunc_IsServer_ReturnValue_29                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_21                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_Playground_Boss_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Playground_Boss_2          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_30                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_30                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_StanBossBattle_C>K2Node_DynamicCast_AsInterface_Stan_Boss_Battle                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_31                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_22                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_Foothills_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_32                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATrainingMoment_BP_C*        K2Node_CustomEvent_current_training                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_reset                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnStruct_VOLine           K2Node_CustomEvent_VO                                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_31                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_32                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_23                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_Foothills_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills_2                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_33                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_CustomEvent_Spokes_1                                      (ConstParm, ReferenceParm)
// class FName                        K2Node_CustomEvent_starting                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Teleport_to_starting                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Teleport_to_Gas                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Teleport_to_Keys                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSocialHubCutsceneManager_Found_manager               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACutsceneManagerActor_C*     CallFunc_GetSocialHubCutsceneManager_Manager                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSocialHubCutsceneManager_Found_manager_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACutsceneManagerActor_C*     CallFunc_GetSocialHubCutsceneManager_Manager_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       CallFunc_GetGoalManagerBase_NewParam                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       CallFunc_GetGoalManagerBase_NewParam_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_SewagePlant_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Sewage_Plant               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_34                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class AActor>          CallFunc_SyncLoadActorClass_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AActor*                      CallFunc_SpawnActor_ServerOnly_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_35                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_4                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_36                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnVerbRequest             K2Node_MakeStruct_QtnVerbRequest                                 (NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_33                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class AActor>          CallFunc_SyncLoadActorClass_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Body_Pawn                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_34                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_24                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_5                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_37                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_35                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_25                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACinematicSceneArchetype_BP_C*K2Node_CustomEvent_SceneToEnd                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_6                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_38                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFTUXManager_C*              K2Node_CustomEvent_FTUXManager                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_this_player                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_36                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerPawn*              CallFunc_GetOccupyingPlayerPawn_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_bodyEnding                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACinematicSceneSolo_Archetype_C*K2Node_CustomEvent_sceneActor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_player                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHankyIntroScene_Local_C*    K2Node_CustomEvent_scene                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_37                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UClass*>              K2Node_CustomEvent_orderedGoalList                               (ConstParm, ReferenceParm)
// class ATrainingMoment_DMP_C*       K2Node_CustomEvent_DMP_Training_Moment                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerWhoCompletedTraining                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_38                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_4                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_5                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_39                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_39                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_26                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACinematicSceneArchetype_BP_C*K2Node_CustomEvent_CutsceneActor_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_FTUX_C*      K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_7                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_40                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACinematicSceneArchetype_BP_C*K2Node_CustomEvent_CutsceneActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_40                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_27                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_MainStreet_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_41                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_selection                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_41                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_28                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_MainStreet_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_42                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_42                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_29                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_MainStreet_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_2              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_43                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Slot_A_1                                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Slot_B_1                                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Teleport_A                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Teleport_B                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_43                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_30                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_MainStreet_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_3              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_44                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Slot_A                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Slot_B                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_TeleportToA                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_TeleportToB                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_44                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_31                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_Foothills_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills_3                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_45                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_CustomEvent_Spokes                                        (ConstParm, ReferenceParm)
// class FString                      K2Node_CustomEvent_BonusZone                                     (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_TeleportToFeat                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_TeleportToBonus                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_32                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_AmbushAGas                                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_AmbushBKeys                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Teleport                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager_Downtown_C*  K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_4                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_46                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_45                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_33                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_2              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_47                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue_34                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_3              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_48                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_46                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_5                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_6                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_49                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionEventComponent_C::ExecuteUbergraph_MissionEventComponent(int32 EntryPoint, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_1, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_CustomEvent_turning_off, bool CallFunc_IsServer_ReturnValue_1, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_3, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsServer_ReturnValue_2, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_4, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base_1, bool K2Node_DynamicCast_bSuccess_3, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, const class FString& K2Node_CustomEvent_selection_1, bool CallFunc_IsServer_ReturnValue_3, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_6, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base_2, bool K2Node_DynamicCast_bSuccess_4, class UClass* K2Node_CustomEvent_Status_effect, class AQtnBodyPawn* K2Node_CustomEvent_pawn, class UQtnStatusEffect* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, bool CallFunc_IsServer_ReturnValue_4, class ABP_Ambrosia_C* K2Node_CustomEvent_ambrosia_1, class AWheelbarrow_BP_C* K2Node_CustomEvent_wheelbarrow, bool K2Node_CustomEvent_allow, class ABP_Ambrosia_C* K2Node_CustomEvent_ambrosia, bool CallFunc_IsServer_ReturnValue_5, class AAmbrosiaDispenser_BP_C* K2Node_CustomEvent_dispenser_1, class ABodyPawnPlayer_C* K2Node_CustomEvent_frobber, class AAmbrosiaDispenser_BP_C* K2Node_CustomEvent_dispenser, class AActor* K2Node_CustomEvent_item_that_left, class ABodyPawnPlayer_C* K2Node_CustomEvent_player_3, bool CallFunc_IsServer_ReturnValue_6, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_5, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, int32 Temp_int_Variable, class AMagazine_BP_C* K2Node_CustomEvent_mag, bool CallFunc_IsServer_ReturnValue_7, class AObstacle_BP_C* K2Node_CustomEvent_truck, class AActor* CallFunc_GetOwner_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_6, float K2Node_Event_DeltaSeconds, bool CallFunc_IsFalling_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_7, class UQtnGoal* K2Node_CustomEvent_goal, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess_8, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_8, bool CallFunc_IsServer_ReturnValue_9, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_7, class UQtnGoalManager_HellsPass_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Hells_Pass, bool K2Node_DynamicCast_bSuccess_9, class FText K2Node_CustomEvent_useThisTitle, class FText K2Node_CustomEvent_useThisText, bool K2Node_CustomEvent_useSuppliedText, bool CallFunc_IsServer_ReturnValue_10, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_8, class UQtnGoalManager_Foothills_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills, bool K2Node_DynamicCast_bSuccess_10, class ACinematicSceneArchetype_BP_C* K2Node_CustomEvent_SceneRequestingSkip, class ACinematicSceneArchetype_BP_C* K2Node_CustomEvent_SceneToSkip, int32 CallFunc_Add_IntInt_ReturnValue_1, class ACinematicSceneArchetype_BP_C* K2Node_CustomEvent_sceneToUpdate, int32 K2Node_CustomEvent_numRequesting, int32 K2Node_CustomEvent_totalRequired, class FName K2Node_CustomEvent_ActionTag, class ABodyPawnPlayer_C* K2Node_CustomEvent_relevant_player, const struct FQtnStruct_VOLine& K2Node_CustomEvent_VO_1, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_9, bool CallFunc_IsServer_ReturnValue_11, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_1, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_IsServer_ReturnValue_12, bool CallFunc_IsServer_ReturnValue_13, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_10, class UQtnGoalManager_Downtown_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown, bool K2Node_DynamicCast_bSuccess_12, class ARestoreHealthVendingMachine_BP_C* K2Node_CustomEvent_callingVendingMachine, class ABodyPawnPlayer_C* K2Node_CustomEvent_player_2, bool CallFunc_IsServer_ReturnValue_14, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsServer_ReturnValue_15, class ABodyPawnPlayer_C* K2Node_CustomEvent_fromThisPlayer, class ABodyPawnPlayer_C* K2Node_CustomEvent_body_Ready, class ABodyPawnPlayer_C* K2Node_CustomEvent_BodyReady_1, class ABodyPawnPlayer_C* K2Node_CustomEvent_Body, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UMenuMapExit_Screen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, bool CallFunc_IsServer_ReturnValue_16, class UMenuMapExit_Widget_C* K2Node_DynamicCast_AsMenu_Map_Exit_Widget, bool K2Node_DynamicCast_bSuccess_13, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_11, class UQtnGoalManager_Downtown_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_1, bool K2Node_DynamicCast_bSuccess_14, const class FString& K2Node_CustomEvent_item1, const class FString& K2Node_CustomEvent_item2, const class FString& K2Node_CustomEvent_item3, const class FString& K2Node_CustomEvent_item1_Loc, const class FString& K2Node_CustomEvent_item2_Loc, const class FString& K2Node_CustomEvent_item3_Loc, bool CallFunc_IsServer_ReturnValue_17, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_12, class UQtnGoalManager_Downtown_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_2, bool K2Node_DynamicCast_bSuccess_15, bool CallFunc_IsServer_ReturnValue_18, class AActor* CallFunc_GetOwner_ReturnValue_1, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_IsServer_ReturnValue_19, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_13, class UQtnGoalManager_Playground_Boss_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Playground_Boss, bool K2Node_DynamicCast_bSuccess_17, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_14, class UQtnGoalManager_Playground_Boss_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Playground_Boss_1, bool K2Node_DynamicCast_bSuccess_18, class ABodyPawnPlayer_C* K2Node_CustomEvent_BodyReady, bool CallFunc_IsServer_ReturnValue_20, bool CallFunc_IsServer_ReturnValue_21, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_15, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX, bool K2Node_DynamicCast_bSuccess_19, bool CallFunc_IsServer_ReturnValue_22, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_16, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_1, bool K2Node_DynamicCast_bSuccess_20, bool CallFunc_IsServer_ReturnValue_23, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_17, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_2, bool K2Node_DynamicCast_bSuccess_21, bool CallFunc_IsServer_ReturnValue_24, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_18, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_3, bool K2Node_DynamicCast_bSuccess_22, bool CallFunc_IsServer_ReturnValue_25, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_19, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_4, bool K2Node_DynamicCast_bSuccess_23, class AQtnPlayerPawn* K2Node_CustomEvent_player_1, bool K2Node_CustomEvent_need_loot, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsServer_ReturnValue_26, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_2, bool K2Node_DynamicCast_bSuccess_24, class AActor* K2Node_CustomEvent_fromThisCannon, class AQtnSkirmish* K2Node_CustomEvent_notifyThisSkirmish, bool CallFunc_IsValid_ReturnValue_6, TScriptInterface<class IInterface_AimableCannonPawn_Stan_C> K2Node_DynamicCast_AsInterface_Aimable_Cannon_Pawn_Stan, bool K2Node_DynamicCast_bSuccess_25, TScriptInterface<class IInterface_AimableCannonPawn_Stan_C> K2Node_DynamicCast_AsInterface_Aimable_Cannon_Pawn_Stan_1, bool K2Node_DynamicCast_bSuccess_26, bool CallFunc_IsServer_ReturnValue_27, class USceneComponent* CallFunc_GetMuzzle_muzzle, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& K2Node_CustomEvent_TargetTransform, class ASubGoalArchetype_C* K2Node_CustomEvent_SubGoal, TArray<int32>& K2Node_CustomEvent_DesiredLocations, bool CallFunc_IsServer_ReturnValue_28, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_20, class UQtnGoalManager_Downtown_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_3, bool K2Node_DynamicCast_bSuccess_27, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_28, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class ACinematicSceneArchetype_BP_C* K2Node_CustomEvent_CinematicScene, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_3, bool K2Node_DynamicCast_bSuccess_29, class FText K2Node_CustomEvent_new_description, class FText K2Node_CustomEvent_New_Goal_title, bool CallFunc_IsServer_ReturnValue_29, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_21, class UQtnGoalManager_Playground_Boss_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Playground_Boss_2, bool K2Node_DynamicCast_bSuccess_30, bool CallFunc_IsServer_ReturnValue_30, TScriptInterface<class IInterface_StanBossBattle_C> K2Node_DynamicCast_AsInterface_Stan_Boss_Battle, bool K2Node_DynamicCast_bSuccess_31, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_22, class UQtnGoalManager_Foothills_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills_1, bool K2Node_DynamicCast_bSuccess_32, class ATrainingMoment_BP_C* K2Node_CustomEvent_current_training, bool K2Node_CustomEvent_reset, const struct FQtnStruct_VOLine& K2Node_CustomEvent_VO, bool CallFunc_IsServer_ReturnValue_31, bool CallFunc_IsServer_ReturnValue_32, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_23, class UQtnGoalManager_Foothills_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills_2, bool K2Node_DynamicCast_bSuccess_33, TArray<class FName>& K2Node_CustomEvent_Spokes_1, class FName K2Node_CustomEvent_starting, bool K2Node_CustomEvent_Teleport_to_starting, bool K2Node_CustomEvent_Teleport_to_Gas, bool K2Node_CustomEvent_Teleport_to_Keys, bool CallFunc_GetSocialHubCutsceneManager_Found_manager, class ACutsceneManagerActor_C* CallFunc_GetSocialHubCutsceneManager_Manager, bool CallFunc_GetSocialHubCutsceneManager_Found_manager_1, class ACutsceneManagerActor_C* CallFunc_GetSocialHubCutsceneManager_Manager_1, class UQtnGoalManagerBase_C* CallFunc_GetGoalManagerBase_NewParam, class UQtnGoalManagerBase_C* CallFunc_GetGoalManagerBase_NewParam_1, class UQtnGoalManager_SewagePlant_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Sewage_Plant, bool K2Node_DynamicCast_bSuccess_34, class UQtnAttribute* Temp_object_Variable, float CallFunc_GetCurrentValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, TSubclassOf<class AActor> CallFunc_SyncLoadActorClass_ReturnValue, class AActor* CallFunc_SpawnActor_ServerOnly_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_3, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_35, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_4, bool K2Node_DynamicCast_bSuccess_36, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, bool CallFunc_IsServer_ReturnValue_33, TSubclassOf<class AActor> CallFunc_SyncLoadActorClass_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsQtn_Body_Pawn, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue_34, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_24, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_5, bool K2Node_DynamicCast_bSuccess_37, bool CallFunc_IsServer_ReturnValue_35, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_25, class ACinematicSceneArchetype_BP_C* K2Node_CustomEvent_SceneToEnd, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_6, bool K2Node_DynamicCast_bSuccess_38, class AFTUXManager_C* K2Node_CustomEvent_FTUXManager, class ABodyPawnPlayer_C* K2Node_CustomEvent_this_player, bool CallFunc_IsServer_ReturnValue_36, class AQtnPlayerPawn* CallFunc_GetOccupyingPlayerPawn_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_bodyEnding, class ACinematicSceneSolo_Archetype_C* K2Node_CustomEvent_sceneActor, class ABodyPawnPlayer_C* K2Node_CustomEvent_player, class AHankyIntroScene_Local_C* K2Node_CustomEvent_scene, bool CallFunc_IsServer_ReturnValue_37, TArray<class UClass*>& K2Node_CustomEvent_orderedGoalList, class ATrainingMoment_DMP_C* K2Node_CustomEvent_DMP_Training_Moment, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoCompletedTraining, bool CallFunc_IsServer_ReturnValue_38, bool CallFunc_Array_RemoveItem_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_4, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_5, bool K2Node_DynamicCast_bSuccess_39, bool CallFunc_IsServer_ReturnValue_39, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_26, class ACinematicSceneArchetype_BP_C* K2Node_CustomEvent_CutsceneActor_1, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_7, bool K2Node_DynamicCast_bSuccess_40, class ACinematicSceneArchetype_BP_C* K2Node_CustomEvent_CutsceneActor, bool CallFunc_IsServer_ReturnValue_40, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_27, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street, bool K2Node_DynamicCast_bSuccess_41, const class FString& K2Node_CustomEvent_selection, bool CallFunc_IsServer_ReturnValue_41, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_28, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_1, bool K2Node_DynamicCast_bSuccess_42, bool CallFunc_IsServer_ReturnValue_42, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_29, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_2, bool K2Node_DynamicCast_bSuccess_43, const class FString& K2Node_CustomEvent_Slot_A_1, const class FString& K2Node_CustomEvent_Slot_B_1, bool K2Node_CustomEvent_Teleport_A, bool K2Node_CustomEvent_Teleport_B, bool CallFunc_IsServer_ReturnValue_43, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_30, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_3, bool K2Node_DynamicCast_bSuccess_44, const class FString& K2Node_CustomEvent_Slot_A, const class FString& K2Node_CustomEvent_Slot_B, bool K2Node_CustomEvent_TeleportToA, bool K2Node_CustomEvent_TeleportToB, bool CallFunc_IsServer_ReturnValue_44, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_31, class UQtnGoalManager_Foothills_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills_3, bool K2Node_DynamicCast_bSuccess_45, TArray<class FName>& K2Node_CustomEvent_Spokes, const class FString& K2Node_CustomEvent_BonusZone, bool K2Node_CustomEvent_TeleportToFeat, bool K2Node_CustomEvent_TeleportToBonus, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_32, const class FString& K2Node_CustomEvent_AmbushAGas, const class FString& K2Node_CustomEvent_AmbushBKeys, bool K2Node_CustomEvent_Teleport, class UQtnGoalManager_Downtown_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_4, bool K2Node_DynamicCast_bSuccess_46, bool CallFunc_IsServer_ReturnValue_45, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_33, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_2, bool K2Node_DynamicCast_bSuccess_47, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_34, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_3, bool K2Node_DynamicCast_bSuccess_48, bool CallFunc_IsServer_ReturnValue_46, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_5, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_6, bool K2Node_DynamicCast_bSuccess_49)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionEventComponent_C", "ExecuteUbergraph_MissionEventComponent");

	Params::UMissionEventComponent_C_ExecuteUbergraph_MissionEventComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue_1 = CallFunc_GetGoalManager_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetGoalManager_ReturnValue_2 = CallFunc_GetGoalManager_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_turning_off = K2Node_CustomEvent_turning_off;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetGoalManager_ReturnValue_3 = CallFunc_GetGoalManager_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_GetGoalManager_ReturnValue_4 = CallFunc_GetGoalManager_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base_1 = K2Node_DynamicCast_AsQtn_Goal_Manager_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGoalManager_ReturnValue_5 = CallFunc_GetGoalManager_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CustomEvent_selection_1 = K2Node_CustomEvent_selection_1;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_GetGoalManager_ReturnValue_6 = CallFunc_GetGoalManager_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base_2 = K2Node_DynamicCast_AsQtn_Goal_Manager_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CustomEvent_Status_effect = K2Node_CustomEvent_Status_effect;
	Parms.K2Node_CustomEvent_pawn = K2Node_CustomEvent_pawn;
	Parms.CallFunc_AddStatusEffect_ServerOnly_ReturnValue = CallFunc_AddStatusEffect_ServerOnly_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.K2Node_CustomEvent_ambrosia_1 = K2Node_CustomEvent_ambrosia_1;
	Parms.K2Node_CustomEvent_wheelbarrow = K2Node_CustomEvent_wheelbarrow;
	Parms.K2Node_CustomEvent_allow = K2Node_CustomEvent_allow;
	Parms.K2Node_CustomEvent_ambrosia = K2Node_CustomEvent_ambrosia;
	Parms.CallFunc_IsServer_ReturnValue_5 = CallFunc_IsServer_ReturnValue_5;
	Parms.K2Node_CustomEvent_dispenser_1 = K2Node_CustomEvent_dispenser_1;
	Parms.K2Node_CustomEvent_frobber = K2Node_CustomEvent_frobber;
	Parms.K2Node_CustomEvent_dispenser = K2Node_CustomEvent_dispenser;
	Parms.K2Node_CustomEvent_item_that_left = K2Node_CustomEvent_item_that_left;
	Parms.K2Node_CustomEvent_player_3 = K2Node_CustomEvent_player_3;
	Parms.CallFunc_IsServer_ReturnValue_6 = CallFunc_IsServer_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetAttribute_ReturnValue = CallFunc_GetAttribute_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CustomEvent_mag = K2Node_CustomEvent_mag;
	Parms.CallFunc_IsServer_ReturnValue_7 = CallFunc_IsServer_ReturnValue_7;
	Parms.K2Node_CustomEvent_truck = K2Node_CustomEvent_truck;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_CustomEvent_goal = K2Node_CustomEvent_goal;
	Parms.K2Node_DynamicCast_AsGoal_Base = K2Node_DynamicCast_AsGoal_Base;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_8 = CallFunc_IsServer_ReturnValue_8;
	Parms.CallFunc_IsServer_ReturnValue_9 = CallFunc_IsServer_ReturnValue_9;
	Parms.CallFunc_GetGoalManager_ReturnValue_7 = CallFunc_GetGoalManager_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Hells_Pass = K2Node_DynamicCast_AsQtn_Goal_Manager_Hells_Pass;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_CustomEvent_useThisTitle = K2Node_CustomEvent_useThisTitle;
	Parms.K2Node_CustomEvent_useThisText = K2Node_CustomEvent_useThisText;
	Parms.K2Node_CustomEvent_useSuppliedText = K2Node_CustomEvent_useSuppliedText;
	Parms.CallFunc_IsServer_ReturnValue_10 = CallFunc_IsServer_ReturnValue_10;
	Parms.CallFunc_GetGoalManager_ReturnValue_8 = CallFunc_GetGoalManager_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills = K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_CustomEvent_SceneRequestingSkip = K2Node_CustomEvent_SceneRequestingSkip;
	Parms.K2Node_CustomEvent_SceneToSkip = K2Node_CustomEvent_SceneToSkip;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_sceneToUpdate = K2Node_CustomEvent_sceneToUpdate;
	Parms.K2Node_CustomEvent_numRequesting = K2Node_CustomEvent_numRequesting;
	Parms.K2Node_CustomEvent_totalRequired = K2Node_CustomEvent_totalRequired;
	Parms.K2Node_CustomEvent_ActionTag = K2Node_CustomEvent_ActionTag;
	Parms.K2Node_CustomEvent_relevant_player = K2Node_CustomEvent_relevant_player;
	Parms.K2Node_CustomEvent_VO_1 = K2Node_CustomEvent_VO_1;
	Parms.CallFunc_GetGoalManager_ReturnValue_9 = CallFunc_GetGoalManager_ReturnValue_9;
	Parms.CallFunc_IsServer_ReturnValue_11 = CallFunc_IsServer_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_1 = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_1;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_IsServer_ReturnValue_12 = CallFunc_IsServer_ReturnValue_12;
	Parms.CallFunc_IsServer_ReturnValue_13 = CallFunc_IsServer_ReturnValue_13;
	Parms.CallFunc_GetGoalManager_ReturnValue_10 = CallFunc_GetGoalManager_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown = K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_CustomEvent_callingVendingMachine = K2Node_CustomEvent_callingVendingMachine;
	Parms.K2Node_CustomEvent_player_2 = K2Node_CustomEvent_player_2;
	Parms.CallFunc_IsServer_ReturnValue_14 = CallFunc_IsServer_ReturnValue_14;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_15 = CallFunc_IsServer_ReturnValue_15;
	Parms.K2Node_CustomEvent_fromThisPlayer = K2Node_CustomEvent_fromThisPlayer;
	Parms.K2Node_CustomEvent_body_Ready = K2Node_CustomEvent_body_Ready;
	Parms.K2Node_CustomEvent_BodyReady_1 = K2Node_CustomEvent_BodyReady_1;
	Parms.K2Node_CustomEvent_Body = K2Node_CustomEvent_Body;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_16 = CallFunc_IsServer_ReturnValue_16;
	Parms.K2Node_DynamicCast_AsMenu_Map_Exit_Widget = K2Node_DynamicCast_AsMenu_Map_Exit_Widget;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_GetGoalManager_ReturnValue_11 = CallFunc_GetGoalManager_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_1 = K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_1;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.K2Node_CustomEvent_item1 = K2Node_CustomEvent_item1;
	Parms.K2Node_CustomEvent_item2 = K2Node_CustomEvent_item2;
	Parms.K2Node_CustomEvent_item3 = K2Node_CustomEvent_item3;
	Parms.K2Node_CustomEvent_item1_Loc = K2Node_CustomEvent_item1_Loc;
	Parms.K2Node_CustomEvent_item2_Loc = K2Node_CustomEvent_item2_Loc;
	Parms.K2Node_CustomEvent_item3_Loc = K2Node_CustomEvent_item3_Loc;
	Parms.CallFunc_IsServer_ReturnValue_17 = CallFunc_IsServer_ReturnValue_17;
	Parms.CallFunc_GetGoalManager_ReturnValue_12 = CallFunc_GetGoalManager_ReturnValue_12;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_2 = K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_2;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_IsServer_ReturnValue_18 = CallFunc_IsServer_ReturnValue_18;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_IsServer_ReturnValue_19 = CallFunc_IsServer_ReturnValue_19;
	Parms.CallFunc_GetGoalManager_ReturnValue_13 = CallFunc_GetGoalManager_ReturnValue_13;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Playground_Boss = K2Node_DynamicCast_AsQtn_Goal_Manager_Playground_Boss;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_GetGoalManager_ReturnValue_14 = CallFunc_GetGoalManager_ReturnValue_14;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Playground_Boss_1 = K2Node_DynamicCast_AsQtn_Goal_Manager_Playground_Boss_1;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.K2Node_CustomEvent_BodyReady = K2Node_CustomEvent_BodyReady;
	Parms.CallFunc_IsServer_ReturnValue_20 = CallFunc_IsServer_ReturnValue_20;
	Parms.CallFunc_IsServer_ReturnValue_21 = CallFunc_IsServer_ReturnValue_21;
	Parms.CallFunc_GetGoalManager_ReturnValue_15 = CallFunc_GetGoalManager_ReturnValue_15;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_IsServer_ReturnValue_22 = CallFunc_IsServer_ReturnValue_22;
	Parms.CallFunc_GetGoalManager_ReturnValue_16 = CallFunc_GetGoalManager_ReturnValue_16;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_1 = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_1;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.CallFunc_IsServer_ReturnValue_23 = CallFunc_IsServer_ReturnValue_23;
	Parms.CallFunc_GetGoalManager_ReturnValue_17 = CallFunc_GetGoalManager_ReturnValue_17;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_2 = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_2;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.CallFunc_IsServer_ReturnValue_24 = CallFunc_IsServer_ReturnValue_24;
	Parms.CallFunc_GetGoalManager_ReturnValue_18 = CallFunc_GetGoalManager_ReturnValue_18;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_3 = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_3;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.CallFunc_IsServer_ReturnValue_25 = CallFunc_IsServer_ReturnValue_25;
	Parms.CallFunc_GetGoalManager_ReturnValue_19 = CallFunc_GetGoalManager_ReturnValue_19;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_4 = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_4;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.K2Node_CustomEvent_player_1 = K2Node_CustomEvent_player_1;
	Parms.K2Node_CustomEvent_need_loot = K2Node_CustomEvent_need_loot;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_26 = CallFunc_IsServer_ReturnValue_26;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_2 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_2;
	Parms.K2Node_DynamicCast_bSuccess_24 = K2Node_DynamicCast_bSuccess_24;
	Parms.K2Node_CustomEvent_fromThisCannon = K2Node_CustomEvent_fromThisCannon;
	Parms.K2Node_CustomEvent_notifyThisSkirmish = K2Node_CustomEvent_notifyThisSkirmish;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsInterface_Aimable_Cannon_Pawn_Stan = K2Node_DynamicCast_AsInterface_Aimable_Cannon_Pawn_Stan;
	Parms.K2Node_DynamicCast_bSuccess_25 = K2Node_DynamicCast_bSuccess_25;
	Parms.K2Node_DynamicCast_AsInterface_Aimable_Cannon_Pawn_Stan_1 = K2Node_DynamicCast_AsInterface_Aimable_Cannon_Pawn_Stan_1;
	Parms.K2Node_DynamicCast_bSuccess_26 = K2Node_DynamicCast_bSuccess_26;
	Parms.CallFunc_IsServer_ReturnValue_27 = CallFunc_IsServer_ReturnValue_27;
	Parms.CallFunc_GetMuzzle_muzzle = CallFunc_GetMuzzle_muzzle;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.K2Node_CustomEvent_TargetTransform = K2Node_CustomEvent_TargetTransform;
	Parms.K2Node_CustomEvent_SubGoal = K2Node_CustomEvent_SubGoal;
	Parms.K2Node_CustomEvent_DesiredLocations = K2Node_CustomEvent_DesiredLocations;
	Parms.CallFunc_IsServer_ReturnValue_28 = CallFunc_IsServer_ReturnValue_28;
	Parms.CallFunc_GetGoalManager_ReturnValue_20 = CallFunc_GetGoalManager_ReturnValue_20;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_3 = K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_3;
	Parms.K2Node_DynamicCast_bSuccess_27 = K2Node_DynamicCast_bSuccess_27;
	Parms.CallFunc_GetAllPlayerPawns_foundPlayerPawns = CallFunc_GetAllPlayerPawns_foundPlayerPawns;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_1 = K2Node_DynamicCast_AsBody_Pawn_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_28 = K2Node_DynamicCast_bSuccess_28;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_CustomEvent_CinematicScene = K2Node_CustomEvent_CinematicScene;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetQtnGameState_ReturnValue_2 = CallFunc_GetQtnGameState_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_3 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_3;
	Parms.K2Node_DynamicCast_bSuccess_29 = K2Node_DynamicCast_bSuccess_29;
	Parms.K2Node_CustomEvent_new_description = K2Node_CustomEvent_new_description;
	Parms.K2Node_CustomEvent_New_Goal_title = K2Node_CustomEvent_New_Goal_title;
	Parms.CallFunc_IsServer_ReturnValue_29 = CallFunc_IsServer_ReturnValue_29;
	Parms.CallFunc_GetGoalManager_ReturnValue_21 = CallFunc_GetGoalManager_ReturnValue_21;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Playground_Boss_2 = K2Node_DynamicCast_AsQtn_Goal_Manager_Playground_Boss_2;
	Parms.K2Node_DynamicCast_bSuccess_30 = K2Node_DynamicCast_bSuccess_30;
	Parms.CallFunc_IsServer_ReturnValue_30 = CallFunc_IsServer_ReturnValue_30;
	Parms.K2Node_DynamicCast_AsInterface_Stan_Boss_Battle = K2Node_DynamicCast_AsInterface_Stan_Boss_Battle;
	Parms.K2Node_DynamicCast_bSuccess_31 = K2Node_DynamicCast_bSuccess_31;
	Parms.CallFunc_GetGoalManager_ReturnValue_22 = CallFunc_GetGoalManager_ReturnValue_22;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills_1 = K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills_1;
	Parms.K2Node_DynamicCast_bSuccess_32 = K2Node_DynamicCast_bSuccess_32;
	Parms.K2Node_CustomEvent_current_training = K2Node_CustomEvent_current_training;
	Parms.K2Node_CustomEvent_reset = K2Node_CustomEvent_reset;
	Parms.K2Node_CustomEvent_VO = K2Node_CustomEvent_VO;
	Parms.CallFunc_IsServer_ReturnValue_31 = CallFunc_IsServer_ReturnValue_31;
	Parms.CallFunc_IsServer_ReturnValue_32 = CallFunc_IsServer_ReturnValue_32;
	Parms.CallFunc_GetGoalManager_ReturnValue_23 = CallFunc_GetGoalManager_ReturnValue_23;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills_2 = K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills_2;
	Parms.K2Node_DynamicCast_bSuccess_33 = K2Node_DynamicCast_bSuccess_33;
	Parms.K2Node_CustomEvent_Spokes_1 = K2Node_CustomEvent_Spokes_1;
	Parms.K2Node_CustomEvent_starting = K2Node_CustomEvent_starting;
	Parms.K2Node_CustomEvent_Teleport_to_starting = K2Node_CustomEvent_Teleport_to_starting;
	Parms.K2Node_CustomEvent_Teleport_to_Gas = K2Node_CustomEvent_Teleport_to_Gas;
	Parms.K2Node_CustomEvent_Teleport_to_Keys = K2Node_CustomEvent_Teleport_to_Keys;
	Parms.CallFunc_GetSocialHubCutsceneManager_Found_manager = CallFunc_GetSocialHubCutsceneManager_Found_manager;
	Parms.CallFunc_GetSocialHubCutsceneManager_Manager = CallFunc_GetSocialHubCutsceneManager_Manager;
	Parms.CallFunc_GetSocialHubCutsceneManager_Found_manager_1 = CallFunc_GetSocialHubCutsceneManager_Found_manager_1;
	Parms.CallFunc_GetSocialHubCutsceneManager_Manager_1 = CallFunc_GetSocialHubCutsceneManager_Manager_1;
	Parms.CallFunc_GetGoalManagerBase_NewParam = CallFunc_GetGoalManagerBase_NewParam;
	Parms.CallFunc_GetGoalManagerBase_NewParam_1 = CallFunc_GetGoalManagerBase_NewParam_1;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Sewage_Plant = K2Node_DynamicCast_AsQtn_Goal_Manager_Sewage_Plant;
	Parms.K2Node_DynamicCast_bSuccess_34 = K2Node_DynamicCast_bSuccess_34;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetCurrentValue_ReturnValue = CallFunc_GetCurrentValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_SyncLoadActorClass_ReturnValue = CallFunc_SyncLoadActorClass_ReturnValue;
	Parms.CallFunc_SpawnActor_ServerOnly_ReturnValue = CallFunc_SpawnActor_ServerOnly_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue_3 = CallFunc_GetQtnGameState_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn_1 = K2Node_DynamicCast_AsQtn_Body_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_35 = K2Node_DynamicCast_bSuccess_35;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_4 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_4;
	Parms.K2Node_DynamicCast_bSuccess_36 = K2Node_DynamicCast_bSuccess_36;
	Parms.K2Node_MakeStruct_QtnVerbRequest = K2Node_MakeStruct_QtnVerbRequest;
	Parms.CallFunc_IsServer_ReturnValue_33 = CallFunc_IsServer_ReturnValue_33;
	Parms.CallFunc_SyncLoadActorClass_ReturnValue_1 = CallFunc_SyncLoadActorClass_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsQtn_Body_Pawn = K2Node_ClassDynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue_34 = CallFunc_IsServer_ReturnValue_34;
	Parms.CallFunc_GetGoalManager_ReturnValue_24 = CallFunc_GetGoalManager_ReturnValue_24;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_5 = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_5;
	Parms.K2Node_DynamicCast_bSuccess_37 = K2Node_DynamicCast_bSuccess_37;
	Parms.CallFunc_IsServer_ReturnValue_35 = CallFunc_IsServer_ReturnValue_35;
	Parms.CallFunc_GetGoalManager_ReturnValue_25 = CallFunc_GetGoalManager_ReturnValue_25;
	Parms.K2Node_CustomEvent_SceneToEnd = K2Node_CustomEvent_SceneToEnd;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_6 = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_6;
	Parms.K2Node_DynamicCast_bSuccess_38 = K2Node_DynamicCast_bSuccess_38;
	Parms.K2Node_CustomEvent_FTUXManager = K2Node_CustomEvent_FTUXManager;
	Parms.K2Node_CustomEvent_this_player = K2Node_CustomEvent_this_player;
	Parms.CallFunc_IsServer_ReturnValue_36 = CallFunc_IsServer_ReturnValue_36;
	Parms.CallFunc_GetOccupyingPlayerPawn_ReturnValue = CallFunc_GetOccupyingPlayerPawn_ReturnValue;
	Parms.K2Node_CustomEvent_bodyEnding = K2Node_CustomEvent_bodyEnding;
	Parms.K2Node_CustomEvent_sceneActor = K2Node_CustomEvent_sceneActor;
	Parms.K2Node_CustomEvent_player = K2Node_CustomEvent_player;
	Parms.K2Node_CustomEvent_scene = K2Node_CustomEvent_scene;
	Parms.CallFunc_IsServer_ReturnValue_37 = CallFunc_IsServer_ReturnValue_37;
	Parms.K2Node_CustomEvent_orderedGoalList = K2Node_CustomEvent_orderedGoalList;
	Parms.K2Node_CustomEvent_DMP_Training_Moment = K2Node_CustomEvent_DMP_Training_Moment;
	Parms.K2Node_CustomEvent_playerWhoCompletedTraining = K2Node_CustomEvent_playerWhoCompletedTraining;
	Parms.CallFunc_IsServer_ReturnValue_38 = CallFunc_IsServer_ReturnValue_38;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_GetQtnGameState_ReturnValue_4 = CallFunc_GetQtnGameState_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_5 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_5;
	Parms.K2Node_DynamicCast_bSuccess_39 = K2Node_DynamicCast_bSuccess_39;
	Parms.CallFunc_IsServer_ReturnValue_39 = CallFunc_IsServer_ReturnValue_39;
	Parms.CallFunc_GetGoalManager_ReturnValue_26 = CallFunc_GetGoalManager_ReturnValue_26;
	Parms.K2Node_CustomEvent_CutsceneActor_1 = K2Node_CustomEvent_CutsceneActor_1;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_7 = K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX_7;
	Parms.K2Node_DynamicCast_bSuccess_40 = K2Node_DynamicCast_bSuccess_40;
	Parms.K2Node_CustomEvent_CutsceneActor = K2Node_CustomEvent_CutsceneActor;
	Parms.CallFunc_IsServer_ReturnValue_40 = CallFunc_IsServer_ReturnValue_40;
	Parms.CallFunc_GetGoalManager_ReturnValue_27 = CallFunc_GetGoalManager_ReturnValue_27;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street = K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street;
	Parms.K2Node_DynamicCast_bSuccess_41 = K2Node_DynamicCast_bSuccess_41;
	Parms.K2Node_CustomEvent_selection = K2Node_CustomEvent_selection;
	Parms.CallFunc_IsServer_ReturnValue_41 = CallFunc_IsServer_ReturnValue_41;
	Parms.CallFunc_GetGoalManager_ReturnValue_28 = CallFunc_GetGoalManager_ReturnValue_28;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_1 = K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_1;
	Parms.K2Node_DynamicCast_bSuccess_42 = K2Node_DynamicCast_bSuccess_42;
	Parms.CallFunc_IsServer_ReturnValue_42 = CallFunc_IsServer_ReturnValue_42;
	Parms.CallFunc_GetGoalManager_ReturnValue_29 = CallFunc_GetGoalManager_ReturnValue_29;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_2 = K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_2;
	Parms.K2Node_DynamicCast_bSuccess_43 = K2Node_DynamicCast_bSuccess_43;
	Parms.K2Node_CustomEvent_Slot_A_1 = K2Node_CustomEvent_Slot_A_1;
	Parms.K2Node_CustomEvent_Slot_B_1 = K2Node_CustomEvent_Slot_B_1;
	Parms.K2Node_CustomEvent_Teleport_A = K2Node_CustomEvent_Teleport_A;
	Parms.K2Node_CustomEvent_Teleport_B = K2Node_CustomEvent_Teleport_B;
	Parms.CallFunc_IsServer_ReturnValue_43 = CallFunc_IsServer_ReturnValue_43;
	Parms.CallFunc_GetGoalManager_ReturnValue_30 = CallFunc_GetGoalManager_ReturnValue_30;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_3 = K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_3;
	Parms.K2Node_DynamicCast_bSuccess_44 = K2Node_DynamicCast_bSuccess_44;
	Parms.K2Node_CustomEvent_Slot_A = K2Node_CustomEvent_Slot_A;
	Parms.K2Node_CustomEvent_Slot_B = K2Node_CustomEvent_Slot_B;
	Parms.K2Node_CustomEvent_TeleportToA = K2Node_CustomEvent_TeleportToA;
	Parms.K2Node_CustomEvent_TeleportToB = K2Node_CustomEvent_TeleportToB;
	Parms.CallFunc_IsServer_ReturnValue_44 = CallFunc_IsServer_ReturnValue_44;
	Parms.CallFunc_GetGoalManager_ReturnValue_31 = CallFunc_GetGoalManager_ReturnValue_31;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills_3 = K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills_3;
	Parms.K2Node_DynamicCast_bSuccess_45 = K2Node_DynamicCast_bSuccess_45;
	Parms.K2Node_CustomEvent_Spokes = K2Node_CustomEvent_Spokes;
	Parms.K2Node_CustomEvent_BonusZone = K2Node_CustomEvent_BonusZone;
	Parms.K2Node_CustomEvent_TeleportToFeat = K2Node_CustomEvent_TeleportToFeat;
	Parms.K2Node_CustomEvent_TeleportToBonus = K2Node_CustomEvent_TeleportToBonus;
	Parms.CallFunc_GetGoalManager_ReturnValue_32 = CallFunc_GetGoalManager_ReturnValue_32;
	Parms.K2Node_CustomEvent_AmbushAGas = K2Node_CustomEvent_AmbushAGas;
	Parms.K2Node_CustomEvent_AmbushBKeys = K2Node_CustomEvent_AmbushBKeys;
	Parms.K2Node_CustomEvent_Teleport = K2Node_CustomEvent_Teleport;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_4 = K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown_4;
	Parms.K2Node_DynamicCast_bSuccess_46 = K2Node_DynamicCast_bSuccess_46;
	Parms.CallFunc_IsServer_ReturnValue_45 = CallFunc_IsServer_ReturnValue_45;
	Parms.CallFunc_GetGoalManager_ReturnValue_33 = CallFunc_GetGoalManager_ReturnValue_33;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_2 = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_2;
	Parms.K2Node_DynamicCast_bSuccess_47 = K2Node_DynamicCast_bSuccess_47;
	Parms.CallFunc_GetGoalManager_ReturnValue_34 = CallFunc_GetGoalManager_ReturnValue_34;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_3 = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_3;
	Parms.K2Node_DynamicCast_bSuccess_48 = K2Node_DynamicCast_bSuccess_48;
	Parms.CallFunc_IsServer_ReturnValue_46 = CallFunc_IsServer_ReturnValue_46;
	Parms.CallFunc_GetQtnGameState_ReturnValue_5 = CallFunc_GetQtnGameState_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_6 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_6;
	Parms.K2Node_DynamicCast_bSuccess_49 = K2Node_DynamicCast_bSuccess_49;

	UObject::ProcessEvent(Func, &Parms);

}

}


