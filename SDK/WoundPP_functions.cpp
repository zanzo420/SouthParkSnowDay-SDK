#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WoundPP.WoundPP_C
// (None)

class UClass* UWoundPP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WoundPP_C");

	return Clss;
}


// WoundPP_C WoundPP.Default__WoundPP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWoundPP_C* UWoundPP_C::GetDefaultObj()
{
	static class UWoundPP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWoundPP_C*>(UWoundPP_C::StaticClass()->DefaultObject);

	return Default;
}

}


