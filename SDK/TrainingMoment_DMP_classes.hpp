#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x116 (0x62F - 0x519)
// BlueprintGeneratedClass TrainingMoment_DMP.TrainingMoment_DMP_C
class ATrainingMoment_DMP_C : public ATrainingMoment_BP_C
{
public:
	uint8                                        Pad_52E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x520(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       Spawnloc;                                          // 0x528(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AHankey_HubActor_BP_C*                 Hankey;                                            // 0x530(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_DarkMatterGrant;                                // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            DarkMatterDispensed;                               // 0x548(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  GoalDescription_GetDarkMatter;                     // 0x558(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         LOCAL_CheckForDarkMatterPickup;                    // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_OnThroneReady;                                  // 0x578(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnGoalManagerBase_C*                 As_Qtn_Goal_Manager_Base;                          // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHankyIntroScene_Local_C*              Cutscene;                                          // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AQtnPlayerPawn*>                PlayersWhoMustTrain;                               // 0x5B0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        AmountOfDarkMatterToGrant;                         // 0x5C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52E9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_OnDMGrant;                                      // 0x5C8(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                AmountOfDarkMatterToGrantAsArray;                  // 0x5F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FQtnStruct_VOLine                     VO_OnDMAlreadyGranted;                             // 0x600(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LocalPlayersCachedDMAmount;                        // 0x628(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VO_GrantOver;                                      // 0x62C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         VO_GotDM;                                          // 0x62D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Server_init;                                       // 0x62E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ATrainingMoment_DMP_C* GetDefaultObj();

	void LocalHideHankey(bool CallFunc_IsValid_ReturnValue);
	void IntroCompleteWithPlayer(class AQtnBodyPawn* Player);
	void SaveHankeyDMGrant(class FName CallFunc_MakeLiteralName_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess);
	void CheckPlayerLeft_WarTableLock(class AQtnPlayerPawn* Player_who_left, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void CheckForWarTableLock(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Check_For_Arc_3(bool CallFunc_IsServer_ReturnValue, class UMissionDataBag_C* CallFunc_GetLocalProgressDataBag_ReturnValue, int32 CallFunc_GetCurrentArc_CurrentArc, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Delayed_Introduction(class AQtnBodyPawn* Player);
	void PlayTriggeredIntroduction(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess);
	void LOCAL_PostIntroEvent();
	void CanAccessThisTraining_(bool* CanAccess, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, class UMissionDataBag_C* CallFunc_GetLocalProgressDataBag_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Check_for_Urge_Reminder(enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Is_This_Player_In_Any_Training_Menu_Player_in_training, bool CallFunc_BooleanAND_ReturnValue, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item);
	void LOCAL_DoesLocalPlayerNeedThisTraining();
	void SpawnDarkMatterForThisPlayer(class AQtnBodyPawn* Player, bool LOCAL_GiveLoot, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_GetTutorialBoolValue_ReturnValue);
	void MarkTrainingCompleteForThisPlayer(class AQtnPlayerPawn* Player, bool Get_snark_, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess);
	void AllowDMPFrob(class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class FName CallFunc_MakeLiteralName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void IntroductionComplete();
	void MarkTrainingComplete(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess);
	void HasPlayerCompletedThisTraining(class AQtnPlayerPawn* Player, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Multicast_allowDMPFrobbing();
	void Multicast_SpawnDarkMatterForPlayer(class AQtnBodyPawn* Player);
	void LOCAL_PlayDarkMatterVOThenGrant(class AQtnPlayerPawn* Player_pawn, bool Give_loot, class AQtnBodyPawn* Player_body);
	void LOCAL_PlayInvitation(bool WithVO_);
	void PlayerEnteredWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer);
	void Multicast_CheckThisPlayersAccess(class AQtnBodyPawn* This_player);
	void CutsceneEnded(class AQtnBodyPawn* PlayerInScene);
	void FindUntrainedPlayers();
	void PlayerExitWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn);
	void FadeIntoCutscene();
	void Multicast_InitCutsceneEnd();
	void Local_checkSceneStatus();
	void ExecuteUbergraph_TrainingMoment_DMP(int32 EntryPoint, class AQtnPlayerPawn* K2Node_CustomEvent_player_pawn, bool K2Node_CustomEvent_give_loot, class AQtnBodyPawn* K2Node_CustomEvent_player_body, class AQtnBodyPawn* K2Node_CustomEvent_player, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrencyQuantity_ReturnValue, float K2Node_Event_DeltaSeconds, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, int32 CallFunc_FetchPlayerCurrencyAmountByTag_OutCurrencyAmount, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_withVO_, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul_1, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn_1, bool K2Node_CustomEvent_isLocalPlayer, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_canAccessThisTraining__canAccess, class AQtnBodyPawn* K2Node_CustomEvent_this_player, class AQtnBodyPawn* K2Node_CustomEvent_playerInScene, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin_2, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsServer_ReturnValue, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool CallFunc_Greater_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, int32 CallFunc_AreAllExpectedPlayersReady_numExpectedPlayers, int32 CallFunc_AreAllExpectedPlayersReady_numReadyPlayers, bool CallFunc_AreAllExpectedPlayersReady_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_4, class FName CallFunc_MakeLiteralName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable, class AQtnPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnReplicatedSaveDataComponent* CallFunc_WaitForReplicationReadiness_readySaveData, class UReplicatedSaveDataComponent_C* K2Node_DynamicCast_AsReplicated_Save_Data_Component, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Less_IntInt_ReturnValue);
	void DarkMatterDispensed__DelegateSignature(class AQtnPlayerPawn* For_this_player);
};

}


