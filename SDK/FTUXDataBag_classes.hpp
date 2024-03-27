#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBB (0x1DB - 0x120)
// BlueprintGeneratedClass FTUXDataBag.FTUXDataBag_C
class UFTUXDataBag_C : public UQtnDataBag
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         HasSeenAct1Scene;                                  // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenAct2Scene;                                  // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenAct3Scene;                                  // 0x12A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         VisitedHub;                                        // 0x12B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenFirstTrial;                                 // 0x12C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenFirstRulebook;                              // 0x12D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenFirstFoilpack;                              // 0x12E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenStarksWaterfall;                            // 0x12F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        Total_Rulebooks_Engaged_With;                      // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F4D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        Starks_LastSpokesSeen;                             // 0x138(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                        Starks_AmbushesLastSeen;                           // 0x148(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                Starks_LastIntroSeen;                              // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Starks_CELastSeen;                                 // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        Downtown_Act3_SeenFeats;                           // 0x168(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         WarTableVO_HeardArc2Unlock;                        // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         WarTableVO_HeardArc3Unlock;                        // 0x179(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         WarTableVO_HeardArc4Unlock;                        // 0x17A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         CompletedFTUXLevel;                                // 0x17B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F4E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Foothills_CELastSeen;                              // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        Foothills_LastAmbushSeen;                          // 0x188(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HasSeenFirstJoker;                                 // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HadInMissionFitcoinFTUX;                           // 0x199(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Starks_IceBrokenOnce;                              // 0x19A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Starks_SeenWaterfallTreasure;                      // 0x19B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Foothills_Visited;                                 // 0x19C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Foothills_IceSnipersSeen;                          // 0x19D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenRevivalFTUX;                                // 0x19E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenBeingRevivedFTUX;                           // 0x19F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WarTableVO_HeardArc5Unlock;                        // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        MainStreet_Act2_SeenAmbushes;                      // 0x1A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                        MainStreet_Act2_SeenBonusZones;                    // 0x1B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                DownTown_Act3_SeenBonusZone;                       // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasSeenGateLockFTUX;                               // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenCardBinder;                                 // 0x1D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenEnemyBS_Vampire;                            // 0x1D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenEnemyBS_LaserSword;                         // 0x1D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenEnemyBS_SuperSize;                          // 0x1D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenEnemyBS_Nerfed;                             // 0x1D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenEnemyBS_DoOver;                             // 0x1D6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenEnemyBS_StupidProjectiles;                  // 0x1D7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenEnemyBS_ProjectileKids;                     // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenEnemyBS_ProjectileHailstorm;                // 0x1D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenNicholeModal;                               // 0x1DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UFTUXDataBag_C* GetDefaultObj();

	void ResetDemoValues();
	void PopulateReplicatedStruct(struct FQtnReplicatedSaveData& ReplicatedSaveData, struct FQtnReplicatedSaveData* ModifiedStruct, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, class UQtnDebugWrapper* LocalDebugWrapper, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_4, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Array_Index_Variable_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, class UClass* CallFunc_Array_Get_Item, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UClass* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class UClass* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, class UClass* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Conv_BoolToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, class UMissionDataBag_C* CallFunc_GetLocalProgressDataBag_ReturnValue, int32 CallFunc_GetCurrentArc_CurrentArc, bool K2Node_SwitchInteger_CmpSuccess, const class FString& CallFunc_Conv_BoolToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Conv_BoolToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, class UClass* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, const class FString& CallFunc_Conv_BoolToString_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_12);
	void SkipFTUXTutorials(const TArray<class UClass*>& FTUX_Tutorials_Autocomplete, int32 Temp_int_Array_Index_Variable, TArray<class UClass*>& K2Node_MakeArray_Array, class FName CallFunc_MakeLiteralName_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_4, class FName CallFunc_MakeLiteralName_ReturnValue_5, class FName CallFunc_MakeLiteralName_ReturnValue_6, class FName CallFunc_MakeLiteralName_ReturnValue_7, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void PostLoadDataBP(class UQtnSaveData* SaveData, bool Success, class AQtnBodyPawn* LocalOriginalBody);
	void ExecuteUbergraph_FTUXDataBag(int32 EntryPoint, class UQtnSaveData* K2Node_Event_saveData, bool K2Node_Event_success, class AQtnBodyPawn* K2Node_Event_localOriginalBody, bool CallFunc_IsTradeshowDemo_ReturnValue);
};

}


