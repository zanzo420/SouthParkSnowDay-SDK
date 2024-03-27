#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProfligateFlamesPointFire.BP_ProfligateFlamesPointFire_C
// (Actor)

class UClass* ABP_ProfligateFlamesPointFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProfligateFlamesPointFire_C");

	return Clss;
}


// BP_ProfligateFlamesPointFire_C BP_ProfligateFlamesPointFire.Default__BP_ProfligateFlamesPointFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProfligateFlamesPointFire_C* ABP_ProfligateFlamesPointFire_C::GetDefaultObj()
{
	static class ABP_ProfligateFlamesPointFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProfligateFlamesPointFire_C*>(ABP_ProfligateFlamesPointFire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProfligateFlamesPointFire.BP_ProfligateFlamesPointFire_C.InitPointFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    In_Owning_Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LifeTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamagePerSecond                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlameThrowerVerb_C*         SourceVerb                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProfligateFlamesPointFire_C::InitPointFire(class AQtnPawn* In_Owning_Pawn, float LifeTime, float DamagePerSecond, class UFlameThrowerVerb_C* SourceVerb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProfligateFlamesPointFire_C", "InitPointFire");

	Params::ABP_ProfligateFlamesPointFire_C_InitPointFire_Params Parms{};

	Parms.In_Owning_Pawn = In_Owning_Pawn;
	Parms.LifeTime = LifeTime;
	Parms.DamagePerSecond = DamagePerSecond;
	Parms.SourceVerb = SourceVerb;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProfligateFlamesPointFire.BP_ProfligateFlamesPointFire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ProfligateFlamesPointFire_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProfligateFlamesPointFire_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProfligateFlamesPointFire.BP_ProfligateFlamesPointFire_C.OnReusedFromPool
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ProfligateFlamesPointFire_C::OnReusedFromPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProfligateFlamesPointFire_C", "OnReusedFromPool");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProfligateFlamesPointFire.BP_ProfligateFlamesPointFire_C.OnReclaimToPool
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ProfligateFlamesPointFire_C::OnReclaimToPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProfligateFlamesPointFire_C", "OnReclaimToPool");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProfligateFlamesPointFire.BP_ProfligateFlamesPointFire_C.ExecuteUbergraph_BP_ProfligateFlamesPointFire
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ProfligateFlamesPointFire_C::ExecuteUbergraph_BP_ProfligateFlamesPointFire(int32 EntryPoint, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProfligateFlamesPointFire_C", "ExecuteUbergraph_BP_ProfligateFlamesPointFire");

	Params::ABP_ProfligateFlamesPointFire_C_ExecuteUbergraph_BP_ProfligateFlamesPointFire_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


