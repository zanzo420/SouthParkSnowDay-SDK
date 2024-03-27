#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Henrietta_Actor_BP.Henrietta_Actor_BP_C
// (Actor)

class UClass* AHenrietta_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Henrietta_Actor_BP_C");

	return Clss;
}


// Henrietta_Actor_BP_C Henrietta_Actor_BP.Default__Henrietta_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHenrietta_Actor_BP_C* AHenrietta_Actor_BP_C::GetDefaultObj()
{
	static class AHenrietta_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHenrietta_Actor_BP_C*>(AHenrietta_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Henrietta_Actor_BP.Henrietta_Actor_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AHenrietta_Actor_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Henrietta_Actor_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Henrietta_Actor_BP.Henrietta_Actor_BP_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHenrietta_Actor_BP_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Henrietta_Actor_BP_C", "ReceiveEndPlay");

	Params::AHenrietta_Actor_BP_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Henrietta_Actor_BP.Henrietta_Actor_BP_C.ExecuteUbergraph_Henrietta_Actor_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHenrietta_Actor_BP_C::ExecuteUbergraph_Henrietta_Actor_BP(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Henrietta_Actor_BP_C", "ExecuteUbergraph_Henrietta_Actor_BP");

	Params::AHenrietta_Actor_BP_C_ExecuteUbergraph_Henrietta_Actor_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


