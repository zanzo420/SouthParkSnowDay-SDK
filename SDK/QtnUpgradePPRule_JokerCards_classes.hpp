#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass QtnUpgradePPRule_JokerCards.QtnUpgradePPRule_JokerCards_C
class UQtnUpgradePPRule_JokerCards_C : public UQtnUpgradePPRuleArchetype_C
{
public:

	static class UClass* StaticClass();
	static class UQtnUpgradePPRule_JokerCards_C* GetDefaultObj();

	void RunPostProcessingRule(class AQtnBodyPawn* Pawn, TArray<struct FQtnRolledUpgradeResult>& CurrentLootArray);
};

}


