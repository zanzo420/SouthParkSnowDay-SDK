#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function VampiricSickles.VampiricSickles_C.HandleUnequip_Derived
struct AVampiricSickles_C_HandleUnequip_Derived_Params
{
public:
	class AQtnBodyPawn*                          bodyPawn;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VampiricSickles.VampiricSickles_C.HandleEquip_Derived
struct AVampiricSickles_C_HandleEquip_Derived_Params
{
public:
	class AQtnBodyPawn*                          bodyPawn;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function VampiricSickles.VampiricSickles_C.AddMeshForRender
struct AVampiricSickles_C_AddMeshForRender_Params
{
public:
	class UStaticMesh*                           In_Mesh;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                In_Owner;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Out_Mesh;                                          // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  L_StaticMesh;                                      // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            Temp_struct_Variable;                              // 0x20(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x460 (0x460 - 0x0)
// Function VampiricSickles.VampiricSickles_C.GenerateWeaponForIcon
struct AVampiricSickles_C_GenerateWeaponForIcon_Params
{
public:
	class USceneComponent*                       BaseForWeapon;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnItemData                          ItemData;                                          // 0x8(0x68)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBoxSphereBounds                      Bounds;                                            // 0x70(0x1C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_77F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnModularWeaponAttachment           ModSecondary_Local_DO;                             // 0x90(0xA0)(Edit, BlueprintVisible)
	struct FQtnModularWeaponAttachment           ModPrim_Local_DO;                                  // 0x130(0xA0)(Edit, BlueprintVisible)
	class UStaticMesh*                           HandleM_Local;                                     // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           BladeM_Local;                                      // 0x1D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnModularWeaponAttachment           CallFunc_GetWeaponReferences_Out_ModW_Primary;     // 0x1E0(0xA0)(None)
	struct FQtnModularWeaponAttachment           CallFunc_GetWeaponReferences_Out_ModW_Secondary;   // 0x280(0xA0)(None)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_AddMeshForRender_Out_Mesh;                // 0x328(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_AddRelativeLocation_SweepHitResult;    // 0x330(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_AddRelativeRotation_SweepHitResult;    // 0x3B8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UStaticMeshComponent*                  CallFunc_AddMeshForRender_Out_Mesh_1;              // 0x440(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           CallFunc_SyncLoadStaticMesh_ReturnValue;           // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_77F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           CallFunc_SyncLoadStaticMesh_ReturnValue_1;         // 0x458(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function VampiricSickles.VampiricSickles_C.OnAttachItemData
struct AVampiricSickles_C_OnAttachItemData_Params
{
public:
	struct FQtnItemData                          ItemData;                                          // 0x0(0x68)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1C9 (0x1C9 - 0x0)
// Function VampiricSickles.VampiricSickles_C.ExecuteUbergraph_VampiricSickles
struct AVampiricSickles_C_ExecuteUbergraph_VampiricSickles_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnItemData                          K2Node_Event_itemData;                             // 0x8(0x68)(None)
	struct FQtnModularWeaponAttachment           CallFunc_GetWeaponReferences_Out_ModW_Primary;     // 0x70(0xA0)(None)
	struct FQtnModularWeaponAttachment           CallFunc_GetWeaponReferences_Out_ModW_Secondary;   // 0x110(0xA0)(None)
	class UStaticMesh*                           CallFunc_SyncLoadStaticMesh_ReturnValue;           // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_77F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           CallFunc_SyncLoadStaticMesh_ReturnValue_1;         // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


