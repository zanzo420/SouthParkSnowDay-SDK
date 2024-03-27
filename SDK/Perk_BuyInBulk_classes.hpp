#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7 (0x88 - 0x81)
// BlueprintGeneratedClass Perk_BuyInBulk.Perk_BuyInBulk_C
class UPerk_BuyInBulk_C : public UQtnPerkArchetype_C
{
public:
	uint8                                        Pad_4F67[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChanceToDropGrandePoofs;                           // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPerk_BuyInBulk_C* GetDefaultObj();

	float GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount);
};

}


