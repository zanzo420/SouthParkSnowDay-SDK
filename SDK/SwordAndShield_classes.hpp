#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x8F0 - 0x8D9)
// BlueprintGeneratedClass SwordAndShield.SwordAndShield_C
class ASwordAndShield_C : public ABaseWeapon_C
{
public:
	uint8                                        Pad_5E68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Shield;                                            // 0x8E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASwordAndShield_C* GetDefaultObj();

	void GenerateWeaponForIcon(class USceneComponent* BaseForWeapon, const struct FQtnItemData& ItemData, struct FBoxSphereBounds* Bounds, class UStaticMesh* ShieldM_Local, class UStaticMesh* BladeM_Local, const struct FQtnModularWeaponAttachment& ModSecondary_Local_DO, const struct FQtnModularWeaponAttachment& ModPrim_Local_DO, class AActor* CallFunc_GetOwner_ReturnValue, class UStaticMeshComponent* CallFunc_AddMeshForRender_outMesh, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, class UStaticMeshComponent* CallFunc_AddMeshForRender_outMesh_1, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_1, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void AddMeshForRender(class UStaticMesh* In_Mesh, class AActor* Owner, class UStaticMeshComponent** OutMesh, class UStaticMeshComponent* L_StaticMesh, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void HandleUnequip_Derived(class AQtnBodyPawn* bodyPawn);
	void HandleEquip_Derived(class AQtnBodyPawn* bodyPawn, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SwordAndShield(int32 EntryPoint);
};

}


