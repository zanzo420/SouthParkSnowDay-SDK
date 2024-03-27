#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0xAA9 - 0x9F0)
// BlueprintGeneratedClass Verb_Ranged_Archetype.Verb_Ranged_Archetype_C
class UVerb_Ranged_Archetype_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       MuzzleComponent;                                   // 0x9F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeldTime;                                          // 0xA00(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRangedVerbDone;                                  // 0xA04(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BBF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ProjectileClass;                                   // 0xA08(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShootReady;                                      // 0xA10(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanFire;                                           // 0xA11(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BC0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               MuzzlePositionOnShoot;                             // 0xA14(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VelocityOnShoot;                                   // 0xA20(0xC)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxHoldTime;                                       // 0xA2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinSpeed;                                          // 0xA30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxSpeed;                                          // 0xA34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpeedModifier;                                     // 0xA38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Range;                                             // 0xA3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GravityModifier;                                   // 0xA40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimAssistRadius;                                   // 0xA44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ShakeOnFire;                                       // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERangedSpread                     SpreadType;                                        // 0xA50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpreadingAngle;                                    // 0xA54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnPawnMontage                       ShootActionMontage;                                // 0xA58(0x10)(Edit, BlueprintVisible, NoDestructor)
	float                                        ShotCooldown;                                      // 0xA68(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Charging_Shot;                                     // 0xA6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BC2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        R_HoldTimeOnLaunch;                                // 0xA70(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AdditionalProjectiles;                             // 0xA74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoldTimeModifier;                                  // 0xA78(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BC3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LastHitActor;                                      // 0xA80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasReachedFullCharge;                              // 0xA88(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UForceFeedbackEffect*                  ForceFeedbackOnFire;                               // 0xA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxShotCooldown;                                   // 0xA98(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BC5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                AdditionalProjectileClass;                         // 0xAA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasReachedFireProjectileNotify;                    // 0xAA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UVerb_Ranged_Archetype_C* GetDefaultObj();

	float GetLocalCurrentSpeed(float CallFunc_GetSpeeds_MinimumSpeed, float CallFunc_GetSpeeds_MaximumSpeed, float CallFunc_GetTotalHoldTime_OutHoldTimeSeconds, float CallFunc_MapRangeClamped_ReturnValue);
	void GetLocalAimingParameters(float Speed, struct FTwoVectors* PositionVelocity, const struct FQtnCameraVerbAim& CallFunc_GetVerbLocalProjectileAim_ReturnValue, const struct FTwoVectors& K2Node_MakeStruct_TwoVectors);
	void IsPlayingMontage(struct FQtnPawnMontage& MontageToCheck, bool* Yes, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	bool AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb, bool CallFunc_AllowOtherVerbToInterrupt_ReturnValue, class UDodgeVerb_C* K2Node_DynamicCast_AsDodge_Verb, bool K2Node_DynamicCast_bSuccess);
	void HandleFullChargeReached(class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue);
	void Was_Fully_Charged(bool* IsFullyHeld, float CallFunc_GetTotalHoldTime_OutHoldTimeSeconds, float CallFunc_Get_Held_Time_on_Last_Launch_heldTime, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void AdvanceHeldTime(float DeltaSeconds, float CallFunc_GetTotalHoldTime_OutHoldTimeSeconds, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void ResetHeldTime();
	void Spawn_Projectile_at_Location_to_Target(const struct FVector& Location, class AActor* TargetActor, float OffsetFromLocation, class UClass* ProjectileClass, const struct FVector& CallFunc_MakeVector_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetSpeeds_MinimumSpeed, float CallFunc_GetSpeeds_MaximumSpeed, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetPredictiveAimVelocityForPawnTarget_projectileVelocity, bool CallFunc_GetPredictiveAimVelocityForPawnTarget_ReturnValue, class AQtnProjectile* CallFunc_SpawnProjectile_ServerOnly_ReturnValue);
	void GetSpeeds(float* MinimumSpeed, float* MaximumSpeed, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
	void GetTotalHoldTime(float* OutHoldTimeSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue);
	bool ShouldUseHeadAim();
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, class UQtnDebugWrapper* LocalDebugWrapper, float CallFunc_GetTotalHoldTime_OutHoldTimeSeconds, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, float CallFunc_GetLocalCurrentSpeed_ReturnValue, const struct FQtnCameraVerbAim& CallFunc_GetVerbLocalProjectileAim_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void Get_Held_Time_on_Last_Launch(float* HeldTime);
	void IsRangedHeld(const struct FQtnPawnIntentions& Intentions, bool* IsRangedHeld, enum class EQtnUIBodyActionEnum Temp_byte_Variable, bool CallFunc_Array_Contains_ReturnValue);
	void IsModalHeld(const struct FQtnPawnIntentions& Intentions, bool* IsModalHeld, enum class EQtnUIBodyActionEnum Temp_byte_Variable, bool CallFunc_Array_Contains_ReturnValue);
	bool IsVerbFinished();
	void Spawn_Projectile_from_Local(const struct FTwoVectors& PosAndVelocity, const struct FRotator& LOCAL_Multishot_Rotator, int32 LOCAL_ProjectileIndex, float LOCAL_projectileSpeed, int32 LOCAL_TargetEnemyIndex, const TArray<class AActor*>& LOCAL_NearbyEnemyTargets, const struct FVector& LOCAL_NewDirection, const TArray<struct FVector>& LOCAL_ProjectileDirections, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, const struct FTwoVectors& CallFunc_GetLocalAimingParameters_PositionVelocity, bool CallFunc_Vector_IsNearlyZero_ReturnValue, float CallFunc_GetLocalCurrentSpeed_ReturnValue, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_AdjustMuzzlePositionForWalls_wallDetected, const struct FVector& CallFunc_AdjustMuzzlePositionForWalls_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UObject* CallFunc_GetIntendedTarget_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, float Temp_float_Variable_5, const struct FVector& CallFunc_GetWorldGravity_ReturnValue, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_GetPredictiveAimVelocity_projectileVelocity, bool CallFunc_GetPredictiveAimVelocity_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* K2Node_Select_Default, const struct FVector& CallFunc_GetWorldGravity_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_RandomInteger_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetPredictiveAimVelocity_projectileVelocity_1, bool CallFunc_GetPredictiveAimVelocity_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GatherEnemiesWithinViewCone_enemyPawns, bool CallFunc_Vector_IsNearlyZero_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, float K2Node_Select_Default_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
	void GetMuzzleComponent(class USceneComponent** OutMuzzleComponent, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageCompleted(class UAnimMontage* Montage, bool Interrupted);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnVerbInit(bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void StartChargedShoot();
	void ResetChargedShoot();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void Modal_Charge_Release_To_Fire(const struct FQtnPawnIntentions& Pawn_Intentions, float Delta_Seconds);
	void ServerSetHoldTimeOnLaunch(float Value);
	void OnProjectileSpawned(class AQtnProjectile* SpawnedProjectile, bool IsServer);
	void OnVerbProjectileHitTarget(class AActor* Target);
	void OnFollowUpAttack(class AActor* Target);
	void ExecuteUbergraph_Verb_Ranged_Archetype(int32 EntryPoint, bool K2Node_Event_isServer_3, class USceneComponent* CallFunc_GetMuzzleComponent_OutMuzzleComponent, bool K2Node_SwitchEnum_CmpSuccess, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_2, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsModalHeld_IsModalHeld, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_1, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_4, class UAnimNotify_Custom2_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_2, bool K2Node_DynamicCast_bSuccess, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_1, class UAnimNotify_FireProjectile_C* K2Node_DynamicCast_AsAnim_Notify_Fire_Projectile, bool K2Node_DynamicCast_bSuccess_2, const struct FQtnPawnIntentions& K2Node_CustomEvent_Pawn_Intentions, float K2Node_CustomEvent_Delta_Seconds, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsModalHeld_IsModalHeld_1, float K2Node_CustomEvent_Value, class AQtnProjectile* K2Node_Event_spawnedProjectile, bool K2Node_Event_isServer, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue_2, float CallFunc_VSize_ReturnValue, class AActor* K2Node_Event_Target, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable, class UAnimMontage* K2Node_CustomEvent_montage, bool K2Node_CustomEvent_Interrupted, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_5, class AActor* K2Node_CustomEvent_Target, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_6, float CallFunc_StartVerbAction_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}


