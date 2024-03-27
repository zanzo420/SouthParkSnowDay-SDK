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

// 0x39 (0x39 - 0x0)
// Function CartmanBossDoOverActivationVerb.CartmanBossDoOverActivationVerb_C.GetEnemiesToRevive
struct UCartmanBossDoOverActivationVerb_C_GetEnemiesToRevive_Params
{
public:
	class AQtnGameState*                         GameState;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyPawn*                          Bullshitter;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AQtnBodyPawn*>                  EnemiesToRevive;                                   // 0x10(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class AQtnBodyPawn*>                  K2Node_MakeArray_Array;                            // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	class ABodyPawn_CartmanBoss_C*               K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss;       // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


