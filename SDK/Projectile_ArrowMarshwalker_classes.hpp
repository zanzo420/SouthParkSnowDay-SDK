#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4F8 - 0x4E0)
// BlueprintGeneratedClass Projectile_ArrowMarshwalker.Projectile_ArrowMarshwalker_C
class AProjectile_ArrowMarshwalker_C : public AProjectile_ArrowBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSubclassOf<class AQtnProjectile>            Secondary_Projectile_Class;                        // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class AVolume_MarshwalkerGrossOutField_C> Gross_Out_Volume_Class;                            // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_ArrowMarshwalker_C* GetDefaultObj();

	void TryToReuseSpawnedDecal(const struct FVector& Location, bool* ShouldReuse, int32 Temp_int_Array_Index_Variable, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_Array_Get_Item, float CallFunc_Square_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AVolume_MarshwalkerGrossOutField_C* K2Node_DynamicCast_AsVolume_Marshwalker_Gross_Out_Field, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsAlly_ReturnValue, float CallFunc_GetLifeSpan_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void Spawn_Secondary_Projectile(const struct FVector& Location, const struct FVector& Angle, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnProjectile* CallFunc_SpawnProjectile_ServerOnly_ReturnValue);
	void Spawn_Gross_Out_Field(const struct FVector& Location, bool CallFunc_TryToReuseSpawnedDecal_ShouldReuse, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype, bool K2Node_DynamicCast_bSuccess, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, class AVolume_MarshwalkerGrossOutField_C* CallFunc_SpawnActor_ServerOnly_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void OnFinalizeImpactEvent(const struct FHitResult& HitResult, bool IsServer);
	void ExecuteUbergraph_Projectile_ArrowMarshwalker(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_isServer, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnNavMesh_ReturnValue);
};

}


