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

// 0x4 (0x4 - 0x0)
// Function MentalSubStateBackgroundTactics_AllyBot.MentalSubStateBackgroundTactics_AllyBot_C.OnThinkMentalSubState
struct UMentalSubStateBackgroundTactics_AllyBot_C_OnThinkMentalSubState_Params
{
public:
	float                                        TimeSinceLastThought;                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function MentalSubStateBackgroundTactics_AllyBot.MentalSubStateBackgroundTactics_AllyBot_C.ExecuteUbergraph_MentalSubStateBackgroundTactics_AllyBot
struct UMentalSubStateBackgroundTactics_AllyBot_C_ExecuteUbergraph_MentalSubStateBackgroundTactics_AllyBot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_timeSinceLastThought;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABodyControllerAllyBot_C*              K2Node_DynamicCast_AsBody_Controller_Ally_Bot;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


