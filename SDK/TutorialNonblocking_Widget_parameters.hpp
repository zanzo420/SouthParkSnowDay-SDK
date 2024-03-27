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

// 0x4 (0x4 - 0x0)
// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.Completed_8F17F3684A421FB3434656A4F07EE6A9
struct UTutorialNonblocking_Widget_C_Completed_8F17F3684A421FB3434656A4F07EE6A9_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.Tick_8F17F3684A421FB3434656A4F07EE6A9
struct UTutorialNonblocking_Widget_C_Tick_8F17F3684A421FB3434656A4F07EE6A9_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.SetupFromTutorialInstanceData
struct UTutorialNonblocking_Widget_C_SetupFromTutorialInstanceData_Params
{
public:
	struct FQtnTutorialInstanceData              InstanceData;                                      // 0x0(0xF8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xF8 (0xF8 - 0x0)
// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.OnTutorialStateChangeEvent
struct UTutorialNonblocking_Widget_C_OnTutorialStateChangeEvent_Params
{
public:
	struct FQtnTutorialInstanceData              InstanceData;                                      // 0x0(0xF8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xF8 (0xF8 - 0x0)
// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.OnTutorialSubGoalChangeEvent
struct UTutorialNonblocking_Widget_C_OnTutorialSubGoalChangeEvent_Params
{
public:
	struct FQtnTutorialInstanceData              InstanceData;                                      // 0x0(0xF8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x170 (0x170 - 0x0)
// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.AddSubGoalWidget
struct UTutorialNonblocking_Widget_C_AddSubGoalWidget_Params
{
public:
	struct FQtnTutorialInstanceData              TutorialInst;                                      // 0x0(0xF8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FQtnTutorialSubAction                 SubGoal;                                           // 0xF8(0x78)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x6B9 (0x6B9 - 0x0)
// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.ExecuteUbergraph_TutorialNonblocking_Widget
struct UTutorialNonblocking_Widget_C_ExecuteUbergraph_TutorialNonblocking_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7089[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnTutorial*                          CallFunc_GetQtnTutorialObject_ReturnValue;         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  CallFunc_GetTutorialGoalText_OutTitle;             // 0x20(0x18)(None)
	class FText                                  CallFunc_GetTutorialGoalText_OutMessage;           // 0x38(0x18)(None)
	float                                        K2Node_CustomEvent_Value_1;                        // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Value;                          // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x58(0x10)(ZeroConstructor, NoDestructor)
	float                                        Temp_float_Variable;                               // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x70(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_708B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_708C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnTutorialInstanceData              K2Node_CustomEvent_InstanceData_2;                 // 0xA8(0xF8)(None)
	struct FQtnTutorialInstanceData              K2Node_CustomEvent_InstanceData_1;                 // 0x1A0(0xF8)(None)
	TArray<struct FQtnTutorialSubAction>         CallFunc_Map_Values_Values;                        // 0x298(0x10)(ReferenceParm)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_708D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnTutorialSubAction                 CallFunc_Array_Get_Item;                           // 0x2B0(0x78)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_708E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x32C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x331(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_708F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnTutorial*                          CallFunc_GetQtnTutorialObject_ReturnValue_1;       // 0x338(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetTutorialGoalText_OutTitle_1;           // 0x340(0x18)(None)
	class FText                                  CallFunc_GetTutorialGoalText_OutMessage_1;         // 0x358(0x18)(None)
	struct FQtnTutorialInstanceData              K2Node_CustomEvent_InstanceData;                   // 0x370(0xF8)(None)
	TArray<struct FQtnTutorialSubAction>         CallFunc_Map_Values_Values_1;                      // 0x468(0x10)(ReferenceParm)
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x480(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x488(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7090[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x490(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x4AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7091[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTutorialLine_Widget_C*                CallFunc_Map_Find_Value;                           // 0x4B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7092[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnTutorialInstanceData              K2Node_CustomEvent_TutorialInst;                   // 0x4C0(0xF8)(None)
	struct FQtnTutorialSubAction                 K2Node_CustomEvent_SubGoal;                        // 0x5B8(0x78)(None)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetTutorialSubGoalText_OutTitle;          // 0x638(0x18)(None)
	class FText                                  CallFunc_GetTutorialSubGoalText_OutMessage;        // 0x650(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x668(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x678(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialLine_Widget_C*                CallFunc_Create_ReturnValue;                       // 0x680(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x688(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7093[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x690(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDelegateHandleBlueprint              Temp_struct_Variable;                              // 0x698(0x8)(NoDestructor)
	class UTutorialLine_Widget_C*                CallFunc_Array_Get_Item_2;                         // 0x6A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnAsyncInterpolateValueRealtime*     CallFunc_AsyncInterpolateValueRealtime_ReturnValue; // 0x6A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x6B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7094[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x6B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x6B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function TutorialNonblocking_Widget.TutorialNonblocking_Widget_C.RequestClosure__DelegateSignature
struct UTutorialNonblocking_Widget_C_RequestClosure__DelegateSignature_Params
{
public:
	class UTutorialNonblocking_Widget_C*         SelfReference;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


