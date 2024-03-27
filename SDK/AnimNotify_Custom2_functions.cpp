#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_Custom2.AnimNotify_Custom2_C
// (None)

class UClass* UAnimNotify_Custom2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_Custom2_C");

	return Clss;
}


// AnimNotify_Custom2_C AnimNotify_Custom2.Default__AnimNotify_Custom2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_Custom2_C* UAnimNotify_Custom2_C::GetDefaultObj()
{
	static class UAnimNotify_Custom2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_Custom2_C*>(UAnimNotify_Custom2_C::StaticClass()->DefaultObject);

	return Default;
}

}


