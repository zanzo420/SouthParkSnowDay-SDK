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

// 0x55 (0x55 - 0x0)
// Function EnemyUpgrade_Bombardier_BouncingBombs.EnemyUpgrade_Bombardier_BouncingBombs_C.CanEnemyUpgradeBeRolled
struct UEnemyUpgrade_Bombardier_BouncingBombs_C_CanEnemyUpgradeBeRolled_Params
{
public:
	class AQtnGameState*                         ActiveGameState;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E3B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnGameStateArchetype_C*              K2Node_DynamicCast_AsQtn_Game_State_Archetype;     // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanEnemyUpgradeBeRolled_ReturnValue;      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E3C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPlayerController*                  CallFunc_GetLocalPlayerController_ReturnValue;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnLocalOptionsSaveData*              CallFunc_GetSaveLoadDataBP_localOptionsSaveData;   // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnCloudOptionsSaveData*              CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;   // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnProgressSaveData*                  CallFunc_GetSaveLoadDataBP_progressSaveData;       // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQtnOutputValidityEnum            CallFunc_GetSaveLoadDataBP_outputPin;              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E3D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMissionDataBag_C*                     CallFunc_GetCustomDataBag_ReturnValue;             // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentArc_CurrentArc;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


