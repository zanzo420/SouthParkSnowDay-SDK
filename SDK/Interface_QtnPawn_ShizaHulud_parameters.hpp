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
// Function Interface_QtnPawn_ShizaHulud.Interface_QtnPawn_ShizaHulud_C.DoRequestShizaVerb
struct IInterface_QtnPawn_ShizaHulud_C_DoRequestShizaVerb_Params
{
public:
	int32                                        VerbIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function Interface_QtnPawn_ShizaHulud.Interface_QtnPawn_ShizaHulud_C.DoSpawnPoopletAtLocation
struct IInterface_QtnPawn_ShizaHulud_C_DoSpawnPoopletAtLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


