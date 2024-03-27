#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BruteTackleDamageType.BruteTackleDamageType_C
// (None)

class UClass* UBruteTackleDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BruteTackleDamageType_C");

	return Clss;
}


// BruteTackleDamageType_C BruteTackleDamageType.Default__BruteTackleDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBruteTackleDamageType_C* UBruteTackleDamageType_C::GetDefaultObj()
{
	static class UBruteTackleDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBruteTackleDamageType_C*>(UBruteTackleDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


