#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Fitcoin_Tutorial.Fitcoin_Tutorial_C
// (None)

class UClass* UFitcoin_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fitcoin_Tutorial_C");

	return Clss;
}


// Fitcoin_Tutorial_C Fitcoin_Tutorial.Default__Fitcoin_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFitcoin_Tutorial_C* UFitcoin_Tutorial_C::GetDefaultObj()
{
	static class UFitcoin_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFitcoin_Tutorial_C*>(UFitcoin_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


