#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x268 (0x548 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_DT_Arc3_FOSParent.QtnGoal_DT_Arc3_FOSParent_C
class UQtnGoal_DT_Arc3_FOSParent_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                  LocateGoalText;                                    // 0x2E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalInstruction;                                   // 0x300(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         PlayersInSpoke;                                    // 0x318(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2CBC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LocateGoalTitle;                                   // 0x320(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  SpokeGoalTitle;                                    // 0x338(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         TaskComplete;                                      // 0x350(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2CBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LeaveSpokeDetail;                                  // 0x358(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ATravelVolume_BP_C*                    ExitGate;                                          // 0x370(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstFeat;                                       // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CBE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_FirstFeatComplete_Butters;                      // 0x380(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CBF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_FirstFeatComplete_Cartman;                      // 0x3A8(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_SecondFeatComplete;                             // 0x3D0(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FirstFeatLocateGoalTitle;                          // 0x3F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ATravelVolume_BP_C*                    EntranceGate;                                      // 0x410(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFeatPortaPotty_BP_C*                  PortaPotty;                                        // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayedPortaPottyScene;                             // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayedPortaPottyComplete;                          // 0x421(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2CC2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Detail_Portapotty;                                 // 0x428(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         PortaPottyReady;                                   // 0x440(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2CC3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalRejection_Portopotty;                          // 0x448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalRejection_TaskIncomplete;                      // 0x460(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                             NumDarkMatter;                                     // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABodyPawnPlayer_C*>             R_listOfUpgradedPlayers;                           // 0x480(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	bool                                         R_upgradeDone;                                     // 0x490(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2CC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABodyPawnPlayer_C*>             HoldingArray;                                      // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	struct FQtnStruct_VOLine                     VO_FirstPortopotty_A;                              // 0x4A8(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CC5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_FirstPortopotty_B;                              // 0x4D0(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_SecondPortopotty_A;                             // 0x4F8(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CC7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_SecondPortopotty_B;                             // 0x520(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CC8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQtnGoal_DT_Arc3_FOSParent_C* GetDefaultObj();

	void DoGetExitGate(class ATravelVolume_BP_C** ExitGate);
	void OnRep_r_upgradeDone();
	void OnRep_r_listOfUpgradedPlayers();
	void PostFlyCamEvents();
	void OnRep_PortaPottyReady();
	void OnRep_PlayedPortaPottyComplete();
	void Server_Toggle_Porta_Potty(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SpawnDarkMatterReward(int32 LOCAL_RolledTotal, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ALoot_Container_Automatic_C* CallFunc_SpawnActor_ServerOnly_ReturnValue);
	void Server_Porta_Potty_Complete(bool CallFunc_IsServer_ReturnValue);
	void GetPortaPotty(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsOnServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AFeatPortaPotty_BP_C* K2Node_DynamicCast_AsFeat_Porta_Potty_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void SaveGoalAsSeen(class UClass* CallFunc_GetObjectClass_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue);
	void DEBUGONLY_EndGoal();
	void CheckForFirstFeatComplete(bool CallFunc_RandomBool_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void DEBUGONLY_Start_Goal(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_Downtown_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown, bool K2Node_DynamicCast_bSuccess);
	void GetFeatGates();
	void OnRep_TaskComplete();
	void TaskStartedSequence();
	void GetExitGate(const class FString& CallFunc_GetDisplayName_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AActor* CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsOnServer_ReturnValue);
	void TaskCompleteSequence();
	void OnRep_playersInSpoke();
	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
	void LOCAL_UpdateGoalDetail(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void EndGoalSequence();
	void OnGoalSpawned_ServerOnly();
	void PlayersUsedEntranceGate(class ATravelVolume_BP_C* From_this_volume);
	void UnbindFirstGateEvents();
	void SetIsFirstFeat(bool IsFirstFeat);
	void SetEntranceGate(class ATravelVolume_BP_C* EntranceGate);
	void bindPortaPottyEvents();
	void PlayPortaPotty(class AFeatPortaPotty_BP_C* PortaPotty, class AQtnBodyPawn* Frobber);
	void PortaPottySceneOver_ServerOnly(class UClass* Goal_class);
	void DoubleCheckEntranceGate();
	void BindSpokeArrivalEvents();
	void PlayersArrivedInSpoke();
	void bindPostFlyCamEvents();
	void PostFlyCam(class UClass* Goal_class, int32 Cutscene_ID);
	void bindExitGateEvents();
	void PlayerUpgraded(class ABodyPawnPlayer_C* Player_who_upgraded);
	void BindUpgradedEvents(class AUpgradeStation_BP_C* Upgrade_Station);
	void PlayerEnteredWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer);
	void PlayerExitWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn);
	void UnbindPlayerEntryExitEvents();
	void ExecuteUbergraph_QtnGoal_DT_Arc3_FOSParent(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_willEndImmediatelyFromLateJoin, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool CallFunc_IsOnServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsServer_ReturnValue, class ATravelVolume_BP_C* K2Node_CustomEvent_from_this_volume, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_isFirstFeat, class ATravelVolume_BP_C* K2Node_Event_entranceGate, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, class AFeatPortaPotty_BP_C* K2Node_CustomEvent_portapotty, class AQtnBodyPawn* K2Node_CustomEvent_frobber, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UClass* K2Node_CustomEvent_goal_class_1, bool CallFunc_IsServer_ReturnValue_5, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue_6, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue_1, class UQtnGoalManager_Downtown_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsServer_ReturnValue_7, bool CallFunc_IsServer_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsServer_ReturnValue_9, class UClass* K2Node_CustomEvent_goal_class, int32 K2Node_CustomEvent_Cutscene_ID, bool CallFunc_IsServer_ReturnValue_10, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class ABodyPawnPlayer_C* K2Node_CustomEvent_player_who_upgraded, class AUpgradeStation_BP_C* K2Node_CustomEvent_upgrade_Station, bool CallFunc_IsServer_ReturnValue_11, bool CallFunc_IsServer_ReturnValue_12, int32 CallFunc_Array_AddUnique_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsServer_ReturnValue_13, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_2, bool K2Node_DynamicCast_bSuccess_3, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul_1, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn_1, bool K2Node_CustomEvent_isLocalPlayer, bool CallFunc_IsServer_ReturnValue_14, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, bool CallFunc_IsValid_ReturnValue_9, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_3, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsServer_ReturnValue_15, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsServer_ReturnValue_16, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_4, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_4, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UClass* CallFunc_GetObjectClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7);
};

}


