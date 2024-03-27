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

// 0x22 (0x22 - 0x0)
// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.RefreshUpgradeStation
struct UQtnGoal_FTUX_Upgrades_C_RefreshUpgradeStation_Params
{
public:
	struct FQtnReactionToTag                     K2Node_MakeStruct_QtnReactionToTag;                // 0x0(0x10)(NoDestructor)
	TArray<struct FQtnReactionToTag>             K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3A (0x3A - 0x0)
// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.EndSequence
struct UQtnGoal_FTUX_Upgrades_C_EndSequence_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6646[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UQtnGoal*>                      CallFunc_GetChildGoals_ReturnValue;                // 0x10(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	enum class EQtnGoalStatus                    CallFunc_GetGoalStatus_ReturnValue;                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6647[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnGoal*                              CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6648[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.getJimmy
struct UQtnGoal_FTUX_Upgrades_C_GetJimmy_Params
{
public:
	TArray<class AActor*>                        CallFunc_Find_Marked_Actors_Server_Only_foundActors; // 0x0(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6649[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUpgradeStation_FTUX_C*                K2Node_DynamicCast_AsUpgrade_Station_FTUX;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.OnGoalStart
struct UQtnGoal_FTUX_Upgrades_C_OnGoalStart_Params
{
public:
	bool                                         WillEndImmediatelyFromLateJoin;                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.playInterruptableConvo
struct UQtnGoal_FTUX_Upgrades_C_PlayInterruptableConvo_Params
{
public:
	TArray<struct FQtnStruct_VOLine>             Convo;                                             // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xAC (0xAC - 0x0)
// Function QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C.ExecuteUbergraph_QtnGoal_FTUX_Upgrades
struct UQtnGoal_FTUX_Upgrades_C_ExecuteUbergraph_QtnGoal_FTUX_Upgrades_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_664A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             K2Node_CustomEvent_Convo;                          // 0x8(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_willEndImmediatelyFromLateJoin;       // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_664B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_664C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     CallFunc_Array_Get_Item;                           // 0x38(0x25)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_664D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_664E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_664F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x74(0x10)(ZeroConstructor, NoDestructor)
	enum class EQtnOutputValidityEnum            CallFunc_GetLocalPlayerOccupiedBody_outputPin;     // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6650[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;   // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABodyPawnPlayer_C*                     K2Node_DynamicCast_AsBody_Pawn_Player;             // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_FindPlayerData____FoundPlayer;            // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6651[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerUpgradeSessionState_C*          CallFunc_FindPlayerData____PlayerSession;          // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FindPlayerData____PlayerIndex;            // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

