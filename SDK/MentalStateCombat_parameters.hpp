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

// 0x8 (0x8 - 0x0)
// Function MentalStateCombat.MentalStateCombat_C.OnEnterMentalState
struct UMentalStateCombat_C_OnEnterMentalState_Params
{
public:
	class UQtnMentalState*                       PreviousMentalState;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function MentalStateCombat.MentalStateCombat_C.ExecuteUbergraph_MentalStateCombat
struct UMentalStateCombat_C_ExecuteUbergraph_MentalStateCombat_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FF1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnMentalState*                       K2Node_Event_previousMentalState;                  // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


