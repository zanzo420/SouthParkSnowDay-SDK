#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bullshit_Traps.Bullshit_Traps_C
// (None)

class UClass* UBullshit_Traps_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bullshit_Traps_C");

	return Clss;
}


// Bullshit_Traps_C Bullshit_Traps.Default__Bullshit_Traps_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBullshit_Traps_C* UBullshit_Traps_C::GetDefaultObj()
{
	static class UBullshit_Traps_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBullshit_Traps_C*>(UBullshit_Traps_C::StaticClass()->DefaultObject);

	return Default;
}

}


