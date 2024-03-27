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

// 0x130 (0x130 - 0x0)
// Function Cartman_Actor_BP.Cartman_Actor_BP_C.GetIndicatorData
struct ACartman_Actor_BP_C_GetIndicatorData_Params
{
public:
	struct FIndicatorData                        IndicatorData;                                     // 0x0(0x129)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_51EB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x130 (0x130 - 0x0)
// Function Cartman_Actor_BP.Cartman_Actor_BP_C.MakeIndicatorData
struct ACartman_Actor_BP_C_MakeIndicatorData_Params
{
public:
	struct FIndicatorData                        K2Node_MakeStruct_IndicatorData;                   // 0x0(0x129)(HasGetValueTypeHash)
	uint8                                        Pad_51EC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Cartman_Actor_BP.Cartman_Actor_BP_C.ReceiveEndPlay
struct ACartman_Actor_BP_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function Cartman_Actor_BP.Cartman_Actor_BP_C.ExecuteUbergraph_Cartman_Actor_BP
struct ACartman_Actor_BP_C_ExecuteUbergraph_Cartman_Actor_BP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


