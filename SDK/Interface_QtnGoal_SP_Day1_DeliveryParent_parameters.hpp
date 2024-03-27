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

// 0x1 (0x1 - 0x0)
// Function Interface_QtnGoal_SP_Day1_DeliveryParent.Interface_QtnGoal_SP_Day1_DeliveryParent_C.DoGetDelivered
struct IInterface_QtnGoal_SP_Day1_DeliveryParent_C_DoGetDelivered_Params
{
public:
	bool                                         Delivered;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Interface_QtnGoal_SP_Day1_DeliveryParent.Interface_QtnGoal_SP_Day1_DeliveryParent_C.SetSiblingGoal
struct IInterface_QtnGoal_SP_Day1_DeliveryParent_C_SetSiblingGoal_Params
{
public:
	class UQtnGoal*                              SiblingGoal;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Interface_QtnGoal_SP_Day1_DeliveryParent.Interface_QtnGoal_SP_Day1_DeliveryParent_C.DoGetSpokeExitGate
struct IInterface_QtnGoal_SP_Day1_DeliveryParent_C_DoGetSpokeExitGate_Params
{
public:
	class ATravelVolume_BP_C*                    SpokeExitGate;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Interface_QtnGoal_SP_Day1_DeliveryParent.Interface_QtnGoal_SP_Day1_DeliveryParent_C.DoCloseGate
struct IInterface_QtnGoal_SP_Day1_DeliveryParent_C_DoCloseGate_Params
{
public:
	class ATravelVolume_BP_C*                    Gate;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Interface_QtnGoal_SP_Day1_DeliveryParent.Interface_QtnGoal_SP_Day1_DeliveryParent_C.DoGetSpokeEntranceGate
struct IInterface_QtnGoal_SP_Day1_DeliveryParent_C_DoGetSpokeEntranceGate_Params
{
public:
	class ATravelVolume_BP_C*                    SpokeEntranceGate;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


