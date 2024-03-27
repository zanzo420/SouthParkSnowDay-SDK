#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x138 - 0x130)
// BlueprintGeneratedClass WarTable_Screen.WarTable_Screen_C
class UWarTable_Screen_C : public UQtnScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWarTable_Screen_C* GetDefaultObj();

	void OnScreenStarted();
	void OnScreenStopped();
	void ExecuteUbergraph_WarTable_Screen(int32 EntryPoint);
};

}


