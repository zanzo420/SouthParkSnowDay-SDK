#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0xA64 - 0x9F0)
// BlueprintGeneratedClass Assassin_JockeyVerb.Assassin_JockeyVerb_C
class UAssassin_JockeyVerb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnPawnMontage                       VerbActionIntro;                                   // 0x9F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Verb_Done;                                         // 0xA08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       Verb_Action_Minus_Jockey;                          // 0xA10(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         CanLand;                                           // 0xA20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Jockey_Active;                                     // 0xA21(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D2C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        JockeyDurationMAX;                                 // 0xA24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LongJockeyTime;                                    // 0xA28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        JockeyTimer;                                       // 0xA2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnPawnMontage                       Verb_Action_Minus_Jockey_Outro;                    // 0xA30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AQtnBodyPawn*                          R_Victim;                                          // 0xA40(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                               LocalUndieOffset;                                  // 0xA48(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNewKid_AnimBlueprintTP_C*             AnimInstance;                                      // 0xA58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         JockeyOutro;                                       // 0xA60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanDodgeOut;                                       // 0xA61(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EQtnEnumJockeyVerbState           JockeyState;                                       // 0xA62(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         R_detachRequested;                                 // 0xA63(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAssassin_JockeyVerb_C* GetDefaultObj();

	void CanVictimBeSavedByAPlayer(bool* CanBeSaved, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Should_Let_Go(bool* Yes, bool CallFunc_HasStatusEffect_ReturnValue, class UQtnFullBodyState* CallFunc_GetCurrentFullBodyState_ReturnValue, class UFullBodyHitReaction_C* K2Node_DynamicCast_AsFull_Body_Hit_Reaction, bool K2Node_DynamicCast_bSuccess, class UQtnDamageReaction* CallFunc_GetCurrentDamageReaction_ReturnValue, bool CallFunc_GetButtonMashRatio_isFull, float CallFunc_GetButtonMashRatio_ReturnValue, bool CallFunc_IsInDeepSnow_ReturnValue, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void StartJockeyOutro(class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodypawnAIAssassin_C* K2Node_DynamicCast_AsBodypawn_AIAssassin, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, float CallFunc_StartVerbAction_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void OnRep_r_Victim(bool CallFunc_IsValid_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue);
	void JockeyActive_Tick(float& DeltaSeconds, bool IsServer, bool LOCAL_IsServer, float LOCAL_oldJockeyTimer, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Should_Let_Go_yes, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, bool CallFunc_CanVictimBeSavedByAPlayer_canBeSaved, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, float CallFunc_StartVerbAction_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void JockeyOutro_WaitforLand(class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Deal_Jockey_Damage(bool CallFunc_IsServer_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_AddAttribute_self_CastInput, class UQtnAttribute* CallFunc_AddAttribute_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_HasAttribute_self_CastInput, bool CallFunc_HasAttribute_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDamageValue_baseDamage, float CallFunc_GetDamageValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo);
	void Start_Jockey_Active(class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodypawnAIAssassin_C* K2Node_DynamicCast_AsBodypawn_AIAssassin, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, float CallFunc_GetHealthRatio_healthRatio, bool CallFunc_HasUpgrade_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UNewKid_AnimBlueprintTP_C* K2Node_DynamicCast_AsNew_Kid_Anim_Blueprint_TP, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, const struct FQtnCarrySettings& K2Node_MakeStruct_QtnCarrySettings, float CallFunc_StartVerbAction_ReturnValue);
	void Start_Jockey_Attempt(bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodypawnAIAssassin_C* K2Node_DynamicCast_AsBodypawn_AIAssassin, bool K2Node_DynamicCast_bSuccess, float CallFunc_StartVerbAction_ReturnValue);
	void SetJockeyState(enum class EQtnEnumJockeyVerbState JockeyState, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleIncomingDamage(struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, struct FQtnDamageInfo* ModifiedDamageInfo, bool CallFunc_Check_for_Detatch_Detatch);
	void Check_for_Detatch(struct FQtnDamageInfo& QtnDamageInfo, struct FQtnHitReactionInfo& QtnHitReactionInfo, bool* Detatch, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UAssassinDodgeVerb_C* CallFunc_GetExistingVerb_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetLeapImpulse(const struct FVector& Impulse_To_Set, float Distance_To_Target, const struct FVector& Modified_Tracking, float Tracking_Fraction, const struct FVector& Projected_Tracking, float Time_In_Air, float Z_Impulse_This_Time, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Divide_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetWorldGravity_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UObject* CallFunc_GetIntendedTarget_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
	float GetDamageValue(class AActor* VictimActor, float* BaseDamage, float DamageMultiplier, float CallFunc_GetDamageValue_baseDamage, float CallFunc_GetDamageValue_ReturnValue);
	void Detatch_from_Jockey(bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_IsBodyIdle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3);
	void Check_Attempt(bool CallFunc_Not_PreBool_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool IsVerbFinished();
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void ApplyMeleeDamage(class AActor* MeleeVictim, const struct FQtnDamageInfo& DamageInfo);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void UpdateUndieBone();
	void Reset_Jockey_Hit();
	void DoJockeyDetach();
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void ServerRequestDetach();
	void ExecuteUbergraph_Assassin_JockeyVerb(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_5, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_4, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class UAnimNotify_Custom2_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_2, bool K2Node_DynamicCast_bSuccess_1, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasDamageImmunity_permanentlyImmune, bool CallFunc_HasDamageImmunity_ReturnValue, class AActor* K2Node_Event_meleeVictim, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue_1, bool CallFunc_IsEnemy_ReturnValue, bool CallFunc_HasDamageImmunity_permanentlyImmune_1, bool CallFunc_HasDamageImmunity_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_3, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_2, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_4, class ABodypawnAIAssassin_C* K2Node_DynamicCast_AsBodypawn_AIAssassin, bool K2Node_DynamicCast_bSuccess_4, bool K2Node_SwitchEnum_CmpSuccess, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsServer_ReturnValue_1);
};

}


