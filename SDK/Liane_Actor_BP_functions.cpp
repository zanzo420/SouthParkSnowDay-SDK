#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Liane_Actor_BP.Liane_Actor_BP_C
// (Actor)

class UClass* ALiane_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Liane_Actor_BP_C");

	return Clss;
}


// Liane_Actor_BP_C Liane_Actor_BP.Default__Liane_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALiane_Actor_BP_C* ALiane_Actor_BP_C::GetDefaultObj()
{
	static class ALiane_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALiane_Actor_BP_C*>(ALiane_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Liane_Actor_BP.Liane_Actor_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALiane_Actor_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Liane_Actor_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Liane_Actor_BP.Liane_Actor_BP_C.ExecuteUbergraph_Liane_Actor_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALiane_Actor_BP_C::ExecuteUbergraph_Liane_Actor_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Liane_Actor_BP_C", "ExecuteUbergraph_Liane_Actor_BP");

	Params::ALiane_Actor_BP_C_ExecuteUbergraph_Liane_Actor_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


