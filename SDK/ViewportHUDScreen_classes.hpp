#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x138 - 0x130)
// BlueprintGeneratedClass ViewportHUDScreen.ViewportHUDScreen_C
class UViewportHUDScreen_C : public UQtnScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UViewportHUDScreen_C* GetDefaultObj();

	void OnScreenReadyForGameplay();
	void ExecuteUbergraph_ViewportHUDScreen(int32 EntryPoint, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsTradeshowDemo_ReturnValue, class UTradeshowDemoScreen_C* CallFunc_RegisterSubScreen_ReturnValue);
};

}


