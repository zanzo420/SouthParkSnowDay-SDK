#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass WC_AnimBP_PP.WC_AnimBP_PP_C
// (None)

class UClass* UWC_AnimBP_PP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WC_AnimBP_PP_C");

	return Clss;
}


// WC_AnimBP_PP_C WC_AnimBP_PP.Default__WC_AnimBP_PP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWC_AnimBP_PP_C* UWC_AnimBP_PP_C::GetDefaultObj()
{
	static class UWC_AnimBP_PP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWC_AnimBP_PP_C*>(UWC_AnimBP_PP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WC_AnimBP_PP.WC_AnimBP_PP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UWC_AnimBP_PP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WC_AnimBP_PP_C", "AnimGraph");

	Params::UWC_AnimBP_PP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function WC_AnimBP_PP.WC_AnimBP_PP_C.ExecuteUbergraph_WC_AnimBP_PP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWC_AnimBP_PP_C::ExecuteUbergraph_WC_AnimBP_PP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WC_AnimBP_PP_C", "ExecuteUbergraph_WC_AnimBP_PP");

	Params::UWC_AnimBP_PP_C_ExecuteUbergraph_WC_AnimBP_PP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


