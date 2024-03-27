#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Maxi_Actor_BP.Maxi_Actor_BP_C
// (Actor)

class UClass* AMaxi_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Maxi_Actor_BP_C");

	return Clss;
}


// Maxi_Actor_BP_C Maxi_Actor_BP.Default__Maxi_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMaxi_Actor_BP_C* AMaxi_Actor_BP_C::GetDefaultObj()
{
	static class AMaxi_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMaxi_Actor_BP_C*>(AMaxi_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Maxi_Actor_BP.Maxi_Actor_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMaxi_Actor_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Maxi_Actor_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Maxi_Actor_BP.Maxi_Actor_BP_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMaxi_Actor_BP_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Maxi_Actor_BP_C", "ReceiveEndPlay");

	Params::AMaxi_Actor_BP_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Maxi_Actor_BP.Maxi_Actor_BP_C.ExecuteUbergraph_Maxi_Actor_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMaxi_Actor_BP_C::ExecuteUbergraph_Maxi_Actor_BP(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Maxi_Actor_BP_C", "ExecuteUbergraph_Maxi_Actor_BP");

	Params::AMaxi_Actor_BP_C_ExecuteUbergraph_Maxi_Actor_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


