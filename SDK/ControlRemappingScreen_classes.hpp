#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x138 - 0x130)
// BlueprintGeneratedClass ControlRemappingScreen.ControlRemappingScreen_C
class UControlRemappingScreen_C : public UQtnScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UControlRemappingScreen_C* GetDefaultObj();

	void CloseControlRemappingScreen();
	void ExecuteUbergraph_ControlRemappingScreen(int32 EntryPoint, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class UControlRemappingWidget_C* CallFunc_GetUserWidget_ReturnValue, class UControlRemappingWidget_C* K2Node_DynamicCast_AsControl_Remapping_Widget, bool K2Node_DynamicCast_bSuccess);
};

}


