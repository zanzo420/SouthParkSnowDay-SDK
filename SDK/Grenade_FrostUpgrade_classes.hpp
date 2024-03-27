#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xA4 - 0x90)
// BlueprintGeneratedClass Grenade_FrostUpgrade.Grenade_FrostUpgrade_C
class UGrenade_FrostUpgrade_C : public UGrenade_UpgradeArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DmgMult;                                           // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlowDuration;                                      // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Max_Speed_Multiplier;                              // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGrenade_FrostUpgrade_C* GetDefaultObj();

	void DamageMultiplicator(class AActor* Victim, float* Multiplicator, bool CallFunc_IsValid_ReturnValue, TArray<class UDamageReceptorBodyPawn_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UDamageReceptorBodyPawn_C* CallFunc_Array_Get_Item, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasStatusEffect_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnExplosion(class AGrenadeProjectile_Parent_C* Grenade, TArray<class AActor*>& DamagedActors);
	void OnHit(class AGrenadeProjectile_Parent_C* Grenade, const struct FHitResult& HitEffect);
	void ExecuteUbergraph_Grenade_FrostUpgrade(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, bool K2Node_Event_LoadedRunProgress, float CallFunc_GetValueOfUpgrade_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_1, float CallFunc_GetValueOfUpgrade_ReturnValue_2, class AGrenadeProjectile_Parent_C* K2Node_Event_Grenade_1, TArray<class AActor*>& K2Node_Event_DamagedActors, int32 CallFunc_Array_Length_ReturnValue, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, class AGrenadeProjectile_Parent_C* K2Node_Event_Grenade, const struct FHitResult& K2Node_Event_HitEffect, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueOfUpgrade_ReturnValue_3, bool CallFunc_IsEnemy_ReturnValue, class UStatusEffect_SlowedMovement_Cold_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_4, float CallFunc_GetValueOfUpgrade_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


