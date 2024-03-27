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

// 0x9 (0x9 - 0x0)
// Function EnemyUpgrade_BurningWeapons.EnemyUpgrade_BurningWeapons_C.UpdateFX
struct UEnemyUpgrade_BurningWeapons_C_UpdateFX_Params
{
public:
	class AQtnItem*                              Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         On;                                                // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function EnemyUpgrade_BurningWeapons.EnemyUpgrade_BurningWeapons_C.ExecuteUbergraph_EnemyUpgrade_BurningWeapons
struct UEnemyUpgrade_BurningWeapons_C_ExecuteUbergraph_EnemyUpgrade_BurningWeapons_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3693[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnItem*                              K2Node_Event_Item;                                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_On;                                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3694[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseWeapon_C*                         K2Node_DynamicCast_AsBase_Weapon;                  // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


