#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FixedCameraVolume_FTUX.FixedCameraVolume_FTUX_C
// (Actor)

class UClass* AFixedCameraVolume_FTUX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FixedCameraVolume_FTUX_C");

	return Clss;
}


// FixedCameraVolume_FTUX_C FixedCameraVolume_FTUX.Default__FixedCameraVolume_FTUX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFixedCameraVolume_FTUX_C* AFixedCameraVolume_FTUX_C::GetDefaultObj()
{
	static class AFixedCameraVolume_FTUX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFixedCameraVolume_FTUX_C*>(AFixedCameraVolume_FTUX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FixedCameraVolume_FTUX.FixedCameraVolume_FTUX_C.HandlePlayerExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFixedCameraVolume_FTUX_C::HandlePlayerExit(class ABodyPawnPlayer_C* PlayerBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FixedCameraVolume_FTUX_C", "HandlePlayerExit");

	Params::AFixedCameraVolume_FTUX_C_HandlePlayerExit_Params Parms{};

	Parms.PlayerBody = PlayerBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FixedCameraVolume_FTUX.FixedCameraVolume_FTUX_C.HandlePlayerEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnPlayer_C*           PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFixedCameraVolume_FTUX_C::HandlePlayerEnter(class ABodyPawnPlayer_C* PlayerBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FixedCameraVolume_FTUX_C", "HandlePlayerEnter");

	Params::AFixedCameraVolume_FTUX_C_HandlePlayerEnter_Params Parms{};

	Parms.PlayerBody = PlayerBody;

	UObject::ProcessEvent(Func, &Parms);

}

}


