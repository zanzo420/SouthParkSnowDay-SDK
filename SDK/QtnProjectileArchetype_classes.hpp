#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x468 - 0x450)
// BlueprintGeneratedClass QtnProjectileArchetype.QtnProjectileArchetype_C
class AQtnProjectileArchetype_C : public AQtnProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        ReflectedDamageBonusPercent;                       // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UpgradeShieldRedirection_ServerOnly;               // 0x45C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShieldRedirectionAoEDamage_ServerOnly;             // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShieldRedirectionAoERadius_ServerOnly;             // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AQtnProjectileArchetype_C* GetDefaultObj();

	void SetProjectileSweepChannel(class UClass* CallFunc_GetProjectileDamageType_DamageType, class UClass* K2Node_ClassDynamicCast_AsFire_Impact_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess);
	void HandleCutscene(bool CutsceneActive, bool WorldCleanup, const TArray<class AActor*>& AttachedActors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EQtnActorPoolingState CallFunc_GetPoolingState_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsPoolingEnabled_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	struct FQtnDamageInfo ConstructDamageInfo(class AActor* TargetActor, class UClass* CallFunc_GetProjectileDamageType_DamageType, const struct FQtnDamageInfo& CallFunc_ConstructDamageInfo_ReturnValue, const struct FQtnDamageInfo& K2Node_SetFieldsInStruct_StructOut);
	void GetProjectileDamageType(class UClass** DamageType, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class UQtnDamageType> CallFunc_GetDamageType_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void Ricochet_MULTI(const struct FRotator& Rot, const struct FVector& Pos);
	void ApplyProjectileDamage(class AActor* ProjectileVictim, struct FQtnDamageInfo& DamageInfo);
	void DamageTypeFx();
	void OnInitProjectile(class AActor* SourceOwner, class UQtnVerb* InSourceVerb, const struct FVector& InitialVelocity, bool IsServer);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void LocalCutsceneEvent_Event_0(bool IsCutsceneActive, bool DoWorldCleanup);
	void OnFinalizeImpactEvent(const struct FHitResult& HitResult, bool IsServer);
	void OnReflection_ServerOnly(class UQtnVerb* ReflectingVerb, class AActor* ReflectingActor, class AQtnPawn* NewCulprit, struct FVector& NewVelocity);
	void ReceiveBeginPlay();
	void MULTI_ShieldRedirection_AoE_FX(const struct FVector& Location, float Radius);
	void OnReclaimToPool();
	void OnReusedFromPool();
	void ExecuteUbergraph_QtnProjectileArchetype(int32 EntryPoint, class UClass* CallFunc_GetProjectileDamageType_DamageType, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class AActor* K2Node_Event_SourceOwner, class UQtnVerb* K2Node_Event_InSourceVerb, const struct FVector& K2Node_Event_InitialVelocity, bool K2Node_Event_isServer_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool K2Node_CustomEvent_isCutsceneActive, bool K2Node_CustomEvent_doWorldCleanup, bool CallFunc_IsLocalCutsceneActive_doWorldCleanup, bool CallFunc_IsLocalCutsceneActive_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_isServer, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, class UQtnVerb* K2Node_Event_reflectingVerb, class AActor* K2Node_Event_reflectingActor, class AQtnPawn* K2Node_Event_newCulprit, const struct FVector& K2Node_Event_newVelocity, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, class UMeleeVerbSwordShieldCombo3_C* K2Node_DynamicCast_AsMelee_Verb_Sword_Shield_Combo_3, bool K2Node_DynamicCast_bSuccess, const struct FRotator& K2Node_CustomEvent_Rot, const struct FVector& K2Node_CustomEvent_Pos, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue_1, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, const struct FVector& K2Node_CustomEvent_location, float K2Node_CustomEvent_radius, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_2, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, class AActor* K2Node_Event_projectileVictim, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, TArray<class AActor*>& CallFunc_QtnDoRadialDamage_ReturnValue);
};

}


