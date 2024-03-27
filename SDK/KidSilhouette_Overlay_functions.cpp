#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KidSilhouette_Overlay.KidSilhouette_Overlay_C
// (None)

class UClass* UKidSilhouette_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KidSilhouette_Overlay_C");

	return Clss;
}


// KidSilhouette_Overlay_C KidSilhouette_Overlay.Default__KidSilhouette_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKidSilhouette_Overlay_C* UKidSilhouette_Overlay_C::GetDefaultObj()
{
	static class UKidSilhouette_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKidSilhouette_Overlay_C*>(UKidSilhouette_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


