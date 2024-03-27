#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x3F0 - 0x3B0)
// BlueprintGeneratedClass AIFrobJobComponent.AIFrobJobComponent_C
class UAIFrobJobComponent_C : public UQtnAIJobComponentBaseNative
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnFrobbableComponent*                Frobbable;                                         // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForCombat;                                         // 0x3C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_197B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class AQtnPawn>>        AllowedPawnArchetypes;                             // 0x3C8(0x10)(Edit, BlueprintVisible)
	struct FQtnRangedFloat                       AutoEmploymentCooldown;                            // 0x3D8(0x8)(Edit, BlueprintVisible, NoDestructor)
	class UClass*                                JobClusterArchetype;                               // 0x3E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQtnSalaryTier                    SalaryTier;                                        // 0x3E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_197C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoEmploymentRange;                               // 0x3EC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIFrobJobComponent_C* GetDefaultObj();

	void HandleAIEmployed(class UBlackboardComponent*& Blackboard);
	void HandleFrobEnd(class AQtnPawn*& FrobbingPawn, bool CallFunc_IsPlayerControlled_ReturnValue);
	void HandleFrobBegin(class AQtnPawn*& FrobbingPawn, bool CallFunc_IsPlayerControlled_ReturnValue);
	void ReceiveBeginPlay();
	void OnFrobBegin_Event_0(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer);
	void OnFrobEnd_Event_0(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer);
	void OnAIEmployed_Event_0(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob);
	void ExecuteUbergraph_AIFrobJobComponent(int32 EntryPoint, const struct FQtnAIJobFilter& K2Node_MakeStruct_QtnAIJobFilter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class USceneComponent* CallFunc_GetAttachParent_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, class UQtnFrobbableComponent* K2Node_DynamicCast_AsQtn_Frobbable_Component, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UQtnFrobbableComponent* K2Node_CustomEvent_ThisFrobbable_1, class AQtnBodyPawn* K2Node_CustomEvent_FrobbingPawn_1, bool K2Node_CustomEvent_isServer_1, class UQtnFrobbableComponent* K2Node_CustomEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_CustomEvent_FrobbingPawn, bool K2Node_CustomEvent_isServer, class UQtnAIJobRole* K2Node_CustomEvent_aiJobRole, class FName K2Node_CustomEvent_clusterID, class FName K2Node_CustomEvent_roleID, class AQtnBodyController* K2Node_CustomEvent_aiController, class UBlackboardComponent* K2Node_CustomEvent_blackboardComponent, bool K2Node_CustomEvent_isCombatJob, const struct FQtnAIJobRoleDefinition& K2Node_MakeStruct_QtnAIJobRoleDefinition, const struct FQtnAIJobClusterDefinition& K2Node_MakeStruct_QtnAIJobClusterDefinition, class UQtnAIJobCluster* CallFunc_AddJobCluster_ReturnValue, class UQtnAIJobRole* CallFunc_AddJobRole_ReturnValue);
};

}


