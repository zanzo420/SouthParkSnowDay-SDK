#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HouseExplodeShake.HouseExplodeShake_C
// (None)

class UClass* UHouseExplodeShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HouseExplodeShake_C");

	return Clss;
}


// HouseExplodeShake_C HouseExplodeShake.Default__HouseExplodeShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHouseExplodeShake_C* UHouseExplodeShake_C::GetDefaultObj()
{
	static class UHouseExplodeShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHouseExplodeShake_C*>(UHouseExplodeShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


