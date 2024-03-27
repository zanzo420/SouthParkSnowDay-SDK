#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x64 (0x2C4 - 0x260)
// WidgetBlueprintGeneratedClass OptionsRadioWidget.OptionsRadioWidget_C
class UOptionsRadioWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                CheckBox;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               CheckboxButton;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_RadioPrompt;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        MyIndex;                                           // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MyValue;                                           // 0x28C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5453[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            RadioValueChanged;                                 // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsInactive;                                        // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5454[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Prompt;                                            // 0x2A8(0x18)(Edit, BlueprintVisible)
	float                                        Current_Time;                                      // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UOptionsRadioWidget_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTOptionsRadioWidget_0();
	void SetPromptText(class FText NewText);
	void SetSelected(bool IsSelected);
	void HoverRepeater();
	void AnimSeq_Hover(bool Condition);
	void BndEvt__OptionsRadioWidget_CheckboxButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OptionsRadioWidget_CheckboxButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Event_ToggleCheckbox();
	void SetValue(bool TURR);
	void InitRadioButton(class FText Title, bool Value, bool Disabled);
	void BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ToggleDisabled(bool Inactive);
	void SetValueWithoutSideEffects(bool TURR);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_OptionsRadioWidget(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_isSelected, bool K2Node_CustomEvent_Condition, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_CustomEvent_true_1, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_CustomEvent_Title, bool K2Node_CustomEvent_Value, bool K2Node_CustomEvent_Disabled, bool Temp_bool_Variable_1, bool K2Node_CustomEvent_inactive, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_CustomEvent_true, bool CallFunc_BooleanOR_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_1, bool K2Node_Event_IsDesignTime);
	void RadioValueChanged__DelegateSignature(bool On);
};

}


