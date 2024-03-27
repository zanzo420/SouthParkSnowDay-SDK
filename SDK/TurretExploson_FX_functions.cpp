#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TurretExploson_FX.TurretExploson_FX_C
// (Actor)

class UClass* ATurretExploson_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TurretExploson_FX_C");

	return Clss;
}


// TurretExploson_FX_C TurretExploson_FX.Default__TurretExploson_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATurretExploson_FX_C* ATurretExploson_FX_C::GetDefaultObj()
{
	static class ATurretExploson_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATurretExploson_FX_C*>(ATurretExploson_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


