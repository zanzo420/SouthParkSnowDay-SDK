#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_QtnGoal_MS_Act2_ShiTpaTown.Interface_QtnGoal_MS_Act2_ShiTpaTown_C
// (None)

class UClass* IInterface_QtnGoal_MS_Act2_ShiTpaTown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_QtnGoal_MS_Act2_ShiTpaTown_C");

	return Clss;
}


// Interface_QtnGoal_MS_Act2_ShiTpaTown_C Interface_QtnGoal_MS_Act2_ShiTpaTown.Default__Interface_QtnGoal_MS_Act2_ShiTpaTown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_QtnGoal_MS_Act2_ShiTpaTown_C* IInterface_QtnGoal_MS_Act2_ShiTpaTown_C::GetDefaultObj()
{
	static class IInterface_QtnGoal_MS_Act2_ShiTpaTown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_QtnGoal_MS_Act2_ShiTpaTown_C*>(IInterface_QtnGoal_MS_Act2_ShiTpaTown_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_QtnGoal_MS_Act2_ShiTpaTown.Interface_QtnGoal_MS_Act2_ShiTpaTown_C.GetInitialAllLocations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ALocationMarker_BP_C*>InitialAllLocations                                              (Parm, OutParm)

void IInterface_QtnGoal_MS_Act2_ShiTpaTown_C::GetInitialAllLocations(TArray<class ALocationMarker_BP_C*>* InitialAllLocations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_MS_Act2_ShiTpaTown_C", "GetInitialAllLocations");

	Params::IInterface_QtnGoal_MS_Act2_ShiTpaTown_C_GetInitialAllLocations_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InitialAllLocations != nullptr)
		*InitialAllLocations = std::move(Parms.InitialAllLocations);

}


// Function Interface_QtnGoal_MS_Act2_ShiTpaTown.Interface_QtnGoal_MS_Act2_ShiTpaTown_C.DEBUGONLY_DoForceLocations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              OrderedItems                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void IInterface_QtnGoal_MS_Act2_ShiTpaTown_C::DEBUGONLY_DoForceLocations(TArray<class FString>& OrderedItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_MS_Act2_ShiTpaTown_C", "DEBUGONLY_DoForceLocations");

	Params::IInterface_QtnGoal_MS_Act2_ShiTpaTown_C_DEBUGONLY_DoForceLocations_Params Parms{};

	Parms.OrderedItems = OrderedItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_QtnGoal_MS_Act2_ShiTpaTown.Interface_QtnGoal_MS_Act2_ShiTpaTown_C.DEBUGONLY_SetForcedLocations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ALocationMarker_BP_C*>ForcedLocations                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void IInterface_QtnGoal_MS_Act2_ShiTpaTown_C::DEBUGONLY_SetForcedLocations(TArray<class ALocationMarker_BP_C*>& ForcedLocations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_MS_Act2_ShiTpaTown_C", "DEBUGONLY_SetForcedLocations");

	Params::IInterface_QtnGoal_MS_Act2_ShiTpaTown_C_DEBUGONLY_SetForcedLocations_Params Parms{};

	Parms.ForcedLocations = ForcedLocations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_QtnGoal_MS_Act2_ShiTpaTown.Interface_QtnGoal_MS_Act2_ShiTpaTown_C.SetSpawnedInDebugMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SpawnedInDebugMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_QtnGoal_MS_Act2_ShiTpaTown_C::SetSpawnedInDebugMode(bool SpawnedInDebugMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_MS_Act2_ShiTpaTown_C", "SetSpawnedInDebugMode");

	Params::IInterface_QtnGoal_MS_Act2_ShiTpaTown_C_SetSpawnedInDebugMode_Params Parms{};

	Parms.SpawnedInDebugMode = SpawnedInDebugMode;

	UObject::ProcessEvent(Func, &Parms);

}

}


