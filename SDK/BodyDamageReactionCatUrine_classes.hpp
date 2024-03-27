#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x158 - 0x150)
// BlueprintGeneratedClass BodyDamageReactionCatUrine.BodyDamageReactionCatUrine_C
class UBodyDamageReactionCatUrine_C : public UQtnDamageReaction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBodyDamageReactionCatUrine_C* GetDefaultObj();

	void HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnEnterReaction(bool IsServer);
	void OnTickReaction(float DeltaSeconds);
	void OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted);
	void ExecuteUbergraph_BodyDamageReactionCatUrine(int32 EntryPoint, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, enum class EHitReactionAnimationResults Temp_byte_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_isServer, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsTouchingGround_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, class UQtnVerb* CallFunc_GetDamagingVerb_ReturnValue, bool CallFunc_IsVerbActive_ReturnValue, const struct FQtnHitReactionInfo& CallFunc_GetHitReactInfo_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_2, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, float CallFunc_PlayReactionMontage_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FQtnHitReactionInfo& CallFunc_GetHitReactInfo_ReturnValue_1, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, class UQtnVerb* CallFunc_GetDamagingVerb_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_2, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_SetActorRotation_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_4, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage_1, float CallFunc_PlayReactionMontage_ReturnValue_1, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_3, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_4, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_PlayReactionMontage_ReturnValue_2);
};

}


