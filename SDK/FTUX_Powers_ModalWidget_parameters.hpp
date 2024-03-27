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

// 0x10 (0x10 - 0x0)
// Function FTUX_Powers_ModalWidget.FTUX_Powers_ModalWidget_C.SetupImage
struct UFTUX_Powers_ModalWidget_C_SetupImage_Params
{
public:
	class AQtnPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFTUX_Powers_Image_C*                  CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F0 (0x1F0 - 0x0)
// Function FTUX_Powers_ModalWidget.FTUX_Powers_ModalWidget_C.OnKeyDown
struct UFTUX_Powers_ModalWidget_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	class AQtnPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetUserIndex_ReturnValue;                 // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x138(0xB8)(None)
};

// 0x1 (0x1 - 0x0)
// Function FTUX_Powers_ModalWidget.FTUX_Powers_ModalWidget_C.OnUIScreenActionPressed
struct UFTUX_Powers_ModalWidget_C_OnUIScreenActionPressed_Params
{
public:
	enum class EQtnUIScreenActionEnum            ScreenAction;                                      // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function FTUX_Powers_ModalWidget.FTUX_Powers_ModalWidget_C.OnUIBodyActionPressed
struct UFTUX_Powers_ModalWidget_C_OnUIBodyActionPressed_Params
{
public:
	enum class EQtnUIBodyActionEnum              BodyAction;                                        // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FTUX_Powers_ModalWidget.FTUX_Powers_ModalWidget_C.OnQtnWidgetTicked
struct UFTUX_Powers_ModalWidget_C_OnQtnWidgetTicked_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function FTUX_Powers_ModalWidget.FTUX_Powers_ModalWidget_C.OnInputChange
struct UFTUX_Powers_ModalWidget_C_OnInputChange_Params
{
public:
	bool                                         IsUsingMouseAndKeyboard;                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function FTUX_Powers_ModalWidget.FTUX_Powers_ModalWidget_C.OnUIScroll
struct UFTUX_Powers_ModalWidget_C_OnUIScroll_Params
{
public:
	float                                        ScrollDelta;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FromStick;                                         // 0x4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function FTUX_Powers_ModalWidget.FTUX_Powers_ModalWidget_C.OnQtnWidgetResumed
struct UFTUX_Powers_ModalWidget_C_OnQtnWidgetResumed_Params
{
public:
	class UQtnScreen*                            PreviousScreen;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x86 (0x86 - 0x0)
// Function FTUX_Powers_ModalWidget.FTUX_Powers_ModalWidget_C.ExecuteUbergraph_FTUX_Powers_ModalWidget
struct UFTUX_Powers_ModalWidget_C_ExecuteUbergraph_FTUX_Powers_ModalWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_36F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetCurrentFocusedWidget_ReturnValue;      // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EQtnUIScreenActionEnum            K2Node_Event_screenAction;                         // 0x40(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EQtnUIBodyActionEnum              K2Node_Event_bodyAction;                           // 0x42(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingMouseAndKeyboard_ReturnValue;      // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1;    // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnScreen*                            CallFunc_GetOwningScreen_ReturnValue;              // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPlayerUI*                          CallFunc_GetOwningPlayerUI_ReturnValue;            // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_isUsingMouseAndKeyboard;        // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2;    // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3;    // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4;    // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_scrollDelta;                          // 0x64(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_fromStick;                            // 0x68(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnScreen*                            K2Node_Event_previousScreen;                       // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetRightStickInput_ReturnValue;           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsNearlyZero2D_ReturnValue;               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingMouseAndKeyboard_ReturnValue_5;    // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingMouseAndKeyboard_ReturnValue_6;    // 0x83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


