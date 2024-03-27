#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass InstantUpgradeAction_BullshitRefill.InstantUpgradeAction_BullshitRefill_C
class UInstantUpgradeAction_BullshitRefill_C : public UQtnInstantUpgradeActionArchetype_C
{
public:

	static class UClass* StaticClass();
	static class UInstantUpgradeAction_BullshitRefill_C* GetDefaultObj();

	bool K2_ActivateUpgrade(class AQtnBodyPawn* TargetUser, struct FQtnRolledUpgradeResult& RolledUpgradeSettings, class UQtn_CheatVerb_Archetype_C* CallFunc_GetExistingVerb_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


