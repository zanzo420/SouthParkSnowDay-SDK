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

// 0x11 (0x11 - 0x0)
// Function QtnUnlockListEntry_BPI.QtnUnlockListEntry_BPI_C.OnUnlockListEntryPressed
struct IQtnUnlockListEntry_BPI_C_OnUnlockListEntryPressed_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_546E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUnlockLineItem_Widget_C*              UnlockLineItem;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowHold;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function QtnUnlockListEntry_BPI.QtnUnlockListEntry_BPI_C.OnUnlockListEntryHovered
struct IQtnUnlockListEntry_BPI_C_OnUnlockListEntryHovered_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_546F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUnlockLineItem_Widget_C*              UnlockLineItem;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


