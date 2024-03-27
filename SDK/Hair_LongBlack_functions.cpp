#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hair_LongBlack.Hair_LongBlack_C
// (None)

class UClass* UHair_LongBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hair_LongBlack_C");

	return Clss;
}


// Hair_LongBlack_C Hair_LongBlack.Default__Hair_LongBlack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHair_LongBlack_C* UHair_LongBlack_C::GetDefaultObj()
{
	static class UHair_LongBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHair_LongBlack_C*>(UHair_LongBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


