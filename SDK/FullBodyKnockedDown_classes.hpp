#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x118 - 0x100)
// BlueprintGeneratedClass FullBodyKnockedDown.FullBodyKnockedDown_C
class UFullBodyKnockedDown_C : public UQtnFullBodyStateKnockedDown
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x100(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         AllowVerbInput;                                    // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         OnBack;                                            // 0x109(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F2A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageReceptorBodyPawn_C*             CachedDamageReceptor;                              // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFullBodyKnockedDown_C* GetDefaultObj();

	void DoDamageResponse(struct FQtnDamageInfo& QtnDamageInfo, struct FQtnHitReactionInfo& HitReactInfo, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Vector_IsZero_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Square_ReturnValue, float CallFunc_Square_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Sqrt_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_ApplyKnockback_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void OnTickBodyState(float DeltaSeconds);
	void HandleDamageReceived(struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactInfo);
	void OnInitBodyState();
	void OnEnterBodyState(class UQtnBodyState* PreviousBodyState);
	void ExecuteUbergraph_FullBodyKnockedDown(int32 EntryPoint, float CallFunc_GetFailsafeElapsedKnockdownTime_ReturnValue, enum class EHitReactionAnimationResults Temp_byte_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, enum class EHitReactionAnimationResults Temp_byte_Variable_1, enum class EHitReactionAnimationResults Temp_byte_Variable_2, bool Temp_bool_Variable, enum class EQtnCardinalDirection Temp_byte_Variable_3, enum class EHitReactionAnimationResults Temp_byte_Variable_4, enum class EHitReactionAnimationResults Temp_byte_Variable_5, enum class EHitReactionAnimationResults Temp_byte_Variable_6, enum class EHitReactionAnimationResults Temp_byte_Variable_7, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float K2Node_Event_DeltaSeconds, float CallFunc_GetDefaultKnockdownDuration_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue, float CallFunc_PlayDownedMontage_ReturnValue, bool CallFunc_IsHero_ReturnValue, const struct FQtnPawnIntentions& CallFunc_GetIntentions_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EHitReactionAnimationResults Temp_byte_Variable_8, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_1, float CallFunc_GetDefaultKnockdownDuration_ReturnValue_1, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess, enum class EHitReactionAnimationResults K2Node_Select_Default, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, const struct FQtnHitReactionInfo& K2Node_Event_hitReactInfo, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetRightVector_ReturnValue, float CallFunc_GetElapsedKnockdownTime_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_3, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue_1, enum class EQtnCardinalDirection Temp_byte_Variable_9, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, enum class EHitReactionAnimationResults K2Node_Select_Default_1, float CallFunc_GetDefaultKnockdownDuration_ReturnValue_2, enum class EHitReactionAnimationResults K2Node_Select_Default_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_PlayDownedMontage_ReturnValue_1, class UQtnBodyState* K2Node_Event_previousBodyState, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_4, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
};

}


