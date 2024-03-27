#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PointShitPool.BP_PointShitPool_C
// (Actor)

class UClass* ABP_PointShitPool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PointShitPool_C");

	return Clss;
}


// BP_PointShitPool_C BP_PointShitPool.Default__BP_PointShitPool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PointShitPool_C* ABP_PointShitPool_C::GetDefaultObj()
{
	static class ABP_PointShitPool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PointShitPool_C*>(ABP_PointShitPool_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PointShitPool.BP_PointShitPool_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PointShitPool_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PointShitPool_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PointShitPool.BP_PointShitPool_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PointShitPool_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PointShitPool_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PointShitPool.BP_PointShitPool_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PointShitPool_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PointShitPool_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PointShitPool.BP_PointShitPool_C.OnReusedFromPool
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PointShitPool_C::OnReusedFromPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PointShitPool_C", "OnReusedFromPool");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PointShitPool.BP_PointShitPool_C.OnReclaimToPool
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PointShitPool_C::OnReclaimToPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PointShitPool_C", "OnReclaimToPool");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PointShitPool.BP_PointShitPool_C.ExecuteUbergraph_BP_PointShitPool
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PointShitPool_C::ExecuteUbergraph_BP_PointShitPool(int32 EntryPoint, float CallFunc_Subtract_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PointShitPool_C", "ExecuteUbergraph_BP_PointShitPool");

	Params::ABP_PointShitPool_C_ExecuteUbergraph_BP_PointShitPool_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


