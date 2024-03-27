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

// 0x18 (0x18 - 0x0)
// Function BS_Spawn_MonsterCloset_Archetype.BS_Spawn_MonsterCloset_Archetype_C.GetSpawnAnimsFromBody
struct ABS_Spawn_MonsterCloset_Archetype_C_GetSpawnAnimsFromBody_Params
{
public:
	class UClass*                                SpawnerClass;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBodySpawnAnimArray                   AnimArrayStruct;                                   // 0x8(0x10)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BS_Spawn_MonsterCloset_Archetype.BS_Spawn_MonsterCloset_Archetype_C.UserConstructionScript
struct ABS_Spawn_MonsterCloset_Archetype_C_UserConstructionScript_Params
{
public:
	TSoftObjectPtr<class ABS_Spawn_MonsterCloset_Archetype_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0(0x28)(InstancedReference, UObjectWrapper, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BS_Spawn_MonsterCloset_Archetype.BS_Spawn_MonsterCloset_Archetype_C.PerAISpawn
struct ABS_Spawn_MonsterCloset_Archetype_C_PerAISpawn_Params
{
public:
	class AQtnBodyPawn*                          Body;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BS_Spawn_MonsterCloset_Archetype.BS_Spawn_MonsterCloset_Archetype_C.ExecuteUbergraph_BS_Spawn_MonsterCloset_Archetype
struct ABS_Spawn_MonsterCloset_Archetype_C_ExecuteUbergraph_BS_Spawn_MonsterCloset_Archetype_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          K2Node_Event_body;                                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


