#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SafeSpawnLocation.BP_SafeSpawnLocation_C
// (Actor)

class UClass* ABP_SafeSpawnLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SafeSpawnLocation_C");

	return Clss;
}


// BP_SafeSpawnLocation_C BP_SafeSpawnLocation.Default__BP_SafeSpawnLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SafeSpawnLocation_C* ABP_SafeSpawnLocation_C::GetDefaultObj()
{
	static class ABP_SafeSpawnLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SafeSpawnLocation_C*>(ABP_SafeSpawnLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SafeSpawnLocation.BP_SafeSpawnLocation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SafeSpawnLocation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SafeSpawnLocation_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SafeSpawnLocation.BP_SafeSpawnLocation_C.ExecuteUbergraph_BP_SafeSpawnLocation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SafeSpawnLocation_C::ExecuteUbergraph_BP_SafeSpawnLocation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SafeSpawnLocation_C", "ExecuteUbergraph_BP_SafeSpawnLocation");

	Params::ABP_SafeSpawnLocation_C_ExecuteUbergraph_BP_SafeSpawnLocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


