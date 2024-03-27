#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KennyShineBombDown_Sys.KennyShineBombDown_Sys_C
// (Actor)

class UClass* AKennyShineBombDown_Sys_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KennyShineBombDown_Sys_C");

	return Clss;
}


// KennyShineBombDown_Sys_C KennyShineBombDown_Sys.Default__KennyShineBombDown_Sys_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKennyShineBombDown_Sys_C* AKennyShineBombDown_Sys_C::GetDefaultObj()
{
	static class AKennyShineBombDown_Sys_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKennyShineBombDown_Sys_C*>(AKennyShineBombDown_Sys_C::StaticClass()->DefaultObject);

	return Default;
}

}


