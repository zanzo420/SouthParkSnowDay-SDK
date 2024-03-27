#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TP_Trail_FX.TP_Trail_FX_C
// (Actor)

class UClass* ATP_Trail_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TP_Trail_FX_C");

	return Clss;
}


// TP_Trail_FX_C TP_Trail_FX.Default__TP_Trail_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATP_Trail_FX_C* ATP_Trail_FX_C::GetDefaultObj()
{
	static class ATP_Trail_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATP_Trail_FX_C*>(ATP_Trail_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


