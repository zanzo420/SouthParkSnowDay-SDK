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

// 0x69 (0x69 - 0x0)
// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.GetRelevantHUD
struct AScriptedSkeletalPhoneActor_C_GetRelevantHUD_Params
{
public:
	bool                                         IsPlayerHUD;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AD8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerHUD_C*                          PlayerHUD;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCutsceneHUD_Widget_C*                 CutsceneHUD;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPlayerUI*                          CallFunc_GetLocalPlayerUIBP_localPlayerUI;         // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQtnOutputValidityEnum            CallFunc_GetLocalPlayerUIBP_outputPin;             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AD9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCutsceneHUD_Screen_C*                 CallFunc_GetScreen_ReturnValue;                    // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4ADA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetMainWidget_ReturnValue;                // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerHUDScreen_C*                    CallFunc_GetScreen_ReturnValue_1;                  // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCutsceneHUD_Widget_C*                 K2Node_DynamicCast_AsCutscene_HUD_Widget;          // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4ADB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetMainWidget_ReturnValue_1;              // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerHUD_C*                          K2Node_DynamicCast_AsPlayer_HUD;                   // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.GetVOAmplitude
struct AScriptedSkeletalPhoneActor_C_GetVOAmplitude_Params
{
public:
	float                                        VoAmplitude;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.UserConstructionScript
struct AScriptedSkeletalPhoneActor_C_UserConstructionScript_Params
{
public:
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.ToggleCapture
struct AScriptedSkeletalPhoneActor_C_ToggleCapture_Params
{
public:
	bool                                         On;                                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x15 (0x15 - 0x0)
// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_0_OnVOPlayed__DelegateSignature
struct AScriptedSkeletalPhoneActor_C_BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_0_OnVOPlayed__DelegateSignature_Params
{
public:
	class UCurveFloat*                           FacialAnimCurve;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          AnimMontage;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLeadIn;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         NeedsLeadIn;                                       // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsEmpty;                                           // 0x12(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AutoClosePhone;                                    // 0x13(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ForCutsceneHUD;                                    // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_2_OnVOAudioFinished__DelegateSignature
struct AScriptedSkeletalPhoneActor_C_BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_2_OnVOAudioFinished__DelegateSignature_Params
{
public:
	bool                                         IsEmpty;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_3_OnVOStopped__DelegateSignature
struct AScriptedSkeletalPhoneActor_C_BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_3_OnVOStopped__DelegateSignature_Params
{
public:
	bool                                         IsEmpty;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.BndEvt__ScriptedSkeletalPhoneActor_EnvelopeFollowerListener_K2Node_ComponentBoundEvent_1_OnEnvelopeFollowerUpdate__DelegateSignature
struct AScriptedSkeletalPhoneActor_C_BndEvt__ScriptedSkeletalPhoneActor_EnvelopeFollowerListener_K2Node_ComponentBoundEvent_1_OnEnvelopeFollowerUpdate__DelegateSignature_Params
{
public:
	float                                        EnvelopeValue;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.ExecuteUbergraph_ScriptedSkeletalPhoneActor
struct AScriptedSkeletalPhoneActor_C_ExecuteUbergraph_ScriptedSkeletalPhoneActor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4ADC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           K2Node_ComponentBoundEvent_facialAnimCurve;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_ComponentBoundEvent_animMontage;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_isLeadIn;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_needsLeadIn;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_isEmpty_2;              // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_autoClosePhone;         // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_forCutsceneHUD;         // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_isEmpty_1;              // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_isEmpty;                // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4ADD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                CallFunc_CreateRenderTarget2D_ReturnValue;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_EnvelopeValue;          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRelevantHUD_isPlayerHUD;               // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4ADE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerHUD_C*                          CallFunc_GetRelevantHUD_playerHUD;                 // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCutsceneHUD_Widget_C*                 CallFunc_GetRelevantHUD_cutsceneHUD;               // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRelevantHUD_isPlayerHUD_1;             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4ADF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerHUD_C*                          CallFunc_GetRelevantHUD_playerHUD_1;               // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCutsceneHUD_Widget_C*                 CallFunc_GetRelevantHUD_cutsceneHUD_1;             // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRelevantHUD_isPlayerHUD_2;             // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerHUD_C*                          CallFunc_GetRelevantHUD_playerHUD_2;               // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCutsceneHUD_Widget_C*                 CallFunc_GetRelevantHUD_cutsceneHUD_2;             // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_On;                             // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C.OnVOAmplitudeUpdate__DelegateSignature
struct AScriptedSkeletalPhoneActor_C_OnVOAmplitudeUpdate__DelegateSignature_Params
{
public:
	float                                        VoAmplitude;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


