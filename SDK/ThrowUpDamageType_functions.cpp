#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ThrowUpDamageType.ThrowUpDamageType_C
// (None)

class UClass* UThrowUpDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThrowUpDamageType_C");

	return Clss;
}


// ThrowUpDamageType_C ThrowUpDamageType.Default__ThrowUpDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UThrowUpDamageType_C* UThrowUpDamageType_C::GetDefaultObj()
{
	static class UThrowUpDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UThrowUpDamageType_C*>(UThrowUpDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


