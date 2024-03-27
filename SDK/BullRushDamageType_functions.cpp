#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BullRushDamageType.BullRushDamageType_C
// (None)

class UClass* UBullRushDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BullRushDamageType_C");

	return Clss;
}


// BullRushDamageType_C BullRushDamageType.Default__BullRushDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBullRushDamageType_C* UBullRushDamageType_C::GetDefaultObj()
{
	static class UBullRushDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBullRushDamageType_C*>(UBullRushDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


