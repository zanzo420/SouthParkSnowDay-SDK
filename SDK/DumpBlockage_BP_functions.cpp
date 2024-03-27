#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DumpBlockage_BP.DumpBlockage_BP_C
// (Actor)

class UClass* ADumpBlockage_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DumpBlockage_BP_C");

	return Clss;
}


// DumpBlockage_BP_C DumpBlockage_BP.Default__DumpBlockage_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADumpBlockage_BP_C* ADumpBlockage_BP_C::GetDefaultObj()
{
	static class ADumpBlockage_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADumpBlockage_BP_C*>(ADumpBlockage_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DumpBlockage_BP.DumpBlockage_BP_C.OnRep_BlockageRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADumpBlockage_BP_C::OnRep_BlockageRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DumpBlockage_BP_C", "OnRep_BlockageRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DumpBlockage_BP.DumpBlockage_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADumpBlockage_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DumpBlockage_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DumpBlockage_BP.DumpBlockage_BP_C.RemoveBlockage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADumpBlockage_BP_C::RemoveBlockage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DumpBlockage_BP_C", "RemoveBlockage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DumpBlockage_BP.DumpBlockage_BP_C.Ragdoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADumpBlockage_BP_C::Ragdoll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DumpBlockage_BP_C", "Ragdoll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DumpBlockage_BP.DumpBlockage_BP_C.ExecuteUbergraph_DumpBlockage_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADumpBlockage_BP_C::ExecuteUbergraph_DumpBlockage_BP(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DumpBlockage_BP_C", "ExecuteUbergraph_DumpBlockage_BP");

	Params::ADumpBlockage_BP_C_ExecuteUbergraph_DumpBlockage_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


