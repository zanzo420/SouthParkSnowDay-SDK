#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x161 - 0x120)
// BlueprintGeneratedClass MissionDataBag.MissionDataBag_C
class UMissionDataBag_C : public UQtnDataBag
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        MaxUnlockedArc;                                    // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Private_CurrentArc;                                // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumFailedRuns;                                     // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_729B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EQtnDifficulty>            MaxUnlockedDifficultyPerArc;                       // 0x138(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TArray<enum class EQtnDifficulty>            SelectedDifficultyPerArc;                          // 0x148(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	bool                                         HasFoughtKenny;                                    // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         Starks_hasMetRandy;                                // 0x159(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Starks_hasBattledKyle;                             // 0x15A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AvoidSpoilers;                                     // 0x15B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenCartmanBetrayal;                            // 0x15C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         HasSeenHordeModeLetterInvitation;                  // 0x15D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         Private_IsHordeMode;                               // 0x15E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenGrenadeUnlockMessage;                       // 0x15F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	enum class EQtnDifficulty                    HordeModeDifficulty;                               // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMissionDataBag_C* GetDefaultObj();

	void SetHordeModeDifficulty(enum class EQtnDifficulty Difficulty);
	void GetHordeModeDifficulty(enum class EQtnDifficulty* NewParam);
	void SetIsHordeMode(bool IsHordeMode);
	void IsHordeMode(bool* Result);
	void ResetDemoValues();
	void HasUnlockedAllArcs(bool* HasUnlockedAllArcs, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void SetMaxUnlockedDifficultyForArc(int32 Arc, enum class EQtnDifficulty DesiredDifficulty);
	void SetSelectedDifficultyForArc(int32 Arc, enum class EQtnDifficulty DesiredDifficulty);
	void GetMaxUnlockedDifficultyForArc(int32 Arc, enum class EQtnDifficulty* Result, enum class EQtnDifficulty L_result);
	void GetSelectedDifficultyForArc(int32 Arc, enum class EQtnDifficulty* Result, enum class EQtnDifficulty CallFunc_Array_Get_Item);
	void IncrementMaxUnlockedDifficulty(int32 Arc, int32 LocalArc, enum class EQtnDifficulty LocalCurrentDifficulty, enum class EQtnDifficulty Temp_byte_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class EQtnDifficulty CallFunc_Array_Get_Item, uint8 CallFunc_Add_ByteByte_ReturnValue, bool CallFunc_GreaterEqual_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, enum class EQtnDifficulty K2Node_Select_Default, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, enum class EQtnDifficulty CallFunc_GetDifficulty_ReturnValue);
	void SetMaxUnlockedArc(int32 MaxUnlockedArc);
	void PopulateReplicatedStruct(struct FQtnReplicatedSaveData& ReplicatedSaveData, struct FQtnReplicatedSaveData* ModifiedStruct);
	void SetCurrentArc(int32 CurrentArc, const class FString& CallFunc_Conv_IntToString_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsInPIEWorld_ReturnValue, int32 CallFunc_StaticGetPIEArc_ReturnValue, int32 CallFunc_StaticGetPIEArc_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsInPIEWorld_ReturnValue_1);
	void GetCurrentArc(int32* CurrentArc, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_IsRunningAutomatedReports_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_StaticGetPIEArc_ReturnValue, int32 CallFunc_StaticGetPIEArc_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsTradeshowDemo_ReturnValue, bool CallFunc_IsInPIEWorld_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_GetCurrentArc_CurrentArc, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7);
	void OnReadyForGameplay(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI, class AQtnBodyPawn* LocalOccupiedBodyPawn);
	void PostLoadDataBP(class UQtnSaveData* SaveData, bool Success, class AQtnBodyPawn* LocalOriginalBody);
	void ExecuteUbergraph_MissionDataBag(int32 EntryPoint, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerPawn_outputPin, class AQtnPlayerPawn* CallFunc_GetLocalPlayerPawn_ReturnValue, class AQtnPlayerController* K2Node_Event_localPlayerController, class AQtnPlayerUI* K2Node_Event_localPlayerUI, class AQtnBodyPawn* K2Node_Event_localOccupiedBodyPawn, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, int32 CallFunc_GetCurrentArc_CurrentArc, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, class UQtnSaveData* K2Node_Event_saveData, bool K2Node_Event_success, class AQtnBodyPawn* K2Node_Event_localOriginalBody, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FReplicatedArcDepthInfo& K2Node_MakeStruct_ReplicatedArcDepthInfo, bool CallFunc_IsTradeshowDemo_ReturnValue);
};

}


