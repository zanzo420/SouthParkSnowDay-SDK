#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x908 - 0x8A0)
// BlueprintGeneratedClass QtnPlayerUIArchetype.QtnPlayerUIArchetype_C
class AQtnPlayerUIArchetype_C : public AQtnPlayerUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnPlayerUILateTickComponent_C*       QtnPlayerUILateTickComponent;                      // 0x8A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  LastAnnouncedArea;                                 // 0x8B0(0x18)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	class UPlayerHUD_C*                          CachedPlayerHUD;                                   // 0x8C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       SubtitleInhibitors;                                // 0x8D0(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            SubtitleInhibitorChanged;                          // 0x8E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  NetworkConnectionLostText;                         // 0x8F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AQtnPlayerUIArchetype_C* GetDefaultObj();

	class UQtnViewportHUD* GetViewportHUD(class UViewportHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UQtnViewportHUD* K2Node_DynamicCast_AsQtn_Viewport_HUD, bool K2Node_DynamicCast_bSuccess);
	void Check_for_Subtitle_Inhibitors(bool* Inhibited, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void RemoveSubtitleInhibitor(class UObject*& InhibitingObject, bool CallFunc_Check_for_Subtitle_Inhibitors_Inhibited, bool CallFunc_Array_RemoveItem_ReturnValue);
	void AddSubtitleInhibitor(class UObject*& NewInhibitor, bool CallFunc_Check_for_Subtitle_Inhibitors_Inhibited, int32 CallFunc_Array_AddUnique_ReturnValue);
	void RemoveRangedThreat(class AActor* RangedThreatActor, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UCombatHUDScreen_C* CallFunc_GetSubScreen_ReturnValue, class UCombatHUD_C* CallFunc_GetUserWidget_ReturnValue);
	void AddRangedThreat(class AActor* RangedThreatActor, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UCombatHUDScreen_C* CallFunc_GetSubScreen_ReturnValue, class UCombatHUD_C* CallFunc_GetUserWidget_ReturnValue);
	void RefreshCombatFillRatio(float FillRatio, float FadeDuration, bool ForVictimEscape);
	void RemoveCombatAbility(class UQtnVerb* VerbObject, bool CallFunc_GetCombatHUD_FoundWidget, class UCombatHUD_C* CallFunc_GetCombatHUD_CombatHUD);
	void AddCombatAbility(class UQtnVerb* VerbObject, bool CallFunc_GetCombatHUD_FoundWidget, class UCombatHUD_C* CallFunc_GetCombatHUD_CombatHUD);
	void Get_FTUX_Training_Moment_Screen(class UUI_FTUX_TrainingMoment_Screen_C** FtuxTrainingMomentScreen, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_GetScreen_ReturnValue);
	void GetGoalHUD(class UGoalHUD_C** GoalHUD, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UGoalHUD_C* CallFunc_GetUserWidget_ReturnValue);
	void ClearGoalTextOverrides(class UGoalHUD_C* GoalHUD, class UGoalHUD_C* CallFunc_GetGoalHUD_goalHUD);
	void SetGoalTextOverrides(class FText GoalTitle, class FText GoalSubtext, class FText NewLocalVar_0, class UGoalHUD_C* GoalHUD, class UGoalHUD_C* CallFunc_GetGoalHUD_goalHUD);
	void AnnounceNewArea(class FText& AreaAnnouncementName, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	class FString GetBugItInfoFromBP(const class FString& Info, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_getCurrentLevel_level_name, int32 CallFunc_GetCurrentArc_ReturnValue, TArray<class UQtnGoal*>& CallFunc_Get_Current_Goals_activeGoals, TArray<class UClass*>& CallFunc_Get_Current_Goals_activeGoalClassses, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue);
	void GetFTUXWeaponScreen(class UUI_FTUX_DedicatedMap_Screen_C** FtuxWeaponScreen, class UUI_FTUX_DedicatedMap_Screen_C* CallFunc_GetScreen_ReturnValue);
	void UnRegisterHUDSubscreen(class UClass* ScreenClass, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void RegisterHUDSubscreen(class UClass* SubScreenClass, class UQtnScreen** SubScreen, bool CallFunc_IsValidClass_ReturnValue, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UQtnScreen* CallFunc_RegisterSubScreen_ReturnValue);
	void OnGetCanPlayFailModalDialog(bool Ok);
	void MinimizeTeamInfo(bool Enabled, class UMessagingHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UPlayerPanelHUD_C* CallFunc_GetUserWidget_ReturnValue);
	void UpdateHintText(class FText HintText, class UQtnScreenMessagingHUD* CallFunc_GetMessagingHUD_ReturnValue, class UMessagingHUDScreen_C* K2Node_DynamicCast_AsMessaging_HUDScreen, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ReadyForUIEvent_Event_0(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI);
	void OnPlayerUIOccupy(class AQtnBodyPawn* OccupiedBodyPawn, bool FirstTime);
	void BndEvt__QtnPlayerUIArchetype_QtnPlayerUILateTickComponent_K2Node_ComponentBoundEvent_0_OnLateTick__DelegateSignature();
	void Show_Process_Invite_Spinner();
	void Start_Loading_Spinner(bool DisableCancel, class FText LoadingDescription);
	void Loading_Spinner_Cancel();
	void Hide_Process_Invite_Spinner(enum class EQtnAcceptInviteResult Result, const struct FQtnOnlineErrorCode& ErrorCode);
	void OnLostConnection();
	void ExecuteUbergraph_QtnPlayerUIArchetype(int32 EntryPoint, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerController* K2Node_CustomEvent_localPlayerController, class AQtnPlayerUI* K2Node_CustomEvent_localPlayerUI, class AQtnBodyPawn* K2Node_Event_occupiedBodyPawn, bool K2Node_Event_firstTime, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue_1, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_GetScreen_ReturnValue_2, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ULoadingSpinner_Screen_C* CallFunc_GetScreen_ReturnValue_3, bool K2Node_CustomEvent_DisableCancel, class FText K2Node_CustomEvent_LoadingDescription, enum class EQtnAcceptInviteResult K2Node_CustomEvent_Result, const struct FQtnOnlineErrorCode& K2Node_CustomEvent_ErrorCode, class FText CallFunc_Conv_OnlineErrorToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool K2Node_SwitchEnum_CmpSuccess_1, class FText CallFunc_Format_ReturnValue_1, class UQtnOnlineManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UViewportHUDScreen_C* CallFunc_GetScreen_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, class FText CallFunc_MakeLiteralText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText CallFunc_MakeLiteralText_ReturnValue_1, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue_3, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue_4, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_5, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue_6, class UUserWidget* CallFunc_QueueSimpleModalDialog_ReturnValue_7, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_SwitchEnum_CmpSuccess_3);
	void SubtitleInhibitorChanged__DelegateSignature(bool Inhibited);
};

}


