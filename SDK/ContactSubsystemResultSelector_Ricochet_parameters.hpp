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

// 0x1A8 (0x1A8 - 0x0)
// Function ContactSubsystemResultSelector_Ricochet.ContactSubsystemResultSelector_Ricochet_C.SelectSystemResult
struct UContactSubsystemResultSelector_Ricochet_C_SelectSystemResult_Params
{
public:
	class UQtnContactData*                       ContactData;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnContactEventInfo                  ContactInfo;                                       // 0x8(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	struct FQtnSurfaceData                       SurfaceData;                                       // 0x60(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FQtnContactSystemResult               ReturnValue;                                       // 0x90(0x58)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	struct FQtnContactSystemResult               K2Node_MakeStruct_QtnContactSystemResult;          // 0xE8(0x58)(ContainsInstancedReference)
	class AProjectile_ArrowBase_C*               K2Node_DynamicCast_AsProjectile_Arrow_Base;        // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4812[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnContactSystemResult               K2Node_MakeStruct_QtnContactSystemResult_1;        // 0x150(0x58)(ContainsInstancedReference)
};

}
}


