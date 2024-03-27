#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2B8 - 0x260)
// WidgetBlueprintGeneratedClass UpgradeAffordance_Widget.UpgradeAffordance_Widget_C
class UUpgradeAffordance_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_FillBar;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_SelectUpgrade;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichText__SelectUpgrade;                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichText_Promote;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vbox_Affordance;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        UpgradeCost;                                       // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Already_Upgraded;                                  // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanAfford;                                         // 0x295(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanUpgrade;                                        // 0x296(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UsingMouseKeyboard;                                // 0x297(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WasCostModified;                                   // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OriginalCost;                                      // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AtMax;                                             // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnPerkComponent*                     Character_Perk_Component;                          // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UQtnUpgrade>               EU_WiperInflation;                                 // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUpgradeAffordance_Widget_C* GetDefaultObj();

	void SearchForEnemyUpgrade(class UClass*& EnemyUpgradeToFind, bool* UpgradeFound, int32 LOCAL_UpgradeIndex, class UClass* LOCAL_UpgradeClass, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, TArray<TSubclassOf<class UQtnUpgrade>>& CallFunc_GetCurrentEnemyUpgrades_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void FormatPriceAndIfAffordable(class FText* Result, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetAffordanceWithString(class FText* Result, bool Temp_bool_Variable, const class FString& CallFunc_StaticParseInputText_ReturnValue, const class FString& CallFunc_StaticParseInputText_ReturnValue_1, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Cache_Perk_Component(enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	class FString GetAffordance(bool Temp_bool_Variable, const class FString& CallFunc_StaticParseInputText_ReturnValue, const class FString& CallFunc_StaticParseInputText_ReturnValue_1, const class FString& K2Node_Select_Default);
	void GetUpgradeRarity(const struct FGameplayTag& CurrentRarity, bool* Upgradeable, class FText* NextUpgradeLevel, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess);
	void InputChange(bool IsUsingMouseAndKeyboard);
	void SetupAffordance(bool MouseKeyboard, int32 UpgradeCost, int32 OriginalCost, bool WasCostModified, bool CanAfford, const struct FGameplayTag& CardRarity, bool IsJokerCard);
	void UpdateFill(float FillAmount);
	void Construct();
	void ExecuteUbergraph_UpgradeAffordance_Widget(int32 EntryPoint, bool CallFunc_SearchForEnemyUpgrade_UpgradeFound, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, bool K2Node_CustomEvent_mouseKeyboard, int32 K2Node_CustomEvent_upgradeCost, int32 K2Node_CustomEvent_OriginalCost, bool K2Node_CustomEvent_wasCostModified, bool K2Node_CustomEvent_CanAfford, const struct FGameplayTag& K2Node_CustomEvent_CardRarity, bool K2Node_CustomEvent_IsJokerCard, float K2Node_CustomEvent_FillAmount, bool CallFunc_GetUpgradeRarity_Upgradeable, class FText CallFunc_GetUpgradeRarity_NextUpgradeLevel, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FText Temp_text_Variable_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool Temp_bool_Variable_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText K2Node_Select_Default, bool CallFunc_IsPerkActive_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_GetAffordanceWithString_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_FormatPriceAndIfAffordable_Result, class FText CallFunc_GetAffordanceWithString_Result_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_FormatPriceAndIfAffordable_Result_1, class FText CallFunc_Format_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3);
};

}


