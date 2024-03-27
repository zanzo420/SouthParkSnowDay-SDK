#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cartman_Actor_BP.Cartman_Actor_BP_C
// (Actor)

class UClass* ACartman_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cartman_Actor_BP_C");

	return Clss;
}


// Cartman_Actor_BP_C Cartman_Actor_BP.Default__Cartman_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACartman_Actor_BP_C* ACartman_Actor_BP_C::GetDefaultObj()
{
	static class ACartman_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACartman_Actor_BP_C*>(ACartman_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cartman_Actor_BP.Cartman_Actor_BP_C.GetIndicatorData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIndicatorData              IndicatorData                                                    (Parm, OutParm, HasGetValueTypeHash)

void ACartman_Actor_BP_C::GetIndicatorData(struct FIndicatorData* IndicatorData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cartman_Actor_BP_C", "GetIndicatorData");

	Params::ACartman_Actor_BP_C_GetIndicatorData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IndicatorData != nullptr)
		*IndicatorData = std::move(Parms.IndicatorData);

}


// Function Cartman_Actor_BP.Cartman_Actor_BP_C.MakeIndicatorData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIndicatorData              K2Node_MakeStruct_IndicatorData                                  (HasGetValueTypeHash)

void ACartman_Actor_BP_C::MakeIndicatorData(const struct FIndicatorData& K2Node_MakeStruct_IndicatorData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cartman_Actor_BP_C", "MakeIndicatorData");

	Params::ACartman_Actor_BP_C_MakeIndicatorData_Params Parms{};

	Parms.K2Node_MakeStruct_IndicatorData = K2Node_MakeStruct_IndicatorData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cartman_Actor_BP.Cartman_Actor_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACartman_Actor_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cartman_Actor_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cartman_Actor_BP.Cartman_Actor_BP_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACartman_Actor_BP_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cartman_Actor_BP_C", "ReceiveEndPlay");

	Params::ACartman_Actor_BP_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cartman_Actor_BP.Cartman_Actor_BP_C.ExecuteUbergraph_Cartman_Actor_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACartman_Actor_BP_C::ExecuteUbergraph_Cartman_Actor_BP(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cartman_Actor_BP_C", "ExecuteUbergraph_Cartman_Actor_BP");

	Params::ACartman_Actor_BP_C_ExecuteUbergraph_Cartman_Actor_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


