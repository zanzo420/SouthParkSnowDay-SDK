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
// Function Loot_Container_Automatic.Loot_Container_Automatic_C.UserConstructionScript
struct ALoot_Container_Automatic_C_UserConstructionScript_Params
{
public:
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Loot_Container_Automatic.Loot_Container_Automatic_C.OpenPresentation
struct ALoot_Container_Automatic_C_OpenPresentation_Params
{
public:
	TArray<class AQtnPlayerPawn*>                PlayersWhoCanGetLoot;                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x1D (0x1D - 0x0)
// Function Loot_Container_Automatic.Loot_Container_Automatic_C.ExecuteUbergraph_Loot_Container_Automatic
struct ALoot_Container_Automatic_C_ExecuteUbergraph_Loot_Container_Automatic_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5096[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AQtnPlayerPawn*>                K2Node_CustomEvent_playersWhoCanGetLoot;           // 0x8(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	float                                        CallFunc_SpawnLootForSelectPlayers_ServerOnly_secondsToFinishSpawning; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


