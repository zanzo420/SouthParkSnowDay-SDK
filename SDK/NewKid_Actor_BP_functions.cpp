#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewKid_Actor_BP.NewKid_Actor_BP_C
// (Actor)

class UClass* ANewKid_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewKid_Actor_BP_C");

	return Clss;
}


// NewKid_Actor_BP_C NewKid_Actor_BP.Default__NewKid_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewKid_Actor_BP_C* ANewKid_Actor_BP_C::GetDefaultObj()
{
	static class ANewKid_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewKid_Actor_BP_C*>(ANewKid_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NewKid_Actor_BP.NewKid_Actor_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ANewKid_Actor_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewKid_Actor_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewKid_Actor_BP.NewKid_Actor_BP_C.ExecuteUbergraph_NewKid_Actor_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANewKid_Actor_BP_C::ExecuteUbergraph_NewKid_Actor_BP(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewKid_Actor_BP_C", "ExecuteUbergraph_NewKid_Actor_BP");

	Params::ANewKid_Actor_BP_C_ExecuteUbergraph_NewKid_Actor_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


