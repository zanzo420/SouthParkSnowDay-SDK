#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2B0 - 0x2A8)
// WidgetBlueprintGeneratedClass ViewportHUD.ViewportHUD_C
class UViewportHUD_C : public UQtnViewportHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UViewportHUD_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_ViewportHUD(int32 EntryPoint);
};

}


