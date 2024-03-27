#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA4 (0x2F4 - 0x250)
// BlueprintGeneratedClass HubConversationManager.HubConversationManager_C
class AHubConversationManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACartman_Actor_BP_C*                   Actor_Cartman;                                     // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButters_Hub_Actor_BP_C*               Actor_Butters;                                     // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKyle_Actor_Hub_C*                     Actor_Kyle_Arc2;                                   // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKyle_Actor_Hub_C*                     Actor_Kyle_Arc3Plus;                               // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKenny_Actor_Hub_C*                    Actor_Kenny;                                       // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStan_Actor_Hub_C*                     Actor_Stan;                                        // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AQtnScriptedSkeletalActor*>     AllKids;                                           // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ATriggerVolume*                        TriggerVolume_Arc2;                                // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATriggerVolume*                        TriggerVolume_Arc3Plus;                            // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        R_HubConversationArc;                              // 0x2B0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3271[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            HubConversationActiveFlagsDataTable;               // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            HubConversationSequenceDataTable;                  // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DEV_VerboseLogging;                                // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3272[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          AvailableConversations;                            // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsSequencePlaying;                                 // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3273[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DEV_ForcedConversation;                            // 0x2E4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConversationCooldown;                              // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NextConversationTime;                              // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHubConversationManager_C* GetDefaultObj();

	void EnableHeadtracking(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AQtnScriptedSkeletalActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void DisableHeadtracking(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AQtnScriptedSkeletalActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void SelectAndRemoveAvailableConversation(struct FHubConversationSequence* ConversationSequence, class FName LOCAL_SelectedConversationName, int32 LOCAL_RandomConversationIndex, bool CallFunc_IsPlayingInEditor_ReturnValue, const struct FHubConversationSequence& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FHubConversationSequence& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FName CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex);
	void ConditionalPlayActorAnim(class AScriptedSkeletalActor_C* HubConversationActor, class UAnimMontage* AnimMontage, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue);
	void ConditionalLog(const class FString& LogString);
	void SetHubConversationActorActive(class AScriptedSkeletalActor_C* HubConversationActor, bool Active, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void SetUpPlacedActorsForArc(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FHubConversationSequence& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, const struct FHubConversationActiveFlags& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1);
	void OnRep_r_HubConversationArc();
	void ReceiveBeginPlay();
	void SetHubConversationTriggerVolumeActive(class ATriggerVolume* TriggerVolume, bool Active);
	void OnHubConversationTriggerVolumeBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void PlayConversationSequence();
	void WaitForSetUpPlacedActorsForArc();
	void ExecuteUbergraph_HubConversationManager(int32 EntryPoint, bool CallFunc_IsScriptedVOPlaying_ReturnValue, class AActor* K2Node_CustomEvent_OverlappedActor, class AActor* K2Node_CustomEvent_otherActor, class ATriggerVolume* K2Node_CustomEvent_triggerVolume, bool K2Node_CustomEvent_Active, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, class UMissionDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, int32 CallFunc_GetCurrentArc_CurrentArc, class AQtnGameState* CallFunc_WaitForReadyForGameplay_readyGameState, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FHubConversationSequence& CallFunc_SelectAndRemoveAvailableConversation_conversationSequence, int32 CallFunc_Array_Length_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class AQtnGameState* CallFunc_WaitForReadyForGameplay_readyGameState_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FHubConversationTurn& CallFunc_Array_Get_Item, float CallFunc_GetQtnTimeSeconds_ReturnValue, float CallFunc_GetQtnTimeSeconds_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


