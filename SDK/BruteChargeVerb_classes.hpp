#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E9 (0xBD9 - 0x9F0)
// BlueprintGeneratedClass BruteChargeVerb.BruteChargeVerb_C
class UBruteChargeVerb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnPawnMontage                       ChargeIntro;                                       // 0x9F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       ChargeLoop;                                        // 0xA08(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       ChargeHit;                                         // 0xA18(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       ChargeEnd;                                         // 0xA28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       TackleIntro;                                       // 0xA38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       TackleLoop;                                        // 0xA48(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       TackleAttack;                                      // 0xA58(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       TackleInterrupt;                                   // 0xA68(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       TackleEscape;                                      // 0xA78(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         VerbDone;                                          // 0xA88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DC5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChargeVelocity;                                    // 0xA8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChargeDuration;                                    // 0xA90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChargeTime;                                        // 0xA94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SurfaceCheckRadius;                                // 0xA98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPawn*                              TargetPawn;                                        // 0xAA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Local_KnockbackMulti;                              // 0xAA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnDangerVolume*                      DangerCapsule_ServerOnly;                          // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBruteChargeEnum                  bruteChargeState;                                  // 0xAB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          R_tackleVictimBody;                                // 0xAC0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyPawn*                          L_tackleVictimBody;                                // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GroundPoundInterval;                               // 0xAD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRangedInt                         NumGroundPounds;                                   // 0xAD4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        R_MaxGroundPounds;                                 // 0xADC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        R_groundPoundCount;                                // 0xAE0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnPawnMontage>               TackleAttackVariants;                              // 0xAE8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAnimMontage*>                  TackleReactionVariants;                            // 0xAF8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        R_accumulatedDamage;                               // 0xB08(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DCA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                DamageLetGoThresholds;                             // 0xB10(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        EffectiveDamageLetGoThreshold;                     // 0xB20(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TackleVariantIndex;                                // 0xB24(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                TackleVariantSelections;                           // 0xB28(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	float                                        ChargeDamageMultiplier;                            // 0xB38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GroundSlamDamageMultiplier;                        // 0xB3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GroundPoundDamageMultiplier;                       // 0xB40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DCB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Melee_Victim;                                      // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDamageInfo                        Damage_Info;                                       // 0xB50(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         Deep_Impact_Active;                                // 0xBD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBruteChargeVerb_C* GetDefaultObj();

	void EnemyUpgrade_DeepImpact(float Temp_float_Variable, bool Temp_bool_Variable, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class UQtnAttribute* CallFunc_AddAttribute_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_GetAttributeMax_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_HasAttribute_ReturnValue);
	void Setup_Remaining_Ground_Pounds_Server_Only(int32 CallFunc_GetRandomInt_ReturnValue);
	void TickChargeIntro(float& DeltaSeconds, const struct FVector& SelfLocation, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSafeFuturePosition_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw);
	bool ShouldTiltRotationAlongSlopes(enum class EBruteChargeEnum Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool K2Node_Select_Default);
	void AdjustTacklePositionForWalls(class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_CapsuleTrace_hits, bool CallFunc_CapsuleTrace_ReturnValue);
	void PrepareTackleVariants(TArray<int32>& Temp_wildcard_Variable, TArray<int32>& Temp_wildcard_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_3, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2);
	void ShouldLetGo(bool* Yes, bool* EscapeDetected, class UQtnFullBodyState* CallFunc_GetCurrentFullBodyState_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UFullBodyHitReaction_C* K2Node_DynamicCast_AsFull_Body_Hit_Reaction, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetPawnScale_ReturnValue, class UQtnDamageReaction* CallFunc_GetCurrentDamageReaction_ReturnValue, bool CallFunc_GetButtonMashRatio_isFull, float CallFunc_GetButtonMashRatio_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetPawnScale_ReturnValue_1, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void OnRep_r_accumulatedDamage(bool CallFunc_Greater_FloatFloat_ReturnValue);
	void HandleIncomingDamage(struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, struct FQtnDamageInfo* ModifiedDamageInfo, float Local_effectiveDamageTowardsRelease, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsMeleeWeaponVerb_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UQtnDamageType* CallFunc_GetDamageArchetype_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class UNormalBaseDamageType_C* K2Node_DynamicCast_AsNormal_Base_Damage_Type, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void ApplyGroundPoundDamage(bool Temp_bool_Variable, TSubclassOf<class UQtnDamageType> Temp_class_Variable, TSubclassOf<class UQtnDamageType> Temp_class_Variable_1, TSubclassOf<class UQtnDamageType> K2Node_Select_Default, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, float CallFunc_GetDamageValue_baseDamage, float CallFunc_GetDamageValue_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo);
	void ApplyGroundSlamDamage(TSubclassOf<class UQtnDamageType> CallFunc_GetDamageType_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, float CallFunc_GetDamageValue_baseDamage, float CallFunc_GetDamageValue_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo);
	void TickChargeLoop(float& DeltaSeconds, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, TArray<struct FHitResult>& CallFunc_CapsuleTrace_hits, bool CallFunc_CapsuleTrace_ReturnValue);
	void TickTackleLoop(float& DeltaSeconds, int32 Temp_int_Variable, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_ShouldLetGo_yes, bool CallFunc_ShouldLetGo_escapeDetected, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6);
	void DetatchTackle(bool Interrupted, class UQtnFullBodyState* CallFunc_GetCurrentFullBodyState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFullBodyHitReaction_C* K2Node_DynamicCast_AsFull_Body_Hit_Reaction, bool K2Node_DynamicCast_bSuccess, class UQtnDamageReaction* CallFunc_GetCurrentDamageReaction_ReturnValue, class UBodyDamageReactionBruteTackle_C* K2Node_DynamicCast_AsBody_Damage_Reaction_Brute_Tackle, bool K2Node_DynamicCast_bSuccess_1);
	void OnRep_r_tackleVictimBody(bool CallFunc_IsValid_ReturnValue);
	void AcknowledgeUnTackle(class AQtnBodyPawn* VictimBody, bool Escaped, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void AcknowledgeTackle(class AQtnBodyPawn* VictimBody, bool* Success, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetBruteChargeState(enum class EBruteChargeEnum DesiredState, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Variable, float CallFunc_StartVerbAction_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsServer_ReturnValue_2, float CallFunc_StartVerbAction_ReturnValue_1, class UQtnFullBodyState* CallFunc_GetCurrentFullBodyState_ReturnValue, class UFullBodyHitReaction_C* K2Node_DynamicCast_AsFull_Body_Hit_Reaction, bool K2Node_DynamicCast_bSuccess, float CallFunc_StartVerbAction_ReturnValue_2, class UQtnDamageReaction* CallFunc_GetCurrentDamageReaction_ReturnValue, class UBodyDamageReactionBruteTackle_C* K2Node_DynamicCast_AsBody_Damage_Reaction_Brute_Tackle, bool K2Node_DynamicCast_bSuccess_1, class UAnimMontage* CallFunc_Array_Get_Item, float CallFunc_StartVerbAction_ReturnValue_3, float CallFunc_StartVerbAction_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class UObject* CallFunc_GetIntendedTarget_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_StartVerbAction_ReturnValue_5, float CallFunc_StartVerbAction_ReturnValue_6, float CallFunc_StartVerbAction_ReturnValue_7, float CallFunc_StartVerbAction_ReturnValue_8);
	void CheckEndImpactForWallSlam(TArray<struct FHitResult>& HitArray, bool IsWallHit, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, bool CallFunc_HasUpgrade_ReturnValue, TArray<class AActor*>& CallFunc_QtnDoRadialDamage_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool IsVerbFinished();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void ApplyMeleeDamage(class AActor* MeleeVictim, const struct FQtnDamageInfo& DamageInfo);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnVerbInit(bool IsServer);
	void ExecuteUbergraph_BruteChargeVerb(int32 EntryPoint, class AActor* K2Node_Event_meleeVictim, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_2, bool K2Node_SwitchEnum_CmpSuccess, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQtnDangerParameters& K2Node_MakeStruct_QtnDangerParameters, class AQtnDangerVolume* CallFunc_SpawnDangerCapsule_ServerOnly_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_1, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_4, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_3, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_4, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_5, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_6, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Can_Be_Grabbed_canBeGrabbed, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, class ARangedTower_C* K2Node_DynamicCast_AsRanged_Tower, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, bool CallFunc_HasUpgrade_ReturnValue, bool K2Node_Event_isServer, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, enum class EQtnDifficulty CallFunc_GetDifficulty_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_Array_Get_Item);
};

}


