#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIFrobJobComponent.AIFrobJobComponent_C
// (SceneComponent)

class UClass* UAIFrobJobComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIFrobJobComponent_C");

	return Clss;
}


// AIFrobJobComponent_C AIFrobJobComponent.Default__AIFrobJobComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIFrobJobComponent_C* UAIFrobJobComponent_C::GetDefaultObj()
{
	static class UAIFrobJobComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIFrobJobComponent_C*>(UAIFrobJobComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIFrobJobComponent.AIFrobJobComponent_C.HandleAIEmployed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*        Blackboard                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIFrobJobComponent_C::HandleAIEmployed(class UBlackboardComponent*& Blackboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIFrobJobComponent_C", "HandleAIEmployed");

	Params::UAIFrobJobComponent_C_HandleAIEmployed_Params Parms{};

	Parms.Blackboard = Blackboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIFrobJobComponent.AIFrobJobComponent_C.HandleFrobEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    FrobbingPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIFrobJobComponent_C::HandleFrobEnd(class AQtnPawn*& FrobbingPawn, bool CallFunc_IsPlayerControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIFrobJobComponent_C", "HandleFrobEnd");

	Params::UAIFrobJobComponent_C_HandleFrobEnd_Params Parms{};

	Parms.FrobbingPawn = FrobbingPawn;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIFrobJobComponent.AIFrobJobComponent_C.HandleFrobBegin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    FrobbingPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIFrobJobComponent_C::HandleFrobBegin(class AQtnPawn*& FrobbingPawn, bool CallFunc_IsPlayerControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIFrobJobComponent_C", "HandleFrobBegin");

	Params::UAIFrobJobComponent_C_HandleFrobBegin_Params Parms{};

	Parms.FrobbingPawn = FrobbingPawn;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIFrobJobComponent.AIFrobJobComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UAIFrobJobComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIFrobJobComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIFrobJobComponent.AIFrobJobComponent_C.OnFrobBegin_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnFrobbableComponent*      ThisFrobbable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                FrobbingPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIFrobJobComponent_C::OnFrobBegin_Event_0(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIFrobJobComponent_C", "OnFrobBegin_Event_0");

	Params::UAIFrobJobComponent_C_OnFrobBegin_Event_0_Params Parms{};

	Parms.ThisFrobbable = ThisFrobbable;
	Parms.FrobbingPawn = FrobbingPawn;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIFrobJobComponent.AIFrobJobComponent_C.OnFrobEnd_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnFrobbableComponent*      ThisFrobbable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                FrobbingPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIFrobJobComponent_C::OnFrobEnd_Event_0(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIFrobJobComponent_C", "OnFrobEnd_Event_0");

	Params::UAIFrobJobComponent_C_OnFrobEnd_Event_0_Params Parms{};

	Parms.ThisFrobbable = ThisFrobbable;
	Parms.FrobbingPawn = FrobbingPawn;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIFrobJobComponent.AIFrobJobComponent_C.OnAIEmployed_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnAIJobRole*               AiJobRole                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ClusterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RoleID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        BlackboardComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCombatJob                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIFrobJobComponent_C::OnAIEmployed_Event_0(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIFrobJobComponent_C", "OnAIEmployed_Event_0");

	Params::UAIFrobJobComponent_C_OnAIEmployed_Event_0_Params Parms{};

	Parms.AiJobRole = AiJobRole;
	Parms.ClusterID = ClusterID;
	Parms.RoleID = RoleID;
	Parms.AIController = AIController;
	Parms.BlackboardComponent = BlackboardComponent;
	Parms.IsCombatJob = IsCombatJob;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIFrobJobComponent.AIFrobJobComponent_C.ExecuteUbergraph_AIFrobJobComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnAIJobFilter             K2Node_MakeStruct_QtnAIJobFilter                                 (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class USceneComponent*             CallFunc_GetAttachParent_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UQtnFrobbableComponent*      K2Node_DynamicCast_AsQtn_Frobbable_Component                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnFrobbableComponent*      K2Node_CustomEvent_ThisFrobbable_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_FrobbingPawn_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isServer_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnFrobbableComponent*      K2Node_CustomEvent_ThisFrobbable                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_FrobbingPawn                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isServer                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAIJobRole*               K2Node_CustomEvent_aiJobRole                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_clusterID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_roleID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          K2Node_CustomEvent_aiController                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        K2Node_CustomEvent_blackboardComponent                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isCombatJob                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnAIJobRoleDefinition     K2Node_MakeStruct_QtnAIJobRoleDefinition                         (NoDestructor)
// struct FQtnAIJobClusterDefinition  K2Node_MakeStruct_QtnAIJobClusterDefinition                      (None)
// class UQtnAIJobCluster*            CallFunc_AddJobCluster_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAIJobRole*               CallFunc_AddJobRole_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIFrobJobComponent_C::ExecuteUbergraph_AIFrobJobComponent(int32 EntryPoint, const struct FQtnAIJobFilter& K2Node_MakeStruct_QtnAIJobFilter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class USceneComponent* CallFunc_GetAttachParent_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, class UQtnFrobbableComponent* K2Node_DynamicCast_AsQtn_Frobbable_Component, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UQtnFrobbableComponent* K2Node_CustomEvent_ThisFrobbable_1, class AQtnBodyPawn* K2Node_CustomEvent_FrobbingPawn_1, bool K2Node_CustomEvent_isServer_1, class UQtnFrobbableComponent* K2Node_CustomEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_CustomEvent_FrobbingPawn, bool K2Node_CustomEvent_isServer, class UQtnAIJobRole* K2Node_CustomEvent_aiJobRole, class FName K2Node_CustomEvent_clusterID, class FName K2Node_CustomEvent_roleID, class AQtnBodyController* K2Node_CustomEvent_aiController, class UBlackboardComponent* K2Node_CustomEvent_blackboardComponent, bool K2Node_CustomEvent_isCombatJob, const struct FQtnAIJobRoleDefinition& K2Node_MakeStruct_QtnAIJobRoleDefinition, const struct FQtnAIJobClusterDefinition& K2Node_MakeStruct_QtnAIJobClusterDefinition, class UQtnAIJobCluster* CallFunc_AddJobCluster_ReturnValue, class UQtnAIJobRole* CallFunc_AddJobRole_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIFrobJobComponent_C", "ExecuteUbergraph_AIFrobJobComponent");

	Params::UAIFrobJobComponent_C_ExecuteUbergraph_AIFrobJobComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_QtnAIJobFilter = K2Node_MakeStruct_QtnAIJobFilter;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetAttachParent_ReturnValue = CallFunc_GetAttachParent_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Frobbable_Component = K2Node_DynamicCast_AsQtn_Frobbable_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_ThisFrobbable_1 = K2Node_CustomEvent_ThisFrobbable_1;
	Parms.K2Node_CustomEvent_FrobbingPawn_1 = K2Node_CustomEvent_FrobbingPawn_1;
	Parms.K2Node_CustomEvent_isServer_1 = K2Node_CustomEvent_isServer_1;
	Parms.K2Node_CustomEvent_ThisFrobbable = K2Node_CustomEvent_ThisFrobbable;
	Parms.K2Node_CustomEvent_FrobbingPawn = K2Node_CustomEvent_FrobbingPawn;
	Parms.K2Node_CustomEvent_isServer = K2Node_CustomEvent_isServer;
	Parms.K2Node_CustomEvent_aiJobRole = K2Node_CustomEvent_aiJobRole;
	Parms.K2Node_CustomEvent_clusterID = K2Node_CustomEvent_clusterID;
	Parms.K2Node_CustomEvent_roleID = K2Node_CustomEvent_roleID;
	Parms.K2Node_CustomEvent_aiController = K2Node_CustomEvent_aiController;
	Parms.K2Node_CustomEvent_blackboardComponent = K2Node_CustomEvent_blackboardComponent;
	Parms.K2Node_CustomEvent_isCombatJob = K2Node_CustomEvent_isCombatJob;
	Parms.K2Node_MakeStruct_QtnAIJobRoleDefinition = K2Node_MakeStruct_QtnAIJobRoleDefinition;
	Parms.K2Node_MakeStruct_QtnAIJobClusterDefinition = K2Node_MakeStruct_QtnAIJobClusterDefinition;
	Parms.CallFunc_AddJobCluster_ReturnValue = CallFunc_AddJobCluster_ReturnValue;
	Parms.CallFunc_AddJobRole_ReturnValue = CallFunc_AddJobRole_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


