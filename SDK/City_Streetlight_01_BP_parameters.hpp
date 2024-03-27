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

// 0xA0 (0xA0 - 0x0)
// Function City_Streetlight_01_BP.City_Streetlight_01_BP_C.LM_GatherInfo
struct ACity_Streetlight_01_BP_C_LM_GatherInfo_Params
{
public:
	bool                                         MultipleLights;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_73D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Light_Type;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                FolderName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FVector>                       Light_Locations;                                   // 0x20(0x10)(Parm, OutParm)
	TArray<struct FRotator>                      Light_Orientations;                                // 0x30(0x10)(Parm, OutParm)
	TArray<struct FVector>                       Light_SourceSize;                                  // 0x40(0x10)(Parm, OutParm)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x5C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRotator>                      K2Node_MakeArray_Array;                            // 0x68(0x10)(ReferenceParm)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       K2Node_MakeArray_Array_1;                          // 0x90(0x10)(ReferenceParm)
};

}
}


