#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x340 (0x5A0 - 0x260)
// WidgetBlueprintGeneratedClass OptionsSliderWidget.OptionsSliderWidget_C
class UOptionsSliderWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Inactive;                                          // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Active;                                            // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Next;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Prev;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               CheckboxButton;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               MySlider;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_Prompt;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_SliderValue;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Prompt;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SliderBG;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       MyComboBox;                                        // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MyIndex;                                           // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SliderValueChanged;                                // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  Prompt;                                            // 0x2D8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         IsInitializing;                                    // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UX_Width;                                          // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Tooltip;                                           // 0x2F8(0x18)(Edit, BlueprintVisible)
	class UWidget*                               OwningMenu;                                        // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPlayerController*                  Local_Player_Controller;                           // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                          CacheButtonStyle;                                  // 0x320(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        UpdateAnalogInterval;                              // 0x598(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurTime;                                           // 0x59C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UOptionsSliderWidget_C* GetDefaultObj();

	void RefreshFloatValueText(float ValueToShow, float OptionalDisplayValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int64 CallFunc_Round64_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
	void Handle_Analog_Event(float DeltaTime, float UpdateInterval, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1);
	void StopHoverState(class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue);
	void StartHoverState(class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class UCombinedOptionsMenuWidget_C* K2Node_DynamicCast_AsCombined_Options_Menu_Widget, bool K2Node_DynamicCast_bSuccess);
	void SetHoveredColor(const struct FLinearColor& Specified_Color, class UButton* Target, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle);
	void RefreshButtons(float CallFunc_GetValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetValue_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue);
	void RefreshValueText(float ValueToShow, float OptionalDisplayValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Multiply_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, int64 CallFunc_Round64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
	void Init_Width(float UX_Width);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Event_SetLocked(bool IsLocked);
	void BndEvt__mySlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void InitSlider(class UCombinedOptionsMenuWidget_C* OwningOptionsMenu, float SliderValue, class FText Title, float OptionalDisplayValue);
	void SetSliderValue(float Value, float OptionalDisplayValue);
	void UpdateFillBar(float Value);
	void BndEvt__Button_Next_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Prev_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__OptionsComboWidget_Button_Next_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__OptionsComboWidget_Button_Next_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__OptionsComboWidget_Button_Prev_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__OptionsComboWidget_Button_Prev_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
	void ShowTooltip(class FText TooltipToShow);
	void Event_SetSelected(bool IsSelected);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__OptionsSliderWidget_Button_Next_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OptionsSliderWidget_Button_Next_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OptionsSliderWidget_Button_Prev_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OptionsSliderWidget_Button_Prev_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void Event_Prev();
	void Construct();
	void BndEvt__OptionsSliderWidget_CheckboxButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OptionsSliderWidget_CheckboxButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void HandleAnalogState(float DeltaTime);
	void Event_Next();
	void ExecuteUbergraph_OptionsSliderWidget(int32 EntryPoint, bool CallFunc_GetIsEnabled_ReturnValue, float CallFunc_GetValue_ReturnValue, float K2Node_ComponentBoundEvent_Value, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UCombinedOptionsMenuWidget_C* K2Node_CustomEvent_OwningOptionsMenu, float K2Node_CustomEvent_SliderValue, class FText K2Node_CustomEvent_Title, float K2Node_CustomEvent_optionalDisplayValue_1, float CallFunc_GetValue_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_CustomEvent_Value_1, float K2Node_CustomEvent_optionalDisplayValue, bool K2Node_CustomEvent_isLocked, float K2Node_CustomEvent_Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class FText K2Node_Event_TooltipToShow, bool K2Node_CustomEvent_isSelected, bool K2Node_Event_IsDesignTime, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TScriptInterface<class IOptionsTooltip_BPI_C> K2Node_DynamicCast_AsOptions_Tooltip_BPI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IOptionsTooltip_BPI_C> K2Node_DynamicCast_AsOptions_Tooltip_BPI_1, bool K2Node_DynamicCast_bSuccess_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, float CallFunc_GetNormalizedValue_ReturnValue, class FText CallFunc_Format_ReturnValue_2, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_deltaTime, bool CallFunc_GetIsEnabled_ReturnValue_1, bool CallFunc_GetIsEnabled_ReturnValue_2, bool CallFunc_GetIsEnabled_ReturnValue_3);
	void SliderValueChanged__DelegateSignature(float NewValue);
};

}


