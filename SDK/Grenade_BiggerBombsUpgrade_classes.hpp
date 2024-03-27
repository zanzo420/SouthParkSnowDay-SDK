#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x98 - 0x90)
// BlueprintGeneratedClass Grenade_BiggerBombsUpgrade.Grenade_BiggerBombsUpgrade_C
class UGrenade_BiggerBombsUpgrade_C : public UGrenade_UpgradeArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x90(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGrenade_BiggerBombsUpgrade_C* GetDefaultObj();

	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void ExecuteUbergraph_Grenade_BiggerBombsUpgrade(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, float CallFunc_GetValueOfUpgrade_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class UVerb_Grenade_C* CallFunc_GetVerb_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, class UVerb_Grenade_C* CallFunc_GetVerb_ReturnValue_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_2, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_2, class UVerb_Grenade_C* CallFunc_GetVerb_ReturnValue_2);
};

}


