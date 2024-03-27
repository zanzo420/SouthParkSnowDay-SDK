#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C9 (0x519 - 0x250)
// BlueprintGeneratedClass TrainingMoment_BP.TrainingMoment_BP_C
class ATrainingMoment_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         TriggerZone;                                       // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_Reminder;                                       // 0x268(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_TriggeredIntroduction;                          // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         InProgress;                                        // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            TrainingInProgress;                                // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            TrainingOver;                                      // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bLocked;                                           // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             VO_PostTraining_Success;                           // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_PostTraining_Snark;                             // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                TempMsg_Reminder;                                  // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                TempMsg_Introduction;                              // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Init;                                              // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ExpectedPlayersForTraining;                        // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                DisplayName;                                       // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_Urge;                                           // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Local_enteredTrainingMenu;                         // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UrgeWait;                                          // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ReminderVODone;                                    // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            IntroductionVODone;                                // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            TrainingApproached;                                // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Approached;                                        // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AQtnPlayerPawn*>                PlayersTrainingHere;                               // 0x360(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	class FText                                  GoalDescription_Interact;                          // 0x370(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalDescription_Listen;                            // 0x388(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalTitle;                                         // 0x3A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalDescription_Visit;                             // 0x3B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FIndicatorData                        IndicatorData;                                     // 0x3D0(0x129)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_4D0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VisibilityDistance;                                // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideUntilPathConfirmed;                            // 0x504(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         blockReminderVO;                                   // 0x505(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D1[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        PowerWeaponTutorialClasses;                        // 0x508(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UseVolumeOverlap;                                  // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ATrainingMoment_BP_C* GetDefaultObj();

	void Hide_Weapon_Power_Tutorial(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FQtnTutorialInstanceData>& CallFunc_GetAllActiveTutorials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnTutorialInstanceData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void MakeIndicatorData();
	void LOCAL_PostIntroEvent();
	void LOCAL_Remove_My_Icon(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess);
	void LOCAL_AddMyIcon(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess);
	void AddRemoveHUDIcons(bool Adding, class AActor* Actor_to_Track, class UTexture2D* Optional_Icon, TScriptInterface<class IIndicatorData_Interface_C> K2Node_DynamicCast_AsIndicator_Data_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FIndicatorData& CallFunc_GetIndicatorData_indicatorData, bool CallFunc_IsValid_ReturnValue, class ABP_GoalPickup_C* K2Node_DynamicCast_AsBP_Goal_Pickup, bool K2Node_DynamicCast_bSuccess_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsLocalPlayerUIReadyBP_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_2, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess_2, class UScreenIndicator_C* CallFunc_AddRemoveTrackedActor_indicatorOut);
	void Local_Kick_Off_Urge();
	void Check_for_Urge_Reminder(enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Is_This_Player_In_Any_Training_Menu_Player_in_training, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item);
	void BlockThisTraining();
	void CanAccessThisTraining_(bool* CanAccess);
	void LOCAL_DoesLocalPlayerNeedThisTraining();
	void PostVOEvent(const class FString& ID, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1);
	void PlayReminderVO(class ABodyPawnPlayer_C* Player);
	void CheckAllPlayersCompletedTraining(bool LOCAL_FoundIncomplete);
	void MarkTrainingCompleteForThisPlayer(class AQtnPlayerPawn* Player, bool Get_snark_, bool CallFunc_IsServer_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void MarkTrainingComplete(enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue);
	void IntroductionComplete(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void PlayTriggeredIntroduction(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess);
	void HasPlayerCompletedThisTraining(class AQtnPlayerPawn* Player);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__TrainingMoment_BP_TriggerZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void Multicast_CheckPlayersSaveLoadLocally(class AQtnPlayerPawn* Player);
	void Multicast_MarkTrainingComplete(class AQtnPlayerPawn* Player, bool GetSnark_);
	void LOCAL_playVOWithLatency(TArray<struct FQtnStruct_VOLine>& VO_lines, const class FString& ID);
	void Multicast_CheckAnyoneNeedsThisTraining();
	void Multicast_CheckForUrge();
	void PlayReminderVOWithLatency(TArray<struct FQtnStruct_VOLine>& Lines, class AQtnBodyPawn* PlayerPawn, const class FString& ID);
	void LOCAL_PlayReminder(TArray<struct FQtnStruct_VOLine>& Lines, class AQtnBodyPawn* PlayerPawn, const class FString& ID);
	void StartUIForThisTraining();
	void BndEvt__TrainingMoment_BP_TriggerZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void PlayerAttemptingTrigger(class AActor* Actor);
	void ExecuteUbergraph_TrainingMoment_BP(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float K2Node_Event_DeltaSeconds, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AQtnPlayerPawn* K2Node_CustomEvent_player_1, class AQtnPlayerPawn* K2Node_CustomEvent_player, bool K2Node_CustomEvent_getSnark_, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FQtnStruct_VOLine>& K2Node_CustomEvent_VO_lines, const class FString& K2Node_CustomEvent_ID_2, int32 Temp_int_Array_Index_Variable_2, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_canAccessThisTraining__canAccess, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FQtnStruct_VOLine>& K2Node_CustomEvent_Lines_1, class AQtnBodyPawn* K2Node_CustomEvent_playerPawn_1, const class FString& K2Node_CustomEvent_ID_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<struct FQtnStruct_VOLine>& K2Node_CustomEvent_Lines, class AQtnBodyPawn* K2Node_CustomEvent_playerPawn, const class FString& K2Node_CustomEvent_ID, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype_1, bool K2Node_DynamicCast_bSuccess_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess_3, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_4, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin_2, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype_2, bool K2Node_DynamicCast_bSuccess_5, class AActor* K2Node_CustomEvent_actor, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_2, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1);
	void TrainingApproached__DelegateSignature(class ATrainingMoment_BP_C* Training_moment);
	void IntroductionVODone__DelegateSignature();
	void ReminderVODone__DelegateSignature();
	void TrainingOver__DelegateSignature(class ATrainingMoment_BP_C* This_training_ended);
	void TrainingInProgress__DelegateSignature(class ATrainingMoment_BP_C* This_Training_Moment);
};

}


