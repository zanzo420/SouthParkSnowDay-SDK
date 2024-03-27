#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass QtnObjectListEntry_BPI.QtnObjectListEntry_BPI_C
class IQtnObjectListEntry_BPI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IQtnObjectListEntry_BPI_C* GetDefaultObj();

	void OnListEntryPressed(bool IsPressed, class UCosmeticItemSlot_C* CosmeticItemSlot, const struct FFQtnStoreItem& QtnStoreItem, bool* AllowHold);
	void OnListEntryHovered(bool IsHovered, class UCosmeticItemSlot_C* CosmeticItemSlot, const struct FFQtnStoreItem& QtnStoreItem);
};

}


