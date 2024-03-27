#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Heart_PPAnim.Heart_PPAnim_C
// (None)

class UClass* UHeart_PPAnim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Heart_PPAnim_C");

	return Clss;
}


// Heart_PPAnim_C Heart_PPAnim.Default__Heart_PPAnim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeart_PPAnim_C* UHeart_PPAnim_C::GetDefaultObj()
{
	static class UHeart_PPAnim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeart_PPAnim_C*>(UHeart_PPAnim_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Heart_PPAnim.Heart_PPAnim_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UHeart_PPAnim_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Heart_PPAnim_C", "AnimGraph");

	Params::UHeart_PPAnim_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Heart_PPAnim.Heart_PPAnim_C.ExecuteUbergraph_Heart_PPAnim
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeart_PPAnim_C::ExecuteUbergraph_Heart_PPAnim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Heart_PPAnim_C", "ExecuteUbergraph_Heart_PPAnim");

	Params::UHeart_PPAnim_C_ExecuteUbergraph_Heart_PPAnim_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


