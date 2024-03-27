#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CollisionAINoiseFX.CollisionAINoiseFX_C
// (None)

class UClass* UCollisionAINoiseFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollisionAINoiseFX_C");

	return Clss;
}


// CollisionAINoiseFX_C CollisionAINoiseFX.Default__CollisionAINoiseFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollisionAINoiseFX_C* UCollisionAINoiseFX_C::GetDefaultObj()
{
	static class UCollisionAINoiseFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollisionAINoiseFX_C*>(UCollisionAINoiseFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


