#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BurningDamageType.BurningDamageType_C
// (None)

class UClass* UBurningDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BurningDamageType_C");

	return Clss;
}


// BurningDamageType_C BurningDamageType.Default__BurningDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBurningDamageType_C* UBurningDamageType_C::GetDefaultObj()
{
	static class UBurningDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBurningDamageType_C*>(UBurningDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


