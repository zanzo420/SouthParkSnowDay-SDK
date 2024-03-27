#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x138 - 0x130)
// BlueprintGeneratedClass BlankHUD_Screen.BlankHUD_Screen_C
class UBlankHUD_Screen_C : public UQtnScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBlankHUD_Screen_C* GetDefaultObj();

	void OnScreenStopped();
	void OnScreenStarted();
	void ExecuteUbergraph_BlankHUD_Screen(int32 EntryPoint, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


