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
// Function QtnVerbUI_Interface.QtnVerbUI_Interface_C.GetUnlockData
struct IQtnVerbUI_Interface_C_GetUnlockData_Params
{
public:
	class UObject*                               Requester;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Locked;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3276[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LockText;                                          // 0x10(0x18)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function QtnVerbUI_Interface.QtnVerbUI_Interface_C.ShowOnUI
struct IQtnVerbUI_Interface_C_ShowOnUI_Params
{
public:
	bool                                         ShouldShow;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function QtnVerbUI_Interface.QtnVerbUI_Interface_C.isVerbACheat
struct IQtnVerbUI_Interface_C_IsVerbACheat_Params
{
public:
	bool                                         IsCheat;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function QtnVerbUI_Interface.QtnVerbUI_Interface_C.IsVerbWeaponBased
struct IQtnVerbUI_Interface_C_IsVerbWeaponBased_Params
{
public:
	bool                                         IsWeaponBased;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function QtnVerbUI_Interface.QtnVerbUI_Interface_C.GetCooldownWheelTexture
struct IQtnVerbUI_Interface_C_GetCooldownWheelTexture_Params
{
public:
	class UTexture2D*                            CooldownWheelTexture;                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function QtnVerbUI_Interface.QtnVerbUI_Interface_C.IsVerbAPower
struct IQtnVerbUI_Interface_C_IsVerbAPower_Params
{
public:
	bool                                         IsPower;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


