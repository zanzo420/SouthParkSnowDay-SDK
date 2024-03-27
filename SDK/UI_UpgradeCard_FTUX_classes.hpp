#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x350 (0x5B0 - 0x260)
// WidgetBlueprintGeneratedClass UI_UpgradeCard_FTUX.UI_UpgradeCard_FTUX_C
class UUI_UpgradeCard_FTUX_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Highlight;                                         // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_Card;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Card;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Hover;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Description;                              // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Name;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_BullshitDescription;                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Level;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Rarity;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_UpgradeName;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FQtnUpgradeSettings                   UpgradeSettings;                                   // 0x2B8(0x1F8)(Edit, BlueprintVisible)
	struct FQtnRolledUpgradeData                 UpgradeRolledData;                                 // 0x4B0(0x60)(Edit, BlueprintVisible)
	TMap<struct FGameplayTag, class UMaterialInstance*> RarityToMaterialInstanceMap;                       // 0x510(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, class FText>       RarityTagToRarityString;                           // 0x560(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUI_UpgradeCard_FTUX_C* GetDefaultObj();

	void UpgradeRefreshLevel(class FText CallFunc_Conv_IntToText_ReturnValue);
	void Set_Description_Text(class FText CallFunc_Format_Upgrade_Value_OutFormattedValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_1, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SetCardName();
	void Refresh_Bullshit_or_Upgrade_UI(class UObject* LOCAL_Font_Meanwhile, class UObject* LOCAL_Font_PermanentMarker, class UObject* LOCAL_Font_Upgrade, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UScaleBoxSlot* CallFunc_SlotAsScaleBoxSlot_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_2, class UMaterialInstance* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void Show_or_Hide_Level_UI(bool Show_);
	void Format_Upgrade_Value(struct FQtnUpgradeSettings& UpgradeSettings, struct FQtnRolledUpgradeData& RolledData, int32 Index, class FText* OutFormattedValue, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, class FText CallFunc_GetFormattedValueAtIndex_ReturnValue);
	void OnLoaded_A29555B4423A25AAA6C2F68E19C7C77F(class UObject* Loaded);
	void OnLoaded_06585CA349239ED720DB0C8CF53D2C74(class UObject* Loaded);
	void SetupCardArtAndIcon();
	void PreConstruct(bool IsDesignTime);
	void RefreshCardUI();
	void LoopAnim();
	void ExecuteUbergraph_UI_UpgradeCard_FTUX(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UObject* Temp_object_Variable_1, class UObject* K2Node_CustomEvent_Loaded_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData);
};

}


