#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA0 - 0x88)
// BlueprintGeneratedClass EnemyUpgrade_UnfairAdvantage.EnemyUpgrade_UnfairAdvantage_C
class UEnemyUpgrade_UnfairAdvantage_C : public UQtnEnemyUpgradeArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AQtnBodyPawn*                          OwningBodyPawn;                                    // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinDuration;                                       // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDuration;                                       // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEnemyUpgrade_UnfairAdvantage_C* GetDefaultObj();

	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnAICombatBegin_ServerOnly_Event_0(class AQtnBodyPawn* AiBody);
	void ExecuteUbergraph_EnemyUpgrade_UnfairAdvantage(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, bool CallFunc_IsServer_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, class AQtnBodyPawn* K2Node_CustomEvent_aiBody, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UStatusEffect_DeathProof_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue);
};

}


