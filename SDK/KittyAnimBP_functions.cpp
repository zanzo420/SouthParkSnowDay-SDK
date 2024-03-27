#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass KittyAnimBP.KittyAnimBP_C
// (None)

class UClass* UKittyAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KittyAnimBP_C");

	return Clss;
}


// KittyAnimBP_C KittyAnimBP.Default__KittyAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKittyAnimBP_C* UKittyAnimBP_C::GetDefaultObj()
{
	static class UKittyAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKittyAnimBP_C*>(UKittyAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KittyAnimBP.KittyAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UKittyAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KittyAnimBP_C", "AnimGraph");

	Params::UKittyAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function KittyAnimBP.KittyAnimBP_C.ExecuteUbergraph_KittyAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKittyAnimBP_C::ExecuteUbergraph_KittyAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KittyAnimBP_C", "ExecuteUbergraph_KittyAnimBP");

	Params::UKittyAnimBP_C_ExecuteUbergraph_KittyAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


