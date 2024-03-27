#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x360 - 0x298)
// WidgetBlueprintGeneratedClass UnlockMenu_Widget.UnlockMenu_Widget_C
class UUnlockMenu_Widget_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowTooltip;                                       // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenMenu;                                          // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Banner;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanelSafe;                                   // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                       List_UnlockItems;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_Unlocks;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_LineItems;                               // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUnlockTooltip_Widget_C*               UnlockTooltip_Widget;                              // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABodyPawnPlayer_C*                     As_Body_Pawn_Player;                               // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TMap<class FString, class FText>             Affordances;                                       // 0x2F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UGlobalNav_Widget_C*                   MyGlobalNav;                                       // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        Anim_Current_Time;                                 // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5491[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUnlockLineItem_Widget_C*              HoveredUnlockEntry;                                // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUnlockTooltip_Widget_C*               UnlockTooltip;                                     // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUnlockMenu_Widget_C* GetDefaultObj();

	void RequestCurrencyVisibilities(bool* ShowTP, bool* ShowDM, bool* ShowPP, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess);
	void OnUnlockListEntryPressed(bool IsPressed, class UUnlockLineItem_Widget_C* UnlockLineItem, bool* AllowHold);
	void SequenceEvent__ENTRYPOINTUnlockMenu_Widget_0();
	void UpdateGamepadFocus(bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue);
	void HideTooltip(bool CallFunc_IsValid_ReturnValue);
	void CheckForHover(bool LOCAL_HoveredFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsHovered_ReturnValue);
	void CreateTooltip(class UCanvasPanelSlot** TooltipCanvasPanelSlot, bool CallFunc_IsValid_ReturnValue, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UUnlockTooltip_Widget_C* CallFunc_SpawnObject_ReturnValue);
	void AddUnlockToList(class FName Unlock_ID, class UQtnUnlocksComponent* OwningUnlockComponent, class UUnlockData_O_C* CallFunc_SpawnObject_ReturnValue);
	void GenerateUnlockList(TArray<class FName>& Array, class UQtnUnlocksComponent* LOCAL_UnlocksComponent, const TArray<class FName>& LOCAL_UnlockNameIDs, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnDLCManager* CallFunc_GetDLCManager_ReturnValue, class UUnlockData_O_C* CallFunc_SpawnObject_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetUnlockInfo_displayName, class FText CallFunc_GetUnlockInfo_description, bool CallFunc_GetUnlockInfo_isSecret, class UTexture2D* CallFunc_GetUnlockInfo_icon, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockKey, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockCategory, const struct FQtnUnlockRewards& CallFunc_GetUnlockInfo_unlockRewards, class FText CallFunc_GetUnlockInfo_rewardName, TSubclassOf<class UQtnDLCInfo> CallFunc_GetUnlockInfo_requiredDLC, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_HasPurchasedDLC_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void UpdateAffordance(bool IsUsingMouseKeyboard, bool LOCAL_MouseKeyboard, bool CallFunc_IsValid_ReturnValue, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UGlobalNav_Widget_C* K2Node_DynamicCast_AsGlobal_Nav_Widget, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, TScriptInterface<class IGlobalNavAffordance_Interface_C> CallFunc_UpdateGlobalNavAffordances_self_CastInput, TScriptInterface<class IGlobalNavAffordance_Interface_C> CallFunc_UpdateGlobalNavAffordances_self_CastInput_1);
	void UpdateGlobalNavAffordances(TMap<class FString, class FText> Affordances, class UClass* MyClass);
	void IntroRepeater();
	void AnimSeq_ToggleMenu(bool WantShown);
	void OnQtnWidgetResumed(class UQtnScreen* PreviousScreen);
	void OnQtnWidgetInitialized();
	void InputChange(bool IsUsingMouseAndKeyboard);
	void RequestAffordance();
	void OnUIScroll(float ScrollDelta, bool FromStick);
	void OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction);
	void CloseMenu();
	void OnQtnWidgetUnInitialized();
	void PreConstruct(bool IsDesignTime);
	void OnUnlockListEntryHovered(bool IsHovered, class UUnlockLineItem_Widget_C* UnlockLineItem);
	void ItemUnhovered();
	void OnQtnWidgetHidden();
	void ExecuteUbergraph_UnlockMenu_Widget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UDataTable* CallFunc_GetUnlocksDataTable_ReturnValue, TMap<class FString, class FText> K2Node_Event_Affordances, class UClass* K2Node_Event_myClass, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool K2Node_CustomEvent_WantShown, float CallFunc_GetStartTime_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue_1, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue, class UGlobalNav_Widget_C* K2Node_DynamicCast_AsGlobal_Nav_Widget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1, float K2Node_Event_scrollDelta, bool K2Node_Event_fromStick, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_FClamp_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool K2Node_Event_IsHovered, class UUnlockLineItem_Widget_C* K2Node_Event_UnlockLineItem, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Ease_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


