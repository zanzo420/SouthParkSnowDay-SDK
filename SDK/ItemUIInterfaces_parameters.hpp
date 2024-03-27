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

// 0x28 (0x28 - 0x0)
// Function ItemUIInterfaces.ItemUIInterfaces_C.GetUnlockData
struct IItemUIInterfaces_C_GetUnlockData_Params
{
public:
	class UObject*                               Requester;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Locked;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LockText;                                          // 0x10(0x18)(Parm, OutParm)
};

// 0xC (0xC - 0x0)
// Function ItemUIInterfaces.ItemUIInterfaces_C.GetItemDetail
struct IItemUIInterfaces_C_GetItemDetail_Params
{
public:
	class UBP_LootIcon_C*                        LootObject;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIndex;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ItemUIInterfaces.ItemUIInterfaces_C.HandleLootHover
struct IItemUIInterfaces_C_HandleLootHover_Params
{
public:
	class UBP_LootIcon_C*                        ThisIcon;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Hovering;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ItemUIInterfaces.ItemUIInterfaces_C.HandleLootSelect
struct IItemUIInterfaces_C_HandleLootSelect_Params
{
public:
	class UBP_LootIcon_C*                        ThisIcon;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


