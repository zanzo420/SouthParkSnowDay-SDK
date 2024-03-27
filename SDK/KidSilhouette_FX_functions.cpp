#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KidSilhouette_FX.KidSilhouette_FX_C
// (Actor)

class UClass* AKidSilhouette_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KidSilhouette_FX_C");

	return Clss;
}


// KidSilhouette_FX_C KidSilhouette_FX.Default__KidSilhouette_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKidSilhouette_FX_C* AKidSilhouette_FX_C::GetDefaultObj()
{
	static class AKidSilhouette_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKidSilhouette_FX_C*>(AKidSilhouette_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


