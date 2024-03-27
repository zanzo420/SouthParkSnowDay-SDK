#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x218 - 0x1C8)
// BlueprintGeneratedClass GlobalCombatSettings.GlobalCombatSettings_C
class UGlobalCombatSettings_C : public UQtnCombatSettings
{
public:
	TMap<TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>, TSoftClassPtr<class UEnemyCheatActivationVerbBase_C>> BullshitVerbMap;                                   // 0x1C8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGlobalCombatSettings_C* GetDefaultObj();

};

}


