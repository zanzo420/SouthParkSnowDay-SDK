#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlameDamageType.FlameDamageType_C
// (None)

class UClass* UFlameDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlameDamageType_C");

	return Clss;
}


// FlameDamageType_C FlameDamageType.Default__FlameDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlameDamageType_C* UFlameDamageType_C::GetDefaultObj()
{
	static class UFlameDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlameDamageType_C*>(UFlameDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


