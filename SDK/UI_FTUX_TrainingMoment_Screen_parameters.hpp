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

// 0x19 (0x19 - 0x0)
// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.Change Tutorial Viewport Position
struct UUI_FTUX_TrainingMoment_Screen_C_Change_Tutorial_Viewport_Position_Params
{
public:
	bool                                         UseDefaultAndIgnoreOtherInputs;                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnchorMinY;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnchorMaxY;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_70C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_FTUX_Archetype_Widget_C*           CallFunc_GetUserWidget_ReturnValue;                // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.RefreshTutorialWidgets
struct UUI_FTUX_TrainingMoment_Screen_C_RefreshTutorialWidgets_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTutorialLine_Widget_C*                CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.DEPRECATED_TrainingCompleted
struct UUI_FTUX_TrainingMoment_Screen_C_DEPRECATED_TrainingCompleted_Params
{
public:
	TArray<class FString>                        Prompt_string_to_remove;                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.OnScreenResumed
struct UUI_FTUX_TrainingMoment_Screen_C_OnScreenResumed_Params
{
public:
	class UQtnScreen*                            PreviousScreen;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.AddTrainingPrompt
struct UUI_FTUX_TrainingMoment_Screen_C_AddTrainingPrompt_Params
{
public:
	class FString                                Prompt;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Heading;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                  Identity;                                          // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.CloseScreenOnTimer
struct UUI_FTUX_TrainingMoment_Screen_C_CloseScreenOnTimer_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.OnInputUsageChange
struct UUI_FTUX_TrainingMoment_Screen_C_OnInputUsageChange_Params
{
public:
	bool                                         IsUsingMouseAndKeyboard;                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x69 (0x69 - 0x0)
// Function UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C.ExecuteUbergraph_UI_FTUX_TrainingMoment_Screen
struct UUI_FTUX_TrainingMoment_Screen_C_ExecuteUbergraph_UI_FTUX_TrainingMoment_Screen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsScreenActive_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_CustomEvent_Time;                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_70C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_Prompt;                               // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_Heading;                              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_Identity;                             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x48(0x8)(NoDestructor, HasGetValueTypeHash)
	class UQtnScreen*                            K2Node_Event_previousScreen;                       // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_CustomEvent_prompt_string_to_remove;        // 0x58(0x10)(ConstParm, ReferenceParm)
	bool                                         K2Node_Event_isUsingMouseAndKeyboard;              // 0x68(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


