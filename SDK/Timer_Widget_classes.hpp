#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x2B4 - 0x260)
// WidgetBlueprintGeneratedClass Timer_Widget.Timer_Widget_C
class UTimer_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      PulseCounter;                                      // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            Text_Heading;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Timestamp;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Header;                                            // 0x280(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Timestamp;                                         // 0x298(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        Time;                                              // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTimer_Widget_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void UpdateTimestamp(int32 Timestamp);
	void UpdateHeaderAndTimestamp(class FText NewHeader, class FText NewTimestamp);
	void ToggleDarkMode(bool WantWhite);
	void ExecuteUbergraph_Timer_Widget(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_Timestamp, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, class FText K2Node_CustomEvent_NewHeader, class FText K2Node_CustomEvent_NewTimestamp, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_CustomEvent_WantWhite, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, bool CallFunc_BooleanAND_ReturnValue);
};

}


