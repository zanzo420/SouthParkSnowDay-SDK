#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenAdult_Actor_Cold.GenAdult_Actor_Cold_C
// (Actor)

class UClass* AGenAdult_Actor_Cold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenAdult_Actor_Cold_C");

	return Clss;
}


// GenAdult_Actor_Cold_C GenAdult_Actor_Cold.Default__GenAdult_Actor_Cold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenAdult_Actor_Cold_C* AGenAdult_Actor_Cold_C::GetDefaultObj()
{
	static class AGenAdult_Actor_Cold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenAdult_Actor_Cold_C*>(AGenAdult_Actor_Cold_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenAdult_Actor_Cold.GenAdult_Actor_Cold_C.SpawnSNow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGenAdult_Actor_Cold_C::SpawnSNow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenAdult_Actor_Cold_C", "SpawnSNow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenAdult_Actor_Cold.GenAdult_Actor_Cold_C.ReleaseSnow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGenAdult_Actor_Cold_C::ReleaseSnow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenAdult_Actor_Cold_C", "ReleaseSnow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenAdult_Actor_Cold.GenAdult_Actor_Cold_C.ExecuteUbergraph_GenAdult_Actor_Cold
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenAdult_Actor_Cold_C::ExecuteUbergraph_GenAdult_Actor_Cold(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenAdult_Actor_Cold_C", "ExecuteUbergraph_GenAdult_Actor_Cold");

	Params::AGenAdult_Actor_Cold_C_ExecuteUbergraph_GenAdult_Actor_Cold_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


