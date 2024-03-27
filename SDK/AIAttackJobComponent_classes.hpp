#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3C8 - 0x3B0)
// BlueprintGeneratedClass AIAttackJobComponent.AIAttackJobComponent_C
class UAIAttackJobComponent_C : public UQtnAIJobComponentBaseNative
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAttribute_Health_C*                   HealthAttribute;                                   // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnAttributeComponent*                AttributeComponent;                                // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAttackJobComponent_C* GetDefaultObj();

	void AssignHealthAttribute(class UQtnAttribute* Temp_object_Variable, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class UAttribute_Health_C* K2Node_DynamicCast_AsAttribute_Health, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue);
	void AssignAttributeComponent(class AActor* CallFunc_GetOwner_ReturnValue, class UQtnAttributeComponent* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void HandleAIEmployed(class UBlackboardComponent*& Blackboard, class AActor* CallFunc_GetOwner_ReturnValue);
	void ReceiveBeginPlay();
	void OnAIEmployed_Event_0(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob);
	void OnHealthDepleted_Event_0();
	void ExecuteUbergraph_AIAttackJobComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, class UQtnAIJobRole* K2Node_CustomEvent_aiJobRole, class FName K2Node_CustomEvent_clusterID, class FName K2Node_CustomEvent_roleID, class AQtnBodyController* K2Node_CustomEvent_aiController, class UBlackboardComponent* K2Node_CustomEvent_blackboardComponent, bool K2Node_CustomEvent_isCombatJob, bool CallFunc_HasAuthority_ReturnValue);
};

}


