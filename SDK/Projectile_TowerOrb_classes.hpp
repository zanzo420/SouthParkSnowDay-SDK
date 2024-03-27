#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9C (0x504 - 0x468)
// BlueprintGeneratedClass Projectile_TowerOrb.Projectile_TowerOrb_C
class AProjectile_TowerOrb_C : public AQtnProjectileArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio;                                             // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_RotateProjectile_522A7E9D43C057E44F96D5A328F768FD; // 0x478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_522A7E9D43C057E44F96D5A328F768FD; // 0x47C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4831[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnFXActor*                           TrailFX;                                           // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, class FName>             DamageTypeToContactFX;                             // 0x490(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Upgrade_YellowSnowballSplatRadius;                 // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrade_YellowSnowballsActive;                     // 0x4E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4832[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Upgrade_YellowSnowballSplatDuration;               // 0x4E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrade_ConcussiveBlastActive;                     // 0x4EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4833[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Upgrade_ConcussiveBlastRange;                      // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Upgrade_ConcussiveBlastCount;                      // 0x4F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RandomRotations;                                   // 0x4F8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_TowerOrb_C* GetDefaultObj();

	void TryToReuseSpawnedDecal(const struct FVector& Location, bool* ShouldReuse, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_MakeLiteralString_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_Array_Get_Item, float CallFunc_Square_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AVolume_MarshwalkerGrossOutField_C* K2Node_DynamicCast_AsVolume_Marshwalker_Gross_Out_Field, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetLifeSpan_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	class FName GetContactFXKey(class UClass* CallFunc_GetProjectileDamageType_DamageType, class FName CallFunc_GetContactFXKey_ReturnValue, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void GetProjectileDamageType(class UClass** DamageType, class UClass* CallFunc_GetProjectileDamageType_DamageType);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnInitProjectile(class AActor* SourceOwner, class UQtnVerb* InSourceVerb, const struct FVector& InitialVelocity, bool IsServer);
	void OnReusedFromPool();
	void OnFinalizeImpactEvent(const struct FHitResult& HitResult, bool IsServer);
	void SetUpVisuals();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnReclaimToPool();
	void ExecuteUbergraph_Projectile_TowerOrb(int32 EntryPoint, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue_1, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, TSubclassOf<class AQtnFXActor> Temp_class_Variable, class AActor* K2Node_Event_SourceOwner, class UQtnVerb* K2Node_Event_InSourceVerb, const struct FVector& K2Node_Event_InitialVelocity, bool K2Node_Event_isServer_1, class ARangedTower_C* K2Node_DynamicCast_AsRanged_Tower, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, TSubclassOf<class AQtnFXActor> Temp_class_Variable_1, TSubclassOf<class AQtnFXActor> Temp_class_Variable_2, bool Temp_bool_Variable_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_isServer, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AProjectile_TowerOrb_Secondary_C* CallFunc_SpawnProjectile_ServerOnly_ReturnValue, class AVolume_YellowSnowballGrossOutField_C* CallFunc_SpawnActor_ServerOnly_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_TryToReuseSpawnedDecal_ShouldReuse, bool CallFunc_IsOnNavMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, TSubclassOf<class AQtnFXActor> K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, TSubclassOf<class AQtnFXActor> K2Node_Select_Default_1, bool CallFunc_K2_SetActorRotation_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_2, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


