#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dragon_Interface.Dragon_Interface_C
// (None)

class UClass* IDragon_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dragon_Interface_C");

	return Clss;
}


// Dragon_Interface_C Dragon_Interface.Default__Dragon_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IDragon_Interface_C* IDragon_Interface_C::GetDefaultObj()
{
	static class IDragon_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IDragon_Interface_C*>(IDragon_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Dragon_Interface.Dragon_Interface_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IDragon_Interface_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dragon_Interface_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


