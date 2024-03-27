#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DaggerDivePropulsion_FX.DaggerDivePropulsion_FX_C
// (Actor)

class UClass* ADaggerDivePropulsion_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DaggerDivePropulsion_FX_C");

	return Clss;
}


// DaggerDivePropulsion_FX_C DaggerDivePropulsion_FX.Default__DaggerDivePropulsion_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADaggerDivePropulsion_FX_C* ADaggerDivePropulsion_FX_C::GetDefaultObj()
{
	static class ADaggerDivePropulsion_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADaggerDivePropulsion_FX_C*>(ADaggerDivePropulsion_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


