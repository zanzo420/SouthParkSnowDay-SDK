#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bullshit_LaserSword.Bullshit_LaserSword_C
// (None)

class UClass* UBullshit_LaserSword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bullshit_LaserSword_C");

	return Clss;
}


// Bullshit_LaserSword_C Bullshit_LaserSword.Default__Bullshit_LaserSword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBullshit_LaserSword_C* UBullshit_LaserSword_C::GetDefaultObj()
{
	static class UBullshit_LaserSword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBullshit_LaserSword_C*>(UBullshit_LaserSword_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bullshit_LaserSword.Bullshit_LaserSword_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBullshit_LaserSword_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bullshit_LaserSword_C", "OnDebugDisplay");

	Params::UBullshit_LaserSword_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;

	UObject::ProcessEvent(Func, &Parms);

}

}


