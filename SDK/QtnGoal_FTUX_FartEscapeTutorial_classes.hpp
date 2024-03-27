#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1FC (0x4DC - 0x2E0)
// BlueprintGeneratedClass QtnGoal_FTUX_FartEscapeTutorial.QtnGoal_FTUX_FartEscapeTutorial_C
class UQtnGoal_FTUX_FartEscapeTutorial_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ATargetLocationVolume_C*               ReachedSchoolVolume;                               // 0x2E8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  GoalDetail_Guidance;                               // 0x2F0(0x18)(Edit, BlueprintVisible)
	class ATargetLocationVolume_C*               ReachedLedgeVolume;                                // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_JumpReminder;                                   // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VO_JumpDone;                                       // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6636[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalDetail_Follow;                                 // 0x328(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_School;                                 // 0x340(0x18)(Edit, BlueprintVisible)
	class FText                                  Tutorial_Heading;                                  // 0x358(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Tutorial_Prompt;                                   // 0x370(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AUpgradeStation_GrantFartEscape_C*     JimmyStation;                                      // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_JimmyGreeting;                                  // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VO_JimmyGreeted;                                   // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6637[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALocationMarker_BP_C*                  WindowQuestMarker;                                 // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATargetLocationVolume_C*               NearbyJimmyVolume;                                 // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_JimmyGreeting_NoWeapon;                         // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_ExplainPower;                                   // 0x3C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_ReactPower;                                     // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_JimmyGreeting_Unproved;                         // 0x3E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalDetail_ListenJimmy;                            // 0x3F8(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_Try;                                    // 0x410(0x18)(Edit, BlueprintVisible)
	bool                                         VO_PowerExplained;                                 // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6638[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Heading;                                           // 0x430(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VO_DebugAllow;                                     // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6639[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             VO_ReachedSchool;                                  // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VO_LedgeReached;                                   // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         VO_ReachedSchoolWindow;                            // 0x461(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_663A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalDetail_ReachLedge;                             // 0x468(0x18)(Edit, BlueprintVisible)
	TArray<struct FQtnStruct_VOLine>             VO_JimmyBeckon;                                    // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          VO_JimmyBeckonReminderHandle;                      // 0x490(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        VO_JimmyBeckonTimer;                               // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VO_JimmyFrobbed;                                   // 0x49C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_663B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             VO_InSchool;                                       // 0x4A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AScriptedSkeletalActor_Trial_C*        Jimmy;                                             // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFTUX_Powers_ModalWidget_C*            ModalWidget;                                       // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VO_Listening;                                      // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_663C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VO_TimeBetweenFirstFartReminders;                  // 0x4C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          VO_ReachRidgeTimer;                                // 0x4C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          VO_FirstFartTimer;                                 // 0x4D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        VO_TimeBetweenGoToRidgeReminders;                  // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnGoal_FTUX_FartEscapeTutorial_C* GetDefaultObj();

	void VO_Play_Ridge_Reminder_Server_Only(const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Popup(class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class UFTUX_Powers_Screen_C* CallFunc_GetScreen_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFTUX_Powers_ModalWidget_C* CallFunc_GetUserWidget_ReturnValue);
	void PostPowerSelection(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess);
	void VO_Jimmy_Beckon_Reminder(enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Is_Player_Combat_Proven_(bool* Proven, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX, bool K2Node_DynamicCast_bSuccess, class UQtnGoal_FTUX_KillSnowMen_C* K2Node_DynamicCast_AsQtn_Goal_FTUX_Kill_Snow_Men, bool K2Node_DynamicCast_bSuccess_1);
	void DoesPlayerHaveDaggers_(bool* Has_daggers, class UClass* Temp_class_Variable, bool CallFunc_Is_Player_Combat_Proven__proven, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnGoalManager_FTUX_C* K2Node_DynamicCast_AsQtn_Goal_Manager_FTUX, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
	void GetQuestMarker(class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
	void DEBUGONLY_Start_Goal(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_1, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_1, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_1, bool CallFunc_GetLocalPlayerInformation_isHosting_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_1, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
	void EnableFartEscape(const struct FQtnItemData& FartEscapeData, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FQtnItemData& K2Node_MakeStruct_QtnItemData, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue);
	void FartEscapeTutorial(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlledPlayer_ReturnValue);
	void VO_Play_Power_Reminder_Server_Only(bool CallFunc_IsServer_ReturnValue, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item);
	void Post_VOConversation_Server_Only(enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1);
	void Get_Jimmy(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors_1, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AUpgradeStation_GrantFartEscape_C* K2Node_DynamicCast_AsUpgrade_Station_Grant_Fart_Escape, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void EndSequence(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetTargetLocation(class FName Temp_name_Variable, class FName Temp_name_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName Temp_name_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ATargetLocationVolume_C* K2Node_DynamicCast_AsTarget_Location_Volume, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_2);
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void OnGoalSpawned_ServerOnly();
	void bindWindowVolumeEvents();
	void PlayerEnteredWindow(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit);
	void UnbindVolumeEvents();
	void bindReachedLedgeVO();
	void JumpSuccess(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit);
	void UnbindJumpSuccessVO();
	void DelayAndFartEscapeTutorial();
	void bindNearbyJimmyEvent();
	void PlayerNearJimmy(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit);
	void BindFartEscapeUsedEvents();
	void OnFartEscapeDone(class UQtnVerb* Verb, bool IsServer);
	void Success();
	void UnbindFartEscapeUsedEvents();
	void bindJimmyFrobEvent();
	void JimmyGrantedFartEscape(class ABodyPawnPlayer_C* Player_who_upgraded);
	void GetJimmyWhenAvailable();
	void bindModalEndEvent();
	void PlayerLeftModal();
	void ExecuteUbergraph_QtnGoal_FTUX_FartEscapeTutorial(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered_2, bool K2Node_CustomEvent_onExit_2, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered_1, bool K2Node_CustomEvent_onExit_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered, bool K2Node_CustomEvent_onExit, bool CallFunc_doesPlayerHaveDaggers__has_daggers, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item, bool CallFunc_Is_Player_Combat_Proven__proven, class UQtnVerb* K2Node_CustomEvent_verb, bool K2Node_CustomEvent_isServer, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ABodyPawnPlayer_C* K2Node_CustomEvent_player_who_upgraded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2);
};

}


