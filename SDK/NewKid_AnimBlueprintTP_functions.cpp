#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass NewKid_AnimBlueprintTP.NewKid_AnimBlueprintTP_C
// (None)

class UClass* UNewKid_AnimBlueprintTP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewKid_AnimBlueprintTP_C");

	return Clss;
}


// NewKid_AnimBlueprintTP_C NewKid_AnimBlueprintTP.Default__NewKid_AnimBlueprintTP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNewKid_AnimBlueprintTP_C* UNewKid_AnimBlueprintTP_C::GetDefaultObj()
{
	static class UNewKid_AnimBlueprintTP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNewKid_AnimBlueprintTP_C*>(UNewKid_AnimBlueprintTP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NewKid_AnimBlueprintTP.NewKid_AnimBlueprintTP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UNewKid_AnimBlueprintTP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewKid_AnimBlueprintTP_C", "AnimGraph");

	Params::UNewKid_AnimBlueprintTP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function NewKid_AnimBlueprintTP.NewKid_AnimBlueprintTP_C.ExecuteUbergraph_NewKid_AnimBlueprintTP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewKid_AnimBlueprintTP_C::ExecuteUbergraph_NewKid_AnimBlueprintTP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewKid_AnimBlueprintTP_C", "ExecuteUbergraph_NewKid_AnimBlueprintTP");

	Params::UNewKid_AnimBlueprintTP_C_ExecuteUbergraph_NewKid_AnimBlueprintTP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


