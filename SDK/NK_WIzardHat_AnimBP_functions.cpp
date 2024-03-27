#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass NK_WIzardHat_AnimBP.NK_WIzardHat_AnimBP_C
// (None)

class UClass* UNK_WIzardHat_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NK_WIzardHat_AnimBP_C");

	return Clss;
}


// NK_WIzardHat_AnimBP_C NK_WIzardHat_AnimBP.Default__NK_WIzardHat_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNK_WIzardHat_AnimBP_C* UNK_WIzardHat_AnimBP_C::GetDefaultObj()
{
	static class UNK_WIzardHat_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNK_WIzardHat_AnimBP_C*>(UNK_WIzardHat_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NK_WIzardHat_AnimBP.NK_WIzardHat_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UNK_WIzardHat_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NK_WIzardHat_AnimBP_C", "AnimGraph");

	Params::UNK_WIzardHat_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function NK_WIzardHat_AnimBP.NK_WIzardHat_AnimBP_C.ExecuteUbergraph_NK_WIzardHat_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNK_WIzardHat_AnimBP_C::ExecuteUbergraph_NK_WIzardHat_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NK_WIzardHat_AnimBP_C", "ExecuteUbergraph_NK_WIzardHat_AnimBP");

	Params::UNK_WIzardHat_AnimBP_C_ExecuteUbergraph_NK_WIzardHat_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


