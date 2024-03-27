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
// Function FixedVolumeCam.FixedVolumeCam_C.SetupFixedVolumeCam
struct UFixedVolumeCam_C_SetupFixedVolumeCam_Params
{
public:
	class AFixedCameraVolume_C*                  FixedCamVolume;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function FixedVolumeCam.FixedVolumeCam_C.UpdateFixedCam
struct UFixedVolumeCam_C_UpdateFixedCam_Params
{
public:
	struct FVector                               CallFunc_GetCameraLocationAndRotation_cameraLocation; // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetCameraLocationAndRotation_cameraRotation; // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function FixedVolumeCam.FixedVolumeCam_C.OnCameraBehaviorTick
struct UFixedVolumeCam_C_OnCameraBehaviorTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function FixedVolumeCam.FixedVolumeCam_C.ExecuteUbergraph_FixedVolumeCam
struct UFixedVolumeCam_C_ExecuteUbergraph_FixedVolumeCam_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7A8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


