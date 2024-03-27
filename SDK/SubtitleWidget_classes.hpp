#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4A (0x2E2 - 0x298)
// WidgetBlueprintGeneratedClass SubtitleWidget.SubtitleWidget_C
class USubtitleWidget_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_0;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichText_Subtitles;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpeechBubble_Kenny_Widget_C*          SpeechBubble_Kenny_Widget;                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQtnLocalOptionsSaveData*              LocalOptionsSaveData;                              // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubtitleFontSize                 TestSize;                                          // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseTestSize;                                       // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C8C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       SubtitleInhibitors;                                // 0x2D0(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	bool                                         WantShown;                                         // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Inhibited;                                         // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USubtitleWidget_C* GetDefaultObj();

	void GetSubtitlesFont(class FName* FontId, bool Temp_bool_Variable, enum class ESubtitleFontSize CallFunc_GetSubtitleSize_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESubtitleFontSize K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess);
	void GetSpeakerFont(class FName* FontId, bool Temp_bool_Variable, enum class ESubtitleFontSize CallFunc_GetSubtitleSize_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESubtitleFontSize K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess);
	void OnQtnWidgetPaused();
	void OnSubtitleChangedEvent();
	void OnQtnWidgetInitialized();
	void UpdateBorder();
	void OnSubtitleSettingsChanged();
	void OnSubtitlesEnabled(bool IsActive);
	void RefreshSpecialSubtitleVisibility(bool Inhibited);
	void ExecuteUbergraph_SubtitleWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetSubtitleBackgroundOpacity_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1, class FName CallFunc_GetSpeakerFont_FontId, class FName CallFunc_GetSubtitlesFont_FontId, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue, bool K2Node_CustomEvent_IsActive, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_FormatSubtitles_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_3, bool K2Node_CustomEvent_Inhibited, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CheckSubtitleInhibitorOfQtnUIArchetype_Inhibited, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
};

}


