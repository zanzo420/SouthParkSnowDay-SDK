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
// Function Interface_Tribunal_Manager_Actor.Interface_Tribunal_Manager_Actor_C.DoEventChoiceConfirmed
struct IInterface_Tribunal_Manager_Actor_C_DoEventChoiceConfirmed_Params
{
public:
	int32                                        ChoiceIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABodyPawnPlayer_C*                     ChoosingPlayer;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Interface_Tribunal_Manager_Actor.Interface_Tribunal_Manager_Actor_C.DoGetRunInEditor
struct IInterface_Tribunal_Manager_Actor_C_DoGetRunInEditor_Params
{
public:
	bool                                         RunInEditor;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


