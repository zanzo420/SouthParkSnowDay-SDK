#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA48 - 0xA40)
// BlueprintGeneratedClass RangedChaffShootBowVerbCounter.RangedChaffShootBowVerbCounter_C
class URangedChaffShootBowVerbCounter_C : public UEnemyRanged_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class URangedChaffShootBowVerbCounter_C* GetDefaultObj();

	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void ExecuteUbergraph_RangedChaffShootBowVerbCounter(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_3, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UAnimNotify_FireProjectile_C* K2Node_DynamicCast_AsAnim_Notify_Fire_Projectile, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Get_Projectile_Velocity_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class ABodyPawnAIRangedChaff_C* K2Node_DynamicCast_AsBody_Pawn_AIRanged_Chaff, bool K2Node_DynamicCast_bSuccess_1, class ARangedChaffWeapon_C* K2Node_DynamicCast_AsRanged_Chaff_Weapon, bool K2Node_DynamicCast_bSuccess_2, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer, bool CallFunc_IsLocallyControlled_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, class UObject* CallFunc_GetIntendedTarget_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_3, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_AdjustMuzzlePositionForWalls_wallDetected, const struct FVector& CallFunc_AdjustMuzzlePositionForWalls_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_4);
};

}


