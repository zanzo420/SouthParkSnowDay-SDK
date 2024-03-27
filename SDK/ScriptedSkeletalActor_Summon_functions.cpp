#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScriptedSkeletalActor_Summon.ScriptedSkeletalActor_Summon_C
// (Actor)

class UClass* AScriptedSkeletalActor_Summon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScriptedSkeletalActor_Summon_C");

	return Clss;
}


// ScriptedSkeletalActor_Summon_C ScriptedSkeletalActor_Summon.Default__ScriptedSkeletalActor_Summon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AScriptedSkeletalActor_Summon_C* AScriptedSkeletalActor_Summon_C::GetDefaultObj()
{
	static class AScriptedSkeletalActor_Summon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AScriptedSkeletalActor_Summon_C*>(AScriptedSkeletalActor_Summon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ScriptedSkeletalActor_Summon.ScriptedSkeletalActor_Summon_C.serverUnregisterSummon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AScriptedSkeletalActor_Summon_C::ServerUnregisterSummon(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Summon_C", "serverUnregisterSummon");

	Params::AScriptedSkeletalActor_Summon_C_ServerUnregisterSummon_Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Summon.ScriptedSkeletalActor_Summon_C.serverRegisterSummon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AScriptedSkeletalActor_Summon_C::ServerRegisterSummon(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Summon_C", "serverRegisterSummon");

	Params::AScriptedSkeletalActor_Summon_C_ServerRegisterSummon_Params Parms{};

	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Summon.ScriptedSkeletalActor_Summon_C.FadeLight__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AScriptedSkeletalActor_Summon_C::FadeLight__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Summon_C", "FadeLight__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedSkeletalActor_Summon.ScriptedSkeletalActor_Summon_C.FadeLight__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AScriptedSkeletalActor_Summon_C::FadeLight__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Summon_C", "FadeLight__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedSkeletalActor_Summon.ScriptedSkeletalActor_Summon_C.SummonSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AScriptedSkeletalActor_Summon_C::SummonSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Summon_C", "SummonSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedSkeletalActor_Summon.ScriptedSkeletalActor_Summon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AScriptedSkeletalActor_Summon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Summon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedSkeletalActor_Summon.ScriptedSkeletalActor_Summon_C.ExecuteUbergraph_ScriptedSkeletalActor_Summon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Summon_C::ExecuteUbergraph_ScriptedSkeletalActor_Summon(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_FMin_ReturnValue, float CallFunc_FMin_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Summon_C", "ExecuteUbergraph_ScriptedSkeletalActor_Summon");

	Params::AScriptedSkeletalActor_Summon_C_ExecuteUbergraph_ScriptedSkeletalActor_Summon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue_1 = CallFunc_FMin_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


