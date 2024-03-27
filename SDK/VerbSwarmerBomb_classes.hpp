#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0xA29 - 0x9F0)
// BlueprintGeneratedClass VerbSwarmerBomb.VerbSwarmerBomb_C
class UVerbSwarmerBomb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                TargetActor;                                       // 0x9F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArmDistance;                                       // 0xA00(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpeedMultiplier;                                   // 0xA04(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GiveUpTime;                                        // 0xA08(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinWaitTime;                                       // 0xA0C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxWaitTime;                                       // 0xA10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaitTime;                                          // 0xA14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASwarmerBombProjectile_C*              LastSpawnedProjectile;                             // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ProjectileClass;                                   // 0xA20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerbSwarmerBombEnum              R_bombState;                                       // 0xA28(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVerbSwarmerBomb_C* GetDefaultObj();

	bool WillVerbSucceed(class UObject* PotentialTarget, bool CallFunc_WillVerbSucceed_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHealthRatio_healthRatio, bool CallFunc_Less_FloatFloat_ReturnValue);
	void SpawnBomb_ServerOnly(class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class ASwarmerBombProjectile_C* CallFunc_SpawnProjectile_ServerOnly_ReturnValue);
	float GetLocomotionRatio();
	void OnRep_r_bombState();
	void ArmBomb_ServerOnly(class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void DropTheBomb(bool IsServer, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, const struct FQtnDamageInfo& CallFunc_GetLastDamageInfo_ReturnValue, const struct FQtnDangerParameters& K2Node_MakeStruct_QtnDangerParameters, float CallFunc_VSizeSquared_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void IsLastSpawnedProjectileDone(bool* IsDone, bool CallFunc_IsValid_ReturnValue);
	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue);
	bool IsBombArmed(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void TickBombArmedServerOnly(bool CallFunc_IsValid_ReturnValue);
	void Tick_Approach_Server_Only(float ElapsedTime, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsTargetStillValid_stillValid, bool CallFunc_Greater_FloatFloat_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetFutureTargetPosition_futurePosition, bool CallFunc_IsCloseEnough_ReturnValue);
	void IsTargetStillValid(bool* StillValid, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue);
	void GetFutureTargetPosition(struct FVector* FuturePosition, const struct FVector& TargetLocation, const struct FVector& TargetVelocity, class ASwarmerBombProjectile_C* CallFunc_GetClassDefaultObject_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetFuturePosition_ReturnValue);
	bool IsVerbFinished(bool K2Node_SwitchEnum_CmpSuccess);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnProjectileSpawned(class AQtnProjectile* SpawnedProjectile, bool IsServer);
	void ExecuteUbergraph_VerbSwarmerBomb(int32 EntryPoint, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_3, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_2, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_1, class AQtnProjectile* K2Node_Event_spawnedProjectile, bool K2Node_Event_isServer, class ASwarmerBombProjectile_C* K2Node_DynamicCast_AsSwarmer_Bomb_Projectile, bool K2Node_DynamicCast_bSuccess_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1);
};

}


