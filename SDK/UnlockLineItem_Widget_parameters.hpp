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

// 0x11 (0x11 - 0x0)
// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.OnUnlockListEntryPressed
struct UUnlockLineItem_Widget_C_OnUnlockListEntryPressed_Params
{
public:
	bool                                         IsPressed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_546D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUnlockLineItem_Widget_C*              UnlockLineItem;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowHold;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B0 (0x1B0 - 0x0)
// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.OnFocusReceived
struct UUnlockLineItem_Widget_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)(None)
};

// 0x1 (0x1 - 0x0)
// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.BP_OnItemExpansionChanged
struct UUnlockLineItem_Widget_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.BP_OnItemSelectionChanged
struct UUnlockLineItem_Widget_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.OnUnlockListEntryHovered
struct UUnlockLineItem_Widget_C_OnUnlockListEntryHovered_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5470[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUnlockLineItem_Widget_C*              UnlockLineItem;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.AnimSeq_Hover
struct UUnlockLineItem_Widget_C_AnimSeq_Hover_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.InitUnlockInfo
struct UUnlockLineItem_Widget_C_InitUnlockInfo_Params
{
public:
	class FName                                  UnlockId;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.OnListItemObjectSet
struct UUnlockLineItem_Widget_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x101 (0x101 - 0x0)
// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.ExecuteUbergraph_UnlockLineItem_Widget
struct UUnlockLineItem_Widget_C_ExecuteUbergraph_UnlockLineItem_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsSelected;                          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsHovered;                            // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5471[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUnlockLineItem_Widget_C*              K2Node_Event_UnlockLineItem;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsHovered;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5472[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_UnlockId;                       // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5473[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUnlockData_O_C*                       K2Node_DynamicCast_AsUnlock_Data_O;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5474[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetUnlockInfo_displayName;                // 0x38(0x18)(None)
	class FText                                  CallFunc_GetUnlockInfo_description;                // 0x50(0x18)(None)
	bool                                         CallFunc_GetUnlockInfo_isSecret;                   // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5475[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetUnlockInfo_icon;                       // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetUnlockInfo_unlockKey;                  // 0x78(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetUnlockInfo_unlockCategory;             // 0x80(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FQtnUnlockRewards                     CallFunc_GetUnlockInfo_unlockRewards;              // 0x88(0x38)(None)
	class FText                                  CallFunc_GetUnlockInfo_rewardName;                 // 0xC0(0x18)(None)
	TSubclassOf<class UQtnDLCInfo>               CallFunc_GetUnlockInfo_requiredDLC;                // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetUnlockProgress_ClientOnly_isUnlocked;  // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5476[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetUnlockProgress_ClientOnly_numOccurrences; // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetUnlockProgress_ClientOnly_targetOccurrences; // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5477[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IQtnUnlockListEntry_BPI_C> K2Node_DynamicCast_AsQtn_Unlock_List_Entry_BPI;    // 0xF0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.CallHovered__DelegateSignature
struct UUnlockLineItem_Widget_C_CallHovered__DelegateSignature_Params
{
public:
	bool                                         Focused;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


