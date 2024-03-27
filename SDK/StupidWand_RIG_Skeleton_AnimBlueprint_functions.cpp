#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass StupidWand_RIG_Skeleton_AnimBlueprint.StupidWand_RIG_Skeleton_AnimBlueprint_C
// (None)

class UClass* UStupidWand_RIG_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StupidWand_RIG_Skeleton_AnimBlueprint_C");

	return Clss;
}


// StupidWand_RIG_Skeleton_AnimBlueprint_C StupidWand_RIG_Skeleton_AnimBlueprint.Default__StupidWand_RIG_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStupidWand_RIG_Skeleton_AnimBlueprint_C* UStupidWand_RIG_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UStupidWand_RIG_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStupidWand_RIG_Skeleton_AnimBlueprint_C*>(UStupidWand_RIG_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StupidWand_RIG_Skeleton_AnimBlueprint.StupidWand_RIG_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UStupidWand_RIG_Skeleton_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StupidWand_RIG_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UStupidWand_RIG_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function StupidWand_RIG_Skeleton_AnimBlueprint.StupidWand_RIG_Skeleton_AnimBlueprint_C.ExecuteUbergraph_StupidWand_RIG_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStupidWand_RIG_Skeleton_AnimBlueprint_C::ExecuteUbergraph_StupidWand_RIG_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StupidWand_RIG_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_StupidWand_RIG_Skeleton_AnimBlueprint");

	Params::UStupidWand_RIG_Skeleton_AnimBlueprint_C_ExecuteUbergraph_StupidWand_RIG_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


