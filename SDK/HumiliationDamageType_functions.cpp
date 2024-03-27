#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HumiliationDamageType.HumiliationDamageType_C
// (None)

class UClass* UHumiliationDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HumiliationDamageType_C");

	return Clss;
}


// HumiliationDamageType_C HumiliationDamageType.Default__HumiliationDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHumiliationDamageType_C* UHumiliationDamageType_C::GetDefaultObj()
{
	static class UHumiliationDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHumiliationDamageType_C*>(UHumiliationDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


