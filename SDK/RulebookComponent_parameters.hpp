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

// 0x11 (0x11 - 0x0)
// Function RulebookComponent.RulebookComponent_C.LocalAcceptPlayerVote
struct URulebookComponent_C_LocalAcceptPlayerVote_Params
{
public:
	class ALoot_Rulebook_Parent_Frob_C*          Rulebook;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPlayerState*                       VotingPlayer;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsYesVote;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function RulebookComponent.RulebookComponent_C.ServerAcceptPlayerVote
struct URulebookComponent_C_ServerAcceptPlayerVote_Params
{
public:
	class ALoot_Rulebook_Parent_Frob_C*          Rulebook;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPlayerState*                       VotingPlayer;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsYesVote;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function RulebookComponent.RulebookComponent_C.ExecuteUbergraph_RulebookComponent
struct URulebookComponent_C_ExecuteUbergraph_RulebookComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALoot_Rulebook_Parent_Frob_C*          K2Node_CustomEvent_rulebook;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPlayerState*                       K2Node_CustomEvent_votingPlayer;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_isYesVote;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


