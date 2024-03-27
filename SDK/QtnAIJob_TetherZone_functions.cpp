#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnAIJob_TetherZone.QtnAIJob_TetherZone_C
// (Actor)

class UClass* AQtnAIJob_TetherZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnAIJob_TetherZone_C");

	return Clss;
}


// QtnAIJob_TetherZone_C QtnAIJob_TetherZone.Default__QtnAIJob_TetherZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQtnAIJob_TetherZone_C* AQtnAIJob_TetherZone_C::GetDefaultObj()
{
	static class AQtnAIJob_TetherZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQtnAIJob_TetherZone_C*>(AQtnAIJob_TetherZone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnAIJob_TetherZone.QtnAIJob_TetherZone_C.IsJobActorViable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnPawn*                    Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InitialAdoption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class UQtnAIJobComponent*          JobComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsViable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsJobActorViable_isViable                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetPawnFeetLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_QtnHasPath_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetClosestPointOnCollision_OutPointOnBody               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetClosestPointOnCollision_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_QtnHasPath_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPatrolRoute*             K2Node_DynamicCast_AsQtn_Patrol_Route                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetClosestWaypoint_distanceFromWaypoint                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnWaypoint*                CallFunc_GetClosestWaypoint_ReturnValue                          (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnNavHelperInterface>K2Node_DynamicCast_AsQtn_Nav_Helper_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetNavLocation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnAIJob_TetherZone_C::IsJobActorViable(class AQtnPawn*& Pawn, bool& InitialAdoption, class UQtnAIJobComponent* JobComponent, bool* IsViable, const struct FVector& Temp_struct_Variable, bool CallFunc_IsJobActorViable_isViable, const struct FVector& CallFunc_GetPawnFeetLocation_ReturnValue, bool CallFunc_QtnHasPath_ReturnValue, const struct FVector& CallFunc_GetClosestPointOnCollision_OutPointOnBody, float CallFunc_GetClosestPointOnCollision_ReturnValue, bool CallFunc_QtnHasPath_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AQtnPatrolRoute* K2Node_DynamicCast_AsQtn_Patrol_Route, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetClosestWaypoint_distanceFromWaypoint, class AQtnWaypoint* CallFunc_GetClosestWaypoint_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IQtnNavHelperInterface> K2Node_DynamicCast_AsQtn_Nav_Helper_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetNavLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJob_TetherZone_C", "IsJobActorViable");

	Params::AQtnAIJob_TetherZone_C_IsJobActorViable_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.InitialAdoption = InitialAdoption;
	Parms.JobComponent = JobComponent;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsJobActorViable_isViable = CallFunc_IsJobActorViable_isViable;
	Parms.CallFunc_GetPawnFeetLocation_ReturnValue = CallFunc_GetPawnFeetLocation_ReturnValue;
	Parms.CallFunc_QtnHasPath_ReturnValue = CallFunc_QtnHasPath_ReturnValue;
	Parms.CallFunc_GetClosestPointOnCollision_OutPointOnBody = CallFunc_GetClosestPointOnCollision_OutPointOnBody;
	Parms.CallFunc_GetClosestPointOnCollision_ReturnValue = CallFunc_GetClosestPointOnCollision_ReturnValue;
	Parms.CallFunc_QtnHasPath_ReturnValue_1 = CallFunc_QtnHasPath_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Patrol_Route = K2Node_DynamicCast_AsQtn_Patrol_Route;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetClosestWaypoint_distanceFromWaypoint = CallFunc_GetClosestWaypoint_distanceFromWaypoint;
	Parms.CallFunc_GetClosestWaypoint_ReturnValue = CallFunc_GetClosestWaypoint_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Nav_Helper_Interface = K2Node_DynamicCast_AsQtn_Nav_Helper_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetNavLocation_ReturnValue = CallFunc_GetNavLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsViable != nullptr)
		*IsViable = Parms.IsViable;

}


// Function QtnAIJob_TetherZone.QtnAIJob_TetherZone_C.UpdateEditorIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  LOCAL_ChosenSprite                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnAIJob_TetherZone_C::UpdateEditorIcon(class UTexture2D* LOCAL_ChosenSprite, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJob_TetherZone_C", "UpdateEditorIcon");

	Params::AQtnAIJob_TetherZone_C_UpdateEditorIcon_Params Parms{};

	Parms.LOCAL_ChosenSprite = LOCAL_ChosenSprite;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_Array_Contains_ReturnValue_3 = CallFunc_Array_Contains_ReturnValue_3;
	Parms.CallFunc_Array_Contains_ReturnValue_4 = CallFunc_Array_Contains_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnAIJob_TetherZone.QtnAIJob_TetherZone_C.SetJobVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantVisible                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldDisplayJobDebugInfo_shouldShowDebugInfo           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPatrolRoute*             K2Node_DynamicCast_AsQtn_Patrol_Route                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnWaypoint*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArrowComponent*             CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnAIJob_TetherZone_C::SetJobVisibility(bool WantVisible, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_ShouldDisplayJobDebugInfo_shouldShowDebugInfo, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AQtnPatrolRoute* K2Node_DynamicCast_AsQtn_Patrol_Route, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnWaypoint* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, class UArrowComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJob_TetherZone_C", "SetJobVisibility");

	Params::AQtnAIJob_TetherZone_C_SetJobVisibility_Params Parms{};

	Parms.WantVisible = WantVisible;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_ShouldDisplayJobDebugInfo_shouldShowDebugInfo = CallFunc_ShouldDisplayJobDebugInfo_shouldShowDebugInfo;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Patrol_Route = K2Node_DynamicCast_AsQtn_Patrol_Route;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnAIJob_TetherZone.QtnAIJob_TetherZone_C.Initialize Roles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnAIJobCluster*            Combat_Job_Cluster                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAIJobCluster*            Ambient_Job_Cluster                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnAIJobRoleDefinition     K2Node_MakeStruct_QtnAIJobRoleDefinition                         (NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAIJobRole*               CallFunc_AddJobRole_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnAIJobRoleDefinition     K2Node_MakeStruct_QtnAIJobRoleDefinition_1                       (NoDestructor)
// class UQtnAIJobRole*               CallFunc_AddJobRole_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnAIJob_TetherZone_C::Initialize_Roles(class UQtnAIJobCluster* Combat_Job_Cluster, class UQtnAIJobCluster* Ambient_Job_Cluster, int32 Temp_int_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQtnAIJobRoleDefinition& K2Node_MakeStruct_QtnAIJobRoleDefinition, int32 Temp_int_Variable_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UQtnAIJobRole* CallFunc_AddJobRole_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FQtnAIJobRoleDefinition& K2Node_MakeStruct_QtnAIJobRoleDefinition_1, class UQtnAIJobRole* CallFunc_AddJobRole_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJob_TetherZone_C", "Initialize Roles");

	Params::AQtnAIJob_TetherZone_C_Initialize_Roles_Params Parms{};

	Parms.Combat_Job_Cluster = Combat_Job_Cluster;
	Parms.Ambient_Job_Cluster = Ambient_Job_Cluster;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_QtnAIJobRoleDefinition = K2Node_MakeStruct_QtnAIJobRoleDefinition;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_AddJobRole_ReturnValue = CallFunc_AddJobRole_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_QtnAIJobRoleDefinition_1 = K2Node_MakeStruct_QtnAIJobRoleDefinition_1;
	Parms.CallFunc_AddJobRole_ReturnValue_1 = CallFunc_AddJobRole_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnAIJob_TetherZone.QtnAIJob_TetherZone_C.Initialize Clusters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnAIJobCluster*            Combat_Job_Cluster                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAIJobCluster*            Ambient_Job_Cluster                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAIJobCluster*            AmbientJobCluster                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAIJobCluster*            CombatJobCluster                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnAIJobClusterDefinition  K2Node_MakeStruct_QtnAIJobClusterDefinition                      (None)
// struct FQtnAIJobClusterDefinition  K2Node_MakeStruct_QtnAIJobClusterDefinition_1                    (None)
// class UQtnAIJobCluster*            CallFunc_AddJobCluster_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAIJobCluster*            CallFunc_AddJobCluster_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnAIJob_TetherZone_C::Initialize_Clusters(class UQtnAIJobCluster** Combat_Job_Cluster, class UQtnAIJobCluster** Ambient_Job_Cluster, class UQtnAIJobCluster* AmbientJobCluster, class UQtnAIJobCluster* CombatJobCluster, const struct FQtnAIJobClusterDefinition& K2Node_MakeStruct_QtnAIJobClusterDefinition, const struct FQtnAIJobClusterDefinition& K2Node_MakeStruct_QtnAIJobClusterDefinition_1, class UQtnAIJobCluster* CallFunc_AddJobCluster_ReturnValue, class UQtnAIJobCluster* CallFunc_AddJobCluster_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJob_TetherZone_C", "Initialize Clusters");

	Params::AQtnAIJob_TetherZone_C_Initialize_Clusters_Params Parms{};

	Parms.AmbientJobCluster = AmbientJobCluster;
	Parms.CombatJobCluster = CombatJobCluster;
	Parms.K2Node_MakeStruct_QtnAIJobClusterDefinition = K2Node_MakeStruct_QtnAIJobClusterDefinition;
	Parms.K2Node_MakeStruct_QtnAIJobClusterDefinition_1 = K2Node_MakeStruct_QtnAIJobClusterDefinition_1;
	Parms.CallFunc_AddJobCluster_ReturnValue = CallFunc_AddJobCluster_ReturnValue;
	Parms.CallFunc_AddJobCluster_ReturnValue_1 = CallFunc_AddJobCluster_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Combat_Job_Cluster != nullptr)
		*Combat_Job_Cluster = Parms.Combat_Job_Cluster;

	if (Ambient_Job_Cluster != nullptr)
		*Ambient_Job_Cluster = Parms.Ambient_Job_Cluster;

}


// Function QtnAIJob_TetherZone.QtnAIJob_TetherZone_C.Find Players And Set Employment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnAIJob_TetherZone_C::Find_Players_And_Set_Employment(bool CallFunc_Not_PreBool_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJob_TetherZone_C", "Find Players And Set Employment");

	Params::AQtnAIJob_TetherZone_C_Find_Players_And_Set_Employment_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnAIJob_TetherZone.QtnAIJob_TetherZone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AQtnAIJob_TetherZone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJob_TetherZone_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnAIJob_TetherZone.QtnAIJob_TetherZone_C.BndEvt__QtnAIJobComponent_TetherZone_K2Node_ComponentBoundEvent_3_QtnAIEmployEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnAIJobRole*               AiJobRole                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ClusterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RoleID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        BlackboardComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCombatJob                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnAIJob_TetherZone_C::BndEvt__QtnAIJobComponent_TetherZone_K2Node_ComponentBoundEvent_3_QtnAIEmployEvent__DelegateSignature(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJob_TetherZone_C", "BndEvt__QtnAIJobComponent_TetherZone_K2Node_ComponentBoundEvent_3_QtnAIEmployEvent__DelegateSignature");

	Params::AQtnAIJob_TetherZone_C_BndEvt__QtnAIJobComponent_TetherZone_K2Node_ComponentBoundEvent_3_QtnAIEmployEvent__DelegateSignature_Params Parms{};

	Parms.AiJobRole = AiJobRole;
	Parms.ClusterID = ClusterID;
	Parms.RoleID = RoleID;
	Parms.AIController = AIController;
	Parms.BlackboardComponent = BlackboardComponent;
	Parms.IsCombatJob = IsCombatJob;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnAIJob_TetherZone.QtnAIJob_TetherZone_C.ExecuteUbergraph_QtnAIJob_TetherZone
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldDisplayJobDebugInfo_shouldShowDebugInfo           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAIJobCluster*            CallFunc_Initialize_Clusters_Combat_Job_Cluster                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAIJobCluster*            CallFunc_Initialize_Clusters_Ambient_Job_Cluster                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAIJobRole*               K2Node_ComponentBoundEvent_aiJobRole                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_clusterID                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_roleID                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          K2Node_ComponentBoundEvent_aiController                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        K2Node_ComponentBoundEvent_blackboardComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isCombatJob                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPatrolRoute*             K2Node_DynamicCast_AsQtn_Patrol_Route                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPatrolRoute*             K2Node_DynamicCast_AsQtn_Patrol_Route_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnAIJob_TetherZone_C::ExecuteUbergraph_QtnAIJob_TetherZone(int32 EntryPoint, bool CallFunc_ShouldDisplayJobDebugInfo_shouldShowDebugInfo, bool CallFunc_Not_PreBool_ReturnValue, class UQtnAIJobCluster* CallFunc_Initialize_Clusters_Combat_Job_Cluster, class UQtnAIJobCluster* CallFunc_Initialize_Clusters_Ambient_Job_Cluster, class UQtnAIJobRole* K2Node_ComponentBoundEvent_aiJobRole, class FName K2Node_ComponentBoundEvent_clusterID, class FName K2Node_ComponentBoundEvent_roleID, class AQtnBodyController* K2Node_ComponentBoundEvent_aiController, class UBlackboardComponent* K2Node_ComponentBoundEvent_blackboardComponent, bool K2Node_ComponentBoundEvent_isCombatJob, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnPatrolRoute* K2Node_DynamicCast_AsQtn_Patrol_Route, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class AQtnPatrolRoute* K2Node_DynamicCast_AsQtn_Patrol_Route_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJob_TetherZone_C", "ExecuteUbergraph_QtnAIJob_TetherZone");

	Params::AQtnAIJob_TetherZone_C_ExecuteUbergraph_QtnAIJob_TetherZone_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ShouldDisplayJobDebugInfo_shouldShowDebugInfo = CallFunc_ShouldDisplayJobDebugInfo_shouldShowDebugInfo;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Initialize_Clusters_Combat_Job_Cluster = CallFunc_Initialize_Clusters_Combat_Job_Cluster;
	Parms.CallFunc_Initialize_Clusters_Ambient_Job_Cluster = CallFunc_Initialize_Clusters_Ambient_Job_Cluster;
	Parms.K2Node_ComponentBoundEvent_aiJobRole = K2Node_ComponentBoundEvent_aiJobRole;
	Parms.K2Node_ComponentBoundEvent_clusterID = K2Node_ComponentBoundEvent_clusterID;
	Parms.K2Node_ComponentBoundEvent_roleID = K2Node_ComponentBoundEvent_roleID;
	Parms.K2Node_ComponentBoundEvent_aiController = K2Node_ComponentBoundEvent_aiController;
	Parms.K2Node_ComponentBoundEvent_blackboardComponent = K2Node_ComponentBoundEvent_blackboardComponent;
	Parms.K2Node_ComponentBoundEvent_isCombatJob = K2Node_ComponentBoundEvent_isCombatJob;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Patrol_Route = K2Node_DynamicCast_AsQtn_Patrol_Route;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Patrol_Route_1 = K2Node_DynamicCast_AsQtn_Patrol_Route_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


