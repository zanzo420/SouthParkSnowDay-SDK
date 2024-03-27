#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bullshit_SuperStrength.Bullshit_SuperStrength_C
// (None)

class UClass* UBullshit_SuperStrength_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bullshit_SuperStrength_C");

	return Clss;
}


// Bullshit_SuperStrength_C Bullshit_SuperStrength.Default__Bullshit_SuperStrength_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBullshit_SuperStrength_C* UBullshit_SuperStrength_C::GetDefaultObj()
{
	static class UBullshit_SuperStrength_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBullshit_SuperStrength_C*>(UBullshit_SuperStrength_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bullshit_SuperStrength.Bullshit_SuperStrength_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBullshit_SuperStrength_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bullshit_SuperStrength_C", "OnDebugDisplay");

	Params::UBullshit_SuperStrength_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;

	UObject::ProcessEvent(Func, &Parms);

}

}


