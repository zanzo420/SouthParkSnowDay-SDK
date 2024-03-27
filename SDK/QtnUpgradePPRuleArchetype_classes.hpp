#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass QtnUpgradePPRuleArchetype.QtnUpgradePPRuleArchetype_C
class UQtnUpgradePPRuleArchetype_C : public UQtnUpgradePostProcessingRule
{
public:

	static class UClass* StaticClass();
	static class UQtnUpgradePPRuleArchetype_C* GetDefaultObj();

	void RunPostProcessingRule(class AQtnBodyPawn* Pawn, TArray<struct FQtnRolledUpgradeResult>& CurrentLootArray);
};

}


