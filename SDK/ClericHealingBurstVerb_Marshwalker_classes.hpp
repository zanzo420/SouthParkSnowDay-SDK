#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA54 - 0xA54)
// BlueprintGeneratedClass ClericHealingBurstVerb_Marshwalker.ClericHealingBurstVerb_Marshwalker_C
class UClericHealingBurstVerb_Marshwalker_C : public UClericHealingBurstVerb_C
{
public:

	static class UClass* StaticClass();
	static class UClericHealingBurstVerb_Marshwalker_C* GetDefaultObj();

	void Apply_Cleric_Healing(class ABodyPawnBase_C* bodyPawn, bool* StillNeedsHealing, bool CallFunc_Apply_Cleric_Healing_stillNeedsHealing);
};

}


