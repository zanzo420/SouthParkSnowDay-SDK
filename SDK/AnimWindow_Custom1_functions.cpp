#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimWindow_Custom1.AnimWindow_Custom1_C
// (None)

class UClass* UAnimWindow_Custom1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimWindow_Custom1_C");

	return Clss;
}


// AnimWindow_Custom1_C AnimWindow_Custom1.Default__AnimWindow_Custom1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimWindow_Custom1_C* UAnimWindow_Custom1_C::GetDefaultObj()
{
	static class UAnimWindow_Custom1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimWindow_Custom1_C*>(UAnimWindow_Custom1_C::StaticClass()->DefaultObject);

	return Default;
}

}


