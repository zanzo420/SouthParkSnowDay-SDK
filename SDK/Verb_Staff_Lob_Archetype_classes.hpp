#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8F (0xB38 - 0xAA9)
// BlueprintGeneratedClass Verb_Staff_Lob_Archetype.Verb_Staff_Lob_Archetype_C
class UVerb_Staff_Lob_Archetype_C : public UVerb_Ranged_Archetype_C
{
public:
	uint8                                        Pad_61FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AElementalistStaff_C*                  OwnerStaff;                                        // 0xAB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnProjectile*                        ProjectileInstance;                                // 0xAC0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VelocityTuning;                                    // 0xAC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Base_Damage_Radius;                                // 0xACC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Max_Damage_Radius_Multiplier;                      // 0xAD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Return_Value_Start_Position;                       // 0xAD4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Arc;                                          // 0xAE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Return_Value_Velocity;                             // 0xAE4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrade_ChaoticRebound;                            // 0xAF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Upgrade_ChaoticRebound_DamageReduction;            // 0xAF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrade_MagicPath;                                 // 0xAF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MagicPath_MaxCount;                                // 0xAFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Upgrade_MagicPath_DamageReduction;                 // 0xB00(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrade_DelayedGratification;                      // 0xB04(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Upgrade_DelayedGratification_Charged;              // 0xB05(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61FE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Upgrade_DelayedGratification_TimeMultiplier;       // 0xB08(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Upgrade_DelayedGratification_DamageIncrease;       // 0xB0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Upgrade_DelayedGratification_RadiusIncrease_;      // 0xB10(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrade_BloodOvercharge;                           // 0xB14(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Upgrade_BloodOvercharge_SelfDamage;                // 0xB18(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Upgrade_BloodOvercharge_Lifesteal;                 // 0xB1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnDangerVolume*                      DangerCapsuleForAllies_ServerOnly;                 // 0xB20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRangedFloat                       DangerCapsuleRadii;                                // 0xB28(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        DangerCapsuleLength;                               // 0xB30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Default_Damage_Radius_Multiplier;                  // 0xB34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVerb_Staff_Lob_Archetype_C* GetDefaultObj();

