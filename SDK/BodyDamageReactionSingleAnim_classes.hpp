#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x45 (0x195 - 0x150)
// BlueprintGeneratedClass BodyDamageReactionSingleAnim.BodyDamageReactionSingleAnim_C
class UBodyDamageReactionSingleAnim_C : public UQtnDamageReaction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TotalMontageTime;                                  // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               KnockbackVector;                                   // 0x15C(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoFlyingBodyDamage;                                // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FinishMontageUponLanding;                          // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E93[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        EvaluatedActorsForFlyingBodyDamage;                // 0x170(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        MinVelocityForTouchDamage;                         // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinMontageTime;                                    // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageReceptorBodyPawn_C*             CachedDamageReceptor;                              // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFinished;                                        // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsFatalDamage;                                     // 0x191(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTooCoolLookingToInterrupt;                       // 0x192(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EHitReactionAnimationResults      SelectedHitReaction;                               // 0x193(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBoss;                                            // 0x194(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBodyDamageReactionSingleAnim_C* GetDefaultObj();

	void DecideIfThisIsTooCoolToInterrupt(enum class EHitReactionAnimationResults Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, bool Temp_bool_Variable_18, bool Temp_bool_Variable_19, bool Temp_bool_Variable_20, bool Temp_bool_Variable_21, bool Temp_bool_Variable_22, bool Temp_bool_Variable_23, bool Temp_bool_Variable_24, bool Temp_bool_Variable_25, bool Temp_bool_Variable_26, bool Temp_bool_Variable_27, bool Temp_bool_Variable_28, bool Temp_bool_Variable_29, bool Temp_bool_Variable_30, bool Temp_bool_Variable_31, bool Temp_bool_Variable_32, bool Temp_bool_Variable_33, bool Temp_bool_Variable_34, bool Temp_bool_Variable_35, bool Temp_bool_Variable_36, bool Temp_bool_Variable_37, bool K2Node_Select_Default);
	void DoKnockback(float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Vector_IsNearlyZero_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Square_ReturnValue, float CallFunc_Square_ReturnValue_1, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_ApplyKnockback_ReturnValue, float CallFunc_Sqrt_ReturnValue, bool Temp_bool_Variable_1, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_3, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_4, float K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, float K2Node_Select_Default_1, float CallFunc_ApplyKnockback_ReturnValue_1);
	void CheckIfFinished(class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, const struct FQtnHitReactionInfo& CallFunc_GetHitReactInfo_ReturnValue, bool CallFunc_IsMontageFinishPending_ReturnValue);
	void ShouldDoKnockback(bool* Yes);
	float GetKnockdownTime(const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, float CallFunc_GetRemainingReactionTime_ReturnValue, float CallFunc_FMax_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void DoTouchDamage_ServerOnly(class AActor* OtherActor, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ShouldFlyingBodyDamageThisActor_result, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_VSize_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo);
	void ShouldFlyingBodyDamageThisActor(class AActor*& ActorToEvaluate, class AQtnPawn*& Culprit, bool* Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlly_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void IsKnockdownPending(bool* Result, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FQtnHitReactionInfo& CallFunc_GetHitReactInfo_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_Vector_IsNearlyZero_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool IsReactionFinished();
	void HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction, bool biggerKnockdown, class UClass* OtherDamageType, bool ShouldAllowNewReaction, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, enum class EHitReactionAnimationResults CallFunc_GetSelectedHitReaction_SelectedHitReaction, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_VSizeSquared_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, class UQtnDamageType* CallFunc_GetDamageArchetype_ReturnValue, class UNormalBaseDamageType_C* K2Node_DynamicCast_AsNormal_Base_Damage_Type, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsKnockdownPending_result, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void OnEnterReaction(bool IsServer);
	void OnTickReaction(float DeltaSeconds);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify);
	void OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted);
	void OnExitReaction(bool IsServer);
	void OnTouchOtherActor_Event_0(class AQtnPawn* SelfPawn, class AActor* OtherActor, struct FVector& TouchLocation, struct FVector& TouchNormal);
	void OnInitReaction(class UQtnFullBodyStateHitReaction* HitReactionBodyState);
	void ExecuteUbergraph_BodyDamageReactionSingleAnim(int32 EntryPoint, const struct FQtnHitReactionInfo& CallFunc_GetHitReactInfo_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, bool CallFunc_IsKnockdownPending_result, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, bool K2Node_Event_isServer, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AQtnPawn* K2Node_CustomEvent_selfPawn, class AActor* K2Node_CustomEvent_otherActor, const struct FVector& K2Node_CustomEvent_touchLocation, const struct FVector& K2Node_CustomEvent_touchNormal, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_2, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, class UQtnDamageType* CallFunc_GetDamageArchetype_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_4, bool CallFunc_IsTouchingGround_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_5, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_2, bool CallFunc_IsTouchingGround_ReturnValue_2, const struct FQtnHitReactionInfo& CallFunc_GetHitReactInfo_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_PlayReactionMontage_ReturnValue, float CallFunc_FMin_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_3, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_4, class UQtnAnimNotify* K2Node_Event_animNotify, float K2Node_Event_DeltaSeconds, class UQtnAnimNotifyRagdoll* K2Node_DynamicCast_AsQtn_Anim_Notify_Ragdoll, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_isServer_1, const struct FQtnHitReactionInfo& CallFunc_GetHitReactInfo_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue_1, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_5, float CallFunc_GetElapsedReactionTime_ReturnValue, float CallFunc_GetKnockdownTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetKnockdownTime_ReturnValue_1, class UQtnFullBodyStateHitReaction* K2Node_Event_hitReactionBodyState, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_6, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess_1, enum class EHitReactionAnimationResults CallFunc_GetSelectedHitReaction_SelectedHitReaction, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_7, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsBoss_ReturnValue);
};

}


