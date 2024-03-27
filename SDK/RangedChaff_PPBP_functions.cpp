#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass RangedChaff_PPBP.RangedChaff_PPBP_C
// (None)

class UClass* URangedChaff_PPBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedChaff_PPBP_C");

	return Clss;
}


// RangedChaff_PPBP_C RangedChaff_PPBP.Default__RangedChaff_PPBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URangedChaff_PPBP_C* URangedChaff_PPBP_C::GetDefaultObj()
{
	static class URangedChaff_PPBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URangedChaff_PPBP_C*>(URangedChaff_PPBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RangedChaff_PPBP.RangedChaff_PPBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void URangedChaff_PPBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedChaff_PPBP_C", "AnimGraph");

	Params::URangedChaff_PPBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function RangedChaff_PPBP.RangedChaff_PPBP_C.ExecuteUbergraph_RangedChaff_PPBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URangedChaff_PPBP_C::ExecuteUbergraph_RangedChaff_PPBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedChaff_PPBP_C", "ExecuteUbergraph_RangedChaff_PPBP");

	Params::URangedChaff_PPBP_C_ExecuteUbergraph_RangedChaff_PPBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


