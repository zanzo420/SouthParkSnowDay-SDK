#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x1A8 - 0x160)
// BlueprintGeneratedClass BodyDamageReaction_Jockey.BodyDamageReaction_Jockey_C
class UBodyDamageReaction_Jockey_C : public UBodyDamageReactionBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x160(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnPawnMontage                       Reaction_Montage;                                  // 0x168(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FVector                               ConfusionMovement;                                 // 0x178(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              ConfusionRotation;                                 // 0x184(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Escaped;                                           // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_143F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       EscapeMontage;                                     // 0x198(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UBodyDamageReaction_Jockey_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const struct FVector& ConfusionArrowTail, const struct FVector& ConfusionArrowHead, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void TickConfusionMovement(float DeltaSeconds, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue);
	void ShouldContinueBeingJockeyed(class UQtnVerb* SourceVerb, bool* Yes, class UAssassin_JockeyVerb_C* K2Node_DynamicCast_AsAssassin_Jockey_Verb, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVerbActive_ReturnValue);
	void HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction);
	void AlterLocomotion(struct FVector& OriginalMovementIntention, struct FVector* AlteredMovementIntention, float* SpeedScale, class UBlendSpace** LocoBlendOverride, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void OnEnterReaction(bool IsServer);
	void OnTickReaction(float DeltaSeconds);
	void OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted);
	void OnExitReaction(bool IsServer);
	void ExecuteUbergraph_BodyDamageReaction_Jockey(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_isServer_1, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, float CallFunc_PlayReactionMontage_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_ShouldContinueBeingJockeyed_yes, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_2, bool K2Node_Event_isServer, bool CallFunc_GetButtonMashRatio_isFull, float CallFunc_GetButtonMashRatio_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_GetButtonMashRatio_isFull_1, float CallFunc_GetButtonMashRatio_ReturnValue_1, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_3, float CallFunc_PlayReactionMontage_ReturnValue_1);
};

}


