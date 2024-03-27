#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass QtnUnlockListEntry_BPI.QtnUnlockListEntry_BPI_C
class IQtnUnlockListEntry_BPI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IQtnUnlockListEntry_BPI_C* GetDefaultObj();

	void OnUnlockListEntryPressed(bool IsPressed, class UUnlockLineItem_Widget_C* UnlockLineItem, bool* AllowHold);
	void OnUnlockListEntryHovered(bool IsHovered, class UUnlockLineItem_Widget_C* UnlockLineItem);
};

}


