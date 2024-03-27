#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x139 - 0x130)
// BlueprintGeneratedClass CutsceneHUD_Screen.CutsceneHUD_Screen_C
class UCutsceneHUD_Screen_C : public UQtnScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         UIWasHidden;                                       // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCutsceneHUD_Screen_C* GetDefaultObj();

	void OnScreenStopped();
	void OnScreenStarted();
	void ExecuteUbergraph_CutsceneHUD_Screen(int32 EntryPoint, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


