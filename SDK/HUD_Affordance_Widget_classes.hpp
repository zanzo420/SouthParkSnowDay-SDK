#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F0 - 0x260)
// WidgetBlueprintGeneratedClass HUD_Affordance_Widget.HUD_Affordance_Widget_C
class UHUD_Affordance_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      NewAnimation;                                      // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Reveal;                                            // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class URichTextBlock*                        RichText_Affordance;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Input_Affordance;                                  // 0x280(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Desc_Signifier;                                    // 0x298(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Has_Input;                                         // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Pre_Input;                                         // 0x2B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Has_Pre_Input;                                     // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Disabled;                                          // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FBE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FormattedAffordance;                               // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UHUD_Affordance_Widget_C* GetDefaultObj();

	void ToggleDisabled();
	void InputChange(class FText& Text, bool CallFunc_TextIsEmpty_ReturnValue);
	void FormatIfDisabled(class FText Affordance, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1);
	void SetAffordanceText(class FText PreInput, bool HasPreInput, class FText QtnInput, bool HasInput, class FText Signifier);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_Affordance_Widget(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FText K2Node_CustomEvent_PreInput, bool K2Node_CustomEvent_HasPreInput, class FText K2Node_CustomEvent_QtnInput, bool K2Node_CustomEvent_HasInput, class FText K2Node_CustomEvent_Signifier, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, class FText K2Node_Select_Default, bool K2Node_Event_IsDesignTime, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Format_ReturnValue_3, bool CallFunc_EqualEqual_TextText_ReturnValue);
};

}


