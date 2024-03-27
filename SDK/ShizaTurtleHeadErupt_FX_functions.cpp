#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShizaTurtleHeadErupt_FX.ShizaTurtleHeadErupt_FX_C
// (Actor)

class UClass* AShizaTurtleHeadErupt_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShizaTurtleHeadErupt_FX_C");

	return Clss;
}


// ShizaTurtleHeadErupt_FX_C ShizaTurtleHeadErupt_FX.Default__ShizaTurtleHeadErupt_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShizaTurtleHeadErupt_FX_C* AShizaTurtleHeadErupt_FX_C::GetDefaultObj()
{
	static class AShizaTurtleHeadErupt_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShizaTurtleHeadErupt_FX_C*>(AShizaTurtleHeadErupt_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


