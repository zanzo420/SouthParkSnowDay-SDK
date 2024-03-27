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
// Function Interface_QtnGoal_MS_Act2_ShiTpaTown.Interface_QtnGoal_MS_Act2_ShiTpaTown_C.GetInitialAllLocations
struct IInterface_QtnGoal_MS_Act2_ShiTpaTown_C_GetInitialAllLocations_Params
{
public:
	TArray<class ALocationMarker_BP_C*>          InitialAllLocations;                               // 0x0(0x10)(Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function Interface_QtnGoal_MS_Act2_ShiTpaTown.Interface_QtnGoal_MS_Act2_ShiTpaTown_C.DEBUGONLY_DoForceLocations
struct IInterface_QtnGoal_MS_Act2_ShiTpaTown_C_DEBUGONLY_DoForceLocations_Params
{
public:
	TArray<class FString>                        OrderedItems;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function Interface_QtnGoal_MS_Act2_ShiTpaTown.Interface_QtnGoal_MS_Act2_ShiTpaTown_C.DEBUGONLY_SetForcedLocations
struct IInterface_QtnGoal_MS_Act2_ShiTpaTown_C_DEBUGONLY_SetForcedLocations_Params
{
public:
	TArray<class ALocationMarker_BP_C*>          ForcedLocations;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function Interface_QtnGoal_MS_Act2_ShiTpaTown.Interface_QtnGoal_MS_Act2_ShiTpaTown_C.SetSpawnedInDebugMode
struct IInterface_QtnGoal_MS_Act2_ShiTpaTown_C_SetSpawnedInDebugMode_Params
{
public:
	bool                                         SpawnedInDebugMode;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


