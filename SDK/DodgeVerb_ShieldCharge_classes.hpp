#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0xA4C - 0xA32)
// BlueprintGeneratedClass DodgeVerb_ShieldCharge.DodgeVerb_ShieldCharge_C
class UDodgeVerb_ShieldCharge_C : public UDodgeVerb_C
{
public:
	uint8                                        Pad_7642[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AQtnFXActor*                           OmniShield;                                        // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OmniShieldFade;                                    // 0xA48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDodgeVerb_ShieldCharge_C* GetDefaultObj();

	void ServerOnly_Upgrade_OmniDirectionalBlock_HealonBlock(bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetExistingVerb_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ModifyAnimWindowBlockParryValues(struct FQtnRangedFloat& OriginalDegrees, float OriginalCm, struct FQtnRangedFloat* ModifiedDegrees, float* ModifiedCm, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetExistingVerb_ReturnValue);
	void OnProjectilePreHit_ServerOnly(class AQtnProjectile* Projectile, bool* IgnoreCollision, class AQtnPawn* LOCAL_Culprit, class AQtnProjectile* LOCAL_Projectile, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetExistingVerb_ReturnValue, class AQtnProjectileArchetype_C* K2Node_DynamicCast_AsQtn_Projectile_Archetype, bool K2Node_DynamicCast_bSuccess, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetExistingVerb_ReturnValue_1, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, bool CallFunc_OnProjectilePreHit_ServerOnly_ignoreCollision, class AQtnPawn* CallFunc_GetCulprit_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, bool CallFunc_IsAlly_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_3, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UQtnVerb* CallFunc_GetBlockInfo_blockingVerb, bool CallFunc_GetBlockInfo_wouldBlockSucceed);
	bool HandleIncomingBlock(struct FQtnDamageInfo& DamageInfo, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetExistingVerb_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	class UBlendSpace* GetLocoBlendOverride(class UBlendSpace* CallFunc_GetLocoBlendOverride_ReturnValue);
	void StartDodge_Derived(class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void HandleTouchLivingEnemy(class ABodyPawnBase_C*& EnemyBody);
	float GetDamageValue(class AActor* VictimActor, float* BaseDamage, float DamageMultiplier, float LOCAL_BaseDamage, class AActor* LOCAL_VictimActor, float LOCAL_BonusDamage, float LOCAL_DamageScalar, TSubclassOf<class UQtnDamageType> CallFunc_GetDamageType_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, TSubclassOf<class UQtnDamageType> CallFunc_GetDamageType_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_CalculateDamageValues_OutDamageScalar, float CallFunc_CalculateDamageValues_OutBonusDamage, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_CalculateDamageValues_OutDamageScalar_1, float CallFunc_CalculateDamageValues_OutBonusDamage_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_4);
	void MulticastOnBlocked();
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void ExecuteUbergraph_DodgeVerb_ShieldCharge(int32 EntryPoint, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_2, float CallFunc_Multiply_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetExistingVerb_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_1, bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue_1, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_2);
};

}


