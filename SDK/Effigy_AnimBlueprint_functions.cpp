#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Effigy_AnimBlueprint.Effigy_AnimBlueprint_C
// (None)

class UClass* UEffigy_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effigy_AnimBlueprint_C");

	return Clss;
}


// Effigy_AnimBlueprint_C Effigy_AnimBlueprint.Default__Effigy_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffigy_AnimBlueprint_C* UEffigy_AnimBlueprint_C::GetDefaultObj()
{
	static class UEffigy_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffigy_AnimBlueprint_C*>(UEffigy_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Effigy_AnimBlueprint.Effigy_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UEffigy_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effigy_AnimBlueprint_C", "AnimGraph");

	Params::UEffigy_AnimBlueprint_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Effigy_AnimBlueprint.Effigy_AnimBlueprint_C.UpdateDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DamageRatio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffigy_AnimBlueprint_C::UpdateDamage(float DamageRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effigy_AnimBlueprint_C", "UpdateDamage");

	Params::UEffigy_AnimBlueprint_C_UpdateDamage_Params Parms{};

	Parms.DamageRatio = DamageRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Effigy_AnimBlueprint.Effigy_AnimBlueprint_C.ExecuteUbergraph_Effigy_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_damageRatio                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffigy_AnimBlueprint_C::ExecuteUbergraph_Effigy_AnimBlueprint(int32 EntryPoint, float K2Node_CustomEvent_damageRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effigy_AnimBlueprint_C", "ExecuteUbergraph_Effigy_AnimBlueprint");

	Params::UEffigy_AnimBlueprint_C_ExecuteUbergraph_Effigy_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_damageRatio = K2Node_CustomEvent_damageRatio;

	UObject::ProcessEvent(Func, &Parms);

}

}


