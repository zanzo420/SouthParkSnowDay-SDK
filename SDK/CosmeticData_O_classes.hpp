#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x189 (0x1B1 - 0x28)
// BlueprintGeneratedClass CosmeticData_O.CosmeticData_O_C
class UCosmeticData_O_C : public UObject
{
public:
	class UTexture2D*                            RenderTargetTexture2D;                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FFQtnStoreItem                        Qtn_Store_Data;                                    // 0x30(0x158)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Price;                                             // 0x188(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         CanAfford;                                         // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_537E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnUserWidget*                        OwningMenu;                                        // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsDefaultReset_;                                   // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UCosmeticData_O_C* GetDefaultObj();

};

}


