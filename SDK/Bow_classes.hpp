#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8F (0x968 - 0x8D9)
// BlueprintGeneratedClass Bow.Bow_C
class ABow_C : public ABaseWeapon_C
{
public:
	uint8                                        Pad_39DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     ElvenEyesHint;                                     // 0x8E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProceduralMeshComponent*              AimArcProc;                                        // 0x8E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                      AimSpline;                                         // 0x8F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Arrow;                                             // 0x8F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                QuiverMesh;                                        // 0x900(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       BowTip;                                            // 0x908(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        ArrowType;                                         // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        ArrowList;                                         // 0x918(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USkeletalMeshComponent*                Quiver;                                            // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       Verts;                                             // 0x930(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                Tris;                                              // 0x940(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector2D>                     UVs;                                               // 0x950(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Aim_Width;                                         // 0x960(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Threshold_Index;                                   // 0x964(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABow_C* GetDefaultObj();

	void CreateAimStrip(float Distance, const struct FLinearColor& ColorElven, const struct FLinearColor& ColorBase, const TArray<struct FLinearColor>& VertColor, int32 Max_Count, TArray<struct FVector2D>& Temp_struct_Variable, TArray<struct FVector2D>& Temp_struct_Variable_1, TArray<struct FVector2D>& Temp_struct_Variable_2, TArray<struct FVector>& Temp_struct_Variable_3, TArray<struct FProcMeshTangent>& Temp_struct_Variable_4);
	void ShowAimArc(bool WantVisibleAim, struct FVector& MuzzlePosition, struct FVector& ShootVelocity, const struct FVector& Gravity, float ThresholdDistance, bool CallFunc_Not_PreBool_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, TArray<struct FVector>& CallFunc_GetAimingArc_OutputVectors, int32 CallFunc_GetAimingArc_thresholdIndex, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetWeaponVisibilityWhileEquipped(bool WantVisible, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleUnequip_Derived(class AQtnBodyPawn* bodyPawn);
	void HandleEquip_Derived(class AQtnBodyPawn* bodyPawn, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void GenerateWeaponForIcon(class USceneComponent* BaseForWeapon, const struct FQtnItemData& ItemData, struct FBoxSphereBounds* Bounds, class AActor* CallFunc_GetOwner_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, bool CallFunc_SetStaticMesh_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FBoxSphereBounds& K2Node_MakeStruct_BoxSphereBounds, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_1);
};

}


