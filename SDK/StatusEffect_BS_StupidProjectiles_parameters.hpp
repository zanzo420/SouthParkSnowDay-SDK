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

// 0x3C (0x3C - 0x0)
// Function StatusEffect_BS_StupidProjectiles.StatusEffect_BS_StupidProjectiles_C.OnNerfStart_SideEffects
struct UStatusEffect_BS_StupidProjectiles_C_OnNerfStart_SideEffects_Params
{
public:
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E7E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFTUXDataBag_C*                        CallFunc_GetLocalProgressDataBag_ReturnValue;      // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnReplicatedSaveData                CallFunc_GetReplicatedEnemyBSSaveData_ServerOnly_combinedReplicatedSaveData; // 0x10(0x2C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


