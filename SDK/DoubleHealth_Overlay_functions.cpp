#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoubleHealth_Overlay.DoubleHealth_Overlay_C
// (None)

class UClass* UDoubleHealth_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoubleHealth_Overlay_C");

	return Clss;
}


// DoubleHealth_Overlay_C DoubleHealth_Overlay.Default__DoubleHealth_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoubleHealth_Overlay_C* UDoubleHealth_Overlay_C::GetDefaultObj()
{
	static class UDoubleHealth_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoubleHealth_Overlay_C*>(UDoubleHealth_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


