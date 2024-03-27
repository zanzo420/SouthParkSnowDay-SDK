#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ItemUIInterfaces.ItemUIInterfaces_C
class IItemUIInterfaces_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IItemUIInterfaces_C* GetDefaultObj();

	void GetUnlockData(class UObject* Requester, bool* Locked, class FText* LockText);
	void GetItemDetail(class UBP_LootIcon_C* LootObject, int32 ItemIndex);
	void HandleLootHover(class UBP_LootIcon_C* ThisIcon, bool Hovering);
	void HandleLootSelect(class UBP_LootIcon_C* ThisIcon);
};

}


