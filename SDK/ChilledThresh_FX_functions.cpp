#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChilledThresh_FX.ChilledThresh_FX_C
// (Actor)

class UClass* AChilledThresh_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChilledThresh_FX_C");

	return Clss;
}


// ChilledThresh_FX_C ChilledThresh_FX.Default__ChilledThresh_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChilledThresh_FX_C* AChilledThresh_FX_C::GetDefaultObj()
{
	static class AChilledThresh_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChilledThresh_FX_C*>(AChilledThresh_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


