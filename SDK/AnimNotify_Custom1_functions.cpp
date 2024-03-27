#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_Custom1.AnimNotify_Custom1_C
// (None)

class UClass* UAnimNotify_Custom1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_Custom1_C");

	return Clss;
}


// AnimNotify_Custom1_C AnimNotify_Custom1.Default__AnimNotify_Custom1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_Custom1_C* UAnimNotify_Custom1_C::GetDefaultObj()
{
	static class UAnimNotify_Custom1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_Custom1_C*>(UAnimNotify_Custom1_C::StaticClass()->DefaultObject);

	return Default;
}

}


