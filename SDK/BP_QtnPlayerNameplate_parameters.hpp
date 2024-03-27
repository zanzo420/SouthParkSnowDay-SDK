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

// 0x8 (0x8 - 0x0)
// Function BP_QtnPlayerNameplate.BP_QtnPlayerNameplate_C.OnInitializeNameplateWidgetEvent
struct UBP_QtnPlayerNameplate_C_OnInitializeNameplateWidgetEvent_Params
{
public:
	class AQtnPawn*                              Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_QtnPlayerNameplate.BP_QtnPlayerNameplate_C.OnUpdateNameplateScale
struct UBP_QtnPlayerNameplate_C_OnUpdateNameplateScale_Params
{
public:
	float                                        WidgetScale;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_QtnPlayerNameplate.BP_QtnPlayerNameplate_C.OnDisplayNameChanged
struct UBP_QtnPlayerNameplate_C_OnDisplayNameChanged_Params
{
public:
	class FText                                  NewDisplayName;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x80 (0x80 - 0x0)
// Function BP_QtnPlayerNameplate.BP_QtnPlayerNameplate_C.ExecuteUbergraph_BP_QtnPlayerNameplate
struct UBP_QtnPlayerNameplate_C_ExecuteUbergraph_BP_QtnPlayerNameplate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPawn*                              K2Node_Event_Target;                               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_WidgetScale;                          // 0x10(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x18(0x18)(ConstParm)
	class AQtnPlayerPawn*                        CallFunc_GetControllingPlayerPawn_ReturnValue;     // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_780[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPlayerState*                       CallFunc_GetQtnPlayerState_ReturnValue;            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_NewDisplayName;                 // 0x58(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x70(0x10)(ZeroConstructor, NoDestructor)
};

}
}


