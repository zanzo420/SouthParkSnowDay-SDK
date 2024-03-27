#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAIDefensiveEncroacher.BodyPawnAIDefensiveEncroacher_C
// (Actor, Pawn)

class UClass* ABodyPawnAIDefensiveEncroacher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAIDefensiveEncroacher_C");

	return Clss;
}


// BodyPawnAIDefensiveEncroacher_C BodyPawnAIDefensiveEncroacher.Default__BodyPawnAIDefensiveEncroacher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAIDefensiveEncroacher_C* ABodyPawnAIDefensiveEncroacher_C::GetDefaultObj()
{
	static class ABodyPawnAIDefensiveEncroacher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAIDefensiveEncroacher_C*>(ABodyPawnAIDefensiveEncroacher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawnAIDefensiveEncroacher.BodyPawnAIDefensiveEncroacher_C.HandleDeath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetLastDamagingCulprit_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)

void ABodyPawnAIDefensiveEncroacher_C::HandleDeath(const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class AQtnPawn* CallFunc_GetLastDamagingCulprit_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIDefensiveEncroacher_C", "HandleDeath");

	Params::ABodyPawnAIDefensiveEncroacher_C_HandleDeath_Params Parms{};

	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetLastDamagingCulprit_ReturnValue = CallFunc_GetLastDamagingCulprit_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIDefensiveEncroacher.BodyPawnAIDefensiveEncroacher_C.IsCurrentlyEmployingAnotherEncroacher
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnAIJobRole*>       CallFunc_GetCurrentlyEmployedJobRoles_employedJobRoles           (ReferenceParm, ContainsInstancedReference)
// class UQtnAIJobRole*               CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetEmployedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIDefensiveEncroacher_C::IsCurrentlyEmployingAnotherEncroacher(bool* Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TArray<class UQtnAIJobRole*>& CallFunc_GetCurrentlyEmployedJobRoles_employedJobRoles, class UQtnAIJobRole* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_GetEmployedBodyPawn_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIDefensiveEncroacher_C", "IsCurrentlyEmployingAnotherEncroacher");

	Params::ABodyPawnAIDefensiveEncroacher_C_IsCurrentlyEmployingAnotherEncroacher_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetCurrentlyEmployedJobRoles_employedJobRoles = CallFunc_GetCurrentlyEmployedJobRoles_employedJobRoles;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetEmployedBodyPawn_ReturnValue = CallFunc_GetEmployedBodyPawn_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BodyPawnAIDefensiveEncroacher.BodyPawnAIDefensiveEncroacher_C.Set Phalanx Jobs Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantEnabled                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAIJobCluster*            CallFunc_GetJobCluster_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawnAIDefensiveEncroacher_C::Set_Phalanx_Jobs_Enabled(bool WantEnabled, class UQtnAIJobCluster* CallFunc_GetJobCluster_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIDefensiveEncroacher_C", "Set Phalanx Jobs Enabled");

	Params::ABodyPawnAIDefensiveEncroacher_C_Set_Phalanx_Jobs_Enabled_Params Parms{};

	Parms.WantEnabled = WantEnabled;
	Parms.CallFunc_GetJobCluster_ReturnValue = CallFunc_GetJobCluster_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIDefensiveEncroacher.BodyPawnAIDefensiveEncroacher_C.BndEvt__QtnAIJob_K2Node_ComponentBoundEvent_1_QtnAIEmployEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnAIJobRole*               AiJobRole                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ClusterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RoleID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        BlackboardComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCombatJob                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIDefensiveEncroacher_C::BndEvt__QtnAIJob_K2Node_ComponentBoundEvent_1_QtnAIEmployEvent__DelegateSignature(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIDefensiveEncroacher_C", "BndEvt__QtnAIJob_K2Node_ComponentBoundEvent_1_QtnAIEmployEvent__DelegateSignature");

	Params::ABodyPawnAIDefensiveEncroacher_C_BndEvt__QtnAIJob_K2Node_ComponentBoundEvent_1_QtnAIEmployEvent__DelegateSignature_Params Parms{};

	Parms.AiJobRole = AiJobRole;
	Parms.ClusterID = ClusterID;
	Parms.RoleID = RoleID;
	Parms.AIController = AIController;
	Parms.BlackboardComponent = BlackboardComponent;
	Parms.IsCombatJob = IsCombatJob;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIDefensiveEncroacher.BodyPawnAIDefensiveEncroacher_C.BndEvt__QtnAIJob_K2Node_ComponentBoundEvent_0_QtnAIEmployEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnAIJobRole*               AiJobRole                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ClusterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RoleID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        BlackboardComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCombatJob                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIDefensiveEncroacher_C::BndEvt__QtnAIJob_K2Node_ComponentBoundEvent_0_QtnAIEmployEvent__DelegateSignature(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIDefensiveEncroacher_C", "BndEvt__QtnAIJob_K2Node_ComponentBoundEvent_0_QtnAIEmployEvent__DelegateSignature");

	Params::ABodyPawnAIDefensiveEncroacher_C_BndEvt__QtnAIJob_K2Node_ComponentBoundEvent_0_QtnAIEmployEvent__DelegateSignature_Params Parms{};

	Parms.AiJobRole = AiJobRole;
	Parms.ClusterID = ClusterID;
	Parms.RoleID = RoleID;
	Parms.AIController = AIController;
	Parms.BlackboardComponent = BlackboardComponent;
	Parms.IsCombatJob = IsCombatJob;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIDefensiveEncroacher.BodyPawnAIDefensiveEncroacher_C.ExecuteUbergraph_BodyPawnAIDefensiveEncroacher
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAIJobRole*               K2Node_ComponentBoundEvent_aiJobRole_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_clusterID_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_roleID_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          K2Node_ComponentBoundEvent_aiController_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        K2Node_ComponentBoundEvent_blackboardComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isCombatJob_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnAIDefensiveEncroacher_C*K2Node_DynamicCast_AsBody_Pawn_AIDefensive_Encroacher            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCurrentlyEmployingAnotherEncroacher_result            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAIJobRole*               K2Node_ComponentBoundEvent_aiJobRole                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_clusterID                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_roleID                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          K2Node_ComponentBoundEvent_aiController                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        K2Node_ComponentBoundEvent_blackboardComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isCombatJob                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnAIDefensiveEncroacher_C*K2Node_DynamicCast_AsBody_Pawn_AIDefensive_Encroacher_1          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawnAIDefensiveEncroacher_C::ExecuteUbergraph_BodyPawnAIDefensiveEncroacher(int32 EntryPoint, bool Temp_bool_Variable, class UQtnAIJobRole* K2Node_ComponentBoundEvent_aiJobRole_1, class FName K2Node_ComponentBoundEvent_clusterID_1, class FName K2Node_ComponentBoundEvent_roleID_1, class AQtnBodyController* K2Node_ComponentBoundEvent_aiController_1, class UBlackboardComponent* K2Node_ComponentBoundEvent_blackboardComponent_1, bool K2Node_ComponentBoundEvent_isCombatJob_1, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class ABodyPawnAIDefensiveEncroacher_C* K2Node_DynamicCast_AsBody_Pawn_AIDefensive_Encroacher, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsCurrentlyEmployingAnotherEncroacher_result, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue_1, class UQtnAIJobRole* K2Node_ComponentBoundEvent_aiJobRole, class FName K2Node_ComponentBoundEvent_clusterID, class FName K2Node_ComponentBoundEvent_roleID, class AQtnBodyController* K2Node_ComponentBoundEvent_aiController, class UBlackboardComponent* K2Node_ComponentBoundEvent_blackboardComponent, bool K2Node_ComponentBoundEvent_isCombatJob, bool CallFunc_EqualEqual_NameName_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class ABodyPawnAIDefensiveEncroacher_C* K2Node_DynamicCast_AsBody_Pawn_AIDefensive_Encroacher_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIDefensiveEncroacher_C", "ExecuteUbergraph_BodyPawnAIDefensiveEncroacher");

	Params::ABodyPawnAIDefensiveEncroacher_C_ExecuteUbergraph_BodyPawnAIDefensiveEncroacher_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_ComponentBoundEvent_aiJobRole_1 = K2Node_ComponentBoundEvent_aiJobRole_1;
	Parms.K2Node_ComponentBoundEvent_clusterID_1 = K2Node_ComponentBoundEvent_clusterID_1;
	Parms.K2Node_ComponentBoundEvent_roleID_1 = K2Node_ComponentBoundEvent_roleID_1;
	Parms.K2Node_ComponentBoundEvent_aiController_1 = K2Node_ComponentBoundEvent_aiController_1;
	Parms.K2Node_ComponentBoundEvent_blackboardComponent_1 = K2Node_ComponentBoundEvent_blackboardComponent_1;
	Parms.K2Node_ComponentBoundEvent_isCombatJob_1 = K2Node_ComponentBoundEvent_isCombatJob_1;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_GetBodyPawn_ReturnValue = CallFunc_GetBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AIDefensive_Encroacher = K2Node_DynamicCast_AsBody_Pawn_AIDefensive_Encroacher;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_IsCurrentlyEmployingAnotherEncroacher_result = CallFunc_IsCurrentlyEmployingAnotherEncroacher_result;
	Parms.CallFunc_GetBodyController_ReturnValue_1 = CallFunc_GetBodyController_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_aiJobRole = K2Node_ComponentBoundEvent_aiJobRole;
	Parms.K2Node_ComponentBoundEvent_clusterID = K2Node_ComponentBoundEvent_clusterID;
	Parms.K2Node_ComponentBoundEvent_roleID = K2Node_ComponentBoundEvent_roleID;
	Parms.K2Node_ComponentBoundEvent_aiController = K2Node_ComponentBoundEvent_aiController;
	Parms.K2Node_ComponentBoundEvent_blackboardComponent = K2Node_ComponentBoundEvent_blackboardComponent;
	Parms.K2Node_ComponentBoundEvent_isCombatJob = K2Node_ComponentBoundEvent_isCombatJob;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetBodyPawn_ReturnValue_1 = CallFunc_GetBodyPawn_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AIDefensive_Encroacher_1 = K2Node_DynamicCast_AsBody_Pawn_AIDefensive_Encroacher_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIDefensiveEncroacher.BodyPawnAIDefensiveEncroacher_C.StringPlucked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABodyPawnAIDefensiveEncroacher_C::StringPlucked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIDefensiveEncroacher_C", "StringPlucked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


