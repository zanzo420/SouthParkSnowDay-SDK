#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA8 - 0x90)
// BlueprintGeneratedClass Grenade_StickyUpgrade.Grenade_StickyUpgrade_C
class UGrenade_StickyUpgrade_C : public UGrenade_UpgradeArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        HeavyKnockdownChance;                              // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KnockdownRadius;                                   // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQtnCardinalDirection             Hit_Direction;                                     // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHitReactionAnimationResults      LOCAL_HitReactionResult;                           // 0xA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_618[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        KnockdownDuration;                                 // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGrenade_StickyUpgrade_C* GetDefaultObj();

	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void OnHit(class AGrenadeProjectile_Parent_C* Grenade, const struct FHitResult& HitEffect);
	void OnExplosion(class AGrenadeProjectile_Parent_C* Grenade, TArray<class AActor*>& DamagedActors);
	void ExecuteUbergraph_Grenade_StickyUpgrade(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, class UVerb_Grenade_C* CallFunc_GetVerb_ReturnValue, class UVerb_Grenade_C* CallFunc_GetVerb_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_1, float CallFunc_GetValueOfUpgrade_ReturnValue_2, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_2, float CallFunc_GetValueOfUpgrade_ReturnValue_3, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_2, class UVerb_Grenade_C* CallFunc_GetVerb_ReturnValue_2, float CallFunc_GetValueOfUpgrade_ReturnValue_4, float CallFunc_GetValueOfUpgrade_ReturnValue_5, class AGrenadeProjectile_Parent_C* K2Node_Event_Grenade_1, const struct FHitResult& K2Node_Event_HitEffect, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, class UVerb_Grenade_C* K2Node_DynamicCast_AsVerb_Grenade, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_FindClosestBone_K2_BoneLocation, class FName CallFunc_FindClosestBone_K2_ReturnValue, class AScriptedSkeletalActor_C* K2Node_DynamicCast_AsScripted_Skeletal_Actor, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FVector& CallFunc_FindClosestBone_K2_BoneLocation_1, class FName CallFunc_FindClosestBone_K2_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_1, class ASkeletalMeshActor* K2Node_DynamicCast_AsSkeletal_Mesh_Actor, bool K2Node_DynamicCast_bSuccess_3, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FVector& CallFunc_FindClosestBone_K2_BoneLocation_2, class FName CallFunc_FindClosestBone_K2_ReturnValue_2, bool CallFunc_IsAlly_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_2, const struct FVector& CallFunc_FindClosestBone_K2_BoneLocation_3, class FName CallFunc_FindClosestBone_K2_ReturnValue_3, bool CallFunc_NotEqual_NameName_ReturnValue_3, float CallFunc_RandomFloat_ReturnValue, class AGrenadeProjectile_Parent_C* K2Node_Event_Grenade, TArray<class AActor*>& K2Node_Event_DamagedActors, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue_1, float CallFunc_GetExplosionRadius_Radius, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UVerb_Grenade_C* K2Node_DynamicCast_AsVerb_Grenade_1, bool K2Node_DynamicCast_bSuccess_5, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, TArray<class AActor*>& CallFunc_QtnDoRadialDamage_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsEnemy_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UStatusEffect_FlashbangKnockdown_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}


