#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x138 - 0x130)
// BlueprintGeneratedClass SystemMenuScreen.SystemMenuScreen_C
class USystemMenuScreen_C : public UQtnScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USystemMenuScreen_C* GetDefaultObj();

	void OnScreenResumed(class UQtnScreen* PreviousScreen);
	void ExecuteUbergraph_SystemMenuScreen(int32 EntryPoint, class USystemMenuWidget_C* CallFunc_GetUserWidget_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen);
};

}


