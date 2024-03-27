#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cine_TEMP_Standin.Cine_TEMP_Standin_C
// (Actor)

class UClass* ACine_TEMP_Standin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cine_TEMP_Standin_C");

	return Clss;
}


// Cine_TEMP_Standin_C Cine_TEMP_Standin.Default__Cine_TEMP_Standin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACine_TEMP_Standin_C* ACine_TEMP_Standin_C::GetDefaultObj()
{
	static class ACine_TEMP_Standin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACine_TEMP_Standin_C*>(ACine_TEMP_Standin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cine_TEMP_Standin.Cine_TEMP_Standin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACine_TEMP_Standin_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_TEMP_Standin_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_TEMP_Standin.Cine_TEMP_Standin_C.PlayNextShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_TEMP_Standin_C::PlayNextShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_TEMP_Standin_C", "PlayNextShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_TEMP_Standin.Cine_TEMP_Standin_C.StartScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_TEMP_Standin_C::StartScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_TEMP_Standin_C", "StartScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_TEMP_Standin.Cine_TEMP_Standin_C.EndScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_TEMP_Standin_C::EndScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_TEMP_Standin_C", "EndScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_TEMP_Standin.Cine_TEMP_Standin_C.CleanUpCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_TEMP_Standin_C::CleanUpCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_TEMP_Standin_C", "CleanUpCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_TEMP_Standin.Cine_TEMP_Standin_C.ExecuteUbergraph_Cine_TEMP_Standin
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACine_TEMP_Standin_C::ExecuteUbergraph_Cine_TEMP_Standin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_TEMP_Standin_C", "ExecuteUbergraph_Cine_TEMP_Standin");

	Params::ACine_TEMP_Standin_C_ExecuteUbergraph_Cine_TEMP_Standin_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


