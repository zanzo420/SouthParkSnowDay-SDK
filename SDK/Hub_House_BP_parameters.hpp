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
// Function Hub_House_BP.Hub_House_BP_C.Window_Configure
struct AHub_House_BP_C_Window_Configure_Params
{
public:
	TArray<class UStaticMeshComponent*>          K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function Hub_House_BP.Hub_House_BP_C.ConfigureHouse
struct AHub_House_BP_C_ConfigureHouse_Params
{
public:
	TArray<class UStaticMeshComponent*>          K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0xF0 (0xF0 - 0x0)
// Function Hub_House_BP.Hub_House_BP_C.LM_GatherInfo
struct AHub_House_BP_C_LM_GatherInfo_Params
{
public:
	bool                                         MultipleLights;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7399[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Light_Type;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                FolderName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FVector>                       Light_Locations;                                   // 0x20(0x10)(Parm, OutParm)
	TArray<struct FRotator>                      Light_Orientations;                                // 0x30(0x10)(Parm, OutParm)
	TArray<struct FVector>                       Light_SourceSize;                                  // 0x40(0x10)(Parm, OutParm)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_739A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<bool>                                 K2Node_MakeArray_Array;                            // 0x70(0x10)(ReferenceParm)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_739B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       K2Node_MakeArray_Array_1;                          // 0xA0(0x10)(ReferenceParm)
	TArray<class UStaticMeshComponent*>          K2Node_MakeArray_Array_2;                          // 0xB0(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<struct FVector>                       CallFunc_Light_BuildStaticInfo_light_locations;    // 0xC0(0x10)(ReferenceParm)
	TArray<struct FRotator>                      CallFunc_Light_BuildStaticInfo_light_rotations;    // 0xD0(0x10)(ReferenceParm)
	TArray<struct FVector>                       CallFunc_Light_BuildStaticInfo_light_sourcesize;   // 0xE0(0x10)(ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function Hub_House_BP.Hub_House_BP_C.ExecuteUbergraph_Hub_House_BP
struct AHub_House_BP_C_ExecuteUbergraph_Hub_House_BP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


