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
// Function MentalStateCombat_CartmanBuddy.MentalStateCombat_CartmanBuddy_C.OnExitMentalState
struct UMentalStateCombat_CartmanBuddy_C_OnExitMentalState_Params
{
public:
	TSubclassOf<class UQtnMentalState>           NextMentalStateClass;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MentalStateCombat_CartmanBuddy.MentalStateCombat_CartmanBuddy_C.OnEnterMentalState
struct UMentalStateCombat_CartmanBuddy_C_OnEnterMentalState_Params
{
public:
	class UQtnMentalState*                       PreviousMentalState;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function MentalStateCombat_CartmanBuddy.MentalStateCombat_CartmanBuddy_C.ExecuteUbergraph_MentalStateCombat_CartmanBuddy
struct UMentalStateCombat_CartmanBuddy_C_ExecuteUbergraph_MentalStateCombat_CartmanBuddy_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D6B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnMentalState*                       K2Node_Event_previousMentalState;                  // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UQtnMentalState>           K2Node_Event_nextMentalStateClass;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D6C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          CallFunc_GetBodyPawn_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          CallFunc_GetClosestPlayer_ReturnValue;             // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


