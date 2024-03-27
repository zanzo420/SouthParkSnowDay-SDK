#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChilledDamageType.ChilledDamageType_C
// (None)

class UClass* UChilledDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChilledDamageType_C");

	return Clss;
}


// ChilledDamageType_C ChilledDamageType.Default__ChilledDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChilledDamageType_C* UChilledDamageType_C::GetDefaultObj()
{
	static class UChilledDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChilledDamageType_C*>(UChilledDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


