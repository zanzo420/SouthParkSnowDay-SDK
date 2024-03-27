#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C
// (None)

class UClass* UQtnGoal_SP_Day1_CE_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoal_SP_Day1_CE_Parent_C");

	return Clss;
}


// QtnGoal_SP_Day1_CE_Parent_C QtnGoal_SP_Day1_CE_Parent.Default__QtnGoal_SP_Day1_CE_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoal_SP_Day1_CE_Parent_C* UQtnGoal_SP_Day1_CE_Parent_C::GetDefaultObj()
{
	static class UQtnGoal_SP_Day1_CE_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoal_SP_Day1_CE_Parent_C*>(UQtnGoal_SP_Day1_CE_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.DoGetLateJoinTeleportLoc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DeadPlayerTeleportLoc_C* LateJoinTeleportLoc                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SP_Day1_CE_Parent_C::DoGetLateJoinTeleportLoc(class ABP_DeadPlayerTeleportLoc_C** LateJoinTeleportLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "DoGetLateJoinTeleportLoc");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_DoGetLateJoinTeleportLoc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LateJoinTeleportLoc != nullptr)
		*LateJoinTeleportLoc = Parms.LateJoinTeleportLoc;

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.DoGetDefaultLateJoinLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DeadPlayerTeleportLoc_C* DefaultLateJoinLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SP_Day1_CE_Parent_C::DoGetDefaultLateJoinLocation(class ABP_DeadPlayerTeleportLoc_C** DefaultLateJoinLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "DoGetDefaultLateJoinLocation");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_DoGetDefaultLateJoinLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DefaultLateJoinLocation != nullptr)
		*DefaultLateJoinLocation = Parms.DefaultLateJoinLocation;

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.DoGetExitGate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          ExitGate                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SP_Day1_CE_Parent_C::DoGetExitGate(class ATravelVolume_BP_C** ExitGate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "DoGetExitGate");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_DoGetExitGate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExitGate != nullptr)
		*ExitGate = Parms.ExitGate;

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.DoGetEntranceDestination
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DeadPlayerTeleportLoc_C* EntranceDestination                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SP_Day1_CE_Parent_C::DoGetEntranceDestination(class ABP_DeadPlayerTeleportLoc_C** EntranceDestination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "DoGetEntranceDestination");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_DoGetEntranceDestination_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntranceDestination != nullptr)
		*EntranceDestination = Parms.EntranceDestination;

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.Local_StarksDroppedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_CE_Parent_C::Local_StarksDroppedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "Local_StarksDroppedItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.Check For Goal End On Item Pickup Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_CE_Parent_C::Check_For_Goal_End_On_Item_Pickup_Server_Only(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "Check For Goal End On Item Pickup Server Only");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_Check_For_Goal_End_On_Item_Pickup_Server_Only_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.Reconcile Gate Status with All Items Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_CE_Parent_C::Reconcile_Gate_Status_with_All_Items_Server_Only(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "Reconcile Gate Status with All Items Server Only");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_Reconcile_Gate_Status_with_All_Items_Server_Only_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.OnRep_r_StarksDroppedKeys
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_CE_Parent_C::OnRep_r_StarksDroppedKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "OnRep_r_StarksDroppedKeys");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.OnRep_r_StarksDroppedGas
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_CE_Parent_C::OnRep_r_StarksDroppedGas()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "OnRep_r_StarksDroppedGas");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.Starks Item Status Change Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Dropped_Gas                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Dropped_Keys                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Picked_Up_Gas                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Picked_Up_Keys                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_CE_Parent_C::Starks_Item_Status_Change_Server_Only(bool Dropped_Gas, bool Dropped_Keys, bool Picked_Up_Gas, bool Picked_Up_Keys, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "Starks Item Status Change Server Only");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_Starks_Item_Status_Change_Server_Only_Params Parms{};

	Parms.Dropped_Gas = Dropped_Gas;
	Parms.Dropped_Keys = Dropped_Keys;
	Parms.Picked_Up_Gas = Picked_Up_Gas;
	Parms.Picked_Up_Keys = Picked_Up_Keys;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.Get Default Late Join Location
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_CE_Parent_C::Get_Default_Late_Join_Location()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "Get Default Late Join Location");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.getFTUXManager
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFTUXManager_C*              K2Node_DynamicCast_AsFTUXManager                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_CE_Parent_C::GetFTUXManager(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AFTUXManager_C* K2Node_DynamicCast_AsFTUXManager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "getFTUXManager");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_GetFTUXManager_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFTUXManager = K2Node_DynamicCast_AsFTUXManager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.VO_CheckForEntryVO
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_SP_Day1_CE_Crossroad_C*K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Crossroad              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_CE_Parent_C::VO_CheckForEntryVO(const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnGoal_SP_Day1_CE_Crossroad_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Crossroad, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "VO_CheckForEntryVO");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_VO_CheckForEntryVO_Params Parms{};

	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Crossroad = K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Crossroad;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.SaveGoalAsSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_CE_Parent_C::SaveGoalAsSeen(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "SaveGoalAsSeen");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_SaveGoalAsSeen_Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.DEBUGONLY Start Goal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_CE_Parent_C::DEBUGONLY_Start_Goal(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "DEBUGONLY Start Goal");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_DEBUGONLY_Start_Goal_Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.UpdateUIText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_CE_Parent_C::UpdateUIText(bool CallFunc_BooleanOR_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "UpdateUIText");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_UpdateUIText_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin = CallFunc_GetLocalPlayerOriginalBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.OnRep_listOfUpgradedPlayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_CE_Parent_C::OnRep_listOfUpgradedPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "OnRep_listOfUpgradedPlayers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.getEntranceDestination
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DeadPlayerTeleportLoc_C* K2Node_DynamicCast_AsBP_Dead_Player_Teleport_Loc                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_CE_Parent_C::GetEntranceDestination(bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_DeadPlayerTeleportLoc_C* K2Node_DynamicCast_AsBP_Dead_Player_Teleport_Loc, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "getEntranceDestination");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_GetEntranceDestination_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Dead_Player_Teleport_Loc = K2Node_DynamicCast_AsBP_Dead_Player_Teleport_Loc;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.getExitGate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATravelVolume_BP_C*          K2Node_DynamicCast_AsTravel_Volume_BP                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_CE_Parent_C::GetExitGate(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "getExitGate");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_GetExitGate_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsTravel_Volume_BP = K2Node_DynamicCast_AsTravel_Volume_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.Receive Skirmish Notify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                Skirmish_Sending_Event                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Final_skirmish_action                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Action_Tag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_CE_Parent_C::Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "Receive Skirmish Notify");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_Receive_Skirmish_Notify_Params Parms{};

	Parms.Skirmish_Sending_Event = Skirmish_Sending_Event;
	Parms.Final_skirmish_action = Final_skirmish_action;
	Parms.Action_Tag = Action_Tag;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.OnGoalSpawned_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_CE_Parent_C::OnGoalSpawned_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "OnGoalSpawned_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.OnGoalStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               WillEndImmediatelyFromLateJoin                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_CE_Parent_C::OnGoalStart(bool WillEndImmediatelyFromLateJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "OnGoalStart");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_OnGoalStart_Params Parms{};

	Parms.WillEndImmediatelyFromLateJoin = WillEndImmediatelyFromLateJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.updateThisPlayerUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Player_who_upgraded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SP_Day1_CE_Parent_C::UpdateThisPlayerUI(class ABodyPawnPlayer_C* Player_who_upgraded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "updateThisPlayerUI");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_UpdateThisPlayerUI_Params Parms{};

	Parms.Player_who_upgraded = Player_who_upgraded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUpgradeStation_BP_C*        Upgrade_Station                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SP_Day1_CE_Parent_C::CustomEvent(class AUpgradeStation_BP_C* Upgrade_Station)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "CustomEvent");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_CustomEvent_Params Parms{};

	Parms.Upgrade_Station = Upgrade_Station;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.ExecuteUbergraph_QtnGoal_SP_Day1_CE_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_willEndImmediatelyFromLateJoin                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_player_who_upgraded                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUpgradeStation_BP_C*        K2Node_CustomEvent_upgrade_Station                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASkirmishBase_C*             K2Node_DynamicCast_AsSkirmish_Base                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UQtnGoal_SP_Day1_CE_Parent_C::ExecuteUbergraph_QtnGoal_SP_Day1_CE_Parent(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABodyPawnPlayer_C* K2Node_CustomEvent_player_who_upgraded, class AUpgradeStation_BP_C* K2Node_CustomEvent_upgrade_Station, bool CallFunc_IsValid_ReturnValue_1, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsOnServer_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Parent_C", "ExecuteUbergraph_QtnGoal_SP_Day1_CE_Parent");

	Params::UQtnGoal_SP_Day1_CE_Parent_C_ExecuteUbergraph_QtnGoal_SP_Day1_CE_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_willEndImmediatelyFromLateJoin = K2Node_Event_willEndImmediatelyFromLateJoin;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_player_who_upgraded = K2Node_CustomEvent_player_who_upgraded;
	Parms.K2Node_CustomEvent_upgrade_Station = K2Node_CustomEvent_upgrade_Station;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSkirmish_Base = K2Node_DynamicCast_AsSkirmish_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsOnServer_ReturnValue_1 = CallFunc_IsOnServer_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


