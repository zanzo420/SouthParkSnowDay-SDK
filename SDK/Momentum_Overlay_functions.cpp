#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Momentum_Overlay.Momentum_Overlay_C
// (None)

class UClass* UMomentum_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Momentum_Overlay_C");

	return Clss;
}


// Momentum_Overlay_C Momentum_Overlay.Default__Momentum_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMomentum_Overlay_C* UMomentum_Overlay_C::GetDefaultObj()
{
	static class UMomentum_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMomentum_Overlay_C*>(UMomentum_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


