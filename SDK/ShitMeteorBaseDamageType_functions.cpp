#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShitMeteorBaseDamageType.ShitMeteorBaseDamageType_C
// (None)

class UClass* UShitMeteorBaseDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShitMeteorBaseDamageType_C");

	return Clss;
}


// ShitMeteorBaseDamageType_C ShitMeteorBaseDamageType.Default__ShitMeteorBaseDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShitMeteorBaseDamageType_C* UShitMeteorBaseDamageType_C::GetDefaultObj()
{
	static class UShitMeteorBaseDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShitMeteorBaseDamageType_C*>(UShitMeteorBaseDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


