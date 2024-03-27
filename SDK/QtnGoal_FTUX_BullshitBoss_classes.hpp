#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x3B8 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_FTUX_BullshitBoss.QtnGoal_FTUX_BullshitBoss_C
class UQtnGoal_FTUX_BullshitBoss_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                  Detail_Fight;                                      // 0x2E8(0x18)(Edit, BlueprintVisible)
	class FText                                  Detail_Win;                                        // 0x300(0x18)(Edit, BlueprintVisible)
	class ALocationMarker_BP_C*                  QuestMarkerSkirmish;                               // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CombatDone;                                        // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BEE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATargetLocationVolume_C*               EndGoalVolume;                                     // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_BattleOver;                                     // 0x330(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_OnBSAnnounce;                                   // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_OnBSRejoiner;                                   // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Detail_Vampire;                                    // 0x360(0x18)(Edit, BlueprintVisible)
	class ABodyPawnBase_C*                       Bullshitter;                                       // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bullshitterSpawned;                                // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFTUX_EnemyBS_ModalWidget_C*           ModalWidget;                                       // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnStruct_VOLine                     VO_OnBSPopupOver;                                  // 0x390(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BF0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQtnGoal_FTUX_BullshitBoss_C* GetDefaultObj();

	void ShowEnemyBSPopup_ServerOnly(class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFTUX_EnemyBS_Screen_C* CallFunc_GetScreen_ReturnValue, class UFTUX_EnemyBS_ModalWidget_C* CallFunc_GetUserWidget_ReturnValue);
	void GetThornSpawner(TArray<TSoftObjectPtr<class AQtnSpawner>>& Spawners, class AQtnSpawner** Thorn_spawner, bool* FoundSpawner, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TSoftObjectPtr<class AQtnSpawner> CallFunc_Array_Get_Item, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AQtnSpawner* K2Node_DynamicCast_AsQtn_Spawner, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class FName Temp_name_Variable, bool CallFunc_Array_Contains_ReturnValue);
	void GetBullshitter(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, TSubclassOf<class AQtnPawn> Temp_class_Variable, class AQtnSpawner* CallFunc_getThornSpawner_thorn_spawner, bool CallFunc_getThornSpawner_foundSpawner, TMap<TSubclassOf<class AQtnPawn>, struct FQtnTrackedSkirmishPawns> CallFunc_GetTrackedPawns_ServerOnly_ReturnValue, const struct FQtnTrackedSkirmishPawns& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ABodyPawnAISwarmer_C* CallFunc_SpawnActor_ServerOnly_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_2, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void DEBUGONLY_Start_Goal(const struct FQtnItemData& HealingTotemData, const struct FQtnItemData& FartEscapeData, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, const struct FQtnItemData& K2Node_MakeStruct_QtnItemData, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_1, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_1, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_1, bool CallFunc_GetLocalPlayerInformation_isHosting_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AQtnPlayerControllerArchetype_C* K2Node_DynamicCast_AsQtn_Player_Controller_Archetype, bool K2Node_DynamicCast_bSuccess_2, class ABodyPawnAIButters_C* CallFunc_SpawnActor_ServerOnly_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class ABodyPawnAI_FTUXElfKid_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item, class ABodyPawnAI_FTUXElfKid_C* CallFunc_Array_Get_Item_1, class AThornBlockage_BP_C* K2Node_DynamicCast_AsThorn_Blockage_BP, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_2, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_2, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_2, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_2, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_2, bool CallFunc_GetLocalPlayerInformation_isHosting_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_2, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_4, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_3, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_3, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_3, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_3, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_3, bool CallFunc_GetLocalPlayerInformation_isHosting_3, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_3, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_3, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_2, bool K2Node_DynamicCast_bSuccess_5, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_4, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_4, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_4, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_4, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_4, bool CallFunc_GetLocalPlayerInformation_isHosting_4, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_4, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_4, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_3, bool K2Node_DynamicCast_bSuccess_6, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, const struct FQtnItemData& K2Node_MakeStruct_QtnItemData_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_5, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_5, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_5, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_5, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_5, bool CallFunc_GetLocalPlayerInformation_isHosting_5, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_5, bool K2Node_SwitchEnum_CmpSuccess_5, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_4, bool K2Node_DynamicCast_bSuccess_7, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_6, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_6, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_6, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_6, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_6, bool CallFunc_GetLocalPlayerInformation_isHosting_6, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_6, bool K2Node_SwitchEnum_CmpSuccess_6, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_5, bool K2Node_DynamicCast_bSuccess_8, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, class UDodgeVerb_C* CallFunc_AddVerb_ServerOnly_ReturnValue);
	void EndSequence(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Post_VOConversation_Server_Only();
	void GetQuestMarker(class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnGoalSpawned_ServerOnly();
	void WinSequence();
	void DisallowDeath();
	void UpdateHealth(float Amount_Decreased, class UAttribute_Health_C* Attribute_Taking_Damage);
	void DelayAndGetBS();
	void VO_ConfirmBullshitter();
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void DelayAndGetBullshitter();
	void bindBSPresentationEnded_ServerOnly();
	void BSEnded_ServerOnly();
	void bindModalEndEvent();
	void PlayerLeftModal();
	void ExecuteUbergraph_QtnGoal_FTUX_BullshitBoss(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_CustomEvent_Amount_Decreased, class UAttribute_Health_C* K2Node_CustomEvent_Attribute_Taking_Damage, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, float CallFunc_Multiply_FloatFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_1, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsServer_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_2, class AQtnPlayerControllerArchetype_C* K2Node_DynamicCast_AsQtn_Player_Controller_Archetype, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
};

}


