#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4F (0x928 - 0x8D9)
// BlueprintGeneratedClass Wand.Wand_C
class AWand_C : public ABaseWeapon_C
{
public:
	uint8                                        Pad_76F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     WandLightingWarmup;                                // 0x8E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_FireCylinder;                                   // 0x8F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   FireLight;                                         // 0x8F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       FlameLoc;                                          // 0x900(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Tip2;                                              // 0x908(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Tip;                                               // 0x910(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           HandleMesh;                                        // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           HeadMesh;                                          // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AWand_C* GetDefaultObj();

	void HandleUnequip_Derived(class AQtnBodyPawn* bodyPawn);
	void HandleEquip_Derived(class AQtnBodyPawn* bodyPawn, const struct FVector& CallFunc_GetPawnFeetLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void AddMeshForRender(class UStaticMesh* In_Mesh, class AActor* In_Owner, class UStaticMeshComponent** Out_Mesh, class UStaticMeshComponent* L_StaticMesh, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void GenerateWeaponForIcon(class USceneComponent* BaseForWeapon, const struct FQtnItemData& ItemData, struct FBoxSphereBounds* Bounds, const struct FQtnModularWeaponAttachment& MW_Secondary_LocalDO, const struct FQtnModularWeaponAttachment& MW_Primary_LocalDO, class UStaticMesh* HandleM_Local, class UStaticMesh* HeadM_Local, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Primary, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Secondary, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UStaticMeshComponent* CallFunc_AddMeshForRender_Out_Mesh, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, class UStaticMeshComponent* CallFunc_AddMeshForRender_Out_Mesh_1, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void OnAttachItemData(const struct FQtnItemData& ItemData);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Wand(int32 EntryPoint, const struct FQtnItemData& K2Node_Event_itemData, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Primary, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Secondary, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue_1);
};

}


