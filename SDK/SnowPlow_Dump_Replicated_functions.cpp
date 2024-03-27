#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SnowPlow_Dump_Replicated.SnowPlow_Dump_Replicated_C
// (Actor)

class UClass* ASnowPlow_Dump_Replicated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SnowPlow_Dump_Replicated_C");

	return Clss;
}


// SnowPlow_Dump_Replicated_C SnowPlow_Dump_Replicated.Default__SnowPlow_Dump_Replicated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASnowPlow_Dump_Replicated_C* ASnowPlow_Dump_Replicated_C::GetDefaultObj()
{
	static class ASnowPlow_Dump_Replicated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASnowPlow_Dump_Replicated_C*>(ASnowPlow_Dump_Replicated_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SnowPlow_Dump_Replicated.SnowPlow_Dump_Replicated_C.OnRep_ShowPlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASnowPlow_Dump_Replicated_C::OnRep_ShowPlow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SnowPlow_Dump_Replicated_C", "OnRep_ShowPlow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SnowPlow_Dump_Replicated.SnowPlow_Dump_Replicated_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASnowPlow_Dump_Replicated_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SnowPlow_Dump_Replicated_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SnowPlow_Dump_Replicated.SnowPlow_Dump_Replicated_C.ExecuteUbergraph_SnowPlow_Dump_Replicated
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASnowPlow_Dump_Replicated_C::ExecuteUbergraph_SnowPlow_Dump_Replicated(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SnowPlow_Dump_Replicated_C", "ExecuteUbergraph_SnowPlow_Dump_Replicated");

	Params::ASnowPlow_Dump_Replicated_C_ExecuteUbergraph_SnowPlow_Dump_Replicated_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


