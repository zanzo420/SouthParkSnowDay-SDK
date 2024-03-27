#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C
// (None)

class UClass* UQtnGoal_Ambush_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoal_Ambush_Parent_C");

	return Clss;
}


// QtnGoal_Ambush_Parent_C QtnGoal_Ambush_Parent.Default__QtnGoal_Ambush_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoal_Ambush_Parent_C* UQtnGoal_Ambush_Parent_C::GetDefaultObj()
{
	static class UQtnGoal_Ambush_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoal_Ambush_Parent_C*>(UQtnGoal_Ambush_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.Reconcile Gate Status with All Items Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Ambush_Parent_C::Reconcile_Gate_Status_with_All_Items_Server_Only(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "Reconcile Gate Status with All Items Server Only");

	Params::UQtnGoal_Ambush_Parent_C_Reconcile_Gate_Status_with_All_Items_Server_Only_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.Starks Item Status Change Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DroppedGas                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DroppedKeys                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PickedUpGas                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PickedUpKeys                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Ambush_Parent_C::Starks_Item_Status_Change_Server_Only(bool DroppedGas, bool DroppedKeys, bool PickedUpGas, bool PickedUpKeys, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "Starks Item Status Change Server Only");

	Params::UQtnGoal_Ambush_Parent_C_Starks_Item_Status_Change_Server_Only_Params Parms{};

	Parms.DroppedGas = DroppedGas;
	Parms.DroppedKeys = DroppedKeys;
	Parms.PickedUpGas = PickedUpGas;
	Parms.PickedUpKeys = PickedUpKeys;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.Check For Goal End On Item Pickup Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Ambush_Parent_C::Check_For_Goal_End_On_Item_Pickup_Server_Only(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "Check For Goal End On Item Pickup Server Only");

	Params::UQtnGoal_Ambush_Parent_C_Check_For_Goal_End_On_Item_Pickup_Server_Only_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.OnRep_r_StarksDroppedKeys
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Ambush_Parent_C::OnRep_r_StarksDroppedKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "OnRep_r_StarksDroppedKeys");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.OnRep_r_StarksDroppedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Ambush_Parent_C::OnRep_r_StarksDroppedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "OnRep_r_StarksDroppedItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.LOCAL_Starks_DroppedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Ambush_Parent_C::LOCAL_Starks_DroppedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "LOCAL_Starks_DroppedItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.OnRep_r_listOfUpgradedPlayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Ambush_Parent_C::OnRep_r_listOfUpgradedPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "OnRep_r_listOfUpgradedPlayers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.OnRep_r_upgradeDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Ambush_Parent_C::OnRep_r_upgradeDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "OnRep_r_upgradeDone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.LOCAL_UITextUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Ambush_Parent_C::LOCAL_UITextUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "LOCAL_UITextUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.GetExitGate_ServerOnly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATravelVolume_BP_C*          K2Node_DynamicCast_AsTravel_Volume_BP                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Ambush_Parent_C::GetExitGate_ServerOnly(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "GetExitGate_ServerOnly");

	Params::UQtnGoal_Ambush_Parent_C_GetExitGate_ServerOnly_Params Parms{};

	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsTravel_Volume_BP = K2Node_DynamicCast_AsTravel_Volume_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.LOCAL_UpgradeInstructions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Ambush_Parent_C::LOCAL_UpgradeInstructions(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "LOCAL_UpgradeInstructions");

	Params::UQtnGoal_Ambush_Parent_C_LOCAL_UpgradeInstructions_Params Parms{};

	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.VO Combat Outro Events Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Ambush_Parent_C::VO_Combat_Outro_Events_Server_Only(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "VO Combat Outro Events Server Only");

	Params::UQtnGoal_Ambush_Parent_C_VO_Combat_Outro_Events_Server_Only_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.VO Outro Server Only
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Ambush_Parent_C::VO_Outro_Server_Only(bool CallFunc_IsServer_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentArc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "VO Outro Server Only");

	Params::UQtnGoal_Ambush_Parent_C_VO_Outro_Server_Only_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.VO Play Combat Intro Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBool_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Ambush_Parent_C::VO_Play_Combat_Intro_Server_Only(bool CallFunc_RandomBool_ReturnValue, bool CallFunc_RandomBool_ReturnValue_1, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentArc_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "VO Play Combat Intro Server Only");

	Params::UQtnGoal_Ambush_Parent_C_VO_Play_Combat_Intro_Server_Only_Params Parms{};

	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.CallFunc_RandomBool_ReturnValue_1 = CallFunc_RandomBool_ReturnValue_1;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.End Sequence Parent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Ambush_Parent_C::End_Sequence_Parent(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "End Sequence Parent");

	Params::UQtnGoal_Ambush_Parent_C_End_Sequence_Parent_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.DEBUGONLY Start Goal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Ambush_Parent_C::DEBUGONLY_Start_Goal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "DEBUGONLY Start Goal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.RegisterProgressPin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager_MainStreet_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Ambush_Parent_C::RegisterProgressPin(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "RegisterProgressPin");

	Params::UQtnGoal_Ambush_Parent_C_RegisterProgressPin_Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street = K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.DEBUGONLY_EndGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Ambush_Parent_C::DEBUGONLY_EndGoal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "DEBUGONLY_EndGoal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.SaveGoalAsSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Ambush_Parent_C::SaveGoalAsSeen(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "SaveGoalAsSeen");

	Params::UQtnGoal_Ambush_Parent_C_SaveGoalAsSeen_Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.OnGoalStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               WillEndImmediatelyFromLateJoin                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Ambush_Parent_C::OnGoalStart(bool WillEndImmediatelyFromLateJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "OnGoalStart");

	Params::UQtnGoal_Ambush_Parent_C_OnGoalStart_Params Parms{};

	Parms.WillEndImmediatelyFromLateJoin = WillEndImmediatelyFromLateJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.RegisterJimmyFrobRejectionOnSpokeArrival_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Ambush_Parent_C::RegisterJimmyFrobRejectionOnSpokeArrival_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "RegisterJimmyFrobRejectionOnSpokeArrival_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.VO_delayAndOutro_ServerOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_Ambush_Parent_C::VO_delayAndOutro_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "VO_delayAndOutro_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C.ExecuteUbergraph_QtnGoal_Ambush_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_willEndImmediatelyFromLateJoin                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_Ambush_Parent_C::ExecuteUbergraph_QtnGoal_Ambush_Parent(int32 EntryPoint, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_Ambush_Parent_C", "ExecuteUbergraph_QtnGoal_Ambush_Parent");

	Params::UQtnGoal_Ambush_Parent_C_ExecuteUbergraph_QtnGoal_Ambush_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_willEndImmediatelyFromLateJoin = K2Node_Event_willEndImmediatelyFromLateJoin;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsObjectOfType_outputPin_1 = CallFunc_IsObjectOfType_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


