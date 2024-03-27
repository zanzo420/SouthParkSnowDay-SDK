#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x161 - 0x150)
// BlueprintGeneratedClass BodyDamageReaction_Bullrush.BodyDamageReaction_Bullrush_C
class UBodyDamageReaction_Bullrush_C : public UQtnDamageReaction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Being_Carried;                                     // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Reaction_Duration;                                 // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Cannot_be_Carried;                                 // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBodyDamageReaction_Bullrush_C* GetDefaultObj();

	void HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction);
	bool IsReactionFinished(class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess);
	void OnEnterReaction(bool IsServer);
	void OnTickReaction(float DeltaSeconds);
	void OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted);
	void OnExitReaction(bool IsServer);
	void ExecuteUbergraph_BodyDamageReaction_Bullrush(int32 EntryPoint, int32 Temp_int_Variable, const struct FVector& Temp_struct_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, enum class EQtnCardinalDirection Temp_byte_Variable, enum class EHitReactionAnimationResults Temp_byte_Variable_1, enum class EHitReactionAnimationResults Temp_byte_Variable_2, enum class EHitReactionAnimationResults Temp_byte_Variable_3, enum class EHitReactionAnimationResults Temp_byte_Variable_4, enum class EQtnCardinalDirection Temp_byte_Variable_5, enum class EHitReactionAnimationResults Temp_byte_Variable_6, enum class EHitReactionAnimationResults Temp_byte_Variable_7, enum class EHitReactionAnimationResults Temp_byte_Variable_8, enum class EHitReactionAnimationResults Temp_byte_Variable_9, int32 Temp_int_Variable_1, bool K2Node_Event_isServer_1, float K2Node_Event_DeltaSeconds, const struct FVector& Temp_struct_Variable_1, class UQtnVerb* CallFunc_GetDamagingVerb_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBullRush_Verb_C* K2Node_DynamicCast_AsBull_Rush_Verb, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVerbActive_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_1, bool K2Node_DynamicCast_bSuccess_2, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_2, bool K2Node_DynamicCast_bSuccess_3, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_2, class UQtnVerb* CallFunc_GetDamagingVerb_ReturnValue_1, class UBullRush_Verb_C* K2Node_DynamicCast_AsBull_Rush_Verb_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Greater_IntInt_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_3, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_1, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_3, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_4, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsTouchingGround_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_3, bool K2Node_Event_isServer, bool CallFunc_IsValid_ReturnValue_2, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_5, class UQtnCarryComponent* CallFunc_GetCarryComponent_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, const struct FVector& Temp_struct_Variable_2, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_6, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, const struct FVector& Temp_struct_Variable_3, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess_5, const struct FVector& Temp_struct_Variable_4, const struct FVector& K2Node_Select_Default, class UQtnVerb* CallFunc_GetDamagingVerb_ReturnValue_2, const struct FQtnCarrySettings& K2Node_MakeStruct_QtnCarrySettings, class UBullRush_Verb_C* K2Node_DynamicCast_AsBull_Rush_Verb_2, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_7, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue_1, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_7, enum class EHitReactionAnimationResults K2Node_Select_Default_1, enum class EHitReactionAnimationResults K2Node_Select_Default_2, enum class EHitReactionAnimationResults K2Node_Select_Default_3, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_PlayReactionMontage_ReturnValue);
};

}