	void ChargingDelayedGratification();
	void DelayedGratificationSecondCharge(float CallFunc_Add_FloatFloat_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue);
	void ActivateDelayedGratificationFX();
	void Get_Projectile_Aim_MagicPath(int32 BonusProjIndex, struct FVector* Return_Value_Start_Position, struct FVector* Return_Value_Velocity, int32 LOCAL_ProjIndex, int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, int32 Temp_int_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 Temp_int_Variable_2, float K2Node_Select_Default, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Select_Default_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FQtnPawnIntentions& CallFunc_GetIntentions_ReturnValue, class USceneComponent* K2Node_Select_Default_2, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FQtnCameraVerbAim& CallFunc_GetVerbLocalProjectileAim_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue);
	void ActivateMaticPathFireBallOnStaff();
	void DeactivateMagicPathFireBallsOnStaff();
	void DeactivateFireBallChargedOnStaff();
	void ActivateFireBallChargedOnStaff(bool ActivateDelayedGratification);
	void ActivateFireBallOnStaff(float Param);
	void GetDangerCapsuleEnds_ServerOnly(struct FVector* Start, struct FVector* End, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FQtnPawnIntentions& CallFunc_GetIntentions_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void Init_UpgradesOnSpawnedProjectile(class AQtnProjectile* Spawned_Projectile, class AProjectile_FireOrbBase_C* LOCAL_SpawnedFireOrb, class AProjectile_FireOrbBase_C* K2Node_DynamicCast_AsProjectile_Fire_Orb_Base, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPerk_Deadeye_C* CallFunc_FindPerk_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetValueOfPerk_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, bool CallFunc_Was_Fully_Charged_IsFullyHeld, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	bool AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb, bool CallFunc_AllowOtherVerbToInterrupt_ReturnValue, class UDodgeVerb_C* K2Node_DynamicCast_AsDodge_Verb, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue);
	bool AllowOtherVerbToInterrupt_0(class UQtnVerb* OtherVerb, class UDodgeVerb_C* K2Node_DynamicCast_AsDodge_Verb, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue);
	void GetTotalHoldTime(float* OutHoldTimeSeconds, float CallFunc_GetTotalHoldTime_OutHoldTimeSeconds);
	float GetDamageValue(class AActor* VictimActor, float* BaseDamage, float DamageMultiplier, float TotalBaseDamage, float CallFunc_GetDamageValue_baseDamage, float CallFunc_GetDamageValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetTotalHoldTime_OutHoldTimeSeconds, int32 CallFunc_FTrunc_ReturnValue_1, float CallFunc_Get_Held_Time_on_Last_Launch_heldTime, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void Get_Projectile_Aim(struct FVector* Return_Value_Start_Position, struct FVector* Return_Value_Velocity, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class USceneComponent* CallFunc_GetMuzzleComponent_OutMuzzleComponent, const struct FQtnPawnIntentions& CallFunc_GetIntentions_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FQtnCameraVerbAim& CallFunc_GetVerbLocalProjectileAim_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GetMuzzleComponent(class USceneComponent** OutMuzzleComponent, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void MulticastLaunchProjectile();
	void Activate_Projectile_Visual();
	void Deactivate_Projectile_Visual();
	void OnMontageCompleted(class UAnimMontage* Montage, bool Interrupted);
	void Reset_Charged_Visual();
	void OnProjectileSpawned(class AQtnProjectile* SpawnedProjectile, bool IsServer);
	void ExecuteUbergraph_Verb_Staff_Lob_Archetype(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_4, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_3, class AElementalistStaff_C* K2Node_DynamicCast_AsElementalist_Staff, bool K2Node_DynamicCast_bSuccess, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_2, class UAnimNotify_FireProjectile_C* K2Node_DynamicCast_AsAnim_Notify_Fire_Projectile, bool K2Node_DynamicCast_bSuccess_1, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_2, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_1, bool CallFunc_IsLocallyControlled_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_Get_Projectile_Aim_Return_Value_Start_Position, const struct FVector& CallFunc_Get_Projectile_Aim_Return_Value_Velocity, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc_Get_Held_Time_on_Last_Launch_heldTime, float CallFunc_Get_Held_Time_on_Last_Launch_heldTime_1, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnProjectile* K2Node_Event_spawnedProjectile, bool K2Node_Event_isServer, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, const struct FVector& CallFunc_Get_Projectile_Aim_MagicPath_Return_Value_Start_Position, const struct FVector& CallFunc_Get_Projectile_Aim_MagicPath_Return_Value_Velocity, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Get_Projectile_Aim_Return_Value_Start_Position_1, const struct FVector& CallFunc_Get_Projectile_Aim_Return_Value_Velocity_1, float CallFunc_GetTotalHoldTime_OutHoldTimeSeconds, float CallFunc_GetTotalHoldTime_OutHoldTimeSeconds_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, bool CallFunc_Was_Fully_Charged_IsFullyHeld, bool CallFunc_BooleanAND_ReturnValue_1, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, const struct FQtnDangerParameters& K2Node_MakeStruct_QtnDangerParameters, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_3, const struct FVector& CallFunc_GetDangerCapsuleEnds_ServerOnly_start, const struct FVector& CallFunc_GetDangerCapsuleEnds_ServerOnly_end, class AQtnDangerVolume* CallFunc_SpawnDangerCapsule_ServerOnly_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetDangerCapsuleEnds_ServerOnly_start_1, const struct FVector& CallFunc_GetDangerCapsuleEnds_ServerOnly_end_1, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable_2, float CallFunc_GetTotalHoldTime_OutHoldTimeSeconds_2, float CallFunc_GetTotalHoldTime_OutHoldTimeSeconds_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class AProjectile_FireOrbBase_C* K2Node_DynamicCast_AsProjectile_Fire_Orb_Base, bool K2Node_DynamicCast_bSuccess_4);
};

}


