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

// 0x31 (0x31 - 0x0)
// Function Cine_MS_DumpCrane.Cine_MS_DumpCrane_C.determineFrobIntentions
struct ACine_MS_DumpCrane_C_DetermineFrobIntentions_Params
{
public:
	class ABodyPawnPlayer_C*                     Frobbing_player;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LOCAL_FoundGas;                                    // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LOCAL_foundKeys;                                   // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BD5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LOCAL_HeldItem;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class ABP_GoalPickup_C*>              LOCAL_CopyOfCarriedItemList;                       // 0x20(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                         LOCAL_ADeliveryGoalIsActive;                       // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function Cine_MS_DumpCrane.Cine_MS_DumpCrane_C.GoalEvent
struct ACine_MS_DumpCrane_C_GoalEvent_Params
{
public:
	class UClass*                                GoalClass;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EventNum;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BD6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASubGoalManager_Archetype_C*           Manager;                                           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Cine_MS_DumpCrane.Cine_MS_DumpCrane_C.ToggleEvent
struct ACine_MS_DumpCrane_C_ToggleEvent_Params
{
public:
	bool                                         WantOn;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function Cine_MS_DumpCrane.Cine_MS_DumpCrane_C.ExecuteUbergraph_Cine_MS_DumpCrane
struct ACine_MS_DumpCrane_C_ExecuteUbergraph_Cine_MS_DumpCrane_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BD7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_CustomEvent_goalClass;                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_EventNum;                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BD8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASubGoalManager_Archetype_C*           K2Node_CustomEvent_manager;                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_WantOn;                               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


