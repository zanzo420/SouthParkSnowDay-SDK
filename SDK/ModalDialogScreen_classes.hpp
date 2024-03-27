#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x160 - 0x158)
// BlueprintGeneratedClass ModalDialogScreen.ModalDialogScreen_C
class UModalDialogScreen_C : public UQtnScreenModalDialog
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x158(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UModalDialogScreen_C* GetDefaultObj();

	void PresentMessageInfo(struct FQtnModalMessageInfo& MessageInfo);
	void ExecuteUbergraph_ModalDialogScreen(int32 EntryPoint, class UModalDialogWidget_C* CallFunc_GetUserWidget_ReturnValue, const struct FQtnModalMessageInfo& K2Node_Event_messageInfo);
};

}


