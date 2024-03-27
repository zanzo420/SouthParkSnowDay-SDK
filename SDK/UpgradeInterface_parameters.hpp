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

// 0x258 (0x258 - 0x0)
// Function UpgradeInterface.UpgradeInterface_C.RecordUpgradeForTribunal
struct IUpgradeInterface_C_RecordUpgradeForTribunal_Params
{
public:
	struct FQtnRolledUpgradeResult               Upgrade;                                           // 0x0(0x258)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function UpgradeInterface.UpgradeInterface_C.MakeUpgradeChoiceLocal
struct IUpgradeInterface_C_MakeUpgradeChoiceLocal_Params
{
public:
	int32                                        ChoiceIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UpgradeInterface.UpgradeInterface_C.SetCardToReplaceLocal
struct IUpgradeInterface_C_SetCardToReplaceLocal_Params
{
public:
	int32                                        CardIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UpgradeInterface.UpgradeInterface_C.ImproveCard
struct IUpgradeInterface_C_ImproveCard_Params
{
public:
	int32                                        CardIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3350[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABodyPawnPlayer_C*                     PlayerBody;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OldCurrency;                                       // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        UpgradeCost;                                       // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function UpgradeInterface.UpgradeInterface_C.PlayerFinished
struct IUpgradeInterface_C_PlayerFinished_Params
{
public:
	class ABodyPawnPlayer_C*                     PlayerBody;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChoiceIndex;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


