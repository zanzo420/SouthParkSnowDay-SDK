#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x2B4 - 0x260)
// WidgetBlueprintGeneratedClass ControlToRemapWidget.ControlToRemapWidget_C
class UControlToRemapWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOptionsMenuButtonWidget_C*            Button_Control;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_ActionName;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_UX;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UControlRemappingScreen_C*             MyControlRemappingScreen;                          // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRebindableInput                   RebindableInput;                                   // 0x288(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UControlRemappingWidget_C*             ControlRemappingWidget;                            // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UX_Width;                                          // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UControlToRemapWidget_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void NameToText(class FName InName, class FText* OutText, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	void BndEvt__OptionsMenuButtonWidget_K2Node_ComponentBoundEvent_1_OptionsButtonClicked__DelegateSignature();
	void InitControlRemapItem(const struct FQtnRebindableInput& RebindableInput, class UControlRemappingWidget_C* MyRemapWidget);
	void SetRemapEnabled(bool IsEnabled);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ControlToRemapWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FQtnRebindableInput& K2Node_CustomEvent_RebindableInput, class UControlRemappingWidget_C* K2Node_CustomEvent_myRemapWidget, class FText CallFunc_NameToText_OutText, bool K2Node_CustomEvent_isEnabled, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_NameToText_OutText_1, class FText CallFunc_Format_ReturnValue);
};

}


