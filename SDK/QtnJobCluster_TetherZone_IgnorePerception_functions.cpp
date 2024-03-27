#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnJobCluster_TetherZone_IgnorePerception.QtnJobCluster_TetherZone_IgnorePerception_C
// (None)

class UClass* UQtnJobCluster_TetherZone_IgnorePerception_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnJobCluster_TetherZone_IgnorePerception_C");

	return Clss;
}


// QtnJobCluster_TetherZone_IgnorePerception_C QtnJobCluster_TetherZone_IgnorePerception.Default__QtnJobCluster_TetherZone_IgnorePerception_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnJobCluster_TetherZone_IgnorePerception_C* UQtnJobCluster_TetherZone_IgnorePerception_C::GetDefaultObj()
{
	static class UQtnJobCluster_TetherZone_IgnorePerception_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnJobCluster_TetherZone_IgnorePerception_C*>(UQtnJobCluster_TetherZone_IgnorePerception_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnJobCluster_TetherZone_IgnorePerception.QtnJobCluster_TetherZone_IgnorePerception_C.IsAIJobClusterViable_ServerOnly
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnPawn*                    Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForInitialAdoption                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UQtnJobCluster_TetherZone_IgnorePerception_C::IsAIJobClusterViable_ServerOnly(class AQtnPawn* Pawn, bool ForInitialAdoption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnJobCluster_TetherZone_IgnorePerception_C", "IsAIJobClusterViable_ServerOnly");

	Params::UQtnJobCluster_TetherZone_IgnorePerception_C_IsAIJobClusterViable_ServerOnly_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.ForInitialAdoption = ForInitialAdoption;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QtnJobCluster_TetherZone_IgnorePerception.QtnJobCluster_TetherZone_IgnorePerception_C.GetAIJobClusterHeuristic
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnPawn*                    UnemployedPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAIJobClusterHeuristic_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAIJobComponent_TetherZone_C*K2Node_DynamicCast_AsQtn_AIJob_Component_Tether_Zone             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UQtnJobCluster_TetherZone_IgnorePerception_C::GetAIJobClusterHeuristic(class AQtnPawn* UnemployedPawn, float CallFunc_GetAIJobClusterHeuristic_ReturnValue, class UQtnAIJobComponent_TetherZone_C* K2Node_DynamicCast_AsQtn_AIJob_Component_Tether_Zone, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnJobCluster_TetherZone_IgnorePerception_C", "GetAIJobClusterHeuristic");

	Params::UQtnJobCluster_TetherZone_IgnorePerception_C_GetAIJobClusterHeuristic_Params Parms{};

	Parms.UnemployedPawn = UnemployedPawn;
	Parms.CallFunc_GetAIJobClusterHeuristic_ReturnValue = CallFunc_GetAIJobClusterHeuristic_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_AIJob_Component_Tether_Zone = K2Node_DynamicCast_AsQtn_AIJob_Component_Tether_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


