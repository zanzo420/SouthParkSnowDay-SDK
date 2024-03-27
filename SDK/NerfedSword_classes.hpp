#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F (0x908 - 0x8D9)
// BlueprintGeneratedClass NerfedSword.NerfedSword_C
class ANerfedSword_C : public ABaseWeapon_C
{
public:
	uint8                                        Pad_1A1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FLinearColor>                  RandomColors;                                      // 0x8E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          R_chosenRandomColor;                               // 0x8F8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANerfedSword_C* GetDefaultObj();

	void OnRep_r_chosenRandomColor(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void AddMeshForRender(class UStaticMesh* In_Mesh, class AActor* In_Owner, class UStaticMeshComponent** Out_Mesh, class UStaticMeshComponent* L_StaticMesh, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void GenerateWeaponForIcon(class USceneComponent* BaseForWeapon, const struct FQtnItemData& ItemData, struct FBoxSphereBounds* Bounds, const struct FQtnModularWeaponAttachment& ModSecondary_Local_DO, const struct FQtnModularWeaponAttachment& ModPrim_Local_DO, const struct FQtnModularWeaponConfiguration& Temp2, const struct FQtnModularWeaponConfiguration& Temp, class UStaticMesh* HandleM_Local, class UStaticMesh* BladeM_Local, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Primary, const struct FQtnModularWeaponAttachment& CallFunc_GetWeaponReferences_Out_ModW_Secondary, class AActor* CallFunc_GetOwner_ReturnValue, class UStaticMeshComponent* CallFunc_AddMeshForRender_Out_Mesh, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, class UStaticMeshComponent* CallFunc_AddMeshForRender_Out_Mesh_1, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class UStaticMesh* CallFunc_SyncLoadStaticMesh_ReturnValue_1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_NerfedSword(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, const struct FLinearColor& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue);
};

}


