#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x90 - 0x83)
// BlueprintGeneratedClass Grenade_UpgradeArchetype.Grenade_UpgradeArchetype_C
class UGrenade_UpgradeArchetype_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_56E2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGrenade_UpgradeArchetype_C* GetDefaultObj();

	void DamageMultiplicator(class AActor* Victim, float* Multiplicator);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnExplosion(class AGrenadeProjectile_Parent_C* Grenade, TArray<class AActor*>& DamagedActors);
	void OnHit(class AGrenadeProjectile_Parent_C* Grenade, const struct FHitResult& HitEffect);
	void ExecuteUbergraph_Grenade_UpgradeArchetype(int32 EntryPoint, class UGrenade_UpgradeArchetype_C* Temp_object_Variable, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, bool K2Node_Event_LoadedRunProgress, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, class UVerb_Grenade_C* CallFunc_GetVerb_ReturnValue, class UVerb_Grenade_C* CallFunc_GetVerb_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UGrenade_UpgradeArchetype_C* Temp_object_Variable_1, class AGrenadeProjectile_Parent_C* K2Node_CustomEvent_Grenade_1, TArray<class AActor*>& K2Node_CustomEvent_DamagedActors, class AGrenadeProjectile_Parent_C* K2Node_CustomEvent_Grenade, const struct FHitResult& K2Node_CustomEvent_HitEffect);
};

}


