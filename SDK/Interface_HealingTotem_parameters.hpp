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
// Function Interface_HealingTotem.Interface_HealingTotem_C.ToggleReviveProxyFeedback
struct IInterface_HealingTotem_C_ToggleReviveProxyFeedback_Params
{
public:
	bool                                         On;                                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Interface_HealingTotem.Interface_HealingTotem_C.GetReviveProxyFeedbackOn
struct IInterface_HealingTotem_C_GetReviveProxyFeedbackOn_Params
{
public:
	bool                                         ReviveProxyFeedbackOn;                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function Interface_HealingTotem.Interface_HealingTotem_C.GetUpgradeRevivalProxyMultiplier
struct IInterface_HealingTotem_C_GetUpgradeRevivalProxyMultiplier_Params
{
public:
	float                                        UpgradeRevivalProxyMultiplier;                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Interface_HealingTotem.Interface_HealingTotem_C.GetUpgradeRevivalProxy
struct IInterface_HealingTotem_C_GetUpgradeRevivalProxy_Params
{
public:
	bool                                         UpgradeRevivalProxy;                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


