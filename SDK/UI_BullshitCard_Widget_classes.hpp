#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x718 (0x978 - 0x260)
// WidgetBlueprintGeneratedClass UI_BullshitCard_Widget.UI_BullshitCard_Widget_C
class UUI_BullshitCard_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_1;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_Card;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Card;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Overlay;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_CardDesc;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Desc;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Name;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Rarity;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_BullshitCount;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Level;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Rarity;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_UpgradeName;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                           OwningMenu;                                        // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RarityEntry;                                       // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5007[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnUpgradeSettings                   UpgradeSettings;                                   // 0x2D8(0x1F8)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FQtnRolledUpgradeData                 UpgradeRolledData;                                 // 0x4D0(0x60)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UQtn_CheatVerb_Archetype_C*            PlayerBullshitVerbArchetype;                       // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                EnemyBullshitBPBase;                               // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         EnemyBullshit;                                     // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5008[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            CardButtonHovered;                                 // 0x548(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CardButtonPressed;                                 // 0x558(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        Index;                                             // 0x568(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayerCard;                                      // 0x56C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsBullshit;                                        // 0x56D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_500B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUI_Card_Struct                       MyCardInfo;                                        // 0x570(0x340)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  RarityColorTable;                                  // 0x8B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, class UMaterialInstance*> RarityToMaterialInstanceMap;                       // 0x8C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, class FText>       RarityTagToRarityString;                           // 0x910(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        HoverTime;                                         // 0x960(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCurrentlyHovered;                                // 0x964(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_500C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultItemScale;                                  // 0x968(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_500E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDelegateHandleBlueprint              HoverOptionalHandle;                               // 0x970(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_BullshitCard_Widget_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void RefreshCardData(const struct FQtnUpgradeSettings& UpgradeSettings, const struct FQtnRolledUpgradeData& UpgradeRolledData, class UClass* EnemyBullshitBPBase, class UQtn_CheatVerb_Archetype_C* PlayerBullshitVerbArchetype, bool ForceRolledDataUpdate, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings);
	void SetBoolIsBullshit(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void UpgradeRefreshLevel(class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetCardName(bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue);
	void Set_Description_Text(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_1, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_DecorateWithRichTextStyle_ReturnValue);
	void Refresh_Bullshit_or_Upgrade_UI(class UObject* LOCAL_Font_Meanwhile, class UObject* LOCAL_Font_PermanentMarker, class UObject* LOCAL_Font_Schoolbell, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FAnchors& K2Node_MakeStruct_Anchors, class FText CallFunc_Format_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors_1, const struct FAnchors& K2Node_MakeStruct_Anchors_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Format_ReturnValue_1, const struct FAnchors& K2Node_MakeStruct_Anchors_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_1, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_2, class UScaleBoxSlot* CallFunc_SlotAsScaleBoxSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_3, class UScaleBoxSlot* CallFunc_SlotAsScaleBoxSlot_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_3, const struct FAnchors& K2Node_MakeStruct_Anchors_5, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Format_ReturnValue_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_4, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_5, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_2, class FText CallFunc_MakeLiteralText_ReturnValue_4, class UMaterialInstance* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void Show_or_Hide_Level_UI(bool Show_);
	void MakeEnemyBullshitCard(class UClass* EnemyBullshitBPBase, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct);
	void MakePlayerBullshitCard(class UQtn_CheatVerb_Archetype_C* As_Qtn_Cheat_Verb_Archetype, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct);
	void Make_Large_Upgrade_Card(const struct FQtnUpgradeSettings& UpgradeSettings, bool IsPlayerCard, const struct FQtnRolledUpgradeData& QtnRolledUpgradeData, bool IsRulebook, bool LOCAL_Rulebook, const TArray<class UTexture2D*>& LOCAL_RarityTextures, const TArray<struct FGameplayTag>& Local_RarityTags, const TArray<struct FLinearColor>& LOCAL_RarityColors, TMap<struct FGameplayTag, class FText> LOCAL_TagToText, const struct FQtnRolledUpgradeData& LOCAL_RolledUpgradeData, TArray<class UTexture2D*>& K2Node_MakeArray_Array, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_1, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable, class UTexture2D* K2Node_Select_Default, int32 CallFunc_Array_Find_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_RightChop_ReturnValue, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue, const class FString& CallFunc_ToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_1, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct_1);
	void Format_Upgrade_Value(struct FQtnUpgradeSettings& UpgradeSettings, struct FQtnRolledUpgradeData& RolledData, int32 Index, class FText* OutFormattedValue, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, class FText CallFunc_GetFormattedValueAtIndex_ReturnValue);
	void SetupRarity(TArray<struct FLinearColor>& RarityColors, const struct FGameplayTag& RarityTag, struct FLinearColor* CardBackgroundColor, struct FSlateColor* RarityFontColor, class FText* RarityText, TMap<struct FGameplayTag, class FText> LOCAL_TagToText, const TArray<struct FLinearColor>& LOCAL_RarityColors, TMap<struct FGameplayTag, class FText> K2Node_MakeVariable_MakeVariableOutput, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void Completed_AC5FDFB141F9139C793A92BB4FC57312(float Value);
	void Tick_AC5FDFB141F9139C793A92BB4FC57312(float Value);
	void Completed_0D26863247C9819588D18CBD1872098B(float Value);
	void Tick_0D26863247C9819588D18CBD1872098B(float Value);
	void OnLoaded_0F3DFB2242E371AF419BF1A6568BA1D6(class UObject* Loaded);
	void OnLoaded_CDC6644B4E04A754AAE771B663141047(class UObject* Loaded);
	void AnimSeq_Hover(bool IsHovered);
	void BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_BullshitCard_Widget_Button_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
	void MakeCardFromStruct(const struct FUI_Card_Struct& MyCardInfo);
	void SetupCardArtAndIcon();
	void RefreshCardUI();
	void PreConstruct(bool IsDesignTime);
	void ForceUnhover();
	void ForceHover();
	void ExecuteUbergraph_UI_BullshitCard_Widget(int32 EntryPoint, float Temp_float_Variable, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_CustomEvent_Value_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable_1, class UObject* K2Node_CustomEvent_Loaded_1, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetIconForUI_ReturnValue, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool K2Node_CustomEvent_IsHovered, float K2Node_CustomEvent_Value_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, float CallFunc_Ease_ReturnValue, class UQtnAsyncInterpolateValueRealtime* CallFunc_AsyncInterpolateValueRealtime_ReturnValue, class UQtnAsyncInterpolateValueRealtime* CallFunc_AsyncInterpolateValueRealtime_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FUI_Card_Struct& K2Node_CustomEvent_MyCardInfo, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, float K2Node_CustomEvent_Value_3, bool Temp_bool_IsClosed_Variable_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_5);
	void CardButtonPressed__DelegateSignature(bool Pressed_);
	void CardButtonHovered__DelegateSignature(bool Hovered_, int32 HoveredIndex, const struct FUI_Card_Struct& CardInfo);
};

}

