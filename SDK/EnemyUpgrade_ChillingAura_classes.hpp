#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x98 - 0x88)
// BlueprintGeneratedClass EnemyUpgrade_ChillingAura.EnemyUpgrade_ChillingAura_C
class UEnemyUpgrade_ChillingAura_C : public UQtnEnemyUpgradeArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSubclassOf<class UQtnStatusEffect>          Status_Effect_Class;                               // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEnemyUpgrade_ChillingAura_C* GetDefaultObj();

	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void ExecuteUbergraph_EnemyUpgrade_ChillingAura(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, bool K2Node_Event_LoadedRunProgress, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class UQtnStatusEffect* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
};

}


