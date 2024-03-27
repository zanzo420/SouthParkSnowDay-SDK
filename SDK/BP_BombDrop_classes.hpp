#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x348 - 0x2F8)
// BlueprintGeneratedClass BP_BombDrop.BP_BombDrop_C
class ABP_BombDrop_C : public ALoot_Container_Parent_Smash_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Flames;                                            // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     FuelDumpSpawn_FX;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*          ProjectileMovement;                                // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Swell_NewTrack_0_5AD8BF3C4CEBBB2B70D26084EFDAA3C7; // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Swell__Direction_5AD8BF3C4CEBBB2B70D26084EFDAA3C7; // 0x31C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_455A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Swell;                                             // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyPawn*                          Culprit;                                           // 0x328(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UQtnVerb*                              SourceVerb;                                        // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        DamageToDeal;                                      // 0x338(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Radius;                                            // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Mat;                                               // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BombDrop_C* GetDefaultObj();

	void EnsureMat(class UMaterialInstanceDynamic** Output_Get, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void HandleProjectileStop(const struct FVector& LOCAL_groundPosition, enum class EPhysicalSurface LOCAL_physicalSurface, const struct FVector& LOCAL_hitNormal, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_SnapToGround_foundGround, const struct FVector& CallFunc_SnapToGround_hitNormal, enum class EPhysicalSurface CallFunc_SnapToGround_physicalSurface, const struct FVector& CallFunc_SnapToGround_ReturnValue);
	void SetOntoGround(const struct FVector& GroundNormal, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorWorldRotation_SweepHitResult);
	void SetIntoSnow(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue);
	void SetDamageToDeal(float NewDamageToDeal);
	void SetCulprit(class AQtnBodyPawn* NewCulprit);
	void HandleDeath(const TArray<class AActor*>& LOCAL_ActorsInRadius, const TArray<class AQtnPawn*>& LOCAL_EnemiesInRadius, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsAlly_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, float CallFunc_SpawnLoot_ServerOnly_secondsToFinishSpawning, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AQtnPawn* K2Node_Select_Default, const struct FVector& CallFunc_Vector_Up_ReturnValue, TArray<class AActor*>& CallFunc_GatherActorsWithinRadius_otherActors, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo);
	void HandleDamage(const struct FQtnDamageInfo& DamageInfo, bool Server, bool CallFunc_IsEnemy_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo);
	void UserConstructionScript();
	void Swell__FinishedFunc();
	void Swell__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__BP_BombDrop_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult);
	void ExecuteUbergraph_BP_BombDrop(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
};

}


