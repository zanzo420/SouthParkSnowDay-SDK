#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xA50 - 0x9F0)
// BlueprintGeneratedClass EncroacherShieldBlock.EncroacherShieldBlock_C
class UEncroacherShieldBlock_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnPawnMontage                       BlockIntroAction;                                  // 0x9F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       BlockHitAction;                                    // 0xA08(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       BlockBlockStart;                                   // 0xA18(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       BlockParryAction;                                  // 0xA28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         VerbDone;                                          // 0xA38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1483[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPawn*                              TargetPawn;                                        // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnFXActor*                           ShieldUpFX;                                        // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEncroacherShieldBlock_C* GetDefaultObj();

	bool HandleIncomingBlock(struct FQtnDamageInfo& DamageInfo, float CallFunc_StartVerbAction_ReturnValue);
	bool CanMantle();
	void HandleBlockAOEUpgrade_ServerOnly(float Radius, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, TArray<class AActor*>& CallFunc_QtnDoRadialDamage_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue);
	void OnProjectilePreHit_ServerOnly(class AQtnProjectile* Projectile, bool* IgnoreCollision, class AActor* ReflectingActor, class AQtnPawn* ProjectileCulprit, class AQtnProjectile* ReflectedProjectile, const struct FVector& CallFunc_GetProjectileVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, bool CallFunc_IsInFront_inFront, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetReflectionCount_ServerOnly_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, const struct FVector& CallFunc_GetProjectileVelocity_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool Temp_bool_Variable, const struct FVector& CallFunc_GetReflectionVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AActor* K2Node_Select_Default, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_3);
	void IsInFront(struct FVector& ThreatLocation, bool* InFront, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_GetCardinalDirection_isValid, enum class EQtnCardinalDirection CallFunc_GetCardinalDirection_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsInFront_inFront, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsHitReacting_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool IsVerbFinished();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void PresentCooldownWhileDormant();
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void Play_Block_Effect_Multicast();
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void Play_AOE_Upgrade_Effect_Multicast(float Radius);
	void ExecuteUbergraph_EncroacherShieldBlock(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_3, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, float CallFunc_StartVerbAction_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, float CallFunc_StartVerbAction_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class UObject* CallFunc_GetIntendedTarget_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAliveAndConscious_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, bool CallFunc_IsValid_ReturnValue_2, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_3, float K2Node_CustomEvent_radius);
};

}


