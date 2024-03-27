#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Rift_AnimBlueprint.Rift_AnimBlueprint_C
// (None)

class UClass* URift_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rift_AnimBlueprint_C");

	return Clss;
}


// Rift_AnimBlueprint_C Rift_AnimBlueprint.Default__Rift_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URift_AnimBlueprint_C* URift_AnimBlueprint_C::GetDefaultObj()
{
	static class URift_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URift_AnimBlueprint_C*>(URift_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rift_AnimBlueprint.Rift_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void URift_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rift_AnimBlueprint_C", "AnimGraph");

	Params::URift_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Rift_AnimBlueprint.Rift_AnimBlueprint_C.ExecuteUbergraph_Rift_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URift_AnimBlueprint_C::ExecuteUbergraph_Rift_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rift_AnimBlueprint_C", "ExecuteUbergraph_Rift_AnimBlueprint");

	Params::URift_AnimBlueprint_C_ExecuteUbergraph_Rift_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


