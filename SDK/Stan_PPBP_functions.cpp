#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Stan_PPBP.Stan_PPBP_C
// (None)

class UClass* UStan_PPBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stan_PPBP_C");

	return Clss;
}


// Stan_PPBP_C Stan_PPBP.Default__Stan_PPBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStan_PPBP_C* UStan_PPBP_C::GetDefaultObj()
{
	static class UStan_PPBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStan_PPBP_C*>(UStan_PPBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Stan_PPBP.Stan_PPBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UStan_PPBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_PPBP_C", "AnimGraph");

	Params::UStan_PPBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Stan_PPBP.Stan_PPBP_C.ExecuteUbergraph_Stan_PPBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStan_PPBP_C::ExecuteUbergraph_Stan_PPBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stan_PPBP_C", "ExecuteUbergraph_Stan_PPBP");

	Params::UStan_PPBP_C_ExecuteUbergraph_Stan_PPBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


