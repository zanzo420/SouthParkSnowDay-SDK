#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x55 (0xAA6 - 0xA51)
// BlueprintGeneratedClass TravelVolume_SocialHub.TravelVolume_SocialHub_C
class ATravelVolume_SocialHub_C : public ATravelVolume_BP_C
{
public:
	uint8                                        Pad_6A0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                MapName;                                           // 0xA60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ATrainingMoment_WarTable_C*            WarTableTrainingMoment;                            // 0xA70(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABodyPawnPlayer_C*>             SocialHub_PlayersHere;                             // 0xA78(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         Socialhub_init;                                    // 0xA88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMissionReady;                                    // 0xA90(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        ActNum;                                            // 0xAA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQtnDifficulty                    Difficulty;                                        // 0xAA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HordeModeRejected;                                 // 0xAA5(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ATravelVolume_SocialHub_C* GetDefaultObj();

	void OnRep_HordeModeRejected(class FName CallFunc_Conv_StringToName_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CheckMapHordeMode_IsHordeMap);
	void HordeModeCheck(bool* Success, bool* DlcError, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_CheckAllPlayersHaveHordeMode_ServerOnly_EveryoneHasDLC, bool CallFunc_CheckAllPlayersHaveHordeMode_ServerOnly_EveryoneHasDLC_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CheckMapHordeMode_IsHordeMap);
	void EnableTravelGate();
	void RefreshDestination_Server();
	void DisableTravelGate();
	bool IsGoingToFTUX(bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void Update_Gate_Vis();
	void UpdateActiveStatus(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void Accepting_Players_For_Travel(bool* Aceepting_players_for_travel, bool CallFunc_Not_PreBool_ReturnValue);
	void SendPlayersToLevel(bool CallFunc_IsGoingToFTUX_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Server_Send_to_Map(bool Start_telemetry, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_CheckMapHordeMode_IsHordeMap, class UQtnOnlineManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UMissionDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool CallFunc_IsGoingToFTUX_ReturnValue, enum class EQtnDifficulty CallFunc_GetHordeModeDifficulty_NewParam, bool CallFunc_IsHordeMode_Result, int32 CallFunc_GetCurrentArc_CurrentArc, enum class EQtnDifficulty CallFunc_GetSelectedDifficultyForArc_result, bool CallFunc_IsServer_ReturnValue, class UQtnGlobalRunProgress* CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue_1, class UQtnGameInstanceArchetype_C* K2Node_DynamicCast_AsQtn_Game_Instance_Archetype, bool K2Node_DynamicCast_bSuccess_1);
	void Server_Set_Destination(const class FString& Map_Name, int32 Arc, enum class EQtnDifficulty Difficulty, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_CheckMapHordeMode_IsHordeMap, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void ServerPlayerEntered(class AActor* Actor);
	void Multicast_AnnounceMissionReady(int32 Arc, enum class EQtnDifficulty Difficulty);
	void SocialHub_RefreshPlayerEntered();
	void ReceiveTick(float DeltaSeconds);
	void ServerPlayerLeft(class AActor* Player);
	void SetTravelVolumeColor(class UMaterial* DecalMaterial);
	void PlayerEnteredWorldEvent(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer);
	void OnPlayerExitedWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn);
	void CheckHordeMode();
	void MulticastGoalUpdateHorde();
	void MulticastClearGoals();
	void RecheckHordeMode();
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_TravelVolume_SocialHub(int32 EntryPoint, class UQtnOnlineManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 K2Node_CustomEvent_arc, enum class EQtnDifficulty K2Node_CustomEvent_difficulty, bool CallFunc_areAllPlayersHere_allPlayersHere, float K2Node_Event_DeltaSeconds, bool CallFunc_Accepting_Players_For_Travel_aceepting_players_for_travel, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AActor* K2Node_Event_player, bool CallFunc_IsServer_ReturnValue_2, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUI_ReturnValue, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsFullGameInstalled_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CheckMapHordeMode_IsHordeMap, class AActor* K2Node_Event_actor, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_3, class UMaterial* K2Node_CustomEvent_DecalMaterial, int32 CallFunc_Array_AddUnique_ReturnValue, class AQtnPlayerPawn* CallFunc_GetOccupyingPlayerPawn_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, class AQtnPlayerPawn* K2Node_Event_playerPawnSoul_1, class AQtnBodyPawn* K2Node_Event_occupiedBodyPawn_1, bool K2Node_Event_isLocalPlayer, class AQtnPlayerPawn* K2Node_Event_playerPawnSoul, class AQtnBodyPawn* K2Node_Event_occupiedBodyPawn, bool CallFunc_HordeModeCheck_success, bool CallFunc_HordeModeCheck_dlcError, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_HordeModeCheck_success_1, bool CallFunc_HordeModeCheck_dlcError_1, bool CallFunc_HordeModeCheck_success_2, bool CallFunc_HordeModeCheck_dlcError_2, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess_4, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_1, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_1, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_1, bool CallFunc_GetLocalPlayerInformation_isHosting_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_HordeModeCheck_success_3, bool CallFunc_HordeModeCheck_dlcError_3, class AActor* K2Node_Event_OtherActor);
	void OnMissionReady__DelegateSignature(int32 Arc, enum class EQtnDifficulty Difficulty);
};

}


