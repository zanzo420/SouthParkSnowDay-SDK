#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x9A8 - 0x978)
// WidgetBlueprintGeneratedClass UI_CardMini_Widget.UI_CardMini_Widget_C
class UUI_CardMini_Widget_C : public UUI_BullshitCard_Widget_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x978(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInterface*                    CardDesign;                                        // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CardSize;                                          // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Card_Art;                                          // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverCurrentTime;                                  // 0x998(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F7F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TimerHandle;                                       // 0x9A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_CardMini_Widget_C* GetDefaultObj();

	void Change_Paper_Container(int32 IndexRGB, float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void RefreshCardArt(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void CollapseExtraUI();
	void Completed_F74AEAE54491DCB911EF4FBDC3E88FEB(float Value);
	void Tick_F74AEAE54491DCB911EF4FBDC3E88FEB(float Value);
	void Completed_3BE2C388444B681E747C07A2F432D575(float Value);
	void Tick_3BE2C388444B681E747C07A2F432D575(float Value);
	void OnLoaded_CA0AC51443F2E5DC25DEE3A90E146D99(class UObject* Loaded);
	void AnimSeq_Hover(bool IsHovered);
	void PreConstruct(bool IsDesignTime);
	void RefreshCardData(const struct FQtnUpgradeSettings& UpgradeSettings, const struct FQtnRolledUpgradeData& UpgradeRolledData, class UClass* EnemyBullshitBPBase, class UQtn_CheatVerb_Archetype_C* PlayerBullshitVerbArchetype, bool ForceRolledDataUpdate);
	void RefreshCardUI();
	void SaveCardArtTexture();
	void OnHovered(bool Hovered_, int32 HoveredIndex, const struct FUI_Card_Struct& CardInfo);
	void ExecuteUbergraph_UI_CardMini_Widget(int32 EntryPoint, float K2Node_CustomEvent_Value_2, float Temp_float_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Value_1, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable_1, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetIconForUI_ReturnValue, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool K2Node_CustomEvent_IsHovered, bool Temp_bool_IsClosed_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue, const struct FQtnUpgradeSettings& K2Node_Event_UpgradeSettings, const struct FQtnRolledUpgradeData& K2Node_Event_UpgradeRolledData, class UClass* K2Node_Event_EnemyBullshitBPBase, class UQtn_CheatVerb_Archetype_C* K2Node_Event_PlayerBullshitVerbArchetype, bool K2Node_Event_forceRolledDataUpdate, float K2Node_CustomEvent_Value_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool K2Node_CustomEvent_Hovered_, int32 K2Node_CustomEvent_HoveredIndex, const struct FUI_Card_Struct& K2Node_CustomEvent_CardInfo, bool CallFunc_IsHovered_ReturnValue);
};

}


