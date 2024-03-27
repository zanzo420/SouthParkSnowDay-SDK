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

// 0x2A0 (0x2A0 - 0x0)
// Function NotificationCard_Widget.NotificationCard_Widget_C.RefreshLevelScrollWidget
struct UNotificationCard_Widget_C_RefreshLevelScrollWidget_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_532E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScrollSmall_Widget_C*                 CallFunc_SpawnObject_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnUpgradeSettings                   CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings; // 0x10(0x1F8)(None)
	struct FQtnRolledUpgradeData                 K2Node_MakeStruct_QtnRolledUpgradeData;            // 0x208(0x60)(None)
	TSubclassOf<class UQtnUpgrade>               CallFunc_SyncLoadUpgradeClass_ReturnValue;         // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_532F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnUpgrade*                           CallFunc_GetClassDefaultObject_ReturnValue;        // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5330[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_FormatUpgradeText_ReturnValue;            // 0x288(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function NotificationCard_Widget.NotificationCard_Widget_C.OverrideCardLevelUI
struct UNotificationCard_Widget_C_OverrideCardLevelUI_Params
{
public:
	int32                                        LevelToShow;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5331[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
};

// 0x9C2 (0x9C2 - 0x0)
// Function NotificationCard_Widget.NotificationCard_Widget_C.UpdateCardStruct
struct UNotificationCard_Widget_C_UpdateCardStruct_Params
{
public:
	struct FUI_Card_Struct                       NewestFoilPackOrEnemyBS;                           // 0x0(0x340)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FUI_Card_Struct                       UI_Card_Struct1;                                   // 0x340(0x340)(ConstParm, Parm, OutParm, HasGetValueTypeHash)
	struct FUI_Card_Struct                       LOCAL_NewestCard;                                  // 0x680(0x340)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnyAnimationPlaying_ReturnValue;        // 0x9C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x9C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x260 (0x260 - 0x0)
// Function NotificationCard_Widget.NotificationCard_Widget_C.Anim_CardUpgrade
struct UNotificationCard_Widget_C_Anim_CardUpgrade_Params
{
public:
	int32                                        OrigLevel;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5332[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnUpgradeSettings                   UpgradeSettings;                                   // 0x8(0x1F8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FQtnRolledUpgradeData                 UpgradeRolledData;                                 // 0x200(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x5A0 (0x5A0 - 0x0)
// Function NotificationCard_Widget.NotificationCard_Widget_C.Internal_InjectFromQueue_CardUpgrade
struct UNotificationCard_Widget_C_Internal_InjectFromQueue_CardUpgrade_Params
{
public:
	struct FFUpgradeNotificationQueueEntry       UpgradeQueueEntry;                                 // 0x0(0x5A0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x13C0 (0x13C0 - 0x0)
// Function NotificationCard_Widget.NotificationCard_Widget_C.ExecuteUbergraph_NotificationCard_Widget
struct UNotificationCard_Widget_C_ExecuteUbergraph_NotificationCard_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_OrigLevel;                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnUpgradeSettings                   K2Node_CustomEvent_UpgradeSettings;                // 0x8(0x1F8)(None)
	struct FQtnRolledUpgradeData                 K2Node_CustomEvent_UpgradeRolledData;              // 0x200(0x60)(None)
	struct FFUpgradeNotificationQueueEntry       K2Node_MakeStruct_FUpgradeNotificationQueueEntry;  // 0x260(0x5A0)(HasGetValueTypeHash)
	TArray<struct FLinearColor>                  K2Node_MakeArray_Array;                            // 0x800(0x10)(ReferenceParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x810(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5333[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnGameState*                         CallFunc_GetQtnGameState_ReturnValue;              // 0x820(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnGameStateArchetype_C*              K2Node_DynamicCast_AsQtn_Game_State_Archetype;     // 0x828(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x830(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5334[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x834(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x838(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5335[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x83C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFUpgradeNotificationQueueEntry       K2Node_CustomEvent_UpgradeQueueEntry;              // 0x840(0x5A0)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xDE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xDE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5336[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xDE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5337[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFUpgradeNotificationQueueEntry       CallFunc_Array_Get_Item;                           // 0xDF0(0x5A0)(HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x1390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5338[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x1398(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x13A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x13A8(0x10)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x13B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NotificationCard_Widget.NotificationCard_Widget_C.HUD_Notification__DelegateSignature
struct UNotificationCard_Widget_C_HUD_Notification__DelegateSignature_Params
{
public:
	bool                                         Adding;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


