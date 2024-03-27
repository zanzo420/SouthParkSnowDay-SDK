#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hanky_Actor_BP.Hanky_Actor_BP_C
// (Actor)

class UClass* AHanky_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hanky_Actor_BP_C");

	return Clss;
}


// Hanky_Actor_BP_C Hanky_Actor_BP.Default__Hanky_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHanky_Actor_BP_C* AHanky_Actor_BP_C::GetDefaultObj()
{
	static class AHanky_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHanky_Actor_BP_C*>(AHanky_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Hanky_Actor_BP.Hanky_Actor_BP_C.Local Update Hankey Vis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceVisOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHanky_Actor_BP_C::Local_Update_Hankey_Vis(bool ForceVisOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hanky_Actor_BP_C", "Local Update Hankey Vis");

	Params::AHanky_Actor_BP_C_Local_Update_Hankey_Vis_Params Parms{};

	Parms.ForceVisOn = ForceVisOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Hanky_Actor_BP.Hanky_Actor_BP_C.DoBeckon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHanky_Actor_BP_C::DoBeckon(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hanky_Actor_BP_C", "DoBeckon");

	Params::AHanky_Actor_BP_C_DoBeckon_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Hanky_Actor_BP.Hanky_Actor_BP_C.ExecuteUbergraph_Hanky_Actor_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHanky_Actor_BP_C::ExecuteUbergraph_Hanky_Actor_BP(int32 EntryPoint, class AActor* K2Node_Event_OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hanky_Actor_BP_C", "ExecuteUbergraph_Hanky_Actor_BP");

	Params::AHanky_Actor_BP_C_ExecuteUbergraph_Hanky_Actor_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


