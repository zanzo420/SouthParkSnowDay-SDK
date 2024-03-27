#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UnlockData_O.UnlockData_O_C
// (None)

class UClass* UUnlockData_O_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnlockData_O_C");

	return Clss;
}


// UnlockData_O_C UnlockData_O.Default__UnlockData_O_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUnlockData_O_C* UUnlockData_O_C::GetDefaultObj()
{
	static class UUnlockData_O_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUnlockData_O_C*>(UUnlockData_O_C::StaticClass()->DefaultObject);

	return Default;
}

}


