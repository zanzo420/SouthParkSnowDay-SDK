#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC2 (0x322 - 0x260)
// WidgetBlueprintGeneratedClass OptionsSwitchWidget.OptionsSwitchWidget_C
class UOptionsSwitchWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Prev;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Next;                                              // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Next_1;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Prev_1;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               CheckboxButton;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HighlightSwitch;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_Prompt;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_Selection;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_UX;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        MyIndex;                                           // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MyValue;                                           // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B9D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SwitchValueChanged;                                // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsInactive;                                        // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B9E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Prompt;                                            // 0x2D0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                        UX_Width;                                          // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Tooltip;                                           // 0x2F0(0x18)(Edit, BlueprintVisible)
	class UWidget*                               OwningMenu;                                        // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WantLight;                                         // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPlayerController*                  Local_Player_Controller;                           // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HoverState;                                        // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanSwitch;                                         // 0x321(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UOptionsSwitchWidget_C* GetDefaultObj();

	void StartHoverState(class UMenuMatchmaking_Widget_C* K2Node_DynamicCast_AsMenu_Matchmaking_Widget, bool K2Node_DynamicCast_bSuccess, class UCombinedOptionsMenuWidget_C* K2Node_DynamicCast_AsCombined_Options_Menu_Widget, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IOptionsTooltip_BPI_C> K2Node_DynamicCast_AsOptions_Tooltip_BPI, bool K2Node_DynamicCast_bSuccess_2);
	void StopHoverState(TScriptInterface<class IOptionsTooltip_BPI_C> K2Node_DynamicCast_AsOptions_Tooltip_BPI, bool K2Node_DynamicCast_bSuccess);
	void SetupButtonColors(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_1);
	void InitWidth(float UX_Width);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void ShowTooltip(class FText TooltipToShow);
	void SetSelected(bool IsSelected);
	void Event_SetSelected(bool IsSelected);
	void Event_ToggleSwitch();
	void SetValue(bool TURR);
	void InitSwitch(class UCombinedOptionsMenuWidget_C* OwningOptionsMenu, class FText Title, bool Value);
	void BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_SetInactive(bool Inactive);
	void PreConstruct(bool IsDesignTime);
	void SetValueWithoutSideEffects(bool TURR);
	void BndEvt__OptionsSwitchWidget_CheckboxButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OptionsSwitchWidget_CheckboxButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void Event_Next();
	void Event_Prev();
	void HandleAnalogState(float DeltaTime);
	void Update_Prompt_Text();
	void Update_Selection_Text();
	void BndEvt__OptionsSwitchWidget_Button_Prev_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OptionsSwitchWidget_Button_Next_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OptionsSwitchWidget_Button_Prev_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OptionsSwitchWidget_Button_Next_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OptionsSwitchWidget_Button_Prev_1_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__OptionsSwitchWidget_Button_Next_1_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_OptionsSwitchWidget(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, class FText K2Node_Event_TooltipToShow, bool K2Node_Event_isSelected, bool K2Node_CustomEvent_isSelected, bool K2Node_CustomEvent_true_1, bool CallFunc_Not_PreBool_ReturnValue, class UCombinedOptionsMenuWidget_C* K2Node_CustomEvent_OwningOptionsMenu, class FText K2Node_CustomEvent_Title, bool K2Node_CustomEvent_Value, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_CustomEvent_inactive, bool Temp_bool_Variable_3, bool K2Node_Event_IsDesignTime, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_CustomEvent_true, bool Temp_bool_IsClosed_Variable_2, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_3, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_3, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_GetIsEnabled_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_GetIsEnabled_ReturnValue_2, bool CallFunc_GetIsEnabled_ReturnValue_3, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, float K2Node_Event_deltaTime, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_3, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class FText K2Node_Select_Default_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3, bool Temp_bool_IsClosed_Variable_3);
	void SwitchValueChanged__DelegateSignature(bool NewValue);
};

}


