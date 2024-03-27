#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShizaGroundEruption_FX.ShizaGroundEruption_FX_C
// (Actor)

class UClass* AShizaGroundEruption_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShizaGroundEruption_FX_C");

	return Clss;
}


// ShizaGroundEruption_FX_C ShizaGroundEruption_FX.Default__ShizaGroundEruption_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShizaGroundEruption_FX_C* AShizaGroundEruption_FX_C::GetDefaultObj()
{
	static class AShizaGroundEruption_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShizaGroundEruption_FX_C*>(AShizaGroundEruption_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


