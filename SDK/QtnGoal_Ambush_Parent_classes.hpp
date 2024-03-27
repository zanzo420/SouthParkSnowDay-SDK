#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE3 (0x3C3 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_Ambush_Parent.QtnGoal_Ambush_Parent_C
class UQtnGoal_Ambush_Parent_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ATravelVolume_BP_C*                    ExitGate;                                          // 0x2E8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  GoalDetail_Travel;                                 // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_Arc1CombatAnnouncement_Cartman;                 // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_MarshwalkerCombatAnnouncement_Cartman;          // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_MarshwalkerCombatAnnouncement_Butters;          // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_DarkArmyCombatAnnouncement_Butters;             // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_DarkArmyCombatAnnouncement_Cartman;             // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_Outro_Elf_Cartman;                              // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABodyPawnPlayer_C*>             R_listOfUpgradedPlayers;                           // 0x368(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	TArray<class ABodyPawnPlayer_C*>             HoldingArray;                                      // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         R_upgradeDone;                                     // 0x388(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_5D11[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalDetail_Starks_DropGas;                         // 0x390(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalDetail_Starks_DropKeys;                        // 0x3A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         R_StarksDroppedGas;                                // 0x3C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         R_StarksDroppedKeys;                               // 0x3C1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         InStarks;                                          // 0x3C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UQtnGoal_Ambush_Parent_C* GetDefaultObj();

	void Reconcile_Gate_Status_with_All_Items_Server_Only(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void Starks_Item_Status_Change_Server_Only(bool DroppedGas, bool DroppedKeys, bool PickedUpGas, bool PickedUpKeys, bool CallFunc_IsServer_ReturnValue);
	void Check_For_Goal_End_On_Item_Pickup_Server_Only(bool CallFunc_IsServer_ReturnValue);
	void OnRep_r_StarksDroppedKeys();
	void OnRep_r_StarksDroppedItem();
	void LOCAL_Starks_DroppedItem();
	void OnRep_r_listOfUpgradedPlayers();
	void OnRep_r_upgradeDone();
	void LOCAL_UITextUpdate();
	void GetExitGate_ServerOnly(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue);
	void LOCAL_UpgradeInstructions(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
	void VO_Combat_Outro_Events_Server_Only(bool CallFunc_IsServer_ReturnValue);
	void VO_Outro_Server_Only(bool CallFunc_IsServer_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentArc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void VO_Play_Combat_Intro_Server_Only(bool CallFunc_RandomBool_ReturnValue, bool CallFunc_RandomBool_ReturnValue_1, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentArc_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void End_Sequence_Parent(bool CallFunc_IsServer_ReturnValue);
	void DEBUGONLY_Start_Goal();
	void RegisterProgressPin(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void DEBUGONLY_EndGoal();
	void SaveGoalAsSeen(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess);
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void RegisterJimmyFrobRejectionOnSpokeArrival_ServerOnly();
	void VO_delayAndOutro_ServerOnly();
	void ExecuteUbergraph_QtnGoal_Ambush_Parent(int32 EntryPoint, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2);
};

}


