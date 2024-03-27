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
// Function ControlToRemapWidget.ControlToRemapWidget_C.OnFocusReceived
struct UControlToRemapWidget_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)(None)
};

// 0x90 (0x90 - 0x0)
// Function ControlToRemapWidget.ControlToRemapWidget_C.NameToText
struct UControlToRemapWidget_C_NameToText_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  OutText;                                           // 0x8(0x18)(Parm, OutParm)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(None)
	class FString                                CallFunc_StaticParseInputText_ReturnValue;         // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x78(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlToRemapWidget.ControlToRemapWidget_C.InitControlRemapItem
struct UControlToRemapWidget_C_InitControlRemapItem_Params
{
public:
	struct FQtnRebindableInput                   RebindableInput;                                   // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UControlRemappingWidget_C*             MyRemapWidget;                                     // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ControlToRemapWidget.ControlToRemapWidget_C.SetRemapEnabled
struct UControlToRemapWidget_C_SetRemapEnabled_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ControlToRemapWidget.ControlToRemapWidget_C.PreConstruct
struct UControlToRemapWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD0 (0xD0 - 0x0)
// Function ControlToRemapWidget.ControlToRemapWidget_C.ExecuteUbergraph_ControlToRemapWidget
struct UControlToRemapWidget_C_ExecuteUbergraph_ControlToRemapWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnRebindableInput                   K2Node_CustomEvent_RebindableInput;                // 0x8(0x20)(None)
	class UControlRemappingWidget_C*             K2Node_CustomEvent_myRemapWidget;                  // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_NameToText_OutText;                       // 0x30(0x18)(None)
	bool                                         K2Node_CustomEvent_isEnabled;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x50(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	class FText                                  CallFunc_NameToText_OutText_1;                     // 0xA0(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB8(0x18)(None)
};

}
}


