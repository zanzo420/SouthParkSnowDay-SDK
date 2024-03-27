#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hair_LongSilver.Hair_LongSilver_C
// (None)

class UClass* UHair_LongSilver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hair_LongSilver_C");

	return Clss;
}


// Hair_LongSilver_C Hair_LongSilver.Default__Hair_LongSilver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHair_LongSilver_C* UHair_LongSilver_C::GetDefaultObj()
{
	static class UHair_LongSilver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHair_LongSilver_C*>(UHair_LongSilver_C::StaticClass()->DefaultObject);

	return Default;
}

}


