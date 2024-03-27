#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hair_ShortBrown.Hair_ShortBrown_C
// (None)

class UClass* UHair_ShortBrown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hair_ShortBrown_C");

	return Clss;
}


// Hair_ShortBrown_C Hair_ShortBrown.Default__Hair_ShortBrown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHair_ShortBrown_C* UHair_ShortBrown_C::GetDefaultObj()
{
	static class UHair_ShortBrown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHair_ShortBrown_C*>(UHair_ShortBrown_C::StaticClass()->DefaultObject);

	return Default;
}

}


