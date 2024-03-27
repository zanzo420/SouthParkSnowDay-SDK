#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cinematic_ShizaDeath.Cinematic_ShizaDeath_C
// (Actor)

class UClass* ACinematic_ShizaDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cinematic_ShizaDeath_C");

	return Clss;
}


// Cinematic_ShizaDeath_C Cinematic_ShizaDeath.Default__Cinematic_ShizaDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACinematic_ShizaDeath_C* ACinematic_ShizaDeath_C::GetDefaultObj()
{
	static class ACinematic_ShizaDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACinematic_ShizaDeath_C*>(ACinematic_ShizaDeath_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cinematic_ShizaDeath.Cinematic_ShizaDeath_C.PlayNextShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACinematic_ShizaDeath_C::PlayNextShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cinematic_ShizaDeath_C", "PlayNextShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cinematic_ShizaDeath.Cinematic_ShizaDeath_C.StartScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACinematic_ShizaDeath_C::StartScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cinematic_ShizaDeath_C", "StartScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cinematic_ShizaDeath.Cinematic_ShizaDeath_C.ExecuteUbergraph_Cinematic_ShizaDeath
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACinematic_ShizaDeath_C::ExecuteUbergraph_Cinematic_ShizaDeath(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cinematic_ShizaDeath_C", "ExecuteUbergraph_Cinematic_ShizaDeath");

	Params::ACinematic_ShizaDeath_C_ExecuteUbergraph_Cinematic_ShizaDeath_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


