#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenAdult_Actor_BusDriver.GenAdult_Actor_BusDriver_C
// (Actor)

class UClass* AGenAdult_Actor_BusDriver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenAdult_Actor_BusDriver_C");

	return Clss;
}


// GenAdult_Actor_BusDriver_C GenAdult_Actor_BusDriver.Default__GenAdult_Actor_BusDriver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenAdult_Actor_BusDriver_C* AGenAdult_Actor_BusDriver_C::GetDefaultObj()
{
	static class AGenAdult_Actor_BusDriver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenAdult_Actor_BusDriver_C*>(AGenAdult_Actor_BusDriver_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenAdult_Actor_BusDriver.GenAdult_Actor_BusDriver_C.ExecuteUbergraph_GenAdult_Actor_BusDriver
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenAdult_Actor_BusDriver_C::ExecuteUbergraph_GenAdult_Actor_BusDriver(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenAdult_Actor_BusDriver_C", "ExecuteUbergraph_GenAdult_Actor_BusDriver");

	Params::AGenAdult_Actor_BusDriver_C_ExecuteUbergraph_GenAdult_Actor_BusDriver_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


