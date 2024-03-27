#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChangeCosmetics_Tutorial.ChangeCosmetics_Tutorial_C
// (None)

class UClass* UChangeCosmetics_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChangeCosmetics_Tutorial_C");

	return Clss;
}


// ChangeCosmetics_Tutorial_C ChangeCosmetics_Tutorial.Default__ChangeCosmetics_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChangeCosmetics_Tutorial_C* UChangeCosmetics_Tutorial_C::GetDefaultObj()
{
	static class UChangeCosmetics_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChangeCosmetics_Tutorial_C*>(UChangeCosmetics_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


