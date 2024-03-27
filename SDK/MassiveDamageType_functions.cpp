#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MassiveDamageType.MassiveDamageType_C
// (None)

class UClass* UMassiveDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MassiveDamageType_C");

	return Clss;
}


// MassiveDamageType_C MassiveDamageType.Default__MassiveDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMassiveDamageType_C* UMassiveDamageType_C::GetDefaultObj()
{
	static class UMassiveDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMassiveDamageType_C*>(UMassiveDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


