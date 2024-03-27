#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hair_AfroHawk_01.Hair_AfroHawk_01_C
// (None)

class UClass* UHair_AfroHawk_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hair_AfroHawk_01_C");

	return Clss;
}


// Hair_AfroHawk_01_C Hair_AfroHawk_01.Default__Hair_AfroHawk_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHair_AfroHawk_01_C* UHair_AfroHawk_01_C::GetDefaultObj()
{
	static class UHair_AfroHawk_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHair_AfroHawk_01_C*>(UHair_AfroHawk_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


