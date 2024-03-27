#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB2 (0xAA2 - 0x9F0)
// BlueprintGeneratedClass MeleeVerbBruteStickCombo.MeleeVerbBruteStickCombo_C
class UMeleeVerbBruteStickCombo_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Verb_Done;                                         // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_318E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnPawnMontage>               R_RandomizedComboAttacks;                          // 0xA00(0x10)(Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance)
	int32                                        R_attackIndex;                                     // 0xA10(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_318F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnPawnMontage>               ComboAttackSelection;                              // 0xA18(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EMeleeVerbBruteStickComboEnum     ComboState;                                        // 0xA28(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3190[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       TelegraphIntro;                                    // 0xA30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       TelegraphOutro;                                    // 0xA40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       AntiAirAttack;                                     // 0xA50(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         AirEvasionDetected;                                // 0xA60(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3191[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       TantrumPart1;                                      // 0xA68(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       TantrumPart2;                                      // 0xA78(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        LoopTimer;                                         // 0xA88(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GiveUpPatience;                                    // 0xA8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TelegraphDelay;                                    // 0xA90(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpeedMultiplier;                                   // 0xA94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRangedFloat                       TargetRange;                                       // 0xA98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         DealtDamage;                                       // 0xAA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Enrage_Active;                                     // 0xAA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UMeleeVerbBruteStickCombo_C* GetDefaultObj();

	void IsTargetAlive(bool* Yes, bool CallFunc_Not_PreBool_ReturnValue, class UObject* CallFunc_GetIntendedTarget_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool ShouldUseHeadAim();
	bool CanMantle(enum class EMeleeVerbBruteStickComboEnum Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool K2Node_Select_Default);
	void CanHitTarget(bool* Yes, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UObject* CallFunc_GetIntendedTarget_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsWithinVerbRange_ReturnValue);
	void HandleActionEnd(enum class EMeleeVerbBruteStickComboEnum GroundResponse, enum class EMeleeVerbBruteStickComboEnum AntiAirResponse, bool Temp_bool_Variable, bool CallFunc_CanHitTarget_yes, class UObject* CallFunc_GetIntendedTarget_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, enum class EMeleeVerbBruteStickComboEnum K2Node_Select_Default, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue);
	void TickLoopDelay(float& DeltaSeconds, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void TickLoopReady(float& DeltaSeconds, bool CallFunc_CanHitTarget_yes, bool CallFunc_Less_FloatFloat_ReturnValue, class UObject* CallFunc_GetIntendedTarget_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue);
	void CheckForAirEvasion(class UObject* CallFunc_GetIntendedTarget_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	class UBlendSpace* GetLocoBlendOverride(bool Temp_bool_Variable, class UBlendSpace* Temp_object_Variable, class UBlendSpace* Temp_object_Variable_1, enum class EMeleeVerbBruteStickComboEnum Temp_byte_Variable, class UBlendSpace* Temp_object_Variable_2, class UBlendSpace* Temp_object_Variable_3, class UBlendSpace* Temp_object_Variable_4, class UBlendSpace* Temp_object_Variable_5, class UBlendSpace* Temp_object_Variable_6, class UBlendSpace* Temp_object_Variable_7, class UBlendSpace* Temp_object_Variable_8, float CallFunc_GetElapsedVerbTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UBlendSpace* K2Node_Select_Default, class UBlendSpace* K2Node_Select_Default_1);
	float GetLocomotionRatio(enum class EMeleeVerbBruteStickComboEnum Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float K2Node_Select_Default);
	void SetComboState(enum class EMeleeVerbBruteStickComboEnum DesiredState, bool K2Node_SwitchEnum_CmpSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, float CallFunc_StartVerbAction_ReturnValue, float CallFunc_StartVerbAction_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_StartVerbAction_ReturnValue_2, float CallFunc_StartVerbAction_ReturnValue_3, float CallFunc_StartVerbAction_ReturnValue_4, float CallFunc_StartVerbAction_ReturnValue_5);
	void IncrementAttack_ServerOnly(int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ResetAttackOrder_ServerOnly(TArray<struct FQtnPawnMontage>& Temp_wildcard_Variable, TArray<struct FQtnPawnMontage>& Temp_wildcard_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const struct FQtnPawnMontage& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void SpawnDangerVolume_ServerOnly(const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FQtnDangerParameters& K2Node_MakeStruct_QtnDangerParameters, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AQtnDangerVolume* CallFunc_SpawnDangerSphere_ServerOnly_ReturnValue);
	bool IsVerbFinished();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void ApplyMeleeDamage(class AActor* MeleeVictim, const struct FQtnDamageInfo& DamageInfo);
	void OnVerbInit(bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void ExecuteUbergraph_MeleeVerbBruteStickCombo(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_5, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_4, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_3, class AActor* K2Node_Event_meleeVictim, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, bool K2Node_Event_isServer_2, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_1, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsTargetAlive_yes, bool CallFunc_IsTargetAlive_yes_1, bool CallFunc_IsTargetAlive_yes_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, bool CallFunc_HasStatusEffect_ReturnValue, float K2Node_Select_Default);
};

}


