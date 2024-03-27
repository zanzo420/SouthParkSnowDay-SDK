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

// 0x471 (0x471 - 0x0)
// Function InstantUpgrade_TradeForDarkMatter.InstantUpgrade_TradeForDarkMatter_C.CDO_GenerateTextValueForDisplay
struct UInstantUpgrade_TradeForDarkMatter_C_CDO_GenerateTextValueForDisplay_Params
{
public:
	struct FQtnUpgradeSettings                   InUpgradeSettings;                                 // 0x0(0x1F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQtnRolledUpgradeData                 RolledUpgradeData;                                 // 0x1F8(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        ArrayIndex;                                        // 0x258(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x260(0x18)(Parm, OutParm, ReturnParm)
	struct FQtnUpgradeSettings                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x278(0x1F8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x324 (0x324 - 0x0)
// Function InstantUpgrade_TradeForDarkMatter.InstantUpgrade_TradeForDarkMatter_C.CDO_GenerateTargetModifiableIdentity
struct UInstantUpgrade_TradeForDarkMatter_C_CDO_GenerateTargetModifiableIdentity_Params
{
public:
	class AQtnBodyPawn*                          TargetPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnUpgradeSettings                   InUpgradeSettings;                                 // 0x8(0x1F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQtnRolledUpgradeData                 RolledUpgradeData;                                 // 0x200(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          OutRarityTag;                                      // 0x260(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	int32                                        OutLevel;                                          // 0x268(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReturnValue;                                       // 0x26C(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UQtnUpgrade*>                   CallFunc_GetCurrentUpgradesArray_ReturnValue;      // 0x278(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnUpgrade*                           CallFunc_Array_Get_Item;                           // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_77C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnUpgradeSlot*                       CallFunc_FindUpgrade_ReturnValue;                  // 0x2A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_77C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnRolledUpgradeData                 CallFunc_GetRolledUpgradeData_ReturnValue;         // 0x2B8(0x60)(ConstParm)
	class UQtnUpgrade*                           CallFunc_Array_Random_OutItem;                     // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Random_OutIndex;                    // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function InstantUpgrade_TradeForDarkMatter.InstantUpgrade_TradeForDarkMatter_C.CanUpgradeBeRolled
struct UInstantUpgrade_TradeForDarkMatter_C_CanUpgradeBeRolled_Params
{
public:
	class AQtnBodyPawn*                          TargetBodyPawn;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_77C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UQtnUpgrade*>                   CallFunc_GetCurrentUpgradesArray_ReturnValue;      // 0x10(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


