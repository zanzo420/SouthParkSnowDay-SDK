#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OptionsAnalog_BPI.OptionsAnalog_BPI_C
// (None)

class UClass* IOptionsAnalog_BPI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptionsAnalog_BPI_C");

	return Clss;
}


// OptionsAnalog_BPI_C OptionsAnalog_BPI.Default__OptionsAnalog_BPI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IOptionsAnalog_BPI_C* IOptionsAnalog_BPI_C::GetDefaultObj()
{
	static class IOptionsAnalog_BPI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptionsAnalog_BPI_C*>(IOptionsAnalog_BPI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OptionsAnalog_BPI.OptionsAnalog_BPI_C.HandleAnalogState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IOptionsAnalog_BPI_C::HandleAnalogState(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsAnalog_BPI_C", "HandleAnalogState");

	Params::IOptionsAnalog_BPI_C_HandleAnalogState_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


