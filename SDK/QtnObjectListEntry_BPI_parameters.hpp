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

// 0x169 (0x169 - 0x0)
// Function QtnObjectListEntry_BPI.QtnObjectListEntry_BPI_C.OnListEntryPressed
struct IQtnObjectListEntry_BPI_C_OnListEntryPressed_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_537C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCosmeticItemSlot_C*                   CosmeticItemSlot;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFQtnStoreItem                        QtnStoreItem;                                      // 0x10(0x158)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         AllowHold;                                         // 0x168(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x168 (0x168 - 0x0)
// Function QtnObjectListEntry_BPI.QtnObjectListEntry_BPI_C.OnListEntryHovered
struct IQtnObjectListEntry_BPI_C_OnListEntryHovered_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_537D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCosmeticItemSlot_C*                   CosmeticItemSlot;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFQtnStoreItem                        QtnStoreItem;                                      // 0x10(0x158)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}
}


