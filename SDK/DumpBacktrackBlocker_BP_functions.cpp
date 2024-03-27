#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DumpBacktrackBlocker_BP.DumpBacktrackBlocker_BP_C
// (Actor)

class UClass* ADumpBacktrackBlocker_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DumpBacktrackBlocker_BP_C");

	return Clss;
}


// DumpBacktrackBlocker_BP_C DumpBacktrackBlocker_BP.Default__DumpBacktrackBlocker_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADumpBacktrackBlocker_BP_C* ADumpBacktrackBlocker_BP_C::GetDefaultObj()
{
	static class ADumpBacktrackBlocker_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADumpBacktrackBlocker_BP_C*>(ADumpBacktrackBlocker_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DumpBacktrackBlocker_BP.DumpBacktrackBlocker_BP_C.OnRep_EnableBlockage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADumpBacktrackBlocker_BP_C::OnRep_EnableBlockage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DumpBacktrackBlocker_BP_C", "OnRep_EnableBlockage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DumpBacktrackBlocker_BP.DumpBacktrackBlocker_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADumpBacktrackBlocker_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DumpBacktrackBlocker_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DumpBacktrackBlocker_BP.DumpBacktrackBlocker_BP_C.TurnOnBlockage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADumpBacktrackBlocker_BP_C::TurnOnBlockage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DumpBacktrackBlocker_BP_C", "TurnOnBlockage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DumpBacktrackBlocker_BP.DumpBacktrackBlocker_BP_C.ExecuteUbergraph_DumpBacktrackBlocker_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADumpBacktrackBlocker_BP_C::ExecuteUbergraph_DumpBacktrackBlocker_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DumpBacktrackBlocker_BP_C", "ExecuteUbergraph_DumpBacktrackBlocker_BP");

	Params::ADumpBacktrackBlocker_BP_C_ExecuteUbergraph_DumpBacktrackBlocker_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


