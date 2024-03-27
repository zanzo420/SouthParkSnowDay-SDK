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
// Function QtnCharacterMesh_Archetype.QtnCharacterMesh_Archetype_C.OnBodyMeshAcquired
struct UQtnCharacterMesh_Archetype_C_OnBodyMeshAcquired_Params
{
public:
	class USkeletalMeshComponent*                ComponentAdded;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function QtnCharacterMesh_Archetype.QtnCharacterMesh_Archetype_C.ExecuteUbergraph_QtnCharacterMesh_Archetype
struct UQtnCharacterMesh_Archetype_C_ExecuteUbergraph_QtnCharacterMesh_Archetype_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_526C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                K2Node_Event_ComponentAdded;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


