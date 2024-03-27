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

// 0x1B0 (0x1B0 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.OnFocusReceived
struct UUI_BullshitCard_Widget_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)(None)
};

// 0x468 (0x468 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.RefreshCardData
struct UUI_BullshitCard_Widget_C_RefreshCardData_Params
{
public:
	struct FQtnUpgradeSettings                   UpgradeSettings;                                   // 0x0(0x1F8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FQtnRolledUpgradeData                 UpgradeRolledData;                                 // 0x1F8(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass*                                EnemyBullshitBPBase;                               // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtn_CheatVerb_Archetype_C*            PlayerBullshitVerbArchetype;                       // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceRolledDataUpdate;                             // 0x268(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x269(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x26A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F9B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnUpgradeSettings                   CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings; // 0x270(0x1F8)(None)
};

// 0x2 (0x2 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.SetBoolIsBullshit
struct UUI_BullshitCard_Widget_C_SetBoolIsBullshit_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.UpgradeRefreshLevel
struct UUI_BullshitCard_Widget_C_UpgradeRefreshLevel_Params
{
public:
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x0(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.SetCardName
struct UUI_BullshitCard_Widget_C_SetCardName_Params
{
public:
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FA2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnBullshitBPBaseArchetype_C*         CallFunc_GetBullshitArchetype_ReturnValue;         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x228 (0x228 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Set Description Text
struct UUI_BullshitCard_Widget_C_Set_Description_Text_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FAA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnBullshitBPBaseArchetype_C*         CallFunc_GetBullshitArchetype_ReturnValue;         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x10(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x50(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0xA0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB0(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0xC8(0x18)(None)
	class FText                                  CallFunc_Format_Upgrade_Value_OutFormattedValue;   // 0xE0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0xF8(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Format_Upgrade_Value_OutFormattedValue_1; // 0x138(0x18)(None)
	class FText                                  CallFunc_Format_Upgrade_Value_OutFormattedValue_2; // 0x150(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x168(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x1A8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x1E8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x1F8(0x18)(None)
	class FText                                  CallFunc_DecorateWithRichTextStyle_ReturnValue;    // 0x210(0x18)(None)
};

// 0x419 (0x419 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Refresh Bullshit or Upgrade UI
struct UUI_BullshitCard_Widget_C_Refresh_Bullshit_or_Upgrade_UI_Params
{
public:
	class UObject*                               LOCAL_Font_Meanwhile;                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               LOCAL_Font_PermanentMarker;                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               LOCAL_Font_Schoolbell;                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm)
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x28(0x10)(NoDestructor)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x38(0x18)(None)
	struct FAnchors                              K2Node_MakeStruct_Anchors_1;                       // 0x50(0x10)(NoDestructor)
	struct FAnchors                              K2Node_MakeStruct_Anchors_2;                       // 0x60(0x10)(NoDestructor)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x70(0x10)(ReferenceParm)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x80(0x28)(None)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0xA8(0x18)(None)
	struct FAnchors                              K2Node_MakeStruct_Anchors_3;                       // 0xC0(0x10)(NoDestructor)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0xD0(0x28)(None)
	class UCanvasPanelSlot*                      CallFunc_GetCanvasPanelSlot_ReturnValue;           // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              K2Node_MakeStruct_Anchors_4;                       // 0x100(0x10)(NoDestructor)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x110(0x28)(None)
	class UCanvasPanelSlot*                      CallFunc_GetCanvasPanelSlot_ReturnValue_1;         // 0x138(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_GetCanvasPanelSlot_ReturnValue_2;         // 0x140(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScaleBoxSlot*                         CallFunc_SlotAsScaleBoxSlot_ReturnValue;           // 0x148(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_GetCanvasPanelSlot_ReturnValue_3;         // 0x150(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScaleBoxSlot*                         CallFunc_SlotAsScaleBoxSlot_ReturnValue_1;         // 0x158(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x160(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x178(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x190(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1A8(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x1E8(0x18)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_3;            // 0x208(0x18)(None)
	struct FAnchors                              K2Node_MakeStruct_Anchors_5;                       // 0x220(0x10)(NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x238(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x250(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x290(0x10)(ReferenceParm)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x2A8(0x18)(None)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x2C0(0x58)(HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_GetCanvasPanelSlot_ReturnValue_4;         // 0x318(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_GetCanvasPanelSlot_ReturnValue_5;         // 0x320(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_1;                 // 0x328(0x58)(HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_2;                 // 0x380(0x58)(HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_4;            // 0x3D8(0x18)(None)
	class UMaterialInstance*                     CallFunc_Map_Find_Value;                           // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Map_Find_Value_1;                         // 0x400(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Show or Hide Level UI
struct UUI_BullshitCard_Widget_C_Show_or_Hide_Level_UI_Params
{
public:
	bool                                         Show_;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x378 (0x378 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.MakeEnemyBullshitCard
struct UUI_BullshitCard_Widget_C_MakeEnemyBullshitCard_Params
{
public:
	class UClass*                                EnemyBullshitBPBase;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnBullshitBPBaseArchetype_C*         CallFunc_GetBullshitArchetype_ReturnValue;         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x10(0x28)(UObjectWrapper, HasGetValueTypeHash)
	struct FUI_Card_Struct                       K2Node_MakeStruct_UI_Card_Struct;                  // 0x38(0x340)(HasGetValueTypeHash)
};

// 0x370 (0x370 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.MakePlayerBullshitCard
struct UUI_BullshitCard_Widget_C_MakePlayerBullshitCard_Params
{
public:
	class UQtn_CheatVerb_Archetype_C*            As_Qtn_Cheat_Verb_Archetype;                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	struct FUI_Card_Struct                       K2Node_MakeStruct_UI_Card_Struct;                  // 0x30(0x340)(HasGetValueTypeHash)
};

// 0xBF8 (0xBF8 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Make Large Upgrade Card
struct UUI_BullshitCard_Widget_C_Make_Large_Upgrade_Card_Params
{
public:
	struct FQtnUpgradeSettings                   UpgradeSettings;                                   // 0x0(0x1F8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         IsPlayerCard;                                      // 0x1F8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FCA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnRolledUpgradeData                 QtnRolledUpgradeData;                              // 0x200(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         IsRulebook;                                        // 0x260(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LOCAL_Rulebook;                                    // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FCD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTexture2D*>                    LOCAL_RarityTextures;                              // 0x268(0x10)(Edit, BlueprintVisible)
	TArray<struct FGameplayTag>                  Local_RarityTags;                                  // 0x278(0x10)(Edit, BlueprintVisible)
	TArray<struct FLinearColor>                  LOCAL_RarityColors;                                // 0x288(0x10)(Edit, BlueprintVisible)
	TMap<struct FGameplayTag, class FText>       LOCAL_TagToText;                                   // 0x298(0x50)(Edit, BlueprintVisible)
	struct FQtnRolledUpgradeData                 LOCAL_RolledUpgradeData;                           // 0x2E8(0x60)(Edit, BlueprintVisible)
	TArray<class UTexture2D*>                    K2Node_MakeArray_Array;                            // 0x348(0x10)(ReferenceParm)
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array_1;                          // 0x358(0x10)(ReferenceParm)
	struct FQtnRolledUpgradeData                 K2Node_MakeStruct_QtnRolledUpgradeData;            // 0x368(0x60)(None)
	class UTexture2D*                            Temp_object_Variable;                              // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable_1;                            // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FD5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default;                             // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x3E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetTagName_ReturnValue;                   // 0x3EC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FD6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_Array_Get_Item;                           // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x400(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_RightChop_ReturnValue;                    // 0x410(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_Upgrade_Value_OutFormattedValue;   // 0x420(0x18)(None)
	class FString                                CallFunc_ToUpper_ReturnValue;                      // 0x438(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x448(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x488(0x18)(None)
	class FText                                  CallFunc_Format_Upgrade_Value_OutFormattedValue_1; // 0x4A0(0x18)(None)
	class FText                                  CallFunc_Format_Upgrade_Value_OutFormattedValue_2; // 0x4B8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x4D0(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x510(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x550(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x560(0x18)(None)
	struct FUI_Card_Struct                       K2Node_MakeStruct_UI_Card_Struct;                  // 0x578(0x340)(HasGetValueTypeHash)
	struct FUI_Card_Struct                       K2Node_MakeStruct_UI_Card_Struct_1;                // 0x8B8(0x340)(HasGetValueTypeHash)
};

// 0x2A8 (0x2A8 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Format Upgrade Value
struct UUI_BullshitCard_Widget_C_Format_Upgrade_Value_Params
{
public:
	struct FQtnUpgradeSettings                   UpgradeSettings;                                   // 0x0(0x1F8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQtnRolledUpgradeData                 RolledData;                                        // 0x1F8(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Index;                                             // 0x258(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OutFormattedValue;                                 // 0x260(0x18)(Parm, OutParm)
	TSubclassOf<class UQtnUpgrade>               CallFunc_SyncLoadUpgradeClass_ReturnValue;         // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FDF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnUpgrade*                           CallFunc_GetClassDefaultObject_ReturnValue;        // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetFormattedValueAtIndex_ReturnValue;     // 0x290(0x18)(None)
};

// 0x198 (0x198 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.SetupRarity
struct UUI_BullshitCard_Widget_C_SetupRarity_Params
{
public:
	TArray<struct FLinearColor>                  RarityColors;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          RarityTag;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CardBackgroundColor;                               // 0x18(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           RarityFontColor;                                   // 0x28(0x28)(Parm, OutParm)
	class FText                                  RarityText;                                        // 0x50(0x18)(Parm, OutParm)
	TMap<struct FGameplayTag, class FText>       LOCAL_TagToText;                                   // 0x68(0x50)(Edit, BlueprintVisible)
	TArray<struct FLinearColor>                  LOCAL_RarityColors;                                // 0xB8(0x10)(Edit, BlueprintVisible)
	TMap<struct FGameplayTag, class FText>       K2Node_MakeVariable_MakeVariableOutput;            // 0xC8(0x50)(None)
	class FText                                  CallFunc_Map_Find_Value;                           // 0x118(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FE4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  CallFunc_Map_Keys_Keys;                            // 0x138(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue;    // 0x14C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue_1;  // 0x15C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x170(0x28)(None)
};

// 0x4 (0x4 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Completed_AC5FDFB141F9139C793A92BB4FC57312
struct UUI_BullshitCard_Widget_C_Completed_AC5FDFB141F9139C793A92BB4FC57312_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Tick_AC5FDFB141F9139C793A92BB4FC57312
struct UUI_BullshitCard_Widget_C_Tick_AC5FDFB141F9139C793A92BB4FC57312_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Completed_0D26863247C9819588D18CBD1872098B
struct UUI_BullshitCard_Widget_C_Completed_0D26863247C9819588D18CBD1872098B_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.Tick_0D26863247C9819588D18CBD1872098B
struct UUI_BullshitCard_Widget_C_Tick_0D26863247C9819588D18CBD1872098B_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.OnLoaded_0F3DFB2242E371AF419BF1A6568BA1D6
struct UUI_BullshitCard_Widget_C_OnLoaded_0F3DFB2242E371AF419BF1A6568BA1D6_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.OnLoaded_CDC6644B4E04A754AAE771B663141047
struct UUI_BullshitCard_Widget_C_OnLoaded_CDC6644B4E04A754AAE771B663141047_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.AnimSeq_Hover
struct UUI_BullshitCard_Widget_C_AnimSeq_Hover_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x340 (0x340 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.MakeCardFromStruct
struct UUI_BullshitCard_Widget_C_MakeCardFromStruct_Params
{
public:
	struct FUI_Card_Struct                       MyCardInfo;                                        // 0x0(0x340)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.PreConstruct
struct UUI_BullshitCard_Widget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x488 (0x488 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.ExecuteUbergraph_UI_BullshitCard_Widget
struct UUI_BullshitCard_Widget_C_ExecuteUbergraph_UI_BullshitCard_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Value_1;                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	float                                        K2Node_CustomEvent_Value;                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x24(0x10)(ZeroConstructor, NoDestructor)
	float                                        Temp_float_Variable_1;                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded_1;                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FFA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_1;                            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D_1;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FFC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetIconForUI_ReturnValue;                 // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnBullshitBPBaseArchetype_C*         CallFunc_GetBullshitArchetype_ReturnValue;         // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FFD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x8C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x9E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_IsHovered;                      // 0x9F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        K2Node_CustomEvent_Value_2;                        // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FFE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable_2;               // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FFF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Ease_ReturnValue;                         // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5000[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnAsyncInterpolateValueRealtime*     CallFunc_AsyncInterpolateValueRealtime_ReturnValue; // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnAsyncInterpolateValueRealtime*     CallFunc_AsyncInterpolateValueRealtime_ReturnValue_1; // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5001[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUI_Card_Struct                       K2Node_CustomEvent_MyCardInfo;                     // 0xE8(0x340)(HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x431(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5002[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x434(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_5003[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Value_3;                        // 0x450(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_2;                     // 0x454(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5004[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_3;         // 0x458(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x460(0x10)(ZeroConstructor, NoDestructor)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_4;         // 0x470(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5005[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_5;         // 0x480(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.CardButtonPressed__DelegateSignature
struct UUI_BullshitCard_Widget_C_CardButtonPressed__DelegateSignature_Params
{
public:
	bool                                         Pressed_;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x348 (0x348 - 0x0)
// Function UI_BullshitCard_Widget.UI_BullshitCard_Widget_C.CardButtonHovered__DelegateSignature
struct UUI_BullshitCard_Widget_C_CardButtonHovered__DelegateSignature_Params
{
public:
	bool                                         Hovered_;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5006[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HoveredIndex;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUI_Card_Struct                       CardInfo;                                          // 0x8(0x340)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}
}


