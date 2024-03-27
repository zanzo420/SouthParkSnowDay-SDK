#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C
// (None)

class UClass* UQtnGoal_SingleCombatDelayedStart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoal_SingleCombatDelayedStart_C");

	return Clss;
}


// QtnGoal_SingleCombatDelayedStart_C QtnGoal_SingleCombatDelayedStart.Default__QtnGoal_SingleCombatDelayedStart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoal_SingleCombatDelayedStart_C* UQtnGoal_SingleCombatDelayedStart_C::GetDefaultObj()
{
	static class UQtnGoal_SingleCombatDelayedStart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoal_SingleCombatDelayedStart_C*>(UQtnGoal_SingleCombatDelayedStart_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.DoGetEntranceGate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          EntranceGate                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SingleCombatDelayedStart_C::DoGetEntranceGate(class ATravelVolume_BP_C** EntranceGate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "DoGetEntranceGate");

	Params::UQtnGoal_SingleCombatDelayedStart_C_DoGetEntranceGate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntranceGate != nullptr)
		*EntranceGate = Parms.EntranceGate;

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.DoGetLateJoinTeleportLoc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DeadPlayerTeleportLoc_C* LateJoinTeleportLoc                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SingleCombatDelayedStart_C::DoGetLateJoinTeleportLoc(class ABP_DeadPlayerTeleportLoc_C** LateJoinTeleportLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "DoGetLateJoinTeleportLoc");

	Params::UQtnGoal_SingleCombatDelayedStart_C_DoGetLateJoinTeleportLoc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LateJoinTeleportLoc != nullptr)
		*LateJoinTeleportLoc = Parms.LateJoinTeleportLoc;

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.Local_UpdateGateHUDText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::Local_UpdateGateHUDText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "Local_UpdateGateHUDText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.UpdateExitGate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SingleCombatDelayedStart_C::UpdateExitGate(bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "UpdateExitGate");

	Params::UQtnGoal_SingleCombatDelayedStart_C_UpdateExitGate_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.StopJokerFTUX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SingleCombatDelayedStart_C::StopJokerFTUX(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "StopJokerFTUX");

	Params::UQtnGoal_SingleCombatDelayedStart_C_StopJokerFTUX_Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.OnRep_useParentText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::OnRep_useParentText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "OnRep_useParentText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.SaveGoalAsSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFTUXDataBag_C*              CallFunc_GetCustomDataBag_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SingleCombatDelayedStart_C::SaveGoalAsSeen(class UClass* CallFunc_GetObjectClass_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "SaveGoalAsSeen");

	Params::UQtnGoal_SingleCombatDelayedStart_C_SaveGoalAsSeen_Params Parms{};

	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.CallFunc_GetCustomDataBag_ReturnValue = CallFunc_GetCustomDataBag_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.VO LOCAL Player FTUXBSUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::VO_LOCAL_Player_FTUXBSUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "VO LOCAL Player FTUXBSUse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.Check For Joker Upgrade At Exit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUpgradeStation_Henrietta_BP_C*K2Node_DynamicCast_AsUpgrade_Station_Henrietta_BP                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SingleCombatDelayedStart_C::Check_For_Joker_Upgrade_At_Exit(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AUpgradeStation_Henrietta_BP_C* K2Node_DynamicCast_AsUpgrade_Station_Henrietta_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "Check For Joker Upgrade At Exit");

	Params::UQtnGoal_SingleCombatDelayedStart_C_Check_For_Joker_Upgrade_At_Exit_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsUpgrade_Station_Henrietta_BP = K2Node_DynamicCast_AsUpgrade_Station_Henrietta_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.DEBUGONLY Start Goal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SingleCombatDelayedStart_C::DEBUGONLY_Start_Goal(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "DEBUGONLY Start Goal");

	Params::UQtnGoal_SingleCombatDelayedStart_C_DEBUGONLY_Start_Goal_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.DEBUGONLY_EndGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::DEBUGONLY_EndGoal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "DEBUGONLY_EndGoal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.unregisterPreviousGoalUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_SP_Day1_FindRandy_C*K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Find_Randy                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SingleCombatDelayedStart_C::UnregisterPreviousGoalUI(bool CallFunc_IsOnServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, class UQtnGoal_SP_Day1_FindRandy_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Find_Randy, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "unregisterPreviousGoalUI");

	Params::UQtnGoal_SingleCombatDelayedStart_C_UnregisterPreviousGoalUI_Params Parms{};

	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Find_Randy = K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Find_Randy;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.GetEntranceGate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATravelVolume_BP_C*          K2Node_DynamicCast_AsTravel_Volume_BP                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SingleCombatDelayedStart_C::GetEntranceGate(class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "GetEntranceGate");

	Params::UQtnGoal_SingleCombatDelayedStart_C_GetEntranceGate_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsTravel_Volume_BP = K2Node_DynamicCast_AsTravel_Volume_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.OnRep_combatReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::OnRep_combatReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "OnRep_combatReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.OnRep_upgradeDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::OnRep_upgradeDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "OnRep_upgradeDone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.OnRep_skirmishDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::OnRep_skirmishDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "OnRep_skirmishDone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.getExitGate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Find_Marked_Actors_Server_Only_foundActors              (ReferenceParm)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATravelVolume_BP_C*          K2Node_DynamicCast_AsTravel_Volume_BP                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SingleCombatDelayedStart_C::GetExitGate(class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsOnServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "getExitGate");

	Params::UQtnGoal_SingleCombatDelayedStart_C_GetExitGate_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Find_Marked_Actors_Server_Only_foundActors = CallFunc_Find_Marked_Actors_Server_Only_foundActors;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsTravel_Volume_BP = K2Node_DynamicCast_AsTravel_Volume_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.OnRep_UpgradedPlayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::OnRep_UpgradedPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "OnRep_UpgradedPlayers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.LOCAL_UITextUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager_StarksPond_C*K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoal_SP_Day1_FindRandy_C*K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Find_Randy                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetLocalTextDuringUpgrade_text_to_show                  (None)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SingleCombatDelayedStart_C::LOCAL_UITextUpdate(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, class UQtnGoal_SP_Day1_FindRandy_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Find_Randy, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_GetLocalTextDuringUpgrade_text_to_show, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "LOCAL_UITextUpdate");

	Params::UQtnGoal_SingleCombatDelayedStart_C_LOCAL_UITextUpdate_Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond = K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Find_Randy = K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Find_Randy;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetLocalTextDuringUpgrade_text_to_show = CallFunc_GetLocalTextDuringUpgrade_text_to_show;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.Receive Skirmish Notify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                Skirmish_Sending_Event                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Final_skirmish_action                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Action_Tag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SingleCombatDelayedStart_C::Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "Receive Skirmish Notify");

	Params::UQtnGoal_SingleCombatDelayedStart_C_Receive_Skirmish_Notify_Params Parms{};

	Parms.Skirmish_Sending_Event = Skirmish_Sending_Event;
	Parms.Final_skirmish_action = Final_skirmish_action;
	Parms.Action_Tag = Action_Tag;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.OnGoalStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               WillEndImmediatelyFromLateJoin                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SingleCombatDelayedStart_C::OnGoalStart(bool WillEndImmediatelyFromLateJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "OnGoalStart");

	Params::UQtnGoal_SingleCombatDelayedStart_C_OnGoalStart_Params Parms{};

	Parms.WillEndImmediatelyFromLateJoin = WillEndImmediatelyFromLateJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.OnGoalSpawned_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::OnGoalSpawned_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "OnGoalSpawned_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.updateThisPlayerUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           Player_who_upgraded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SingleCombatDelayedStart_C::UpdateThisPlayerUI(class ABodyPawnPlayer_C* Player_who_upgraded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "updateThisPlayerUI");

	Params::UQtnGoal_SingleCombatDelayedStart_C_UpdateThisPlayerUI_Params Parms{};

	Parms.Player_who_upgraded = Player_who_upgraded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.upgradeStationSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUpgradeStation_BP_C*        Upgrade_Station                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SingleCombatDelayedStart_C::UpgradeStationSpawned(class AUpgradeStation_BP_C* Upgrade_Station)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "upgradeStationSpawned");

	Params::UQtnGoal_SingleCombatDelayedStart_C_UpgradeStationSpawned_Params Parms{};

	Parms.Upgrade_Station = Upgrade_Station;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.allPlayersUpgraded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::AllPlayersUpgraded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "allPlayersUpgraded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.DelayedStartSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::DelayedStartSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "DelayedStartSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.PlayersLeftSpoke
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          From_this_volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SingleCombatDelayedStart_C::PlayersLeftSpoke(class ATravelVolume_BP_C* From_this_volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "PlayersLeftSpoke");

	Params::UQtnGoal_SingleCombatDelayedStart_C_PlayersLeftSpoke_Params Parms{};

	Parms.From_this_volume = From_this_volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.unbindGateEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::UnbindGateEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "unbindGateEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.bindEntranceGateEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          Gate                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SingleCombatDelayedStart_C::bindEntranceGateEvents(class ATravelVolume_BP_C* Gate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "bindEntranceGateEvents");

	Params::UQtnGoal_SingleCombatDelayedStart_C_bindEntranceGateEvents_Params Parms{};

	Parms.Gate = Gate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.onTravel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          From_this_volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SingleCombatDelayedStart_C::OnTravel(class ATravelVolume_BP_C* From_this_volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "onTravel");

	Params::UQtnGoal_SingleCombatDelayedStart_C_OnTravel_Params Parms{};

	Parms.From_this_volume = From_this_volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.multicast_UpdateText
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::Multicast_UpdateText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "multicast_UpdateText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.PlayerLeftWorld
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SingleCombatDelayedStart_C::PlayerLeftWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "PlayerLeftWorld");

	Params::UQtnGoal_SingleCombatDelayedStart_C_PlayerLeftWorld_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.multicast_LOCALPlayReminderBSVO
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::Multicast_LOCALPlayReminderBSVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "multicast_LOCALPlayReminderBSVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.multicast_LocalPlayFTUXBSIgnore
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::Multicast_LocalPlayFTUXBSIgnore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "multicast_LocalPlayFTUXBSIgnore");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.onBSUse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::OnBSUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "onBSUse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.multicast_RefreshText
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::Multicast_RefreshText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "multicast_RefreshText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.ExecuteUbergraph_QtnGoal_SingleCombatDelayedStart
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_willEndImmediatelyFromLateJoin                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_CustomEvent_player_who_upgraded                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUpgradeStation_BP_C*        K2Node_CustomEvent_upgrade_Station                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATravelVolume_BP_C*          K2Node_CustomEvent_from_this_volume_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATravelVolume_BP_C*          K2Node_CustomEvent_gate                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATravelVolume_BP_C*          K2Node_CustomEvent_from_this_volume                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul                                (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UQtnVerb*>            CallFunc_GetAllEquippedVerbs_pawnVerbs                           (ReferenceParm, ContainsInstancedReference)
// class UQtnVerb*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtn_CheatVerb_Archetype_C*  K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)

void UQtnGoal_SingleCombatDelayedStart_C::ExecuteUbergraph_QtnGoal_SingleCombatDelayedStart(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_CustomEvent_player_who_upgraded, bool CallFunc_IsValid_ReturnValue_2, class AUpgradeStation_BP_C* K2Node_CustomEvent_upgrade_Station, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsOnServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Array_AddUnique_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsOnServer_ReturnValue_2, bool CallFunc_IsOnServer_ReturnValue_3, class ATravelVolume_BP_C* K2Node_CustomEvent_from_this_volume_1, bool CallFunc_IsOnServer_ReturnValue_4, bool CallFunc_IsOnServer_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class ATravelVolume_BP_C* K2Node_CustomEvent_gate, bool CallFunc_IsOnServer_ReturnValue_6, class ATravelVolume_BP_C* K2Node_CustomEvent_from_this_volume, bool CallFunc_IsOnServer_ReturnValue_7, bool CallFunc_IsServer_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_2, TArray<class UQtnVerb*>& CallFunc_GetAllEquippedVerbs_pawnVerbs, class UQtnVerb* CallFunc_Array_Get_Item, class UQtn_CheatVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_1, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_1, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_1, bool CallFunc_GetLocalPlayerInformation_isHosting_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_1, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_BooleanAND_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_4, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_2, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "ExecuteUbergraph_QtnGoal_SingleCombatDelayedStart");

	Params::UQtnGoal_SingleCombatDelayedStart_C_ExecuteUbergraph_QtnGoal_SingleCombatDelayedStart_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_willEndImmediatelyFromLateJoin = K2Node_Event_willEndImmediatelyFromLateJoin;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_player_who_upgraded = K2Node_CustomEvent_player_who_upgraded;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_upgrade_Station = K2Node_CustomEvent_upgrade_Station;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_IsOnServer_ReturnValue_1 = CallFunc_IsOnServer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsOnServer_ReturnValue_2 = CallFunc_IsOnServer_ReturnValue_2;
	Parms.CallFunc_IsOnServer_ReturnValue_3 = CallFunc_IsOnServer_ReturnValue_3;
	Parms.K2Node_CustomEvent_from_this_volume_1 = K2Node_CustomEvent_from_this_volume_1;
	Parms.CallFunc_IsOnServer_ReturnValue_4 = CallFunc_IsOnServer_ReturnValue_4;
	Parms.CallFunc_IsOnServer_ReturnValue_5 = CallFunc_IsOnServer_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_gate = K2Node_CustomEvent_gate;
	Parms.CallFunc_IsOnServer_ReturnValue_6 = CallFunc_IsOnServer_ReturnValue_6;
	Parms.K2Node_CustomEvent_from_this_volume = K2Node_CustomEvent_from_this_volume;
	Parms.CallFunc_IsOnServer_ReturnValue_7 = CallFunc_IsOnServer_ReturnValue_7;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_CustomEvent_playerPawnSoul = K2Node_CustomEvent_playerPawnSoul;
	Parms.K2Node_CustomEvent_occupiedBodyPawn = K2Node_CustomEvent_occupiedBodyPawn;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded = CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetAllEquippedVerbs_pawnVerbs = CallFunc_GetAllEquippedVerbs_pawnVerbs;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype = K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1 = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn_1 = CallFunc_GetLocalPlayerInformation_playerPawn_1;
	Parms.CallFunc_GetLocalPlayerInformation_playerController_1 = CallFunc_GetLocalPlayerInformation_playerController_1;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI_1 = CallFunc_GetLocalPlayerInformation_playerUI_1;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState_1 = CallFunc_GetLocalPlayerInformation_qtnPlayerState_1;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting_1 = CallFunc_GetLocalPlayerInformation_isHosting_1;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin_1 = CallFunc_GetLocalPlayerInformation_outputPin_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_1 = K2Node_DynamicCast_AsBody_Pawn_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_2 = K2Node_DynamicCast_AsBody_Pawn_Player_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C.JokerFTUX_GoalEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SingleCombatDelayedStart_C::JokerFTUX_GoalEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SingleCombatDelayedStart_C", "JokerFTUX_GoalEnded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


