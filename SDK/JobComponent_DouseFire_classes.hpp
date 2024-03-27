#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x3BC - 0x3B0)
// BlueprintGeneratedClass JobComponent_DouseFire.JobComponent_DouseFire_C
class UJobComponent_DouseFire_C : public UQtnAIJobComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        SpeedMultiplier;                                   // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UJobComponent_DouseFire_C* GetDefaultObj();

	bool IsAIJobViable_ServerOnly(class AQtnPawn* Pawn, bool ForInitialAdoption, bool CallFunc_IsAIJobViable_ServerOnly_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class ABodyControllerAI_C* K2Node_DynamicCast_AsBody_Controller_AI, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsWillingToDouseFire_isWilling);
	void ReceiveBeginPlay();
	void OnAIEmployed_Event_0(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob);
	void OnAIUnEmployed_Event_0(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob);
	void ExecuteUbergraph_JobComponent_DouseFire(int32 EntryPoint, const struct FVector& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UQtnAIJobRole* K2Node_CustomEvent_aiJobRole_1, class FName K2Node_CustomEvent_clusterID_1, class FName K2Node_CustomEvent_roleID_1, class AQtnBodyController* K2Node_CustomEvent_aiController_1, class UBlackboardComponent* K2Node_CustomEvent_blackboardComponent_1, bool K2Node_CustomEvent_isCombatJob_1, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IQtnNavHelperInterface> K2Node_DynamicCast_AsQtn_Nav_Helper_Interface, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, const struct FVector& CallFunc_GetNavLocation_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, class UQtnAIJobRole* K2Node_CustomEvent_aiJobRole, class FName K2Node_CustomEvent_clusterID, class FName K2Node_CustomEvent_roleID, class AQtnBodyController* K2Node_CustomEvent_aiController, class UBlackboardComponent* K2Node_CustomEvent_blackboardComponent, bool K2Node_CustomEvent_isCombatJob, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue_1);
};

}


