#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2A8 - 0x260)
// WidgetBlueprintGeneratedClass RulebookReward_Widget.RulebookReward_Widget_C
class URulebookReward_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Icon;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_Currency;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_Name;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_OldReward_1;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_Reward;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_0;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                RewardBase;                                        // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnCombatSettings*                    QtnGameCombatSettings;                             // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URulebookReward_Widget_C* GetDefaultObj();

	void ShowCosmetic(class UClass* RewardBase, class UReward_UnlockBase_C* CallFunc_GetClassDefaultObject_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void ShowCurrency(class ABodyPawnPlayer_C* BodyPawnPlayer, TSubclassOf<class URulebookRewardBase_C> Reward, class URulebookRewardBase_C* LOCAL_RewardDefaultObject, bool Temp_bool_Variable, class URulebookRewardBase_C* CallFunc_GetClassDefaultObject_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_GetCurrencyConfigurationFromCurrencyTag_FoundConfiguration, const struct FQtnLootItemVisualConfiguration& CallFunc_GetCurrencyConfigurationFromCurrencyTag_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_AdjustCurrencyReward_AmountToReceive, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void InitReward(TSubclassOf<class URulebookRewardBase_C> RewardToApply);
	void OnInitialized();
	void ExecuteUbergraph_RulebookReward_Widget(int32 EntryPoint, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, TSubclassOf<class URulebookRewardBase_C> K2Node_CustomEvent_RewardToApply, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsReward_Unlock_Base, bool K2Node_ClassDynamicCast_bSuccess, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess);
};

}


