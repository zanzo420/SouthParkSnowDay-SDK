#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ProjectileKidThrower_Overlay.ProjectileKidThrower_Overlay_C
// (None)

class UClass* UProjectileKidThrower_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProjectileKidThrower_Overlay_C");

	return Clss;
}


// ProjectileKidThrower_Overlay_C ProjectileKidThrower_Overlay.Default__ProjectileKidThrower_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProjectileKidThrower_Overlay_C* UProjectileKidThrower_Overlay_C::GetDefaultObj()
{
	static class UProjectileKidThrower_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProjectileKidThrower_Overlay_C*>(UProjectileKidThrower_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


