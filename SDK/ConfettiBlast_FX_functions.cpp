#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ConfettiBlast_FX.ConfettiBlast_FX_C
// (Actor)

class UClass* AConfettiBlast_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConfettiBlast_FX_C");

	return Clss;
}


// ConfettiBlast_FX_C ConfettiBlast_FX.Default__ConfettiBlast_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AConfettiBlast_FX_C* AConfettiBlast_FX_C::GetDefaultObj()
{
	static class AConfettiBlast_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AConfettiBlast_FX_C*>(AConfettiBlast_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


