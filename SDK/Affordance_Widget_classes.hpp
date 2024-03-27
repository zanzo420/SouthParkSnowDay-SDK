#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x2C9 - 0x260)
// WidgetBlueprintGeneratedClass Affordance_Widget.Affordance_Widget_C
class UAffordance_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                        RichText_Affordance;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Has_Pre_Input;                                     // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5686[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Pre_Input;                                         // 0x278(0x18)(Edit, BlueprintVisible)
	bool                                         Has_Input;                                         // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5687[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Input_Affordance;                                  // 0x298(0x18)(Edit, BlueprintVisible)
	class FText                                  Desc_Signifier;                                    // 0x2B0(0x18)(Edit, BlueprintVisible)
	bool                                         Disabled;                                          // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAffordance_Widget_C* GetDefaultObj();

	void InputChange(class FText QtnInput, bool CallFunc_TextIsEmpty_ReturnValue);
	void FormatIfDisabled(class FText Affordance, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1);
	void ToggleDisabled(bool WantDisabled);
	void SetAffordanceText(class FText PreInput, bool HasPreInput, class FText QtnInput, bool HasInput, class FText Signifier);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Affordance_Widget(int32 EntryPoint, class FText K2Node_CustomEvent_PreInput, bool K2Node_CustomEvent_HasPreInput, class FText K2Node_CustomEvent_QtnInput, bool K2Node_CustomEvent_HasInput, class FText K2Node_CustomEvent_Signifier, bool K2Node_Event_IsDesignTime, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class FText CallFunc_Format_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2);
};

}


