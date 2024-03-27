#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA48 - 0xA40)
// BlueprintGeneratedClass DefensiveEncroacherRangedVerb.DefensiveEncroacherRangedVerb_C
class UDefensiveEncroacherRangedVerb_C : public UEnemyRanged_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UDefensiveEncroacherRangedVerb_C* GetDefaultObj();

	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnProjectileSpawned(class AQtnProjectile* SpawnedProjectile, bool IsServer);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void ExecuteUbergraph_DefensiveEncroacherRangedVerb(int32 EntryPoint, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_3, const struct FVector& CallFunc_Get_Projectile_Velocity_ReturnValue, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess, class UAnimNotify_FireProjectile_C* K2Node_DynamicCast_AsAnim_Notify_Fire_Projectile, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ADefensiveEncroacherSpear_C* K2Node_DynamicCast_AsDefensive_Encroacher_Spear, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_TransformLocation_ReturnValue, bool CallFunc_AdjustMuzzlePositionForWalls_wallDetected, const struct FVector& CallFunc_AdjustMuzzlePositionForWalls_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, class AQtnProjectile* K2Node_Event_spawnedProjectile, bool K2Node_Event_isServer_1, class ADefensiveEncroacherSpear_C* K2Node_DynamicCast_AsDefensive_Encroacher_Spear_1, bool K2Node_DynamicCast_bSuccess_3, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_2, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class ADefensiveEncroacherSpear_C* K2Node_DynamicCast_AsDefensive_Encroacher_Spear_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsLocallyControlled_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_3, class ADefensiveEncroacherSpear_C* K2Node_DynamicCast_AsDefensive_Encroacher_Spear_3, bool K2Node_DynamicCast_bSuccess_5);
};

}


