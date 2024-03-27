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

// 0x7C (0x7C - 0x0)
// Function QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C.ShouldPlayCutscenes
struct UQtnGoalManager_HellsPass_C_ShouldPlayCutscenes_Params
{
public:
	bool                                         Play_cutscenes;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EE6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LOCAL_TrialTag;                                    // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentArc_ReturnValue;                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetConsoleVariableBoolValue_ReturnValue;  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlayingInEditor_ReturnValue;            // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EE8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AActor>                    CallFunc_SyncLoadActorClass_ReturnValue;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x28(0x10)(ConstParm, ReferenceParm)
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array_1;                          // 0x38(0x10)(ConstParm, ReferenceParm)
	TArray<class AActor*>                        CallFunc_FindMarkedActors_ServerOnly_foundActors;  // 0x48(0x10)(ReferenceParm)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IInterface_Tribunal_Manager_Actor_C> K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor; // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoGetRunInEditor_runInEditor;             // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EQtnOutputYesNoEnum               CallFunc_IsObjectOfType_outputPin;                 // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C.GetScriptedVOScene
struct UQtnGoalManager_HellsPass_C_GetScriptedVOScene_Params
{
public:
	struct FGameplayTag                          ScriptedVOScene;                                   // 0x0(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C.Roll Day Toggle Setup
struct UQtnGoalManager_HellsPass_C_Roll_Day_Toggle_Setup_Params
{
public:
	class UQtnGoal*                              CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue;     // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C.DEBUGONLY_ForceSpokes
struct UQtnGoalManager_HellsPass_C_DEBUGONLY_ForceSpokes_Params
{
public:
	TArray<class FName>                          New_Spokes;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C.DEBUGONLY_ForceCharacterEncounter
struct UQtnGoalManager_HellsPass_C_DEBUGONLY_ForceCharacterEncounter_Params
{
public:
	class FString                                Selection;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C.DEBUGONLY_ForceAmbush
struct UQtnGoalManager_HellsPass_C_DEBUGONLY_ForceAmbush_Params
{
public:
	class FString                                Selection;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Teleport;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C.ExecuteUbergraph_QtnGoalManager_HellsPass
struct UQtnGoalManager_HellsPass_C_ExecuteUbergraph_QtnGoalManager_HellsPass_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentArc_ReturnValue;                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldPlayCutscenes_play_cutscenes;       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F15[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnGoal*                              CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue;     // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              CallFunc_SpawnChildGoal_ServerOnly_ReturnValue;    // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1;  // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2;  // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3;  // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4;  // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5;  // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue_1;   // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6;  // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentArc_ReturnValue_1;              // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnGoal*                              CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7;  // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UQtnGoal*                              CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8;  // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UQtnGoal*                              CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_9;  // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


