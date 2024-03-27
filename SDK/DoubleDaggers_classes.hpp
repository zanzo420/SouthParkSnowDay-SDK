#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x900 - 0x8D9)
// BlueprintGeneratedClass DoubleDaggers.DoubleDaggers_C
class ADoubleDaggers_C : public ABaseWeapon_C
{
public:
	uint8                                        Pad_5E76[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  LeftHandDagger;                                    // 0x8E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           BladeMesh;                                         // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           HandleMesh;                                        // 0x8F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADoubleDaggers_C* GetDefaultObj();

	void HandleUnequip_Derived(class AQtnBodyPawn* bodyPawn);
	void HandleEquip_Derived(class AQtnBodyPawn* bodyPawn);
	void AddMeshForRender(class UStaticMesh* In_Mesh, class AActor* In_Owner, class UStaticMeshComponent** Out_Mesh, class UStaticMeshComponent* L_StaticMesh, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void GenerateWeaponForIcon(class USceneComponent* BaseForWeapon, const struct FQtnItemData& ItemData, struct FBoxSphereBounds* Bounds, const struct FQtnModularWeaponAttachment& ModSecondary_Local_DO, const struct FQtnModularWeaponAttachment& ModPrim_Local_DO, class UStaticMesh* HandleM_Local, class UStaticMesh* BladeM_Local, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Primary, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Secondary, class AActor* CallFunc_GetOwner_ReturnValue, class UStaticMeshComponent* CallFunc_AddMeshForRender_Out_Mesh, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, class UStaticMeshComponent* CallFunc_AddMeshForRender_Out_Mesh_1, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue_1);
	void OnAttachItemData(const struct FQtnItemData& ItemData);
	void ExecuteUbergraph_DoubleDaggers(int32 EntryPoint, const struct FQtnItemData& K2Node_Event_itemData, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Primary, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Secondary, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


