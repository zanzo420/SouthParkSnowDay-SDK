#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FTUX_Gate_BP.FTUX_Gate_BP_C
// (Actor)

class UClass* AFTUX_Gate_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUX_Gate_BP_C");

	return Clss;
}


// FTUX_Gate_BP_C FTUX_Gate_BP.Default__FTUX_Gate_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFTUX_Gate_BP_C* AFTUX_Gate_BP_C::GetDefaultObj()
{
	static class AFTUX_Gate_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFTUX_Gate_BP_C*>(AFTUX_Gate_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FTUX_Gate_BP.FTUX_Gate_BP_C.CloseGate_Local
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFTUX_Gate_BP_C::CloseGate_Local()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Gate_BP_C", "CloseGate_Local");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUX_Gate_BP.FTUX_Gate_BP_C.ExecuteUbergraph_FTUX_Gate_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AFTUX_Gate_BP_C::ExecuteUbergraph_FTUX_Gate_BP(int32 EntryPoint, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUX_Gate_BP_C", "ExecuteUbergraph_FTUX_Gate_BP");

	Params::AFTUX_Gate_BP_C_ExecuteUbergraph_FTUX_Gate_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


