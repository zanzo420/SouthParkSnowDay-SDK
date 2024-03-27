#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0xA80 - 0xA54)
// BlueprintGeneratedClass FTUXButtersHealingBurstVerb.FTUXButtersHealingBurstVerb_C
class UFTUXButtersHealingBurstVerb_C : public UClericHealingBurstVerb_C
{
public:
	uint8                                        Pad_6042[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_FTUXOnHeal;                                     // 0xA58(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6043[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFTUXButtersHealingBurstVerb_C* GetDefaultObj();

	void Play_FTUX_VO();
	void HealAllNearbyAllies(bool* FinishedHealing, bool CallFunc_HealAllNearbyAllies_finishedHealing);
};

}


