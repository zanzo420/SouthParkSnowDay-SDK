#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ForceDamageType.ForceDamageType_C
// (None)

class UClass* UForceDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ForceDamageType_C");

	return Clss;
}


// ForceDamageType_C ForceDamageType.Default__ForceDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UForceDamageType_C* UForceDamageType_C::GetDefaultObj()
{
	static class UForceDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UForceDamageType_C*>(UForceDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


