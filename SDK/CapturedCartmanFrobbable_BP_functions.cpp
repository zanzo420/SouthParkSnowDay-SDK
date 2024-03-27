#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CapturedCartmanFrobbable_BP.CapturedCartmanFrobbable_BP_C
// (Actor)

class UClass* ACapturedCartmanFrobbable_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CapturedCartmanFrobbable_BP_C");

	return Clss;
}


// CapturedCartmanFrobbable_BP_C CapturedCartmanFrobbable_BP.Default__CapturedCartmanFrobbable_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACapturedCartmanFrobbable_BP_C* ACapturedCartmanFrobbable_BP_C::GetDefaultObj()
{
	static class ACapturedCartmanFrobbable_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACapturedCartmanFrobbable_BP_C*>(ACapturedCartmanFrobbable_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CapturedCartmanFrobbable_BP.CapturedCartmanFrobbable_BP_C.Register Presence For BS Culling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACapturedCartmanFrobbable_BP_C::Register_Presence_For_BS_Culling(bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CapturedCartmanFrobbable_BP_C", "Register Presence For BS Culling");

	Params::ACapturedCartmanFrobbable_BP_C_Register_Presence_For_BS_Culling_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CapturedCartmanFrobbable_BP.CapturedCartmanFrobbable_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACapturedCartmanFrobbable_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CapturedCartmanFrobbable_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CapturedCartmanFrobbable_BP.CapturedCartmanFrobbable_BP_C.BndEvt__CapturedCartmanFrobbable_BP_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnFrobbableComponent*      ThisFrobbable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                FrobbingPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACapturedCartmanFrobbable_BP_C::BndEvt__CapturedCartmanFrobbable_BP_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CapturedCartmanFrobbable_BP_C", "BndEvt__CapturedCartmanFrobbable_BP_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature");

	Params::ACapturedCartmanFrobbable_BP_C_BndEvt__CapturedCartmanFrobbable_BP_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature_Params Parms{};

	Parms.ThisFrobbable = ThisFrobbable;
	Parms.FrobbingPawn = FrobbingPawn;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CapturedCartmanFrobbable_BP.CapturedCartmanFrobbable_BP_C.ExecuteUbergraph_CapturedCartmanFrobbable_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFrobbableComponent*      K2Node_ComponentBoundEvent_ThisFrobbable                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_ComponentBoundEvent_FrobbingPawn                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGoalManagerBase_C*       K2Node_DynamicCast_AsQtn_Goal_Manager_Base                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACapturedCartmanFrobbable_BP_C::ExecuteUbergraph_CapturedCartmanFrobbable_BP(int32 EntryPoint, class UQtnFrobbableComponent* K2Node_ComponentBoundEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_ComponentBoundEvent_FrobbingPawn, bool K2Node_ComponentBoundEvent_isServer, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CapturedCartmanFrobbable_BP_C", "ExecuteUbergraph_CapturedCartmanFrobbable_BP");

	Params::ACapturedCartmanFrobbable_BP_C_ExecuteUbergraph_CapturedCartmanFrobbable_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ThisFrobbable = K2Node_ComponentBoundEvent_ThisFrobbable;
	Parms.K2Node_ComponentBoundEvent_FrobbingPawn = K2Node_ComponentBoundEvent_FrobbingPawn;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Goal_Manager_Base = K2Node_DynamicCast_AsQtn_Goal_Manager_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CapturedCartmanFrobbable_BP.CapturedCartmanFrobbable_BP_C.CartmanFree__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACapturedCartmanFrobbable_BP_C::CartmanFree__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CapturedCartmanFrobbable_BP_C", "CartmanFree__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


