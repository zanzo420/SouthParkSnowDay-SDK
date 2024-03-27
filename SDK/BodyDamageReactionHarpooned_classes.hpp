#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x17C - 0x160)
// BlueprintGeneratedClass BodyDamageReactionHarpooned.BodyDamageReactionHarpooned_C
class UBodyDamageReactionHarpooned_C : public UBodyDamageReactionBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x160(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AProjectile_Harpoon_C*                 HarpoonProjectile;                                 // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHarpoonVerb_C*                        HarpoonVerb;                                       // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntentionalLocoRatio;                              // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBodyDamageReactionHarpooned_C* GetDefaultObj();

	void AlterLocomotion(struct FVector& OriginalMovementIntention, struct FVector* AlteredMovementIntention, float* SpeedScale, class UBlendSpace** LocoBlendOverride, const struct FVector& FinalMovement, const struct FVector& PullDirection, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, float CallFunc_VSizeXYSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue_1);
	bool IsReactionFinished(bool CallFunc_IsVerbActive_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnEnterReaction(bool IsServer);
	void OnExitReaction(bool IsServer);
	void OnTickReaction(float DeltaSeconds);
	void ExecuteUbergraph_BodyDamageReactionHarpooned(int32 EntryPoint, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, bool K2Node_Event_isServer_1, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, bool K2Node_Event_isServer, float CallFunc_PlayReactionMontage_ReturnValue, float K2Node_Event_DeltaSeconds, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue, class UHarpoonVerb_C* K2Node_DynamicCast_AsHarpoon_Verb, bool K2Node_DynamicCast_bSuccess_1, class AProjectile_Harpoon_C* K2Node_DynamicCast_AsProjectile_Harpoon, bool K2Node_DynamicCast_bSuccess_2, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_1, bool CallFunc_GetButtonMashRatio_isFull, float CallFunc_GetButtonMashRatio_ReturnValue, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue, bool CallFunc_GetButtonMashRatio_isFull_1, float CallFunc_GetButtonMashRatio_ReturnValue_1, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_2, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue);
};

}


