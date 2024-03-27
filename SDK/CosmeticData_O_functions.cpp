#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CosmeticData_O.CosmeticData_O_C
// (None)

class UClass* UCosmeticData_O_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CosmeticData_O_C");

	return Clss;
}


// CosmeticData_O_C CosmeticData_O.Default__CosmeticData_O_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCosmeticData_O_C* UCosmeticData_O_C::GetDefaultObj()
{
	static class UCosmeticData_O_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCosmeticData_O_C*>(UCosmeticData_O_C::StaticClass()->DefaultObject);

	return Default;
}

}


