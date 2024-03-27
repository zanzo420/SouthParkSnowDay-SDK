#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xAE0 - 0xA40)
// BlueprintGeneratedClass HarpoonVerb.HarpoonVerb_C
class UHarpoonVerb_C : public UEnemyRanged_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnPawnMontage                       ShootAction;                                       // 0xA48(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Verb_Done;                                         // 0xA58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AHarpoonWeapon_C*                      HarpoonWeapon;                                     // 0xA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProjectile_Harpoon_C*                 LastSpawnedHarpoonProjectile;                      // 0xA68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnPawnMontage                       KickAction;                                        // 0xA70(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AQtnBodyPawn*                          HarpoonVictim;                                     // 0xA80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KickRange;                                         // 0xA88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShootDuration;                                     // 0xA8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PullPatience;                                      // 0xA90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VictimPatience;                                    // 0xA94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasHarpoonLanded;                                  // 0xA98(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ElapsedTimeToHarpoonLanding;                       // 0xA9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnPawnMontage                       PullAction;                                        // 0xAA0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class EQtnEnumHarpoonVerbState          HarpoonVerbState;                                  // 0xAB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       VictimEscapeAction;                                // 0xAB8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        LastHorizontalDistFromVictimSq;                    // 0xAC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnPawnMontage>               ShootActions;                                      // 0xAD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UHarpoonVerb_C* GetDefaultObj();

	void EnsureHarpoonVerbState_ServerOnly(enum class EQtnEnumHarpoonVerbState DesiredState, bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	float GetLocoTurnSpeed(bool K2Node_SwitchEnum_CmpSuccess);
	void Tick_Pulling_Victim(float& ElapsedTime, float CurrentHorizontalDistToVictimSq, float ElapsedPullTime, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, float CallFunc_GetSquaredHorizontalDistanceTo_ReturnValue, class UQtnFullBodyState* CallFunc_GetCurrentFullBodyState_ReturnValue, class UQtnFullBodyStateHitReaction* K2Node_DynamicCast_AsQtn_Full_Body_State_Hit_Reaction, bool K2Node_DynamicCast_bSuccess, class UQtnDamageReaction* CallFunc_GetCurrentDamageReaction_ReturnValue, class UBodyDamageReactionHarpooned_C* K2Node_DynamicCast_AsBody_Damage_Reaction_Harpooned, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetButtonMashRatio_isFull, float CallFunc_GetButtonMashRatio_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsHitReacting_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsCloseEnough_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_IsValid_ReturnValue);
	void Tick_Waiting_for_Shot_to_Land(float& ElapsedTime, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1);
	void SetHarpoonVerbState(enum class EQtnEnumHarpoonVerbState NewState, bool AlreadyInState, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, float CallFunc_StartVerbAction_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_StartVerbAction_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_StartVerbAction_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Register_Harpoon_Victim(class AQtnBodyPawn* Victim, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, float CallFunc_GetSquaredHorizontalDistanceTo_ReturnValue, float CallFunc_StartVerbAction_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	TSubclassOf<class UQtnDamageType> GetDamageType(TSubclassOf<class UQtnDamageType> CallFunc_GetDamageType_ReturnValue);
	bool IsVerbFinished();
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnProjectileSpawned(class AQtnProjectile* SpawnedProjectile, bool IsServer);
	void OnVerbInit(bool IsServer);
	void MulticastSetHarpoonVerbState(enum class EQtnEnumHarpoonVerbState DesiredVerbState);
	void ExecuteUbergraph_HarpoonVerb(int32 EntryPoint, const struct FQtnPawnMontage& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_7, class UAnimNotify_FireProjectile_C* K2Node_DynamicCast_AsAnim_Notify_Fire_Projectile, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FVector& CallFunc_Get_Projectile_Velocity_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_AdjustMuzzlePositionForWalls_wallDetected, const struct FVector& CallFunc_AdjustMuzzlePositionForWalls_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_6, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_5, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_4, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_3, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_2, class AQtnProjectile* K2Node_Event_spawnedProjectile, bool K2Node_Event_isServer_1, bool K2Node_Event_isServer, class AProjectile_Harpoon_C* K2Node_DynamicCast_AsProjectile_Harpoon, bool K2Node_DynamicCast_bSuccess_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class AHarpoonWeapon_C* K2Node_DynamicCast_AsHarpoon_Weapon, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnEnumHarpoonVerbState K2Node_CustomEvent_desiredVerbState, bool CallFunc_IsVerbActive_ReturnValue);
};

}


