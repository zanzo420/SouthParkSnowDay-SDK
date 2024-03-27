#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x960 (0xBC0 - 0x260)
// WidgetBlueprintGeneratedClass NotificationCard_Widget.NotificationCard_Widget_C
class UNotificationCard_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Upgrade;                                           // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                CardFlash;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Glow_Card;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_UpgradeDescription;                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BullshitCard_Widget_C*             UI_BullshitCard_Widget;                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_CardIcon_Widget_C*                 UI_CardIcon_Widget;                                // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  RarityColorTable;                                  // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FUI_Card_Struct                       Current_Card;                                      // 0x2A8(0x340)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            HUD_Notification;                                  // 0x5E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UScrollSmall_Widget_C*                 UpgradeScrollWidget;                               // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnemyBSManagerComponent_C*            Enemy_BSManager_Component;                         // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFUpgradeNotificationQueueEntry> UpgradeCardQueue;                                  // 0x608(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CurrentOriginalLevel;                              // 0x618(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5339[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFUpgradeNotificationQueueEntry       CurrentQueueEntry;                                 // 0x620(0x5A0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNotificationCard_Widget_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTNotificationCard_Widget_4();
	void SequenceEvent__ENTRYPOINTNotificationCard_Widget_3();
	void SequenceEvent__ENTRYPOINTNotificationCard_Widget_2();
	void SequenceEvent__ENTRYPOINTNotificationCard_Widget_1();
	void SequenceEvent__ENTRYPOINTNotificationCard_Widget_0();
	void RefreshLevelScrollWidget(bool CallFunc_IsValid_ReturnValue, class UScrollSmall_Widget_C* CallFunc_SpawnObject_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_FormatUpgradeText_ReturnValue);
	void RefreshCardWithQueueEntry();
	void OverrideCardLevelUI(int32 LevelToShow, class FText CallFunc_Conv_IntToText_ReturnValue);
	void UpdateCardStruct(struct FUI_Card_Struct& NewestFoilPackOrEnemyBS, struct FUI_Card_Struct* UI_Card_Struct1, const struct FUI_Card_Struct& LOCAL_NewestCard, bool CallFunc_IsAnyAnimationPlaying_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue);
	void AnimTrigger_CardTint();
	void Anim_CardUpgrade(int32 OrigLevel, const struct FQtnUpgradeSettings& UpgradeSettings, const struct FQtnRolledUpgradeData& UpgradeRolledData);
	void CollapseCard();
	void OnInitialized();
	void CallRemoveToHUD();
	void AddUpgradeScroll();
	void AnimTrigger_CardLevelUp();
	void Internal_InjectFromQueue_CardUpgrade(const struct FFUpgradeNotificationQueueEntry& UpgradeQueueEntry);
	void AnimTrigger_IncrementCardLevel();
	void ExecuteUbergraph_NotificationCard_Widget(int32 EntryPoint, int32 K2Node_CustomEvent_OrigLevel, const struct FQtnUpgradeSettings& K2Node_CustomEvent_UpgradeSettings, const struct FQtnRolledUpgradeData& K2Node_CustomEvent_UpgradeRolledData, const struct FFUpgradeNotificationQueueEntry& K2Node_MakeStruct_FUpgradeNotificationQueueEntry, TArray<struct FLinearColor>& K2Node_MakeArray_Array, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FFUpgradeNotificationQueueEntry& K2Node_CustomEvent_UpgradeQueueEntry, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const struct FFUpgradeNotificationQueueEntry& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
	void HUD_Notification__DelegateSignature(bool Adding);
};

}


