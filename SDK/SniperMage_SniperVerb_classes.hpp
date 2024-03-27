#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0xAB8 - 0x9F0)
// BlueprintGeneratedClass SniperMage_SniperVerb.SniperMage_SniperVerb_C
class USniperMage_SniperVerb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         VerbDone;                                          // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CA1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimTime;                                           // 0x9FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimTimeMax;                                        // 0xA00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CA3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       Verb_Action;                                       // 0xA08(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Aiming;                                            // 0xA18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CA5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               R_perceivedTargetLocation;                         // 0xA1C(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SnipeAimPosition;                                  // 0xA28(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SnipeImpactPosition;                               // 0xA34(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastGoodImpactPosition;                            // 0xA40(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CA7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          TargetBody;                                        // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Staff_Tip;                                         // 0xA58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionChannel                 Trace_Channel;                                     // 0xA60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CA9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnFXActor*                           ChargeFX;                                          // 0xA68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimInterpSpeed;                                    // 0xA70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESniperMageSeekEnum               SniperSeekState;                                   // 0xA74(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         R_lineOfSightConfirmed;                            // 0xA75(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CAB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DamageCapsuleRadius;                               // 0xA78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RandomNoiseTarget;                                 // 0xA7C(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RandomNoiseOffset;                                 // 0xA88(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RandomNoiseCountdown;                              // 0xA94(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRangedFloat                       RandomNoiseInterval;                               // 0xA98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        NoiseInterpSpeedWhileObstructed;                   // 0xAA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NoiseInterpSpeed;                                  // 0xAA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHittingBubbleShield;                             // 0xAA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CB5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnDangerVolume*                      DangerVolume;                                      // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USniperMage_SniperVerb_C* GetDefaultObj();

	void UpdateDangerVolume(const struct FQtnDangerParameters& K2Node_MakeStruct_QtnDangerParameters, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnDangerVolume* CallFunc_SpawnDangerCapsule_ServerOnly_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void RefreshRandomNoiseTarget(enum class ESniperMageSeekEnum Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float K2Node_Select_Default, float CallFunc_GetRandomValue_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	bool WillVerbSucceed(class UObject* PotentialTarget, bool AbleToHit, bool CallFunc_WillVerbSucceed_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, bool CallFunc_IsWithinVerbRange_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, TArray<struct FHitResult>& CallFunc_LineTrace_hits, bool CallFunc_LineTrace_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class UQtnAIPerceptionComponent* CallFunc_GetQtnPerceptionComponent_ReturnValue, const struct FVector& CallFunc_GetPerceivedLocation_perceivedLocation, float CallFunc_GetPerceivedLocation_awarenessRatio, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void UpdateRandomNoiseOffset(float DeltaTime, enum class ESniperMageSeekEnum Temp_byte_Variable, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, float K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue);
	void UpdateSniperAimForHit(float& DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_VInterpTo_ReturnValue, bool CallFunc_IsImmuneToAITracking_ReturnValue);
	void UpdateSniperAimForMiss(float& DeltaSeconds, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue);
	void AcknowledgeGoodBeamPosition(struct FVector& GoodImpactPosition);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue);
	void UpdateSniperImpactPosition(float& DeltaSeconds, const struct FRotator& DesiredRotation, const struct FVector& CurrentMuzzleLocation, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_LineTrace_hits, bool CallFunc_LineTrace_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_FloatFloat_ReturnValue, class ABubbleShield_C* K2Node_DynamicCast_AsBubble_Shield, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void UpdateSnipeAimPosition(float& DeltaSeconds, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class UQtnAIPerceptionComponent* CallFunc_GetQtnPerceptionComponent_ReturnValue, const struct FVector& CallFunc_GetPerceivedLocation_perceivedLocation, float CallFunc_GetPerceivedLocation_awarenessRatio, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void DamageActors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, TArray<class AActor*>& CallFunc_GatherActorsWithinCapsule_otherActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetDamageValue_baseDamage, float CallFunc_GetDamageValue_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo);
	bool IsVerbFinished();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnAnimWindowBegin(class UQtnAnimWindow* AnimWindow, float TotalDuration, bool IsServer);
	void OnAnimWindowEnd(class UQtnAnimWindow* AnimWindow, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void ExecuteUbergraph_SniperMage_SniperVerb(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnAnimWindow* K2Node_Event_animWindow_1, float K2Node_Event_totalDuration, bool K2Node_Event_isServer_4, class UQtnAnimWindow* K2Node_Event_animWindow, bool K2Node_Event_interrupted_2, bool K2Node_Event_isServer_3, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAnimWindow_Custom1_C* K2Node_DynamicCast_AsAnim_Window_Custom_1, bool K2Node_DynamicCast_bSuccess, class UAnimWindow_Custom1_C* K2Node_DynamicCast_AsAnim_Window_Custom_1_1, bool K2Node_DynamicCast_bSuccess_1, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_2, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_1, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_5, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue, class ASniperMageWeapon_C* K2Node_DynamicCast_AsSniper_Mage_Weapon, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_GetPawnCapsuleTop_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, float CallFunc_StartVerbAction_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_6, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_4);
};

}


