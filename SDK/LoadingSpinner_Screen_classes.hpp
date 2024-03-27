#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x148 - 0x130)
// BlueprintGeneratedClass LoadingSpinner_Screen.LoadingSpinner_Screen_C
class ULoadingSpinner_Screen_C : public UQtnScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            Cancel_Pressed;                                    // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ULoadingSpinner_Screen_C* GetDefaultObj();

	void Event_Setup_Spinner(bool DisableCancel, class FText LoadingDescription);
	void Call_Cancel_Pressed();
	void Spinner_Cancelled();
	void ExecuteUbergraph_LoadingSpinner_Screen(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_DisableCancel, class FText K2Node_CustomEvent_LoadingDescription, class ULoadingSpinner_Widget_C* CallFunc_GetUserWidget_ReturnValue);
	void Cancel_Pressed__DelegateSignature();
};

}


