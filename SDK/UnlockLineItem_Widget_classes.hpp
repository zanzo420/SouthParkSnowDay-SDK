#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x2A9 - 0x260)
// WidgetBlueprintGeneratedClass UnlockLineItem_Widget.UnlockLineItem_Widget_C
class UUnlockLineItem_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_UnlockItem;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_UnlockName;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUnlockReward_Widget_C*                UnlockReward_Widget;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  Unlock_ID;                                         // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnUnlocksComponent*                  UnlocksComponent;                                  // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CallHovered;                                       // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUnlockData_O_C*                       AsUnlockDataObject;                                // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UnlockHovered;                                     // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUnlockLineItem_Widget_C* GetDefaultObj();

	void OnUnlockListEntryPressed(bool IsPressed, class UUnlockLineItem_Widget_C* UnlockLineItem, bool* AllowHold);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnUnlockListEntryHovered(bool IsHovered, class UUnlockLineItem_Widget_C* UnlockLineItem);
	void AnimSeq_Hover(bool IsHovered);
	void InitUnlockInfo(class FName UnlockId);
	void BndEvt__UnlockLineItem_Widget_Button_UnlockItem_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UnlockLineItem_Widget_Button_UnlockItem_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void ForceUnhover();
	void ExecuteUbergraph_UnlockLineItem_Widget(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, bool K2Node_Event_IsHovered, class UUnlockLineItem_Widget_C* K2Node_Event_UnlockLineItem, bool K2Node_CustomEvent_IsHovered, class FName K2Node_CustomEvent_UnlockId, class UObject* K2Node_Event_ListItemObject, class UUnlockData_O_C* K2Node_DynamicCast_AsUnlock_Data_O, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetUnlockInfo_displayName, class FText CallFunc_GetUnlockInfo_description, bool CallFunc_GetUnlockInfo_isSecret, class UTexture2D* CallFunc_GetUnlockInfo_icon, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockKey, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockCategory, const struct FQtnUnlockRewards& CallFunc_GetUnlockInfo_unlockRewards, class FText CallFunc_GetUnlockInfo_rewardName, TSubclassOf<class UQtnDLCInfo> CallFunc_GetUnlockInfo_requiredDLC, bool CallFunc_GetUnlockProgress_ClientOnly_isUnlocked, int32 CallFunc_GetUnlockProgress_ClientOnly_numOccurrences, int32 CallFunc_GetUnlockProgress_ClientOnly_targetOccurrences, TScriptInterface<class IQtnUnlockListEntry_BPI_C> K2Node_DynamicCast_AsQtn_Unlock_List_Entry_BPI, bool K2Node_DynamicCast_bSuccess_1);
	void CallHovered__DelegateSignature(bool Focused);
};

}


