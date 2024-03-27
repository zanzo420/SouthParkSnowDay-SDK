#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2D8 - 0x298)
// WidgetBlueprintGeneratedClass LoadingSpinner_Widget.LoadingSpinner_Widget_C
class ULoadingSpinner_Widget_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Container;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CapsuleBtn_Widget_C*               Btn_CancelSpinner;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Body;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Header;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CancelPressed;                                     // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ULoadingSpinner_Widget_C* GetDefaultObj();

	void Setup_Spinner(bool DisableCancel, class FText LoadingDescription, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void OnQtnWidgetResumed(class UQtnScreen* PreviousScreen);
	void OnInputUsageChange(bool IsUsingMouseAndKeyboard);
	void BndEvt__LoadingSpinner_Widget_BP_CapsuleBtn_Widget_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
	void Spinner_Cancelled();
	void OnInitialized();
	void BlockedInput();
	void Destruct();
	void ExecuteUbergraph_LoadingSpinner_Widget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UQtnScreen* K2Node_Event_previousScreen, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool K2Node_Event_isUsingMouseAndKeyboard, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, class ULoadingSpinner_Screen_C* K2Node_DynamicCast_AsLoading_Spinner_Screen, bool K2Node_DynamicCast_bSuccess);
	void CancelPressed__DelegateSignature();
};

}


