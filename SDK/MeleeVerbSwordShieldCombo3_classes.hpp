#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0xB00 - 0x9F0)
// BlueprintGeneratedClass MeleeVerbSwordShieldCombo3.MeleeVerbSwordShieldCombo3_C
class UMeleeVerbSwordShieldCombo3_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Verb_Done;                                         // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Can_Transition;                                    // 0x9F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Input_Open;                                        // 0x9FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Allow_Next_Attack;                                 // 0x9FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D62[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       VerbActionBlock;                                   // 0xA00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       VerbActionShieldBash;                              // 0xA10(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Input_Detected;                                    // 0xA20(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ComboSequence;                                     // 0xA24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnPawnMontage>               Verb_Actions;                                      // 0xA28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FQtnPawnMontage                       Current_Verb_Action;                               // 0xA38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Block_Started;                                     // 0xA48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D64[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerHUD_C*                          As_Player_HUD;                                     // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Upgrade_ShieldRedirection;                         // 0xA58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CurrentDamageType;                                 // 0xA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        VerbDamageTypes;                                   // 0xA68(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Upgrade_OmnidirectionalBlock;                      // 0xA78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         BlockActive;                                       // 0xA79(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D66[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnFXActor*                           OmniShields;                                       // 0xA80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OmniShieldFade;                                    // 0xA88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMeleeVerbSwordShieldCombo3Enum   blockState;                                        // 0xA8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D67[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShieldBashChargeDuration;                          // 0xA90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Perk_MartialExpertise_Level;                       // 0xA94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShieldBashWaitCountdown;                           // 0xA98(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Upgrade_ShieldRedirection_AoE_Damage;              // 0xA9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnPawnMontage                       SwordShieldCombo_1a;                               // 0xAA0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       SwordShieldCombo_2a;                               // 0xAB0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       SwordShieldCombo_5a;                               // 0xAC0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Allow_Cancel;                                      // 0xAD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TransitionActive;                                  // 0xAD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D68[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TransitionActiveTime;                              // 0xAD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Upgrade_ShieldRedirection_AoE_Radius;              // 0xAD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Upgrade_OmnidirectionalBlock_HealingonBlock;       // 0xADC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrade_EmpoweringBlocks;                          // 0xAE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D69[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Upgrade_EmpoweringBlocks_DamageIncrease;           // 0xAE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Upgrade_EmpoweringBlocks_Duration;                 // 0xAE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChargeAttackTickTime;                              // 0xAEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChargeAttackMaxTime;                               // 0xAF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChargeAttackActiveOnRelease;                       // 0xAF4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D6A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnFXActor*                           ShieldFX;                                          // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMeleeVerbSwordShieldCombo3_C* GetDefaultObj();

	float GetDamageValue(class AActor* VictimActor, float* BaseDamage, float DamageMultiplier, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, float CallFunc_GetDamageValue_baseDamage, float CallFunc_GetDamageValue_ReturnValue, class UPerk_MartialExpertise_C* CallFunc_FindPerk_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetReplicatedActiveInstances_ReturnValue, float CallFunc_GetPerkValueAtInstanceCount_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetDamageValue_baseDamage_1, float CallFunc_GetDamageValue_ReturnValue_1);
	bool AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb, class UDodgeVerb_C* K2Node_DynamicCast_AsDodge_Verb, bool K2Node_DynamicCast_bSuccess, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_HasDodgeBeenReleased_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue);
	bool IsTryingToCancel(bool AllowDodgeToCancel, const struct FQtnPawnIntentions& L_intentions, bool CallFunc_IsBodyActionPressed_ReturnValue, bool CallFunc_IsBodyActionPressed_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FQtnPawnIntentions& CallFunc_GetIntentions_ReturnValue);
	void TurnTowardsTarget(class AActor* Target, class AQtnBodyPawn* L_owningBody, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw);
	void OmniDirectional_Block_HealOnBlock(class UQtnVerb* Source_Verb, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess);
	void Block_FX(class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Shield_Update(float InputPin, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, float CallFunc_GetAttributeValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, float CallFunc_GetAttributeValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	bool CanMantle();
	void UpdateBlockRotationAndFX(struct FQtnPawnIntentions& QtnPawnIntentions, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue);
	void TickShieldBashCharged(struct FQtnPawnIntentions& PawnIntentions, float& DeltaSeconds, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsAssociatedInputActionPressed_ReturnValue);
	void TickWaitingForBlock(bool CallFunc_IsAssociatedInputActionPressed_ReturnValue);
	void TickBlocking(struct FQtnPawnIntentions& PawnIntentions, float Delta_Seconds, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_HasDodgeBeenReleased_ReturnValue, bool CallFunc_IsTryingToCancel_ReturnValue, bool CallFunc_IsAssociatedInputActionPressed_ReturnValue);
	void TickShieldBash(bool CallFunc_IsAssociatedInputActionPressed_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetBlockState(enum class EMeleeVerbSwordShieldCombo3Enum DesiredBlockState, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_StartVerbAction_ReturnValue, float CallFunc_StartVerbAction_ReturnValue_1, float CallFunc_StartVerbAction_ReturnValue_2);
	void ModifyAnimWindowBlockParryValues(struct FQtnRangedFloat& OriginalDegrees, float OriginalCm, struct FQtnRangedFloat* ModifiedDegrees, float* ModifiedCm, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4);
	void WantsCombo(bool* WantsCombo, class AActor* TargetActor, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_AreVerbConditionsSatisfied_ReturnValue, class UObject* CallFunc_GetIntendedTarget_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_IsAssociatedInputActionPressed_ReturnValue);
	void MeleeTranslation(class UObject* CallFunc_GetIntendedTarget_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void BlockImpact(class UObject* Damage_Source, struct FVector& Knockback, bool IsMelee, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void OnProjectilePreHit_ServerOnly(class AQtnProjectile* Projectile, bool* IgnoreCollision, class AQtnPawn* LOCAL_Culprit, class AQtnProjectile* LOCAL_Projectile, class AQtnProjectileArchetype_C* K2Node_DynamicCast_AsQtn_Projectile_Archetype, bool K2Node_DynamicCast_bSuccess, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, bool CallFunc_OnProjectilePreHit_ServerOnly_ignoreCollision, class AQtnPawn* CallFunc_GetCulprit_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, float CallFunc_GetAttributeValue_ReturnValue, bool CallFunc_IsAlly_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UQtnVerb* CallFunc_GetBlockInfo_blockingVerb, bool CallFunc_GetBlockInfo_wouldBlockSucceed);
	bool HandleIncomingParry(struct FQtnDamageInfo& DamageInfo, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsAlly_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool HandleIncomingBlock(struct FQtnDamageInfo& DamageInfo, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, float CallFunc_GetAttributeValue_ReturnValue, bool CallFunc_IsAlly_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Rotate_To_Movement(const struct FVector& L_worldMovementIntention, bool Temp_bool_Variable, class UObject* CallFunc_GetIntendedTarget_ReturnValue, class UObject* CallFunc_GetIntendedTarget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FQtnPawnIntentions& CallFunc_GetIntentions_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& K2Node_Select_Default, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, TArray<class AQtnPawn*>& CallFunc_GatherEnemiesWithinRadius_enemyPawns, class AQtnPawn* CallFunc_GetBestPawnWithinViewCone_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	float GetLocomotionRatio(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Select_Default);
	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_IsTryingToCancel_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool IsVerbFinished();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnAnimWindowBegin(class UQtnAnimWindow* AnimWindow, float TotalDuration, bool IsServer);
	void OnAnimWindowEnd(class UQtnAnimWindow* AnimWindow, bool Interrupted, bool IsServer);
	void Reset_Verb();
	void Reset_Attack();
	void UpdateBlockUI(bool Actively_Blocking);
	void PresentCooldownWhileDormant();
	void AddUIToHud();
	void ApplyMeleeDamage(class AActor* MeleeVictim, const struct FQtnDamageInfo& DamageInfo);
	void MulticastOnBlocked();
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void RemoveUIFromHUD();
	void ExecuteUbergraph_MeleeVerbSwordShieldCombo3(int32 EntryPoint, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_6, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_5, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_2, bool K2Node_Event_isServer_4, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_3, class UQtnAnimWindow* K2Node_Event_animWindow_1, float K2Node_Event_totalDuration, bool K2Node_Event_isServer_2, class UQtnAnimWindow* K2Node_Event_animWindow, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_1, class UQtnAnimWindowAllowCancel* K2Node_DynamicCast_AsQtn_Anim_Window_Allow_Cancel, bool K2Node_DynamicCast_bSuccess, class UQtnAnimWindowBlock* K2Node_DynamicCast_AsQtn_Anim_Window_Block, bool K2Node_DynamicCast_bSuccess_1, class UQtnAnimWindowInput* K2Node_DynamicCast_AsQtn_Anim_Window_Input, bool K2Node_DynamicCast_bSuccess_2, class UQtnAnimWindowTransition* K2Node_DynamicCast_AsQtn_Anim_Window_Transition, bool K2Node_DynamicCast_bSuccess_3, class UAnimWindow_Custom1_C* K2Node_DynamicCast_AsAnim_Window_Custom_1, bool K2Node_DynamicCast_bSuccess_4, class UQtnAnimWindowAllowCancel* K2Node_DynamicCast_AsQtn_Anim_Window_Allow_Cancel_1, bool K2Node_DynamicCast_bSuccess_5, class UQtnAnimWindowBlock* K2Node_DynamicCast_AsQtn_Anim_Window_Block_1, bool K2Node_DynamicCast_bSuccess_6, class UQtnAnimWindowInput* K2Node_DynamicCast_AsQtn_Anim_Window_Input_1, bool K2Node_DynamicCast_bSuccess_7, class UQtnAnimWindowTransition* K2Node_DynamicCast_AsQtn_Anim_Window_Transition_1, bool K2Node_DynamicCast_bSuccess_8, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetAttributeValue_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess_9, float CallFunc_GetAttributeValue_ReturnValue_1, bool K2Node_CustomEvent_Actively_Blocking, bool CallFunc_IsValid_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsVerbActive_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_WantsCombo_wantsCombo, class AActor* K2Node_Event_meleeVictim, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, const struct FQtnDamageInfo& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_BooleanAND_ReturnValue_3, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, const struct FVector& CallFunc_GetBodyIntentionLocalMovement_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_HasDodgeBeenReleased_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, bool CallFunc_IsTryingToCancel_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_3, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_5, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_4, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_5, class UClass* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_6, class UClass* CallFunc_Array_Get_Item_1);
};

}


