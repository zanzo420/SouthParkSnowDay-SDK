#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_FireProjectile.AnimNotify_FireProjectile_C
// (None)

class UClass* UAnimNotify_FireProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_FireProjectile_C");

	return Clss;
}


// AnimNotify_FireProjectile_C AnimNotify_FireProjectile.Default__AnimNotify_FireProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_FireProjectile_C* UAnimNotify_FireProjectile_C::GetDefaultObj()
{
	static class UAnimNotify_FireProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_FireProjectile_C*>(UAnimNotify_FireProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


