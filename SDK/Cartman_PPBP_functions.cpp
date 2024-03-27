#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Cartman_PPBP.Cartman_PPBP_C
// (None)

class UClass* UCartman_PPBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cartman_PPBP_C");

	return Clss;
}


// Cartman_PPBP_C Cartman_PPBP.Default__Cartman_PPBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCartman_PPBP_C* UCartman_PPBP_C::GetDefaultObj()
{
	static class UCartman_PPBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCartman_PPBP_C*>(UCartman_PPBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cartman_PPBP.Cartman_PPBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UCartman_PPBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cartman_PPBP_C", "AnimGraph");

	Params::UCartman_PPBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Cartman_PPBP.Cartman_PPBP_C.ExecuteUbergraph_Cartman_PPBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCartman_PPBP_C::ExecuteUbergraph_Cartman_PPBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cartman_PPBP_C", "ExecuteUbergraph_Cartman_PPBP");

	Params::UCartman_PPBP_C_ExecuteUbergraph_Cartman_PPBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


