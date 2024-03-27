#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x94 - 0x83)
// BlueprintGeneratedClass Bow_FollowupStrike.Bow_FollowupStrike_C
class UBow_FollowupStrike_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_766D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Follow_Up_Required_Hit_Time;                       // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBow_FollowupStrike_C* GetDefaultObj();

	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void ExecuteUbergraph_Bow_FollowupStrike(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, class UVerb_Bow_Sniper_C* CallFunc_GetVerb_ReturnValue, class UVerb_Bow_Sniper_C* CallFunc_GetVerb_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_2, float CallFunc_GetValueOfUpgrade_ReturnValue_2, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class UVerb_Bow_Sniper_C* CallFunc_GetVerb_ReturnValue_2, float CallFunc_GetValueOfUpgrade_ReturnValue_3);
};

}


