#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x75 (0xF8 - 0x83)
// BlueprintGeneratedClass QtnUpgrade_GrantFartEscape.QtnUpgrade_GrantFartEscape_C
class UQtnUpgrade_GrantFartEscape_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_5CC0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnItemData                          FartEscapeData;                                    // 0x90(0x68)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UQtnUpgrade_GrantFartEscape_C* GetDefaultObj();

	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void ExecuteUbergraph_QtnUpgrade_GrantFartEscape(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, bool K2Node_Event_LoadedRunProgress);
};

}


