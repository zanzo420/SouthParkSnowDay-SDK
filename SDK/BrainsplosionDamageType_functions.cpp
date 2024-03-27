#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BrainsplosionDamageType.BrainsplosionDamageType_C
// (None)

class UClass* UBrainsplosionDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrainsplosionDamageType_C");

	return Clss;
}


// BrainsplosionDamageType_C BrainsplosionDamageType.Default__BrainsplosionDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBrainsplosionDamageType_C* UBrainsplosionDamageType_C::GetDefaultObj()
{
	static class UBrainsplosionDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBrainsplosionDamageType_C*>(UBrainsplosionDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


