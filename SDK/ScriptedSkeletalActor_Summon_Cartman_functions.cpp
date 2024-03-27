#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScriptedSkeletalActor_Summon_Cartman.ScriptedSkeletalActor_Summon_Cartman_C
// (Actor)

class UClass* AScriptedSkeletalActor_Summon_Cartman_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScriptedSkeletalActor_Summon_Cartman_C");

	return Clss;
}


// ScriptedSkeletalActor_Summon_Cartman_C ScriptedSkeletalActor_Summon_Cartman.Default__ScriptedSkeletalActor_Summon_Cartman_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AScriptedSkeletalActor_Summon_Cartman_C* AScriptedSkeletalActor_Summon_Cartman_C::GetDefaultObj()
{
	static class AScriptedSkeletalActor_Summon_Cartman_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AScriptedSkeletalActor_Summon_Cartman_C*>(AScriptedSkeletalActor_Summon_Cartman_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ScriptedSkeletalActor_Summon_Cartman.ScriptedSkeletalActor_Summon_Cartman_C.Summon__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AScriptedSkeletalActor_Summon_Cartman_C::Summon__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Summon_Cartman_C", "Summon__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedSkeletalActor_Summon_Cartman.ScriptedSkeletalActor_Summon_Cartman_C.Summon__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AScriptedSkeletalActor_Summon_Cartman_C::Summon__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Summon_Cartman_C", "Summon__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedSkeletalActor_Summon_Cartman.ScriptedSkeletalActor_Summon_Cartman_C.SummonSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AScriptedSkeletalActor_Summon_Cartman_C::SummonSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Summon_Cartman_C", "SummonSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedSkeletalActor_Summon_Cartman.ScriptedSkeletalActor_Summon_Cartman_C.ExecuteUbergraph_ScriptedSkeletalActor_Summon_Cartman
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AScriptedSkeletalActor_Summon_Cartman_C::ExecuteUbergraph_ScriptedSkeletalActor_Summon_Cartman(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Summon_Cartman_C", "ExecuteUbergraph_ScriptedSkeletalActor_Summon_Cartman");

	Params::AScriptedSkeletalActor_Summon_Cartman_C_ExecuteUbergraph_ScriptedSkeletalActor_Summon_Cartman_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


