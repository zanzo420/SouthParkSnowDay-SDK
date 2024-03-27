#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x310 - 0x260)
// WidgetBlueprintGeneratedClass BP_PopListManager_Widget.BP_PopListManager_Widget_C
class UBP_PopListManager_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Text_PopListCount;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vbox_PopList;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vbox_UpgradeList;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  Colors;                                            // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, class UBP_PopListItem_Widget_C*> ExistingGTPopListItems;                            // 0x290(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            PopupOnHUD;                                        // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            WalletPopupsCleared;                               // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        TimerRulebookVote;                                 // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5782[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPlayerController*                  Local_Player_Controller;                           // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PopListManager_Widget_C* GetDefaultObj();

	void OnInitialized();
	void CheckForEmpty();
	void GenerateListItem(TScriptInterface<class IQtnItemDataProviderInterface> ItemPickup);
	void OnPopListCountChangedEvent();
	void ExecuteUbergraph_BP_PopListManager_Widget(int32 EntryPoint, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UBP_PopListItem_Widget_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TScriptInterface<class IQtnItemDataProviderInterface> K2Node_CustomEvent_ItemPickup, class AActor* CallFunc_FetchItemActor_ReturnValue, class ALootItem_Archetype_C* K2Node_DynamicCast_AsLoot_Item_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UBP_PopListItem_Widget_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void WalletPopupsCleared__DelegateSignature();
	void PopupOnHUD__DelegateSignature(class UBP_PopListItem_Widget_C* PopupWidget);
};

}


