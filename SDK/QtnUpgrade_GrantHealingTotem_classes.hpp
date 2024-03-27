#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x75 (0xF8 - 0x83)
// BlueprintGeneratedClass QtnUpgrade_GrantHealingTotem.QtnUpgrade_GrantHealingTotem_C
class UQtnUpgrade_GrantHealingTotem_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_745E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnItemData                          HealingTotemData;                                  // 0x90(0x68)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UQtnUpgrade_GrantHealingTotem_C* GetDefaultObj();

	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void ExecuteUbergraph_QtnUpgrade_GrantHealingTotem(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, bool K2Node_Event_LoadedRunProgress);
};

}


