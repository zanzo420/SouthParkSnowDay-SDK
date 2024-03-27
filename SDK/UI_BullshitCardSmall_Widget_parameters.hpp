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
// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.OnFocusReceived
struct UUI_BullshitCardSmall_Widget_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)(None)
};

// 0x760 (0x760 - 0x0)
// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.MakeEnemyUpgrade
struct UUI_BullshitCardSmall_Widget_C_MakeEnemyUpgrade_Params
{
public:
	struct FQtnUpgradeSettings                   UpgradeSettings;                                   // 0x0(0x1F8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FQtnRolledUpgradeData                 QtnRolledUpgradeData;                              // 0x1F8(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class UClass*>                        RulebookRules;                                     // 0x258(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UTexture2D*>                    LOCAL_RarityTextures;                              // 0x268(0x10)(Edit, BlueprintVisible)
	TArray<class UClass*>                        LOCAL_RulebookRules;                               // 0x278(0x10)(Edit, BlueprintVisible)
	class UTexture2D*                            Temp_object_Variable;                              // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckEnemyUpgradeForRulebook_IsRulebookUpgrade; // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_472C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTexture2D*>                    K2Node_MakeArray_Array;                            // 0x298(0x10)(ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x2A8(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x2C0(0x18)(None)
	class FText                                  CallFunc_Format_Upgrade_Value_OutFormattedValue;   // 0x2D8(0x18)(None)
	class FText                                  CallFunc_Format_Upgrade_Value_OutFormattedValue_1; // 0x2F0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x308(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x348(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Format_Upgrade_Value_OutFormattedValue_2; // 0x388(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x3A0(0x40)(HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable_1;                            // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x3E8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x3F8(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_472D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default;                             // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUI_Card_Struct                       K2Node_MakeStruct_UI_Card_Struct;                  // 0x420(0x340)(HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.CheckEnemyUpgradeForRulebook
struct UUI_BullshitCardSmall_Widget_C_CheckEnemyUpgradeForRulebook_Params
{
public:
	TArray<class UClass*>                        RulebookUpgrades;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         IsRulebookUpgrade;                                 // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_472E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        LOCAL_RulebookUpgrades;                            // 0x18(0x10)(Edit, BlueprintVisible)
	TSubclassOf<class UQtnUpgrade>               CallFunc_SyncLoadUpgradeClass_ReturnValue;         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_472F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x758 (0x758 - 0x0)
// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.MakeEnemyBullshitCard
struct UUI_BullshitCardSmall_Widget_C_MakeEnemyBullshitCard_Params
{
public:
	class UClass*                                EnemyBullshitBPBase;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetClassDisplayName_ReturnValue;          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4730[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)(None)
	class UQtnBullshitBPBaseArchetype_C*         CallFunc_GetBullshitArchetype_ReturnValue;         // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x40(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4731[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x70(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x88(0x18)(None)
	class FText                                  Temp_text_Variable;                                // 0xA0(0x18)(None)
	struct FUI_Card_Struct                       K2Node_MakeStruct_UI_Card_Struct;                  // 0xB8(0x340)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4732[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x400(0x18)(None)
	struct FUI_Card_Struct                       K2Node_MakeStruct_UI_Card_Struct_1;                // 0x418(0x340)(HasGetValueTypeHash)
};

// 0x838 (0x838 - 0x0)
// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.Make Player Upgrade Card
struct UUI_BullshitCardSmall_Widget_C_Make_Player_Upgrade_Card_Params
{
public:
	struct FQtnUpgradeSettings                   UpgradeSettings;                                   // 0x0(0x1F8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FQtnRolledUpgradeData                 QtnRolledUpgradeData;                              // 0x1F8(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class UTexture2D*>                    LOCAL_RarityTextures;                              // 0x258(0x10)(Edit, BlueprintVisible)
	TArray<class UClass*>                        LOCAL_RulebookRules;                               // 0x268(0x10)(Edit, BlueprintVisible)
	TArray<struct FGameplayTag>                  Local_RarityTags;                                  // 0x278(0x10)(Edit, BlueprintVisible)
	TArray<struct FLinearColor>                  LOCAL_RarityColors;                                // 0x288(0x10)(Edit, BlueprintVisible)
	TMap<struct FGameplayTag, class FText>       LOCAL_TagToText;                                   // 0x298(0x50)(Edit, BlueprintVisible)
	struct FQtnRolledUpgradeData                 LOCAL_RolledUpgradeData;                           // 0x2E8(0x60)(Edit, BlueprintVisible)
	TArray<class UTexture2D*>                    K2Node_MakeArray_Array;                            // 0x348(0x10)(ReferenceParm)
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array_1;                          // 0x358(0x10)(ReferenceParm)
	class FName                                  CallFunc_GetTagName_ReturnValue;                   // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4733[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x378(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_Array_Get_Item;                           // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_RightChop_ReturnValue;                    // 0x390(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_ToUpper_ReturnValue;                      // 0x3A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x3B0(0x18)(None)
	class FText                                  CallFunc_Format_Upgrade_Value_OutFormattedValue;   // 0x3C8(0x18)(None)
	class FText                                  CallFunc_Format_Upgrade_Value_OutFormattedValue_1; // 0x3E0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x3F8(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x438(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Format_Upgrade_Value_OutFormattedValue_2; // 0x478(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x490(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x4D0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x4E0(0x18)(None)
	struct FUI_Card_Struct                       K2Node_MakeStruct_UI_Card_Struct;                  // 0x4F8(0x340)(HasGetValueTypeHash)
};

// 0x2A8 (0x2A8 - 0x0)
// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.Format Upgrade Value
struct UUI_BullshitCardSmall_Widget_C_Format_Upgrade_Value_Params
{
public:
	struct FQtnUpgradeSettings                   UpgradeSettings;                                   // 0x0(0x1F8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQtnRolledUpgradeData                 RolledData;                                        // 0x1F8(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Index;                                             // 0x258(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4734[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OutFormattedValue;                                 // 0x260(0x18)(Parm, OutParm)
	TSubclassOf<class UQtnUpgrade>               CallFunc_SyncLoadUpgradeClass_ReturnValue;         // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4735[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnUpgrade*                           CallFunc_GetClassDefaultObject_ReturnValue;        // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetFormattedValueAtIndex_ReturnValue;     // 0x290(0x18)(None)
};

// 0x198 (0x198 - 0x0)
// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.SetupRarity
struct UUI_BullshitCardSmall_Widget_C_SetupRarity_Params
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
	uint8                                        Pad_4736[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  CallFunc_Map_Keys_Keys;                            // 0x138(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue;    // 0x14C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue_1;  // 0x15C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4737[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x170(0x28)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.MakePlayerBullshitCard
struct UUI_BullshitCardSmall_Widget_C_MakePlayerBullshitCard_Params
{
public:
	class UQtn_CheatVerb_Archetype_C*            As_Qtn_Cheat_Verb_Archetype;                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x341 (0x341 - 0x0)
// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.MakeCardFromStruct
struct UUI_BullshitCardSmall_Widget_C_MakeCardFromStruct_Params
{
public:
	struct FUI_Card_Struct                       MyCardInfo;                                        // 0x0(0x340)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         IsRulebook;                                        // 0x340(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x760 (0x760 - 0x0)
// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.ExecuteUbergraph_UI_BullshitCardSmall_Widget
struct UUI_BullshitCardSmall_Widget_C_ExecuteUbergraph_UI_BullshitCardSmall_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4738[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x20(0x18)(None)
	TArray<struct FLinearColor>                  K2Node_MakeArray_Array;                            // 0x38(0x10)(ReferenceParm)
	class UQtn_CheatVerb_Archetype_C*            K2Node_CustomEvent_As_Qtn_Cheat_Verb_Archetype;    // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUI_Card_Struct                       K2Node_CustomEvent_MyCardInfo;                     // 0x50(0x340)(HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsRulebook;                     // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4739[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x398(0x28)(UObjectWrapper, HasGetValueTypeHash)
	struct FUI_Card_Struct                       K2Node_MakeStruct_UI_Card_Struct;                  // 0x3C0(0x340)(HasGetValueTypeHash)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x700(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x708(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_473A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x710(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x718(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_473B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x720(0x18)(None)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue_1;         // 0x738(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D_1;                 // 0x740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_473C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x758(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.CardButtonPressed__DelegateSignature
struct UUI_BullshitCardSmall_Widget_C_CardButtonPressed__DelegateSignature_Params
{
public:
	bool                                         Pressed_;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x348 (0x348 - 0x0)
// Function UI_BullshitCardSmall_Widget.UI_BullshitCardSmall_Widget_C.CardButtonHovered__DelegateSignature
struct UUI_BullshitCardSmall_Widget_C_CardButtonHovered__DelegateSignature_Params
{
public:
	bool                                         Hovered_;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_473D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HoveredIndex;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUI_Card_Struct                       CardInfo;                                          // 0x8(0x340)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}
}


