#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stan_Actor_BP.Stan_Actor_BP_C
// (Actor)

class UClass* AStan_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stan_Actor_BP_C");

	return Clss;
}


// Stan_Actor_BP_C Stan_Actor_BP.Default__Stan_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStan_Actor_BP_C* AStan_Actor_BP_C::GetDefaultObj()
{
	static class AStan_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStan_Actor_BP_C*>(AStan_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Stan_Actor_BP.Stan_Actor_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AStan_Actor_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Stan_Actor_BP.Stan_Actor_BP_C.ExecuteUbergraph_Stan_Actor_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStan_Actor_BP_C::ExecuteUbergraph_Stan_Actor_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_Actor_BP_C", "ExecuteUbergraph_Stan_Actor_BP");

	Params::AStan_Actor_BP_C_ExecuteUbergraph_Stan_Actor_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


