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
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.DoGetLateJoinTeleportLoc
struct UQtnGoal_SP_Day1_CE_Parent_C_DoGetLateJoinTeleportLoc_Params
{
public:
	class ABP_DeadPlayerTeleportLoc_C*           LateJoinTeleportLoc;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.DoGetDefaultLateJoinLocation
struct UQtnGoal_SP_Day1_CE_Parent_C_DoGetDefaultLateJoinLocation_Params
{
public:
	class ABP_DeadPlayerTeleportLoc_C*           DefaultLateJoinLocation;                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.DoGetExitGate
struct UQtnGoal_SP_Day1_CE_Parent_C_DoGetExitGate_Params
{
public:
	class ATravelVolume_BP_C*                    ExitGate;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.DoGetEntranceDestination
struct UQtnGoal_SP_Day1_CE_Parent_C_DoGetEntranceDestination_Params
{
public:
	class ABP_DeadPlayerTeleportLoc_C*           EntranceDestination;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.Check For Goal End On Item Pickup Server Only
struct UQtnGoal_SP_Day1_CE_Parent_C_Check_For_Goal_End_On_Item_Pickup_Server_Only_Params
{
public:
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.Reconcile Gate Status with All Items Server Only
struct UQtnGoal_SP_Day1_CE_Parent_C_Reconcile_Gate_Status_with_All_Items_Server_Only_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.Starks Item Status Change Server Only
struct UQtnGoal_SP_Day1_CE_Parent_C_Starks_Item_Status_Change_Server_Only_Params
{
public:
	bool                                         Dropped_Gas;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Dropped_Keys;                                      // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Picked_Up_Gas;                                     // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Picked_Up_Keys;                                    // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.getFTUXManager
struct UQtnGoal_SP_Day1_CE_Parent_C_GetFTUXManager_Params
{
public:
	TArray<class AActor*>                        CallFunc_Find_Marked_Actors_Server_Only_foundActors; // 0x0(0x10)(ReferenceParm)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FAC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFTUXManager_C*                        K2Node_DynamicCast_AsFTUXManager;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x72 (0x72 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.VO_CheckForEntryVO
struct UQtnGoal_SP_Day1_CE_Parent_C_VO_CheckForEntryVO_Params
{
public:
	struct FQtnEventMessage                      CallFunc_StaticMakeEventMessage_ReturnValue;       // 0x0(0x60)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnGoal_SP_Day1_CE_Crossroad_C*       K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Crossroad; // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.SaveGoalAsSeen
struct UQtnGoal_SP_Day1_CE_Parent_C_SaveGoalAsSeen_Params
{
public:
	class UQtnGoalManager*                       CallFunc_GetGoalManager_ReturnValue;               // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoalManagerBase_C*                 K2Node_DynamicCast_AsQtn_Goal_Manager_Base;        // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.DEBUGONLY Start Goal
struct UQtnGoal_SP_Day1_CE_Parent_C_DEBUGONLY_Start_Goal_Params
{
public:
	class UQtnGoalManager*                       CallFunc_GetGoalManager_ReturnValue;               // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoalManager_StarksPond_C*          K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.UpdateUIText
struct UQtnGoal_SP_Day1_CE_Parent_C_UpdateUIText_Params
{
public:
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EQtnOutputValidityEnum            CallFunc_GetLocalPlayerOriginalBody_outputPin;     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FBA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          CallFunc_GetLocalPlayerOriginalBody_ReturnValue;   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FBB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABodyPawnPlayer_C*                     K2Node_DynamicCast_AsBody_Pawn_Player;             // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x32 (0x32 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.getEntranceDestination
struct UQtnGoal_SP_Day1_CE_Parent_C_GetEntranceDestination_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_Find_Marked_Actors_Server_Only_foundActors; // 0x8(0x10)(ReferenceParm)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FBE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_DeadPlayerTeleportLoc_C*           K2Node_DynamicCast_AsBP_Dead_Player_Teleport_Loc;  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOnServer_ReturnValue;                   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2B (0x2B - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.getExitGate
struct UQtnGoal_SP_Day1_CE_Parent_C_GetExitGate_Params
{
public:
	TArray<class AActor*>                        CallFunc_Find_Marked_Actors_Server_Only_foundActors; // 0x0(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FC3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATravelVolume_BP_C*                    K2Node_DynamicCast_AsTravel_Volume_BP;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOnServer_ReturnValue;                   // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x17 (0x17 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.Receive Skirmish Notify
struct UQtnGoal_SP_Day1_CE_Parent_C_Receive_Skirmish_Notify_Params
{
public:
	class AQtnSkirmish*                          Skirmish_Sending_Event;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Final_skirmish_action;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FCC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Action_Tag;                                        // 0xC(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.OnGoalStart
struct UQtnGoal_SP_Day1_CE_Parent_C_OnGoalStart_Params
{
public:
	bool                                         WillEndImmediatelyFromLateJoin;                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.updateThisPlayerUI
struct UQtnGoal_SP_Day1_CE_Parent_C_UpdateThisPlayerUI_Params
{
public:
	class ABodyPawnPlayer_C*                     Player_who_upgraded;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.CustomEvent
struct UQtnGoal_SP_Day1_CE_Parent_C_CustomEvent_Params
{
public:
	class AUpgradeStation_BP_C*                  Upgrade_Station;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C.ExecuteUbergraph_QtnGoal_SP_Day1_CE_Parent
struct UQtnGoal_SP_Day1_CE_Parent_C_ExecuteUbergraph_QtnGoal_SP_Day1_CE_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_willEndImmediatelyFromLateJoin;       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FE1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class ABodyPawnPlayer_C*                     K2Node_CustomEvent_player_who_upgraded;            // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUpgradeStation_BP_C*                  K2Node_CustomEvent_upgrade_Station;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASkirmishBase_C*                       K2Node_DynamicCast_AsSkirmish_Base;                // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOnServer_ReturnValue;                   // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOnServer_ReturnValue_1;                 // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FE3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x44(0x10)(ZeroConstructor, NoDestructor)
};

}
}


