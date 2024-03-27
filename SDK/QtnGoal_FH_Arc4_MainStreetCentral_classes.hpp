#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x190 (0x470 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_FH_Arc4_MainStreetCentral.QtnGoal_FH_Arc4_MainStreetCentral_C
class UQtnGoal_FH_Arc4_MainStreetCentral_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ATravelVolume_BP_C*                    ExitGate;                                          // 0x2E8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATargetLocationVolume_C*               TargetVolume;                                      // 0x2F0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayersInLocalMap;                                 // 0x2F8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnSkirmish*                          CatapultSkirmish;                                  // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABodyPawnPlayer_C*>             HoldingArray;                                      // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ABodyPawnPlayer_C*>             ListOfUpgradedPlayers;                             // 0x318(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	class FText                                  GoalDetail_Ready;                                  // 0x328(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_Default;                                // 0x340(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_Fight;                                  // 0x358(0x18)(Edit, BlueprintVisible)
	bool                                         CombatOver;                                        // 0x370(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         CombatStarted;                                     // 0x371(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_1A7E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATargetLocationVolume_C*               CombatEntranceVolume;                              // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALocationMarker_BP_C*                  QuestMarker;                                       // 0x380(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  GoalTitle_PreGoal;                                 // 0x388(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_PreGoal;                                // 0x3A0(0x18)(Edit, BlueprintVisible)
	bool                                         PlayersArrived;                                    // 0x3B8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_1A7F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalTitle_Default;                                 // 0x3C0(0x18)(Edit, BlueprintVisible)
	TArray<struct FQtnStruct_VOLine>             VO_OnArrival;                                      // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_OnNecro_Kyle;                                   // 0x3E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_OnNecro_Stan;                                   // 0x3F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ATravelVolume_BP_C*                    EntranceGate;                                      // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_NecroHint_Kyle;                                 // 0x410(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_NecroHint_Stan;                                 // 0x420(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_NecroHint_Butters;                              // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VO_NecroKilled;                                    // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A82[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnSkirmish*                          NecroSkirmish;                                     // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_CartmanMidwayWhine;                             // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                        R_charactersToRemove;                              // 0x460(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UQtnGoal_FH_Arc4_MainStreetCentral_C* GetDefaultObj();

	void DoGetExitGate(class ATravelVolume_BP_C** ExitGate);
	void Local_Remove_Arc_2_Characters(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Get_Arc_2_Characters_Server_Only(const TArray<class AActor*>& LOCAL_HoldingArray, bool CallFunc_IsServer_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue_1);
	void GetScriptyBits();
	void VO_CartmanWhine(bool CallFunc_IsServer_ReturnValue);
	void GetSkirmish(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName Temp_name_Variable, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class AQtnSkirmish* K2Node_DynamicCast_AsQtn_Skirmish, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsOnServer_ReturnValue);
	void CheckNecroDeath(bool* Found_dead_necromancer, bool LOCAL_FoundDeadNecromancer, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GetTrackedDeadPawns_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnAICleric_Necromancer_C* K2Node_DynamicCast_AsBody_Pawn_AICleric_Necromancer, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void VO_Necro_Hint(float LOCAL_ChosenFloat, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void GetEntranceGate();
	void VO_NecroSpawn(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_RandomBool_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void OnRep_PlayersArrived();
	void GetQuestMarker(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue);
	void CheckForJokerUpgrade(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AUpgradeStation_Henrietta_BP_C* K2Node_DynamicCast_AsUpgrade_Station_Henrietta_BP, bool K2Node_DynamicCast_bSuccess);
	void Get_Combat_Entrance_Volume(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ATargetLocationVolume_C* K2Node_DynamicCast_AsTarget_Location_Volume, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void OnRep_CombatStarted();
	void OnRep_CombatOver();
	void DEBUGONLY_Start_Goal(bool CallFunc_IsValid_ReturnValue);
	void DEBUGONLY_EndGoal();
	void LOCAL_UITextUpdate(TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
	void OnRep_listOfUpgradedPlayers();
	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, bool CallFunc_CheckNecroDeath_found_dead_necromancer, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void GetExitGate(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnServer_ReturnValue);
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void OnGoalSpawned_ServerOnly();
	void EndGoalSequence();
	void PlayersUsedEntranceGate(class ATravelVolume_BP_C* From_this_volume);
	void UnbindFirstGateEvents();
	void bindExitGateEvents();
	void PlayerUpgraded(class ABodyPawnPlayer_C* Player_who_upgraded);
	void BindUpgradedEvents(class AUpgradeStation_BP_C* Upgrade_Station);
	void bindCombatEntranceVolumeEvents();
	void PlayerEnteredCombat(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit);
	void UnbindCombatEntranceVolumeEvents();
	void bindSpokeEntryEvents();
	void PlayersArrivedInSpoke();
	void bindEntranceGateEvents();
	void ArrivalDone();
	void ExecuteUbergraph_QtnGoal_FH_Arc4_MainStreetCentral(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_willEndImmediatelyFromLateJoin, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ATravelVolume_BP_C* K2Node_CustomEvent_from_this_volume, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class ABodyPawnPlayer_C* K2Node_CustomEvent_player_who_upgraded, bool CallFunc_IsValid_ReturnValue_3, class AUpgradeStation_BP_C* K2Node_CustomEvent_upgrade_Station, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsOnServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered, bool K2Node_CustomEvent_onExit, bool CallFunc_IsOnServer_ReturnValue_2, bool CallFunc_IsOnServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_6, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_Foothills_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Foothills, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsServer_ReturnValue_6, bool CallFunc_IsServer_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsServer_ReturnValue_8);
};

}


