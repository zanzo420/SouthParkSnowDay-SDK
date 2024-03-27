#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass CondomCarryPPAB.CondomCarryPPAB_C
// (None)

class UClass* UCondomCarryPPAB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CondomCarryPPAB_C");

	return Clss;
}


// CondomCarryPPAB_C CondomCarryPPAB.Default__CondomCarryPPAB_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondomCarryPPAB_C* UCondomCarryPPAB_C::GetDefaultObj()
{
	static class UCondomCarryPPAB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondomCarryPPAB_C*>(UCondomCarryPPAB_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CondomCarryPPAB.CondomCarryPPAB_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UCondomCarryPPAB_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CondomCarryPPAB_C", "AnimGraph");

	Params::UCondomCarryPPAB_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function CondomCarryPPAB.CondomCarryPPAB_C.ExecuteUbergraph_CondomCarryPPAB
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCondomCarryPPAB_C::ExecuteUbergraph_CondomCarryPPAB(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CondomCarryPPAB_C", "ExecuteUbergraph_CondomCarryPPAB");

	Params::UCondomCarryPPAB_C_ExecuteUbergraph_CondomCarryPPAB_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


