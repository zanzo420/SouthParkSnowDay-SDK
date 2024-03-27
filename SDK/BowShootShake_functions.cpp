#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BowShootShake.BowShootShake_C
// (None)

class UClass* UBowShootShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BowShootShake_C");

	return Clss;
}


// BowShootShake_C BowShootShake.Default__BowShootShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBowShootShake_C* UBowShootShake_C::GetDefaultObj()
{
	static class UBowShootShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBowShootShake_C*>(UBowShootShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


