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

// 0x1 (0x1 - 0x0)
// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.SetSelectionState
struct URadialButtonWidgetArchetype_C_SetSelectionState_Params
{
public:
	bool                                         WasSelected_;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.SetHoveredState
struct URadialButtonWidgetArchetype_C_SetHoveredState_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallHoverEvent;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.BindToRadialCollection
struct URadialButtonWidgetArchetype_C_BindToRadialCollection_Params
{
public:
	class URadialButtonCollection_Widget_C*      OwningCollection;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.SetRadialButtonSelectionState
struct URadialButtonWidgetArchetype_C_SetRadialButtonSelectionState_Params
{
public:
	bool                                         IsSelected_;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallPressedEvent_;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.InitNavWidget
struct URadialButtonWidgetArchetype_C_InitNavWidget_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Index;                                             // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D (0x2D - 0x0)
// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.ExecuteUbergraph_RadialButtonWidgetArchetype
struct URadialButtonWidgetArchetype_C_ExecuteUbergraph_RadialButtonWidgetArchetype_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5310[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_CustomEvent_texture;                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_Text;                           // 0x10(0x18)(None)
	int32                                        K2Node_CustomEvent_index;                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.OnRadialButtonHoverStateChanged__DelegateSignature
struct URadialButtonWidgetArchetype_C_OnRadialButtonHoverStateChanged__DelegateSignature_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5311[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ButtonIndex;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function RadialButtonWidgetArchetype.RadialButtonWidgetArchetype_C.OnRadialButtonPressed__DelegateSignature
struct URadialButtonWidgetArchetype_C_OnRadialButtonPressed__DelegateSignature_Params
{
public:
	int32                                        ButtonIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


