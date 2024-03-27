#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LaserSwordDodgeVerb.LaserSwordDodgeVerb_C
// (None)

class UClass* ULaserSwordDodgeVerb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LaserSwordDodgeVerb_C");

	return Clss;
}


// LaserSwordDodgeVerb_C LaserSwordDodgeVerb.Default__LaserSwordDodgeVerb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULaserSwordDodgeVerb_C* ULaserSwordDodgeVerb_C::GetDefaultObj()
{
	static class ULaserSwordDodgeVerb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULaserSwordDodgeVerb_C*>(ULaserSwordDodgeVerb_C::StaticClass()->DefaultObject);

	return Default;
}

}


