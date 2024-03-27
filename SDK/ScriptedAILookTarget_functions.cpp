#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScriptedAILookTarget.ScriptedAILookTarget_C
// (Actor)

class UClass* AScriptedAILookTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScriptedAILookTarget_C");

	return Clss;
}


// ScriptedAILookTarget_C ScriptedAILookTarget.Default__ScriptedAILookTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AScriptedAILookTarget_C* AScriptedAILookTarget_C::GetDefaultObj()
{
	static class AScriptedAILookTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AScriptedAILookTarget_C*>(AScriptedAILookTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ScriptedAILookTarget.ScriptedAILookTarget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AScriptedAILookTarget_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedAILookTarget_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedAILookTarget.ScriptedAILookTarget_C.ExecuteUbergraph_ScriptedAILookTarget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedAILookTarget_C::ExecuteUbergraph_ScriptedAILookTarget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedAILookTarget_C", "ExecuteUbergraph_ScriptedAILookTarget");

	Params::AScriptedAILookTarget_C_ExecuteUbergraph_ScriptedAILookTarget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


