#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlockedDamageType.BlockedDamageType_C
// (None)

class UClass* UBlockedDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlockedDamageType_C");

	return Clss;
}


// BlockedDamageType_C BlockedDamageType.Default__BlockedDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlockedDamageType_C* UBlockedDamageType_C::GetDefaultObj()
{
	static class UBlockedDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlockedDamageType_C*>(UBlockedDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


