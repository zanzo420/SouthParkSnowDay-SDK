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

// 0x50 (0x50 - 0x0)
// Function ArtTool_LightInterface.ArtTool_LightInterface_C.LM_GatherInfo
struct IArtTool_LightInterface_C_LM_GatherInfo_Params
{
public:
	bool                                         MultipleLights;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AF3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Light_Type;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                FolderName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FVector>                       Light_Locations;                                   // 0x20(0x10)(Parm, OutParm)
	TArray<struct FRotator>                      Light_Orientations;                                // 0x30(0x10)(Parm, OutParm)
	TArray<struct FVector>                       Light_SourceSize;                                  // 0x40(0x10)(Parm, OutParm)
};

}
}


