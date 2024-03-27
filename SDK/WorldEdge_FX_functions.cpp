#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WorldEdge_FX.WorldEdge_FX_C
// (Actor)

class UClass* AWorldEdge_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldEdge_FX_C");

	return Clss;
}


// WorldEdge_FX_C WorldEdge_FX.Default__WorldEdge_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWorldEdge_FX_C* AWorldEdge_FX_C::GetDefaultObj()
{
	static class AWorldEdge_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWorldEdge_FX_C*>(AWorldEdge_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


