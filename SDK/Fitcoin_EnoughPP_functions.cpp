#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Fitcoin_EnoughPP.Fitcoin_EnoughPP_C
// (None)

class UClass* UFitcoin_EnoughPP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fitcoin_EnoughPP_C");

	return Clss;
}


// Fitcoin_EnoughPP_C Fitcoin_EnoughPP.Default__Fitcoin_EnoughPP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFitcoin_EnoughPP_C* UFitcoin_EnoughPP_C::GetDefaultObj()
{
	static class UFitcoin_EnoughPP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFitcoin_EnoughPP_C*>(UFitcoin_EnoughPP_C::StaticClass()->DefaultObject);

	return Default;
}

}


