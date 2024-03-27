#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x130 - 0xE0)
// BlueprintGeneratedClass ReplicatedSaveDataComponent.ReplicatedSaveDataComponent_C
class UReplicatedSaveDataComponent_C : public UQtnReplicatedSaveDataComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnReplicatedSaveData                R_replicatedSaveData;                              // 0xE8(0x2C)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FCC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPlayerPawnArchetype_C*             OwningPlayerPawn;                                  // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnReplicatedTutorialData>    R_ReplicatedTutorialData;                          // 0x120(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UReplicatedSaveDataComponent_C* GetDefaultObj();

	void GetTutorialState(class UClass* TutorialClass, enum class EQtnTutorialStatus* Status, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnReplicatedTutorialData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_MatchesTag_ReturnValue);
	void Extract_Info_from_Databags_for_Replication(class AQtnPlayerController*& LocalPlayerController, const TArray<struct FQtnReplicatedTutorialData>& TutorialDataToPush, const struct FQtnReplicatedSaveData& SaveDataToPush, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UQtnTutorialDataBag* CallFunc_GetTutorialDataBag_ReturnValue, class UMissionDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue_1, TArray<struct FQtnTutorialInstanceData>& CallFunc_Map_Values_Values, int32 Temp_int_Loop_Counter_Variable, const struct FQtnTutorialInstanceData& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQtnReplicatedTutorialData& K2Node_MakeStruct_QtnReplicatedTutorialData, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnDLCManager* CallFunc_GetDLCManager_ReturnValue, bool CallFunc_HasPurchasedDLC_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FQtnReplicatedSaveData& CallFunc_PopulateReplicatedStruct_modifiedStruct, const struct FQtnReplicatedSaveData& CallFunc_PopulateReplicatedStruct_modifiedStruct_1);
	void DebugDisplayReplicatedSaveData(class UQtnDebugWrapper*& DebugWrapper, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8);
	bool HasBeenFullyReplicated();
	void ReceiveBeginPlay();
	void ServerPushReplicatedSaveData(struct FQtnReplicatedSaveData& ReplicatedSaveData);
	void PlayerPawnOccupyEvent_Event_0(class AQtnBodyPawn* OccupiedBodyPawn, bool FirstTime);
	void ServerPushReplicatedTutorialData(TArray<struct FQtnReplicatedTutorialData>& ReplicatedTutorialData);
	void OnTutorialAdded(TSubclassOf<class UQtnTutorial> TutorialArchetype, bool IsReminder);
	void OnTutorialStateChange(const struct FQtnTutorialInstanceData& TutorialInstance);
	void ExecuteUbergraph_ReplicatedSaveDataComponent(int32 EntryPoint, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetOwner_ReturnValue, const struct FQtnReplicatedSaveData& K2Node_CustomEvent_replicatedSaveData, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_firstTime, TArray<struct FQtnReplicatedTutorialData>& K2Node_CustomEvent_ReplicatedTutorialData, class AQtnPawn* CallFunc_WaitForReadyForGameplay_readyPawn, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerController* CallFunc_GetOccupyingLocalPlayerController_ReturnValue, TSubclassOf<class UQtnTutorial> K2Node_CustomEvent_tutorialArchetype, bool K2Node_CustomEvent_isReminder, const struct FQtnTutorialInstanceData& K2Node_CustomEvent_TutorialInstance);
};

}


