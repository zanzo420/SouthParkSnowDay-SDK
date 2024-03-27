#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x194 - 0x140)
// BlueprintGeneratedClass FullBodyDead.FullBodyDead_C
class UFullBodyDead_C : public UQtnFullBodyStateDead
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         On_Back;                                           // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FinishedDeathPresentation;                         // 0x149(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4EED[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DeathPresentationTimer;                            // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDeathPresentationDuration;                      // 0x150(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInAir;                                           // 0x154(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4EEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LOCAL_FecalmancerLastChecked;                      // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LOCAL_FecalmancerLastUsed;                         // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnUpgradeSlot*                       LOCAL_FecalmancerUpgrade;                          // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Anim_Fecalmancer_OnBack;                           // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Anim_Fecalmancer_OnBelly;                          // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageReceptorBodyPawn_C*             LOCAL_DamageReceptor;                              // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnPawnMontage                       IdleDeathMontage;                                  // 0x180(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor)
	float                                        SecondsUntilBoredAnim;                             // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFullBodyDead_C* GetDefaultObj();

	void TickBoredBehavior(float Delta_Seconds, const TArray<class UAnimMontage*>& OnBackBoredAnims, const TArray<class UAnimMontage*>& OnBellyBoredAnims, bool Temp_bool_Variable, TArray<class UAnimMontage*>& K2Node_MakeArray_Array, TArray<class UAnimMontage*>& K2Node_MakeArray_Array_1, class UAnimMontage* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UAnimMontage* CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UAnimMontage* K2Node_Select_Default, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_PlayDeathMontage_ReturnValue);
	void CalculateIdleDeathMontage(bool Temp_bool_Variable, enum class EHitReactionAnimationResults Temp_byte_Variable, enum class EHitReactionAnimationResults Temp_byte_Variable_1, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetRightVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, enum class EHitReactionAnimationResults K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void TickFecalMancer(float GlobalSeconds, bool Temp_bool_Variable, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue, float CallFunc_GetQtnTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_1, class UAnimMontage* K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, TArray<class AQtnPawn*>& CallFunc_GatherPawnsWithinRadius_pawns, float CallFunc_PlayDeathMontage_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void IsDying(bool* Result, bool CallFunc_Not_PreBool_ReturnValue);
	void OnEnterBodyState(class UQtnBodyState* PreviousBodyState);
	void OnDeathMontageDone(class UAnimMontage* Montage, bool Interrupted);
	void HandleDamageReceived(struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactInfo);
	void OnTickBodyState(float DeltaSeconds);
	void OnInitBodyState();
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify);
	void ExecuteUbergraph_FullBodyDead(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UQtnBodyState* K2Node_Event_previousBodyState, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, const struct FQtnHitReactionInfo& K2Node_Event_hitReactInfo, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Subtract_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_1, bool CallFunc_IsTouchingGround_ReturnValue_1, bool Temp_bool_IsClosed_Variable, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_GetQtnTimeSeconds_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_4, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_PlayDeathMontage_ReturnValue, float CallFunc_PlayDeathMontage_ReturnValue_1, float CallFunc_FMin_ReturnValue, float CallFunc_PlayDeathMontage_ReturnValue_2, float CallFunc_FMin_ReturnValue_1, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, enum class EHitReactionAnimationResults Temp_byte_Variable, class UQtnAnimNotify* K2Node_Event_animNotify, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_1, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_5, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, float CallFunc_PlayDeathMontage_ReturnValue_3, TArray<class AActor*>& CallFunc_QtnDoRadialDamage_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


