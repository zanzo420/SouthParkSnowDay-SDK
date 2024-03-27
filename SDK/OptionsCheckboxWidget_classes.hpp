#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2D0 - 0x260)
// WidgetBlueprintGeneratedClass OptionsCheckboxWidget.OptionsCheckboxWidget_C
class UOptionsCheckboxWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                CheckBox;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               CheckboxButton;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Highlight;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQtnInputTextBlock*                    TEXT_Title;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        MyIndex;                                           // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MyValue;                                           // 0x28C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7367[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            CheckboxValueChanged;                              // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsInactive;                                        // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7368[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Prompt;                                            // 0x2A8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FLinearColor                          Color;                                             // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UOptionsCheckboxWidget_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetSelected(bool IsSelected);
	void Event_SetSelected(bool IsSelected);
	void Event_ToggleCheckbox();
	void SetValue(bool TURR);
	void InitCheckboxWidget(class FText Title, bool Value);
	void BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_SetInactive(bool Inactive);
	void PreConstruct(bool IsDesignTime);
	void SetValueWithoutSideEffects(bool TURR);
	void ExecuteUbergraph_OptionsCheckboxWidget(int32 EntryPoint, bool K2Node_CustomEvent_true_1, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_CustomEvent_Title, bool K2Node_CustomEvent_Value, bool K2Node_CustomEvent_isSelected, bool K2Node_Event_isSelected, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_CustomEvent_inactive, bool K2Node_Event_IsDesignTime, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_CustomEvent_true, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2);
	void CheckboxValueChanged__DelegateSignature(bool NewValue);
};

}


