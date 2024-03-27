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

// 0xC (0xC - 0x0)
// Function SpokeManagerBP.SpokeManagerBP_C.ScheduleSpokeBS_ServerOnly
struct USpokeManagerBP_C_ScheduleSpokeBS_ServerOnly_Params
{
public:
	class USpokeBP_C*                            Spoke;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SetupChosenBS_ServerOnly_nextIndex;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function SpokeManagerBP.SpokeManagerBP_C.HandleSpokeVisit
struct USpokeManagerBP_C_HandleSpokeVisit_Params
{
public:
	bool                                         IsServer;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C4D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpokeBP_C*                            Spoke;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function SpokeManagerBP.SpokeManagerBP_C.Setup BSSchedule_ServerOnly
struct USpokeManagerBP_C_Setup_BSSchedule_ServerOnly_Params
{
public:
	TArray<class UClass*>                        bsSchedule;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UQtnSpokeComponent*>            CallFunc_GetRegisteredSpokes_ReturnValue;          // 0x20(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnSpokeComponent*                    CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpokeBP_C*                            K2Node_DynamicCast_AsSpoke_BP;                     // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


