#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x1608 - 0x15D0)
// BlueprintGeneratedClass BodyPawnAIDefensiveEncroacher.BodyPawnAIDefensiveEncroacher_C
class ABodyPawnAIDefensiveEncroacher_C : public ABodyPawnAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       Right;                                             // 0x15D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Left;                                              // 0x15E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       RearGuard;                                         // 0x15E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnAIJobComponent*                    QtnAIJob;                                          // 0x15F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            StringPlucked;                                     // 0x15F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABodyPawnAIDefensiveEncroacher_C* GetDefaultObj();

	void HandleDeath(const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class AQtnPawn* CallFunc_GetLastDamagingCulprit_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue);
	void IsCurrentlyEmployingAnotherEncroacher(bool* Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TArray<class UQtnAIJobRole*>& CallFunc_GetCurrentlyEmployedJobRoles_employedJobRoles, class UQtnAIJobRole* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_GetEmployedBodyPawn_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void Set_Phalanx_Jobs_Enabled(bool WantEnabled, class UQtnAIJobCluster* CallFunc_GetJobCluster_ReturnValue);
	void BndEvt__QtnAIJob_K2Node_ComponentBoundEvent_1_QtnAIEmployEvent__DelegateSignature(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob);
	void BndEvt__QtnAIJob_K2Node_ComponentBoundEvent_0_QtnAIEmployEvent__DelegateSignature(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob);
	void ExecuteUbergraph_BodyPawnAIDefensiveEncroacher(int32 EntryPoint, bool Temp_bool_Variable, class UQtnAIJobRole* K2Node_ComponentBoundEvent_aiJobRole_1, class FName K2Node_ComponentBoundEvent_clusterID_1, class FName K2Node_ComponentBoundEvent_roleID_1, class AQtnBodyController* K2Node_ComponentBoundEvent_aiController_1, class UBlackboardComponent* K2Node_ComponentBoundEvent_blackboardComponent_1, bool K2Node_ComponentBoundEvent_isCombatJob_1, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class ABodyPawnAIDefensiveEncroacher_C* K2Node_DynamicCast_AsBody_Pawn_AIDefensive_Encroacher, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsCurrentlyEmployingAnotherEncroacher_result, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue_1, class UQtnAIJobRole* K2Node_ComponentBoundEvent_aiJobRole, class FName K2Node_ComponentBoundEvent_clusterID, class FName K2Node_ComponentBoundEvent_roleID, class AQtnBodyController* K2Node_ComponentBoundEvent_aiController, class UBlackboardComponent* K2Node_ComponentBoundEvent_blackboardComponent, bool K2Node_ComponentBoundEvent_isCombatJob, bool CallFunc_EqualEqual_NameName_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class ABodyPawnAIDefensiveEncroacher_C* K2Node_DynamicCast_AsBody_Pawn_AIDefensive_Encroacher_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* K2Node_Select_Default);
	void StringPlucked__DelegateSignature();
};

}


