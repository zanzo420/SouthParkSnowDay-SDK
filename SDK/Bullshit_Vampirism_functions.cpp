#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bullshit_Vampirism.Bullshit_Vampirism_C
// (None)

class UClass* UBullshit_Vampirism_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bullshit_Vampirism_C");

	return Clss;
}


// Bullshit_Vampirism_C Bullshit_Vampirism.Default__Bullshit_Vampirism_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBullshit_Vampirism_C* UBullshit_Vampirism_C::GetDefaultObj()
{
	static class UBullshit_Vampirism_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBullshit_Vampirism_C*>(UBullshit_Vampirism_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bullshit_Vampirism.Bullshit_Vampirism_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBullshit_Vampirism_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bullshit_Vampirism_C", "OnDebugDisplay");

	Params::UBullshit_Vampirism_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;

	UObject::ProcessEvent(Func, &Parms);

}

}


