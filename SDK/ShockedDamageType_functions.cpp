#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShockedDamageType.ShockedDamageType_C
// (None)

class UClass* UShockedDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShockedDamageType_C");

	return Clss;
}


// ShockedDamageType_C ShockedDamageType.Default__ShockedDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShockedDamageType_C* UShockedDamageType_C::GetDefaultObj()
{
	static class UShockedDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShockedDamageType_C*>(UShockedDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


