#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x148 - 0x130)
// BlueprintGeneratedClass FTUX_Character_Screen.FTUX_Character_Screen_C
class UFTUX_Character_Screen_C : public UQtnScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            FTUXCharacterScreenClosed;                         // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UFTUX_Character_Screen_C* GetDefaultObj();

	void OnScreenStopped();
	void OnScreenResumed(class UQtnScreen* PreviousScreen);
	void ExecuteUbergraph_FTUX_Character_Screen(int32 EntryPoint, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UMenuCharacter_Widget_C* K2Node_DynamicCast_AsMenu_Character_Widget, bool K2Node_DynamicCast_bSuccess, class UQtnScreen* K2Node_Event_previousScreen);
	void FTUXCharacterScreenClosed__DelegateSignature();
};

}


