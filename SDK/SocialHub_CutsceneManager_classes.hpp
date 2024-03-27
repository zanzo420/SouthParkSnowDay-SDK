#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x208 (0x4C0 - 0x2B8)
// BlueprintGeneratedClass SocialHub_CutsceneManager.SocialHub_CutsceneManager_C
class ASocialHub_CutsceneManager_C : public ACutsceneManagerActor_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class ACinematicSceneCharacter_BP_C> FirstHubVisit_Cutscene;                            // 0x2C0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class ACinematicSceneCharacter_BP_C> FirstFailure_Cutscene;                             // 0x2E8(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class ACinematicSceneCharacter_BP_C> Roundtable2_Cutscene;                              // 0x310(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class ACinematicSceneCharacter_BP_C> Roundtable3_Cutscene;                              // 0x338(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class ACinematicSceneCharacter_BP_C> Roundtable4_Cutscene;                              // 0x360(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class ACinematicSceneCharacter_BP_C> Epilogue_Cutscene;                                 // 0x388(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         Init;                                              // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ExpectedPlayersForFailureCheck;                    // 0x3B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FirstFailureSceneTriggered;                        // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlayersReportedNoFirstFailure;                     // 0x3BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StopCheckingFailure;                               // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Skip_Scenes_In_Editor;                             // 0x3C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumPlayersExpectedForCutsceneCheck;                // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumPlayersReportedForCutsceneCheck;                // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CutscenesStarted;                                  // 0x3CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StopCheckingForActCompletion;                      // 0x3CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58BF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATravelVolume_SocialHub_C*             SocialHubTravelVolume;                             // 0x3D0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CutsceneEvalDone;                                  // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class AQtnPlayerPawn*>                ExpectedPlayers;                                   // 0x3E8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	class ADarkMatterHankey_BP_C*                DarkMatterButters;                                 // 0x3F8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_FTUXPrompt;                                     // 0x400(0x10)(Edit, BlueprintVisible)
	TArray<struct FQtnStruct_VOLine>             VO_ReturnFromFTUX;                                 // 0x410(0x10)(Edit, BlueprintVisible)
	int32                                        Debug_CutsceneTest;                                // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayingScene;                                      // 0x424(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InCutscene;                                        // 0x425(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58C1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTrainingMoment_Component_C*           Training_moment_component;                         // 0x428(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnStruct_VOLine                     VO_Arc2Completion_Long;                            // 0x430(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_Arc2Completion_Short;                           // 0x458(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AHubConversationManager_C*             HubConversationManager;                            // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EpilogueCutsceneID;                                // 0x488(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnLastRunStatus                     OldLastRunStatus;                                  // 0x48C(0x9)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AStaticMeshActor>       RoundTable;                                        // 0x498(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASocialHub_CutsceneManager_C* GetDefaultObj();

	void CheckEpilogue_ServerOnly(bool* Playing, bool CallFunc_Have_Players_Been_on_A_Mission_This_Session__Been_on_a_mission, bool CallFunc_Was_Last_Run_A_Failure__failure, bool CallFunc_Was_Last_Run_A_Failure__ignore_run, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UMissionDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, int32 CallFunc_GetCurrentArc_CurrentArc, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ACinematicSceneCharacter_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void RegisterHubConversationManager_ServerOnly(bool CallFunc_IsServer_ReturnValue);
	void GetTrainingMomentComponent(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess);
	void Server_Force_Cutscene(int32 Arc, bool K2Node_SwitchInteger_CmpSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ACinematicSceneCharacter_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Character_BP, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ACinematicSceneCharacter_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class ACinematicSceneCharacter_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Character_BP_2, bool K2Node_DynamicCast_bSuccess_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3, bool CallFunc_IsServer_ReturnValue, class ACinematicSceneCharacter_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Character_BP_3, bool K2Node_DynamicCast_bSuccess_3);
	void Server_CheckDMP(const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item, class UQtnGlobalRunProgress* CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue, class UGlobalRunProgress_C* K2Node_DynamicCast_AsGlobal_Run_Progress, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue);
	void Server_CompleteSocialHubInit(bool CallFunc_IsServer_ReturnValue);
	void UpdateRoundTableLightmapTypeOnSwitch(bool ForceVolumetric, enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AStaticMeshActor* K2Node_DynamicCast_AsStatic_Mesh_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void Server_PostCutscene();
	void OnEndScene();
	void OnStartScene();
	void Checkfor_DMPScreen(bool CallFunc_IsValid_ReturnValue);
	void RegisterHubTravelVolume(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess);
	void Report_Act_Completion(int32 Act, bool ReportNeed, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Variable, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ACinematicSceneCharacter_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Character_BP, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ACinematicSceneCharacter_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class ACinematicSceneCharacter_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Character_BP_2, bool K2Node_DynamicCast_bSuccess_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3, class ACinematicSceneCharacter_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Character_BP_3, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void CheckReadyForCutscenes(bool CallFunc_IsTradeshowDemo_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void Have_Players_Been_on_A_Mission_This_Session_(bool* Been_on_a_mission, class UQtnGlobalRunProgress* CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue, class UGlobalRunProgress_C* K2Node_DynamicCast_AsGlobal_Run_Progress, bool K2Node_DynamicCast_bSuccess);
	void Was_Last_Run_A_Failure_(bool* Failure, bool* Ignore_run, class UQtnGlobalRunProgress* CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UGlobalRunProgress_C* K2Node_DynamicCast_AsGlobal_Run_Progress, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void CheckActCompletion(int32 LOCAL_Act, bool CallFunc_IsPlayingInEditor_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Have_Players_Been_on_A_Mission_This_Session__Been_on_a_mission, bool CallFunc_Was_Last_Run_A_Failure__failure, bool CallFunc_Was_Last_Run_A_Failure__ignore_run, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, class UMissionDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_GetCurrentArc_CurrentArc, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Report_No_First_Failure(int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void PlayFirstFailureScene(bool CallFunc_IsServer_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ACinematicSceneCharacter_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetExpectedPlayers(TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_GetNumberOfPlayers_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void CheckFirstFailure(bool CallFunc_Was_Last_Run_A_Failure__failure, bool CallFunc_Was_Last_Run_A_Failure__ignore_run, bool CallFunc_IsServer_ReturnValue);
	void CheckOnHubEntryScenes(bool CallFunc_CheckEpilogue_ServerOnly_playing, bool CallFunc_CheckFirstHubVisit_playing);
	void CheckFirstHubVisit(bool* Playing, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ACinematicSceneCharacter_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, int32 CallFunc_GetNumberOfPlayers_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UMissionDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, int32 CallFunc_GetCurrentArc_CurrentArc, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Multicast_saveLocalPlayerSeenActCompletion(int32 Act);
	void Server_CheckAllPlayerActCompletionStatus(int32 Act);
	void Server_CheckFirstFailureStatus();
	void LOCALSetSocialHubInitComplete();
	void Multicast_CheckForDarkMatterBeckon();
	void bindPlayerEnterEvent();
	void CheckForFTUX(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer);
	void Multicast_PlayFTUXPromptToThisPlayer(class AQtnBodyPawn* This_player);
	void PlayReturnFromArc2VO();
	void ResetRunStatus_ServerOnly(class UClass* Calling_goal_class, int32 Cutscene_ID);
	void RollCredits();
	void ExecuteUbergraph_SocialHub_CutsceneManager(int32 EntryPoint, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UCreditsScreen_C* CallFunc_RegisterScreen_ReturnValue, float K2Node_Event_DeltaSeconds, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_AreAllExpectedPlayersReady_numExpectedPlayers, int32 CallFunc_AreAllExpectedPlayersReady_numReadyPlayers, bool CallFunc_AreAllExpectedPlayersReady_ReturnValue, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_IsPlayingInEditor_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 K2Node_CustomEvent_Act_1, bool K2Node_SwitchInteger_CmpSuccess, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool CallFunc_IsServer_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_2, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, int32 K2Node_CustomEvent_Act, bool K2Node_SwitchInteger_CmpSuccess_1, class AQtnPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable_1, class UQtnReplicatedSaveDataComponent* CallFunc_WaitForReplicationReadiness_readySaveData, class UReplicatedSaveDataComponent_C* K2Node_DynamicCast_AsReplicated_Save_Data_Component, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class AQtnPlayerPawn* CallFunc_Array_Get_Item_1, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype_1, bool K2Node_DynamicCast_bSuccess_3, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_3, class UQtnReplicatedSaveDataComponent* CallFunc_WaitForReplicationReadiness_readySaveData_1, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_1, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_1, class UReplicatedSaveDataComponent_C* K2Node_DynamicCast_AsReplicated_Save_Data_Component_1, bool K2Node_DynamicCast_bSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_4, class USocialHubDataBag_C* CallFunc_GetCustomDataBag_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_5, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_2, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_2, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_2, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_2, bool K2Node_SwitchEnum_CmpSuccess_6, class USocialHubDataBag_C* CallFunc_GetCustomDataBag_ReturnValue_2, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsServer_ReturnValue_2, class AQtnBodyPawn* K2Node_CustomEvent_this_player, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_7, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess_8, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_3, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_3, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_3, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_3, bool K2Node_SwitchEnum_CmpSuccess_9, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Is_This_Player_In_Any_Training_Moment_Player_in_training, bool CallFunc_LOCAL_IsPlayerInMenu_in_a_menu, bool CallFunc_Is_This_Player_In_Any_Training_Moment_Player_in_training_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_RandomBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UClass* K2Node_CustomEvent_calling_goal_class, int32 K2Node_CustomEvent_Cutscene_ID, bool CallFunc_IsServer_ReturnValue_4, class UQtnGlobalRunProgress* CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue, class UGlobalRunProgress_C* K2Node_DynamicCast_AsGlobal_Run_Progress, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UFTUXDataBag_C* CallFunc_GetLocalProgressDataBag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_6);
	void CutsceneEvalDone__DelegateSignature(bool PlayingCutscene);
};

}


