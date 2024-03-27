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

// 0x58 (0x58 - 0x0)
// Function BullshitCheatDoOver.BullshitCheatDoOver_C.OnDebugDisplay
struct UBullshitCheatDoOver_C_OnDebugDisplay_Params
{
public:
	class UQtnDebugWrapper*                      DebugWrapper;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function BullshitCheatDoOver.BullshitCheatDoOver_C.KillSelf_ServerOnly
struct UBullshitCheatDoOver_C_KillSelf_ServerOnly_Params
{
public:
	class AQtnBodyPawn*                          CallFunc_GetAffectedBody_ReturnValue;              // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnDamageReceptorComponent*           CallFunc_GetDamageReceptor_ReturnValue;            // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetHealth_health;                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetHealth_maxHealth;                      // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDamageInfo                        K2Node_MakeStruct_QtnDamageInfo;                   // 0x18(0x88)(ContainsInstancedReference)
};

// 0x119 (0x119 - 0x0)
// Function BullshitCheatDoOver.BullshitCheatDoOver_C.PlayReviveAnimation_ServerOnly
struct UBullshitCheatDoOver_C_PlayReviveAnimation_ServerOnly_Params
{
public:
	struct FQtnPawnMontage                       FromBellyMontage;                                  // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FQtnPawnMontage                       FromBackMontage;                                   // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor)
	TArray<class AQtnBodyPawn*>                  CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies;  // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	class AQtnBodyPawn*                          CallFunc_Array_Random_OutItem;                     // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Random_OutIndex;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       K2Node_MakeStruct_QtnPawnMontage;                  // 0x40(0x10)(NoDestructor)
	struct FQtnActionIntention                   K2Node_MakeStruct_QtnActionIntention;              // 0x50(0x28)(NoDestructor)
	class AQtnBodyPawn*                          CallFunc_GetAffectedBody_ReturnValue;              // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnActionIntention                   K2Node_MakeStruct_QtnActionIntention_1;            // 0x80(0x28)(NoDestructor)
	enum class EQtnOutputYesNoEnum               CallFunc_IsObjectOfType_outputPin;                 // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C86[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       K2Node_MakeStruct_QtnPawnMontage_1;                // 0xB0(0x10)(NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          CallFunc_GetAffectedBody_ReturnValue_1;            // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnPawnMontage                       K2Node_MakeStruct_QtnPawnMontage_2;                // 0xD0(0x10)(NoDestructor)
	class AQtnBodyController*                    CallFunc_GetBodyController_ReturnValue;            // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyController*                    CallFunc_GetBodyController_ReturnValue_1;          // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0xF0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnPawnMontage                       K2Node_MakeStruct_QtnPawnMontage_3;                // 0x108(0x10)(NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BullshitCheatDoOver.BullshitCheatDoOver_C.OnStatusEffectEnd
struct UBullshitCheatDoOver_C_OnStatusEffectEnd_Params
{
public:
	class AActor*                                AffectedActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPawn*                              Instigator;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActorBeingDestroyed;                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BullshitCheatDoOver.BullshitCheatDoOver_C.OnStatusEffectTick
struct UBullshitCheatDoOver_C_OnStatusEffectTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BullshitCheatDoOver.BullshitCheatDoOver_C.OnStatusEffectBegin
struct UBullshitCheatDoOver_C_OnStatusEffectBegin_Params
{
public:
	class AActor*                                AffectedActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPawn*                              Instigator;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x104 (0x104 - 0x0)
// Function BullshitCheatDoOver.BullshitCheatDoOver_C.ExecuteUbergraph_BullshitCheatDoOver
struct UBullshitCheatDoOver_C_ExecuteUbergraph_BullshitCheatDoOver_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C88[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_affectedActor;                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPawn*                              K2Node_Event_instigator;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C89[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          K2Node_DynamicCast_AsQtn_Body_Pawn;                // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnGameState*                         CallFunc_GetQtnGameState_ReturnValue;              // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnGameStateArchetype_C*              K2Node_DynamicCast_AsQtn_Game_State_Archetype;     // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFTUXDataBag_C*                        CallFunc_GetLocalProgressDataBag_ReturnValue;      // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnReplicatedSaveData                CallFunc_GetReplicatedEnemyBSSaveData_ServerOnly_combinedReplicatedSaveData; // 0x50(0x2C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnGameState*                         CallFunc_GetQtnGameState_ReturnValue_1;            // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnGameStateArchetype_C*              K2Node_DynamicCast_AsQtn_Game_State_Archetype_1;   // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_2;                   // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          CallFunc_GetAffectedBody_ReturnValue;              // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDead_canBeRevived;                      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDead_ReturnValue;                       // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyController*                    CallFunc_GetBodyController_ReturnValue;            // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInActiveCombatPursuit_ReturnValue;      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnPathFollowingComponent*            CallFunc_GetQtnPathFollowingComponent_ReturnValue; // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_HasPathfindingFailed_elapsedTime;         // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasPathfindingFailed_ReturnValue;         // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0xCD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C91[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C92[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_affectedActor_1;                      // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPawn*                              K2Node_Event_instigator_1;                         // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_isActorBeingDestroyed;                // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C93[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          K2Node_DynamicCast_AsQtn_Body_Pawn_1;              // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C94[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


