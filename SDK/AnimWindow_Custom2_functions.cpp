#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimWindow_Custom2.AnimWindow_Custom2_C
// (None)

class UClass* UAnimWindow_Custom2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimWindow_Custom2_C");

	return Clss;
}


// AnimWindow_Custom2_C AnimWindow_Custom2.Default__AnimWindow_Custom2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimWindow_Custom2_C* UAnimWindow_Custom2_C::GetDefaultObj()
{
	static class UAnimWindow_Custom2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimWindow_Custom2_C*>(UAnimWindow_Custom2_C::StaticClass()->DefaultObject);

	return Default;
}

}


