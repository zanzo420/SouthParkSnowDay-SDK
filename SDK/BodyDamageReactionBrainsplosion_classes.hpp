#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x178 - 0x150)
// BlueprintGeneratedClass BodyDamageReactionBrainsplosion.BodyDamageReactionBrainsplosion_C
class UBodyDamageReactionBrainsplosion_C : public UQtnDamageReaction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          BrainsplosionMontage;                              // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TickTime;                                          // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AnimStarted;                                       // 0x164(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BrainsplosionTimeMax;                              // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTouchingGround;                                  // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Done;                                           // 0x16D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F1[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Brainsplosion_Damage_Radius;                       // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Brainsplosion_Base_Damage;                         // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBodyDamageReactionBrainsplosion_C* GetDefaultObj();

	void HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction);
	bool IsReactionFinished();
	void Server_Deal_Brainsplosion_Damage(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UBrainwash_Verb_C* CallFunc_GetExistingVerb_ReturnValue, TArray<class AActor*>& CallFunc_GatherActorsWithinRadius_otherActors, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_2, class AActor* CallFunc_Array_Get_Item, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo);
	void OnEnterReaction(bool IsServer);
	void OnTickReaction(float DeltaSeconds);
	void OnExitReaction(bool IsServer);
	void OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted);
	void ExecuteUbergraph_BodyDamageReactionBrainsplosion(int32 EntryPoint, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, float K2Node_Event_DeltaSeconds, bool K2Node_Event_isServer, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue, bool K2Node_Event_isServer_1, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess, enum class EHitReactionAnimationResults Temp_byte_Variable, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, float CallFunc_PlayReactionMontage_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_2, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_2, bool CallFunc_IsBodyIdle_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class AQtnPawn* CallFunc_GetDamagingCulprit_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBrainwash_Verb_C* CallFunc_GetExistingVerb_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


