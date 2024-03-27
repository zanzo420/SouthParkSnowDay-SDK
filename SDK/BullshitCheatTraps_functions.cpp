#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BullshitCheatTraps.BullshitCheatTraps_C
// (None)

class UClass* UBullshitCheatTraps_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BullshitCheatTraps_C");

	return Clss;
}


// BullshitCheatTraps_C BullshitCheatTraps.Default__BullshitCheatTraps_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBullshitCheatTraps_C* UBullshitCheatTraps_C::GetDefaultObj()
{
	static class UBullshitCheatTraps_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBullshitCheatTraps_C*>(UBullshitCheatTraps_C::StaticClass()->DefaultObject);

	return Default;
}

}


