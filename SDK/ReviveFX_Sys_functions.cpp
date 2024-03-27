#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReviveFX_Sys.ReviveFX_Sys_C
// (Actor)

class UClass* AReviveFX_Sys_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReviveFX_Sys_C");

	return Clss;
}


// ReviveFX_Sys_C ReviveFX_Sys.Default__ReviveFX_Sys_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AReviveFX_Sys_C* AReviveFX_Sys_C::GetDefaultObj()
{
	static class AReviveFX_Sys_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AReviveFX_Sys_C*>(AReviveFX_Sys_C::StaticClass()->DefaultObject);

	return Default;
}

}


