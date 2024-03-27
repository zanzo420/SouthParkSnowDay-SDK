#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VomitingDamageType.VomitingDamageType_C
// (None)

class UClass* UVomitingDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VomitingDamageType_C");

	return Clss;
}


// VomitingDamageType_C VomitingDamageType.Default__VomitingDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVomitingDamageType_C* UVomitingDamageType_C::GetDefaultObj()
{
	static class UVomitingDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVomitingDamageType_C*>(UVomitingDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


