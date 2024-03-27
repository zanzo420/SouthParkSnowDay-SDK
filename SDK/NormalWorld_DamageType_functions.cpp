#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NormalWorld_DamageType.NormalWorld_DamageType_C
// (None)

class UClass* UNormalWorld_DamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NormalWorld_DamageType_C");

	return Clss;
}


// NormalWorld_DamageType_C NormalWorld_DamageType.Default__NormalWorld_DamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNormalWorld_DamageType_C* UNormalWorld_DamageType_C::GetDefaultObj()
{
	static class UNormalWorld_DamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNormalWorld_DamageType_C*>(UNormalWorld_DamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


