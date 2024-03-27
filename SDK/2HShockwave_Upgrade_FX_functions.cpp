#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass 2HShockwave_Upgrade_FX.2HShockwave_Upgrade_FX_C
// (Actor)

class UClass* ATwoHShockwave_Upgrade_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("2HShockwave_Upgrade_FX_C");

	return Clss;
}


// 2HShockwave_Upgrade_FX_C 2HShockwave_Upgrade_FX.Default__2HShockwave_Upgrade_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATwoHShockwave_Upgrade_FX_C* ATwoHShockwave_Upgrade_FX_C::GetDefaultObj()
{
	static class ATwoHShockwave_Upgrade_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATwoHShockwave_Upgrade_FX_C*>(ATwoHShockwave_Upgrade_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


