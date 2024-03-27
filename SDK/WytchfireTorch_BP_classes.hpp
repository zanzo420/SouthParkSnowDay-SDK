#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x4E0 - 0x488)
// BlueprintGeneratedClass WytchfireTorch_BP.WytchfireTorch_BP_C
class AWytchfireTorch_BP_C : public AWytchfireBrazier_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x488(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        FlareUp_FlareUp_ED12308D418BEFE53E37E6A54798E99A;  // 0x490(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FlareUp__Direction_ED12308D418BEFE53E37E6A54798E99A; // 0x494(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_792[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FlareUp;                                           // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHighlighted;                                     // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_795[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnFXActor*                           OverlayFX;                                         // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Intensity;                                         // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_799[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnGoal_DT_Act3_FOS_Wytchfire_C*      WytchfireGoal;                                     // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GoalReady;                                         // 0x4C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_79B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DI_TorchMaterial;                                  // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bindingSetupPending;                               // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_79C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          Local_Occupied_Body_Pawn;                          // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AWytchfireTorch_BP_C* GetDefaultObj();

	void OnRep_GoalReady();
	void GetWytchfireGoal(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_Downtown_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown, bool K2Node_DynamicCast_bSuccess, class UQtnGoal_DT_Act3_FOS_Wytchfire_C* K2Node_DynamicCast_AsQtn_Goal_DT_Act_3_FOS_Wytchfire, bool K2Node_DynamicCast_bSuccess_1, class UQtnGoal_DT_Act3_FOS_Wytchfire_C* K2Node_DynamicCast_AsQtn_Goal_DT_Act_3_FOS_Wytchfire_1, bool K2Node_DynamicCast_bSuccess_2);
	void UpdateLitStatus();
	void LOCAL_Update_Toggle_Vis(bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void FlareUp__FinishedFunc();
	void FlareUp__UpdateFunc();
	void REceivedEffect(class UQtnStatusEffect* StatusEffect);
	void EffectRemoved(class UQtnStatusEffect* StatusEffect);
	void SetUpBindings();
	void LitRemoveEffect();
	void LightFlame();
	void ReceiveBeginPlay();
	void DEBUGONLY_DevChangeFeat(class UQtnGoalManager_Downtown_C* Goal_manager);
	void FeatsUpdated();
	void bindGoalReadyEvent();
	void StartObjectiveHighlight();
	void QtnReadyForGameplayEvent_Event_0(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI, class AQtnBodyPawn* LocalOccupiedBodyPawn);
	void ExecuteUbergraph_WytchfireTorch_BP(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UQtnStatusEffect* K2Node_CustomEvent_statusEffect_1, class UStatusEffect_Wytchfire_C* K2Node_DynamicCast_AsStatus_Effect_Wytchfire, bool K2Node_DynamicCast_bSuccess, class UQtnStatusEffect* K2Node_CustomEvent_statusEffect, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UStatusEffect_Wytchfire_C* K2Node_DynamicCast_AsStatus_Effect_Wytchfire_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager_Downtown_C* K2Node_CustomEvent_goal_manager, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_4, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerController* K2Node_CustomEvent_localPlayerController, class AQtnPlayerUI* K2Node_CustomEvent_localPlayerUI, class AQtnBodyPawn* K2Node_CustomEvent_localOccupiedBodyPawn);
};

}


