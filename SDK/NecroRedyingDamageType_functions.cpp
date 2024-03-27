#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NecroRedyingDamageType.NecroRedyingDamageType_C
// (None)

class UClass* UNecroRedyingDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NecroRedyingDamageType_C");

	return Clss;
}


// NecroRedyingDamageType_C NecroRedyingDamageType.Default__NecroRedyingDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNecroRedyingDamageType_C* UNecroRedyingDamageType_C::GetDefaultObj()
{
	static class UNecroRedyingDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNecroRedyingDamageType_C*>(UNecroRedyingDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


