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

// 0x1 (0x1 - 0x0)
// Function FTUX_PissedOff_Image.FTUX_PissedOff_Image_C.PreConstruct
struct UFTUX_PissedOff_Image_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function FTUX_PissedOff_Image.FTUX_PissedOff_Image_C.RefreshPowerAffordance
struct UFTUX_PissedOff_Image_C_RefreshPowerAffordance_Params
{
public:
	bool                                         IsUsingMouseAndKeyboard;                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function FTUX_PissedOff_Image.FTUX_PissedOff_Image_C.ExecuteUbergraph_FTUX_PissedOff_Image
struct UFTUX_PissedOff_Image_C_ExecuteUbergraph_FTUX_PissedOff_Image_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7543[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_isUsingMouseAndKeyboard;        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


