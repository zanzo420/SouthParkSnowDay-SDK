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

// 0x10 (0x10 - 0x0)
// Function GateLockInterface.GateLockInterface_C.TogglePickablePresetation
struct IGateLockInterface_C_TogglePickablePresetation_Params
{
public:
	bool                                         WantPickable;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Lock;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GateLockInterface.GateLockInterface_C.Toggle Lock Open Presentation
struct IGateLockInterface_C_Toggle_Lock_Open_Presentation_Params
{
public:
	bool                                         Want_locked;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Lock;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


