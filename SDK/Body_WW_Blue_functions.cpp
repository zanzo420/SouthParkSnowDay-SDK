#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_WW_Blue.Body_WW_Blue_C
// (None)

class UClass* UBody_WW_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_WW_Blue_C");

	return Clss;
}


// Body_WW_Blue_C Body_WW_Blue.Default__Body_WW_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_WW_Blue_C* UBody_WW_Blue_C::GetDefaultObj()
{
	static class UBody_WW_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_WW_Blue_C*>(UBody_WW_Blue_C::StaticClass()->DefaultObject);

	return Default;
}

}


