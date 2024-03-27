#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NecromancyDamageType.NecromancyDamageType_C
// (None)

class UClass* UNecromancyDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NecromancyDamageType_C");

	return Clss;
}


// NecromancyDamageType_C NecromancyDamageType.Default__NecromancyDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNecromancyDamageType_C* UNecromancyDamageType_C::GetDefaultObj()
{
	static class UNecromancyDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNecromancyDamageType_C*>(UNecromancyDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


