#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEF (0x360 - 0x271)
// BlueprintGeneratedClass QtnAIJob_IgnorePerceptionZone.QtnAIJob_IgnorePerceptionZone_C
class AQtnAIJob_IgnorePerceptionZone_C : public AQtnAIJobActorBase_C
{
public:
	uint8                                        Pad_7454[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnAIJobComponent_TetherZone_C*       QtnAIJobComponent_TetherZone;                      // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnAIJobComponent*                    AI_Jobs_Component;                                 // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Players_Found;                                     // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7455[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Max_Tethered_Actors;                               // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Auto_Employment_Range;                             // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7456[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnAIJobFilter                       Job_Filter;                                        // 0x2C0(0x50)(Edit, BlueprintVisible)
	enum class EQtnSalaryTier                    Salary_Tier;                                       // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7457[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Tether_Inner_Radius;                               // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tether_Outer_Radius;                               // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tether_Zone_Priority;                              // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class AQtnPatrolRoute>        PatrolRoute;                                       // 0x320(0x28)(Edit, BlueprintVisible, DisableEditOnTemplate, InstancedReference, HasGetValueTypeHash)
	bool                                         CreateAmbientJobs;                                 // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7458[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AQtnBodyController*>            EmployedAIControllers;                             // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AQtnAIJob_IgnorePerceptionZone_C* GetDefaultObj();

	void SetJobVisibility(bool WantVisible, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AQtnPatrolRoute* K2Node_DynamicCast_AsQtn_Patrol_Route, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlayingInEditor_ReturnValue, class AQtnWaypoint* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, class UArrowComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Initialize_Roles(class UQtnAIJobCluster* Combat_Job_Cluster, class UQtnAIJobCluster* Ambient_Job_Cluster, int32 Temp_int_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQtnAIJobRoleDefinition& K2Node_MakeStruct_QtnAIJobRoleDefinition, int32 Temp_int_Variable_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UQtnAIJobRole* CallFunc_AddJobRole_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FQtnAIJobRoleDefinition& K2Node_MakeStruct_QtnAIJobRoleDefinition_1, class UQtnAIJobRole* CallFunc_AddJobRole_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
	void Initialize_Clusters(class UQtnAIJobCluster** Combat_Job_Cluster, class UQtnAIJobCluster** Ambient_Job_Cluster, class UQtnAIJobCluster* AmbientJobCluster, class UQtnAIJobCluster* CombatJobCluster, const struct FQtnAIJobClusterDefinition& K2Node_MakeStruct_QtnAIJobClusterDefinition, const struct FQtnAIJobClusterDefinition& K2Node_MakeStruct_QtnAIJobClusterDefinition_1, class UQtnAIJobCluster* CallFunc_AddJobCluster_ReturnValue, class UQtnAIJobCluster* CallFunc_AddJobCluster_ReturnValue_1);
	void Find_Players_And_Set_Employment(bool CallFunc_Not_PreBool_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void BndEvt__QtnAIJobComponent_TetherZone_K2Node_ComponentBoundEvent_3_QtnAIEmployEvent__DelegateSignature(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob);
	void Server_OpenCloseEmployment(bool Want_employment);
	void ExecuteUbergraph_QtnAIJob_IgnorePerceptionZone(int32 EntryPoint, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, const struct FQtnPerceptionConfig& K2Node_MakeStruct_QtnPerceptionConfig, class UQtnAIJobCluster* CallFunc_Initialize_Clusters_Combat_Job_Cluster, class UQtnAIJobCluster* CallFunc_Initialize_Clusters_Ambient_Job_Cluster, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnAIJobRole* K2Node_ComponentBoundEvent_aiJobRole, class FName K2Node_ComponentBoundEvent_clusterID, class FName K2Node_ComponentBoundEvent_roleID, class AQtnBodyController* K2Node_ComponentBoundEvent_aiController, class UBlackboardComponent* K2Node_ComponentBoundEvent_blackboardComponent, bool K2Node_ComponentBoundEvent_isCombatJob, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AQtnPatrolRoute* K2Node_DynamicCast_AsQtn_Patrol_Route, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlayingInEditor_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class AQtnPatrolRoute* K2Node_DynamicCast_AsQtn_Patrol_Route_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_CustomEvent_want_employment, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, class AQtnBodyController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


