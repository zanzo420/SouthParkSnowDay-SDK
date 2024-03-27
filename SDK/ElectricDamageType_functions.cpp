#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElectricDamageType.ElectricDamageType_C
// (None)

class UClass* UElectricDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElectricDamageType_C");

	return Clss;
}


// ElectricDamageType_C ElectricDamageType.Default__ElectricDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElectricDamageType_C* UElectricDamageType_C::GetDefaultObj()
{
	static class UElectricDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElectricDamageType_C*>(UElectricDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


