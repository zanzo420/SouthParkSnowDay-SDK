#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnAIJobActorBase.QtnAIJobActorBase_C
// (Actor)

class UClass* AQtnAIJobActorBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnAIJobActorBase_C");

	return Clss;
}


// QtnAIJobActorBase_C QtnAIJobActorBase.Default__QtnAIJobActorBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQtnAIJobActorBase_C* AQtnAIJobActorBase_C::GetDefaultObj()
{
	static class AQtnAIJobActorBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQtnAIJobActorBase_C*>(AQtnAIJobActorBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnAIJobActorBase.QtnAIJobActorBase_C.OpenAllJobs_ServerOnly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQtnAIJobComponent*>  JobComponents                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnAIJobComponent*>  CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// class UQtnAIJobComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnAIJobActorBase_C::OpenAllJobs_ServerOnly(const TArray<class UQtnAIJobComponent*>& JobComponents, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnAIJobComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UQtnAIJobComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJobActorBase_C", "OpenAllJobs_ServerOnly");

	Params::AQtnAIJobActorBase_C_OpenAllJobs_ServerOnly_Params Parms{};

	Parms.JobComponents = JobComponents;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnAIJobActorBase.QtnAIJobActorBase_C.CloseAllJobs_ServerOnly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQtnAIJobComponent*>  JobComponents                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnAIJobComponent*>  CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// class UQtnAIJobComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnAIJobActorBase_C::CloseAllJobs_ServerOnly(const TArray<class UQtnAIJobComponent*>& JobComponents, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnAIJobComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UQtnAIJobComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJobActorBase_C", "CloseAllJobs_ServerOnly");

	Params::AQtnAIJobActorBase_C_CloseAllJobs_ServerOnly_Params Parms{};

	Parms.JobComponents = JobComponents;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnAIJobActorBase.QtnAIJobActorBase_C.IsJobActorViable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnPawn*                    Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InitialAdoption                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class UQtnAIJobComponent*          JobComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsViable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAIJobComponentBaseNative*K2Node_DynamicCast_AsQtn_AIJob_Component_Base_Native             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidInCurrentArc_Valid_today                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsComponentEmploymentOpen_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnAIJobActorBase_C::IsJobActorViable(class AQtnPawn*& Pawn, bool& InitialAdoption, class UQtnAIJobComponent* JobComponent, bool* IsViable, class UQtnAIJobComponentBaseNative* K2Node_DynamicCast_AsQtn_AIJob_Component_Base_Native, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidInCurrentArc_Valid_today, bool CallFunc_IsComponentEmploymentOpen_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJobActorBase_C", "IsJobActorViable");

	Params::AQtnAIJobActorBase_C_IsJobActorViable_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.InitialAdoption = InitialAdoption;
	Parms.JobComponent = JobComponent;
	Parms.K2Node_DynamicCast_AsQtn_AIJob_Component_Base_Native = K2Node_DynamicCast_AsQtn_AIJob_Component_Base_Native;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidInCurrentArc_Valid_today = CallFunc_IsValidInCurrentArc_Valid_today;
	Parms.CallFunc_IsComponentEmploymentOpen_ReturnValue = CallFunc_IsComponentEmploymentOpen_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsViable != nullptr)
		*IsViable = Parms.IsViable;

}


// Function QtnAIJobActorBase.QtnAIJobActorBase_C.ShouldDisplayJobDebugInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ShouldShowDebugInfo                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayingInEditor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnAIJobActorBase_C::ShouldDisplayJobDebugInfo(bool* ShouldShowDebugInfo, bool CallFunc_IsPlayingInEditor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJobActorBase_C", "ShouldDisplayJobDebugInfo");

	Params::AQtnAIJobActorBase_C_ShouldDisplayJobDebugInfo_Params Parms{};

	Parms.CallFunc_IsPlayingInEditor_ReturnValue = CallFunc_IsPlayingInEditor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShowDebugInfo != nullptr)
		*ShouldShowDebugInfo = Parms.ShouldShowDebugInfo;

}


// Function QtnAIJobActorBase.QtnAIJobActorBase_C.UpdateEditorIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnAIJobActorBase_C::UpdateEditorIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJobActorBase_C", "UpdateEditorIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnAIJobActorBase.QtnAIJobActorBase_C.IsValidInCurrentArc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Valid_today                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentArc_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQtnAIJobActorBase_C::IsValidInCurrentArc(bool* Valid_today, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentArc_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJobActorBase_C", "IsValidInCurrentArc");

	Params::AQtnAIJobActorBase_C_IsValidInCurrentArc_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentArc_ReturnValue = CallFunc_GetCurrentArc_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid_today != nullptr)
		*Valid_today = Parms.Valid_today;

}


// Function QtnAIJobActorBase.QtnAIJobActorBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQtnAIJobActorBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJobActorBase_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnAIJobActorBase.QtnAIJobActorBase_C.ExecuteUbergraph_QtnAIJobActorBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQtnAIJobActorBase_C::ExecuteUbergraph_QtnAIJobActorBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnAIJobActorBase_C", "ExecuteUbergraph_QtnAIJobActorBase");

	Params::AQtnAIJobActorBase_C_ExecuteUbergraph_QtnAIJobActorBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


