#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x338 - 0x298)
// WidgetBlueprintGeneratedClass MessagingHUD.MessagingHUD_C
class UMessagingHUD_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      HintWarning;                                       // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HintPulse;                                         // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_GateTimer_Widget_C*                BP_GateTimer_Widget;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PopUnlock_Widget_C*                BP_PopUnlock_Widget;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQtnInputTextBlock*                    HintText;                                          // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               OnScreenHint;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               OnScreenWarning;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          RootCanvasPanel;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          SafeZoneCanvasPanel;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQtnInputTextBlock*                    WarningText;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        HintTextDuration;                                  // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HintLooping;                                       // 0x2F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          UnlockDTRowName;                                   // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABodyPawnPlayer_C*                     MyBodyPawnPlayer;                                  // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       UnlockInhibitors;                                  // 0x310(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	bool                                         bIsPendingUnlock;                                  // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          PendingUnlocksArray;                               // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UMessagingHUD_C* GetDefaultObj();

	void UpdateWarningText(class FText HintText);
	void HideWarning();
	void ShowWarning(class FText HintText, float Duration, const class FString& CallFunc_StaticParseInputText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetTimerPosition(bool ResetToDefault, enum class EVerticalAlignment VerticalPosition, enum class EHorizontalAlignment HorizontalPosition, enum class EHorizontalAlignment LOCAL_HorizontalPosition, enum class EVerticalAlignment LOCAL_VerticalPosition, enum class EVerticalAlignment Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, enum class EHorizontalAlignment Temp_byte_Variable_1, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, enum class EHorizontalAlignment Temp_byte_Variable_2, float Temp_float_Variable_8, float Temp_float_Variable_9, float Temp_float_Variable_10, float Temp_float_Variable_11, enum class EVerticalAlignment Temp_byte_Variable_3, float Temp_float_Variable_12, float Temp_float_Variable_13, float Temp_float_Variable_14, float Temp_float_Variable_15, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float K2Node_Select_Default_2, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_1, float K2Node_Select_Default_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FAnchors& K2Node_MakeStruct_Anchors);
	void CloseGateTimer();
	void UpdateGateTimer(float TimerDuration, int32 NumPlayersReady, bool NoCountdown);
	void AreUnlocksInhibited_(bool* Inhibited, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsLocalCutsceneActive_doWorldCleanup, bool CallFunc_IsLocalCutsceneActive_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void RemoveUnlockInhibitor(class UObject*& Inhibitor, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void AddUnlockInhibitor(class UObject*& Inhibitor, int32 CallFunc_Array_Add_ReturnValue);
	void CheckUnlockArray(class UQtnUnlocksComponent* CallFunc_GetUnlocksComponent_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FQtnUnlockDatabaseRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class FText CallFunc_GetUnlockInfo_displayName, class FText CallFunc_GetUnlockInfo_description, bool CallFunc_GetUnlockInfo_isSecret, class UTexture2D* CallFunc_GetUnlockInfo_icon, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockKey, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockCategory, const struct FQtnUnlockRewards& CallFunc_GetUnlockInfo_unlockRewards, class FText CallFunc_GetUnlockInfo_rewardName, TSubclassOf<class UQtnDLCInfo> CallFunc_GetUnlockInfo_requiredDLC, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsAnyAnimationPlaying_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void UpdateHintText(class FText HintText);
	void HideHint();
	void ShowHint(class FText HintText, float Duration, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnQtnWidgetInitialized();
	void OnQtnWidgetResumed(class UQtnScreen* PreviousScreen);
	void HandleToggleUI(bool IsHidden);
	void RefreshUnlockNotification();
	void OnGrantUnlockRewardsClient(struct FQtnUnlockDatabaseRow& UnlockDatabaseRow, class FName UnlockDataTableRowName);
	void OnQtnWidgetReadyForGameplay();
	void CollapseUnlockNotification();
	void OnQtnWidgetTicked(float DeltaSeconds);
	void LOCAL_UnlockRewards(class FName UnlockId);
	void OnJoinPartyCompleted(enum class EQtnJoinPartyResult Result, const struct FQtnOnlineErrorCode& ErrorCode);
	void ExecuteUbergraph_MessagingHUD(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, bool K2Node_CustomEvent_isHidden, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsScreenActive_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, bool CallFunc_IsUIHidden_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FQtnUnlockDatabaseRow& K2Node_CustomEvent_unlockDatabaseRow, class FName K2Node_CustomEvent_unlockDataTableRowName, float K2Node_Event_DeltaSeconds, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UQtnOnlineManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_AreUnlocksInhibited__Inhibited, class FName K2Node_CustomEvent_UnlockId, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_AreUnlocksInhibited__Inhibited_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_AreUnlocksInhibited__Inhibited_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EQtnJoinPartyResult K2Node_CustomEvent_Result, const struct FQtnOnlineErrorCode& K2Node_CustomEvent_ErrorCode, bool K2Node_SwitchEnum_CmpSuccess);
};

}


