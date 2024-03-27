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
// Function CinematicSceneSolo_Archetype.CinematicSceneSolo_Archetype_C.EndScene_Server
struct ACinematicSceneSolo_Archetype_C_EndScene_Server_Params
{
public:
	class AQtnBodyPawn*                          BodyToEndScene;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function CinematicSceneSolo_Archetype.CinematicSceneSolo_Archetype_C.ExecuteUbergraph_CinematicSceneSolo_Archetype
struct ACinematicSceneSolo_Archetype_C_ExecuteUbergraph_CinematicSceneSolo_Archetype_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          K2Node_CustomEvent_BodyToEndScene;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


