#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass JobComponent_DouseFire.JobComponent_DouseFire_C
// (SceneComponent)

class UClass* UJobComponent_DouseFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JobComponent_DouseFire_C");

	return Clss;
}


// JobComponent_DouseFire_C JobComponent_DouseFire.Default__JobComponent_DouseFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJobComponent_DouseFire_C* UJobComponent_DouseFire_C::GetDefaultObj()
{
	static class UJobComponent_DouseFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJobComponent_DouseFire_C*>(UJobComponent_DouseFire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JobComponent_DouseFire.JobComponent_DouseFire_C.IsAIJobViable_ServerOnly
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnPawn*                    Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForInitialAdoption                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAIJobViable_ServerOnly_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyControllerAI_C*         K2Node_DynamicCast_AsBody_Controller_AI                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWillingToDouseFire_isWilling                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UJobComponent_DouseFire_C::IsAIJobViable_ServerOnly(class AQtnPawn* Pawn, bool ForInitialAdoption, bool CallFunc_IsAIJobViable_ServerOnly_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class ABodyControllerAI_C* K2Node_DynamicCast_AsBody_Controller_AI, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsWillingToDouseFire_isWilling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JobComponent_DouseFire_C", "IsAIJobViable_ServerOnly");

	Params::UJobComponent_DouseFire_C_IsAIJobViable_ServerOnly_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.ForInitialAdoption = ForInitialAdoption;
	Parms.CallFunc_IsAIJobViable_ServerOnly_ReturnValue = CallFunc_IsAIJobViable_ServerOnly_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Controller_AI = K2Node_DynamicCast_AsBody_Controller_AI;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsWillingToDouseFire_isWilling = CallFunc_IsWillingToDouseFire_isWilling;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function JobComponent_DouseFire.JobComponent_DouseFire_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UJobComponent_DouseFire_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JobComponent_DouseFire_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobComponent_DouseFire.JobComponent_DouseFire_C.OnAIEmployed_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnAIJobRole*               AiJobRole                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ClusterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RoleID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        BlackboardComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCombatJob                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobComponent_DouseFire_C::OnAIEmployed_Event_0(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JobComponent_DouseFire_C", "OnAIEmployed_Event_0");

	Params::UJobComponent_DouseFire_C_OnAIEmployed_Event_0_Params Parms{};

	Parms.AiJobRole = AiJobRole;
	Parms.ClusterID = ClusterID;
	Parms.RoleID = RoleID;
	Parms.AIController = AIController;
	Parms.BlackboardComponent = BlackboardComponent;
	Parms.IsCombatJob = IsCombatJob;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobComponent_DouseFire.JobComponent_DouseFire_C.OnAIUnEmployed_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnAIJobRole*               AiJobRole                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ClusterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RoleID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        BlackboardComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCombatJob                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJobComponent_DouseFire_C::OnAIUnEmployed_Event_0(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JobComponent_DouseFire_C", "OnAIUnEmployed_Event_0");

	Params::UJobComponent_DouseFire_C_OnAIUnEmployed_Event_0_Params Parms{};

	Parms.AiJobRole = AiJobRole;
	Parms.ClusterID = ClusterID;
	Parms.RoleID = RoleID;
	Parms.AIController = AIController;
	Parms.BlackboardComponent = BlackboardComponent;
	Parms.IsCombatJob = IsCombatJob;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobComponent_DouseFire.JobComponent_DouseFire_C.ExecuteUbergraph_JobComponent_DouseFire
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UQtnAIJobRole*               K2Node_CustomEvent_aiJobRole_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_clusterID_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_roleID_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          K2Node_CustomEvent_aiController_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        K2Node_CustomEvent_blackboardComponent_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isCombatJob_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnNavHelperInterface>K2Node_DynamicCast_AsQtn_Nav_Helper_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetNavLocation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMovementComponent*       CallFunc_GetQtnMovementComponent_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAIJobRole*               K2Node_CustomEvent_aiJobRole                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_clusterID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_roleID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          K2Node_CustomEvent_aiController                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        K2Node_CustomEvent_blackboardComponent                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isCombatJob                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMovementComponent*       CallFunc_GetQtnMovementComponent_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobComponent_DouseFire_C::ExecuteUbergraph_JobComponent_DouseFire(int32 EntryPoint, const struct FVector& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UQtnAIJobRole* K2Node_CustomEvent_aiJobRole_1, class FName K2Node_CustomEvent_clusterID_1, class FName K2Node_CustomEvent_roleID_1, class AQtnBodyController* K2Node_CustomEvent_aiController_1, class UBlackboardComponent* K2Node_CustomEvent_blackboardComponent_1, bool K2Node_CustomEvent_isCombatJob_1, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IQtnNavHelperInterface> K2Node_DynamicCast_AsQtn_Nav_Helper_Interface, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, const struct FVector& CallFunc_GetNavLocation_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, class UQtnAIJobRole* K2Node_CustomEvent_aiJobRole, class FName K2Node_CustomEvent_clusterID, class FName K2Node_CustomEvent_roleID, class AQtnBodyController* K2Node_CustomEvent_aiController, class UBlackboardComponent* K2Node_CustomEvent_blackboardComponent, bool K2Node_CustomEvent_isCombatJob, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JobComponent_DouseFire_C", "ExecuteUbergraph_JobComponent_DouseFire");

	Params::UJobComponent_DouseFire_C_ExecuteUbergraph_JobComponent_DouseFire_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_aiJobRole_1 = K2Node_CustomEvent_aiJobRole_1;
	Parms.K2Node_CustomEvent_clusterID_1 = K2Node_CustomEvent_clusterID_1;
	Parms.K2Node_CustomEvent_roleID_1 = K2Node_CustomEvent_roleID_1;
	Parms.K2Node_CustomEvent_aiController_1 = K2Node_CustomEvent_aiController_1;
	Parms.K2Node_CustomEvent_blackboardComponent_1 = K2Node_CustomEvent_blackboardComponent_1;
	Parms.K2Node_CustomEvent_isCombatJob_1 = K2Node_CustomEvent_isCombatJob_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Nav_Helper_Interface = K2Node_DynamicCast_AsQtn_Nav_Helper_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBodyPawn_ReturnValue = CallFunc_GetBodyPawn_ReturnValue;
	Parms.CallFunc_GetNavLocation_ReturnValue = CallFunc_GetNavLocation_ReturnValue;
	Parms.CallFunc_GetQtnMovementComponent_ReturnValue = CallFunc_GetQtnMovementComponent_ReturnValue;
	Parms.K2Node_CustomEvent_aiJobRole = K2Node_CustomEvent_aiJobRole;
	Parms.K2Node_CustomEvent_clusterID = K2Node_CustomEvent_clusterID;
	Parms.K2Node_CustomEvent_roleID = K2Node_CustomEvent_roleID;
	Parms.K2Node_CustomEvent_aiController = K2Node_CustomEvent_aiController;
	Parms.K2Node_CustomEvent_blackboardComponent = K2Node_CustomEvent_blackboardComponent;
	Parms.K2Node_CustomEvent_isCombatJob = K2Node_CustomEvent_isCombatJob;
	Parms.CallFunc_GetBodyPawn_ReturnValue_1 = CallFunc_GetBodyPawn_ReturnValue_1;
	Parms.CallFunc_GetQtnMovementComponent_ReturnValue_1 = CallFunc_GetQtnMovementComponent_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


