#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShieldRedirectAOEBlast_FX.ShieldRedirectAOEBlast_FX_C
// (Actor)

class UClass* AShieldRedirectAOEBlast_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShieldRedirectAOEBlast_FX_C");

	return Clss;
}


// ShieldRedirectAOEBlast_FX_C ShieldRedirectAOEBlast_FX.Default__ShieldRedirectAOEBlast_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShieldRedirectAOEBlast_FX_C* AShieldRedirectAOEBlast_FX_C::GetDefaultObj()
{
	static class AShieldRedirectAOEBlast_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShieldRedirectAOEBlast_FX_C*>(AShieldRedirectAOEBlast_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


