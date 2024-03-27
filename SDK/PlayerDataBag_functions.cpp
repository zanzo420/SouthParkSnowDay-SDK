#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerDataBag.PlayerDataBag_C
// (None)

class UClass* UPlayerDataBag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerDataBag_C");

	return Clss;
}


// PlayerDataBag_C PlayerDataBag.Default__PlayerDataBag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerDataBag_C* UPlayerDataBag_C::GetDefaultObj()
{
	static class UPlayerDataBag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerDataBag_C*>(UPlayerDataBag_C::StaticClass()->DefaultObject);

	return Default;
}

}


