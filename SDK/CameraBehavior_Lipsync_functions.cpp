#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraBehavior_Lipsync.CameraBehavior_Lipsync_C
// (None)

class UClass* UCameraBehavior_Lipsync_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_Lipsync_C");

	return Clss;
}


// CameraBehavior_Lipsync_C CameraBehavior_Lipsync.Default__CameraBehavior_Lipsync_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraBehavior_Lipsync_C* UCameraBehavior_Lipsync_C::GetDefaultObj()
{
	static class UCameraBehavior_Lipsync_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_Lipsync_C*>(UCameraBehavior_Lipsync_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraBehavior_Lipsync.CameraBehavior_Lipsync_C.OnCameraBehaviorTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBehavior_Lipsync_C::OnCameraBehaviorTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraBehavior_Lipsync_C", "OnCameraBehaviorTick");

	Params::UCameraBehavior_Lipsync_C_OnCameraBehaviorTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CameraBehavior_Lipsync.CameraBehavior_Lipsync_C.ExecuteUbergraph_CameraBehavior_Lipsync
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBehavior_Lipsync_C::ExecuteUbergraph_CameraBehavior_Lipsync(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraBehavior_Lipsync_C", "ExecuteUbergraph_CameraBehavior_Lipsync");

	Params::UCameraBehavior_Lipsync_C_ExecuteUbergraph_CameraBehavior_Lipsync_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


