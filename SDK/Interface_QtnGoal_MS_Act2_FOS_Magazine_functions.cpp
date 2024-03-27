#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_QtnGoal_MS_Act2_FOS_Magazine.Interface_QtnGoal_MS_Act2_FOS_Magazine_C
// (None)

class UClass* IInterface_QtnGoal_MS_Act2_FOS_Magazine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_QtnGoal_MS_Act2_FOS_Magazine_C");

	return Clss;
}


// Interface_QtnGoal_MS_Act2_FOS_Magazine_C Interface_QtnGoal_MS_Act2_FOS_Magazine.Default__Interface_QtnGoal_MS_Act2_FOS_Magazine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_QtnGoal_MS_Act2_FOS_Magazine_C* IInterface_QtnGoal_MS_Act2_FOS_Magazine_C::GetDefaultObj()
{
	static class IInterface_QtnGoal_MS_Act2_FOS_Magazine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_QtnGoal_MS_Act2_FOS_Magazine_C*>(IInterface_QtnGoal_MS_Act2_FOS_Magazine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_QtnGoal_MS_Act2_FOS_Magazine.Interface_QtnGoal_MS_Act2_FOS_Magazine_C.SetPlayersInSpoke
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayersInSpoke                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_QtnGoal_MS_Act2_FOS_Magazine_C::SetPlayersInSpoke(bool PlayersInSpoke)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_MS_Act2_FOS_Magazine_C", "SetPlayersInSpoke");

	Params::IInterface_QtnGoal_MS_Act2_FOS_Magazine_C_SetPlayersInSpoke_Params Parms{};

	Parms.PlayersInSpoke = PlayersInSpoke;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_QtnGoal_MS_Act2_FOS_Magazine.Interface_QtnGoal_MS_Act2_FOS_Magazine_C.SetMagazinesGrabbed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MagazinesGrabbed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_QtnGoal_MS_Act2_FOS_Magazine_C::SetMagazinesGrabbed(bool MagazinesGrabbed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_MS_Act2_FOS_Magazine_C", "SetMagazinesGrabbed");

	Params::IInterface_QtnGoal_MS_Act2_FOS_Magazine_C_SetMagazinesGrabbed_Params Parms{};

	Parms.MagazinesGrabbed = MagazinesGrabbed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_QtnGoal_MS_Act2_FOS_Magazine.Interface_QtnGoal_MS_Act2_FOS_Magazine_C.SetStartedInDebugMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DebugMode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_QtnGoal_MS_Act2_FOS_Magazine_C::SetStartedInDebugMode(bool DebugMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_MS_Act2_FOS_Magazine_C", "SetStartedInDebugMode");

	Params::IInterface_QtnGoal_MS_Act2_FOS_Magazine_C_SetStartedInDebugMode_Params Parms{};

	Parms.DebugMode = DebugMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_QtnGoal_MS_Act2_FOS_Magazine.Interface_QtnGoal_MS_Act2_FOS_Magazine_C.DEBUGONLY_SetDebugLocations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      DebugLocations                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void IInterface_QtnGoal_MS_Act2_FOS_Magazine_C::DEBUGONLY_SetDebugLocations(TArray<int32>& DebugLocations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_MS_Act2_FOS_Magazine_C", "DEBUGONLY_SetDebugLocations");

	Params::IInterface_QtnGoal_MS_Act2_FOS_Magazine_C_DEBUGONLY_SetDebugLocations_Params Parms{};

	Parms.DebugLocations = DebugLocations;

	UObject::ProcessEvent(Func, &Parms);

}

}


