#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x230 (0x328 - 0xF8)
// BlueprintGeneratedClass GlobalRunProgress.GlobalRunProgress_C
class UGlobalRunProgress_C : public UQtnGlobalRunProgress
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnLastRunStatus                     LastRunStatus;                                     // 0x100(0x9)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_72B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         HadMissionThisSession;                             // 0x10C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasStartedMissionArc;                              // 0x10D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_72BA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RunStartTime;                                      // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RunElapsedTime;                                    // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasRunStartTime;                                   // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_72BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, struct FQtnRangedFloat> LootInfoArc1;                                      // 0x120(0x50)(Edit, BlueprintVisible, Transient)
	TMap<struct FGameplayTag, struct FQtnRangedFloat> LootInfoArc2;                                      // 0x170(0x50)(Edit, BlueprintVisible, Transient)
	TMap<struct FGameplayTag, struct FQtnRangedFloat> LootInfoArc3;                                      // 0x1C0(0x50)(Edit, BlueprintVisible, Transient)
	TMap<struct FGameplayTag, struct FQtnRangedFloat> LootInfoArc4;                                      // 0x210(0x50)(Edit, BlueprintVisible, Transient)
	TMap<struct FGameplayTag, struct FQtnRangedFloat> LootInfoArc5;                                      // 0x260(0x50)(Edit, BlueprintVisible, Transient)
	TMap<struct FGameplayTag, struct FQtnRangedFloat> LootInfoArcDummy;                                  // 0x2B0(0x50)(Edit, BlueprintVisible, Transient)
	struct FDateTime                             InitTimeStamp;                                     // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                ArcToUpgradeCount;                                 // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AQtnPlayerPawn*>                ExpectedPlayerPawns;                               // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UGlobalRunProgress_C* GetDefaultObj();

	void ResetLootInfo();
	void ResetTime(bool CallFunc_IsServer_ReturnValue);
	void Get_Elapsed_Time_Server_Only(float* Elapsed_Time, float CallFunc_GetTimeSeconds_ReturnValue, bool CallFunc_IsServer_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void InBossMap_(bool* In_boss_map, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_2, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_3, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3);
	void GetRunStartTime(bool DEBUGONLY_IsMidRun, float CallFunc_GetTimeSeconds_ReturnValue, bool CallFunc_InBossMap__in_boss_map, bool CallFunc_IsServer_ReturnValue);
	void GetNumFailedRuns(int32* NumFailedRuns, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UMissionDataBag_C* CallFunc_GetCustomDataBag_ReturnValue);
	void On_All_Expected_Players_Ready_In_Mission(int32 LOCAL_MaxUnlockedArc, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, int32 Temp_int_Array_Index_Variable, class AQtnPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Min_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_GetCurrentArc_CurrentArc, int32 CallFunc_GetCurrentArc_CurrentArc_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetCurrentArc_CurrentArc_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void On_All_Expected_Players_Ready_in_Hub(const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, int32 CallFunc_GetNumFailedRuns_NumFailedRuns, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Reset_Completion_Status(const struct FQtnLastRunStatus& K2Node_MakeStruct_QtnLastRunStatus);
	void Set_Last_Run_Completion_Status(bool Run_Failed_, bool Ignore_this_run_, bool Was_FTUX_, int32 CallFunc_GetCurrentArc_CurrentArc, const struct FQtnLastRunStatus& K2Node_MakeStruct_QtnLastRunStatus);
	void IsInSocialHub(bool* IsInSocialHub, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class UWorld* CallFunc_GetExpectedWorld_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void GetMaxUnlockedArc(int32* MaxUnlockedArc, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UMissionDataBag_C* CallFunc_GetCustomDataBag_ReturnValue);
	void GetCurrentArc(int32* CurrentArc, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UMissionDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, int32 CallFunc_GetCurrentArc_CurrentArc);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper);
	void OnMapBeginPlay_ServerOnly();
	void OnAllExpectedPlayersReady_ServerOnly(int32 NumExpectedPlayers);
	void OnRunProgressCheckpoint_ServerOnly(bool FlushMissionProgress);
	void OnRunProgressReset_ServerOnly();
	void OnGlobalRunProgressInit();
	void ExecuteUbergraph_GlobalRunProgress(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetCurrentArc_CurrentArc, class UQtnEnemyUpgradeHandlerSubsystem* CallFunc_GetEnemyUpgradeHandlerSubsystem_ReturnValue, int32 K2Node_Event_numExpectedPlayers, bool CallFunc_IsInSocialHub_isInSocialHub, bool K2Node_Event_flushMissionProgress, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnEnemyUpgradeHandlerSubsystem* CallFunc_GetEnemyUpgradeHandlerSubsystem_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UQtnOutcomeTrackingSubsystem* CallFunc_GetOutcomeTrackingSubsystem_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Get_Item, class AQtnPlayerPawn* CallFunc_Array_Get_Item_1, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess, class UQtnReplicatedSaveDataComponent* CallFunc_WaitForReplicationReadiness_readySaveData, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns);
};

}


