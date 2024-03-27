#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_StoreNPC.AnimBP_StoreNPC_C
// (None)

class UClass* UAnimBP_StoreNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_StoreNPC_C");

	return Clss;
}


// AnimBP_StoreNPC_C AnimBP_StoreNPC.Default__AnimBP_StoreNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_StoreNPC_C* UAnimBP_StoreNPC_C::GetDefaultObj()
{
	static class UAnimBP_StoreNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_StoreNPC_C*>(UAnimBP_StoreNPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_StoreNPC.AnimBP_StoreNPC_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_StoreNPC_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_StoreNPC_C", "AnimGraph");

	Params::UAnimBP_StoreNPC_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_StoreNPC.AnimBP_StoreNPC_C.ExecuteUbergraph_AnimBP_StoreNPC
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_StoreNPC_C::ExecuteUbergraph_AnimBP_StoreNPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_StoreNPC_C", "ExecuteUbergraph_AnimBP_StoreNPC");

	Params::UAnimBP_StoreNPC_C_ExecuteUbergraph_AnimBP_StoreNPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


