#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ThornDamageType.ThornDamageType_C
// (None)

class UClass* UThornDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThornDamageType_C");

	return Clss;
}


// ThornDamageType_C ThornDamageType.Default__ThornDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UThornDamageType_C* UThornDamageType_C::GetDefaultObj()
{
	static class UThornDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UThornDamageType_C*>(UThornDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


