#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FTUXRoofBlockage_Tarp.FTUXRoofBlockage_Tarp_C
// (Actor)

class UClass* AFTUXRoofBlockage_Tarp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUXRoofBlockage_Tarp_C");

	return Clss;
}


// FTUXRoofBlockage_Tarp_C FTUXRoofBlockage_Tarp.Default__FTUXRoofBlockage_Tarp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFTUXRoofBlockage_Tarp_C* AFTUXRoofBlockage_Tarp_C::GetDefaultObj()
{
	static class AFTUXRoofBlockage_Tarp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFTUXRoofBlockage_Tarp_C*>(AFTUXRoofBlockage_Tarp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FTUXRoofBlockage_Tarp.FTUXRoofBlockage_Tarp_C.TurnOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFTUXRoofBlockage_Tarp_C::TurnOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUXRoofBlockage_Tarp_C", "TurnOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUXRoofBlockage_Tarp.FTUXRoofBlockage_Tarp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFTUXRoofBlockage_Tarp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUXRoofBlockage_Tarp_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUXRoofBlockage_Tarp.FTUXRoofBlockage_Tarp_C.ExecuteUbergraph_FTUXRoofBlockage_Tarp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFTUXRoofBlockage_Tarp_C::ExecuteUbergraph_FTUXRoofBlockage_Tarp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUXRoofBlockage_Tarp_C", "ExecuteUbergraph_FTUXRoofBlockage_Tarp");

	Params::AFTUXRoofBlockage_Tarp_C_ExecuteUbergraph_FTUXRoofBlockage_Tarp_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


