#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B (0x16B - 0x150)
// BlueprintGeneratedClass BodyDamageReaction_Supersize.BodyDamageReaction_Supersize_C
class UBodyDamageReaction_Supersize_C : public UQtnDamageReaction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Is_Fatal_Damage;                                   // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C2C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageReceptorBodyPawn_C*             As_Damage_Receptor_Body_Pawn;                      // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Heavy;                                          // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasLoopingSection;                                 // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsFinished;                                        // 0x16A(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBodyDamageReaction_Supersize_C* GetDefaultObj();

	bool IsReactionFinished();
	void OnEnterReaction(bool IsServer);
	void OnTickReaction(float DeltaSeconds);
	void OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted);
	void ExecuteUbergraph_BodyDamageReaction_Supersize(int32 EntryPoint, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, enum class EHitReactionAnimationResults Temp_byte_Variable, enum class EHitReactionAnimationResults Temp_byte_Variable_1, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, enum class EHitReactionAnimationResults Temp_byte_Variable_2, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess, enum class EHitReactionAnimationResults Temp_byte_Variable_3, bool CallFunc_IsValid_ReturnValue, enum class EQtnCardinalDirection Temp_byte_Variable_4, bool Temp_bool_Variable, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, enum class EHitReactionAnimationResults Temp_byte_Variable_5, bool CallFunc_IsValid_ReturnValue_1, enum class EHitReactionAnimationResults Temp_byte_Variable_6, enum class EHitReactionAnimationResults Temp_byte_Variable_7, int32 CallFunc_RandomIntegerInRange_ReturnValue, enum class EHitReactionAnimationResults Temp_byte_Variable_8, enum class EQtnCardinalDirection Temp_byte_Variable_9, bool Temp_bool_Variable_1, int32 Temp_int_Variable, enum class EHitReactionAnimationResults Temp_byte_Variable_10, enum class EHitReactionAnimationResults Temp_byte_Variable_11, enum class EHitReactionAnimationResults K2Node_Select_Default, bool K2Node_Event_isServer, float K2Node_Event_DeltaSeconds, bool CallFunc_Not_PreBool_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue_1, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue_2, float CallFunc_ApplyKnockback_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, enum class EHitReactionAnimationResults Temp_byte_Variable_12, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, enum class EHitReactionAnimationResults Temp_byte_Variable_13, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, enum class EQtnCardinalDirection Temp_byte_Variable_14, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, enum class EHitReactionAnimationResults K2Node_Select_Default_1, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_2, float CallFunc_GetElapsedReactionTime_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_4, enum class EHitReactionAnimationResults Temp_byte_Variable_15, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, enum class EHitReactionAnimationResults Temp_byte_Variable_16, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class EHitReactionAnimationResults Temp_byte_Variable_17, bool CallFunc_BooleanAND_ReturnValue, enum class EHitReactionAnimationResults Temp_byte_Variable_18, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, enum class EQtnCardinalDirection Temp_byte_Variable_19, enum class EHitReactionAnimationResults K2Node_Select_Default_2, enum class EHitReactionAnimationResults K2Node_Select_Default_3, enum class EHitReactionAnimationResults K2Node_Select_Default_4, enum class EHitReactionAnimationResults K2Node_Select_Default_5, enum class EHitReactionAnimationResults K2Node_Select_Default_6, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_PlayReactionMontage_ReturnValue);
};

}


