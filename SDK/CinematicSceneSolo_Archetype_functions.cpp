#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CinematicSceneSolo_Archetype.CinematicSceneSolo_Archetype_C
// (Actor)

class UClass* ACinematicSceneSolo_Archetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CinematicSceneSolo_Archetype_C");

	return Clss;
}


// CinematicSceneSolo_Archetype_C CinematicSceneSolo_Archetype.Default__CinematicSceneSolo_Archetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACinematicSceneSolo_Archetype_C* ACinematicSceneSolo_Archetype_C::GetDefaultObj()
{
	static class ACinematicSceneSolo_Archetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACinematicSceneSolo_Archetype_C*>(ACinematicSceneSolo_Archetype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CinematicSceneSolo_Archetype.CinematicSceneSolo_Archetype_C.EndScene_Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                BodyToEndScene                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACinematicSceneSolo_Archetype_C::EndScene_Server(class AQtnBodyPawn* BodyToEndScene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicSceneSolo_Archetype_C", "EndScene_Server");

	Params::ACinematicSceneSolo_Archetype_C_EndScene_Server_Params Parms{};

	Parms.BodyToEndScene = BodyToEndScene;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CinematicSceneSolo_Archetype.CinematicSceneSolo_Archetype_C.ExecuteUbergraph_CinematicSceneSolo_Archetype
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_BodyToEndScene                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACinematicSceneSolo_Archetype_C::ExecuteUbergraph_CinematicSceneSolo_Archetype(int32 EntryPoint, class AQtnBodyPawn* K2Node_CustomEvent_BodyToEndScene)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicSceneSolo_Archetype_C", "ExecuteUbergraph_CinematicSceneSolo_Archetype");

	Params::ACinematicSceneSolo_Archetype_C_ExecuteUbergraph_CinematicSceneSolo_Archetype_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_BodyToEndScene = K2Node_CustomEvent_BodyToEndScene;

	UObject::ProcessEvent(Func, &Parms);

}

}


