#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnAnimWindow_Custom1.QtnAnimWindow_Custom1_C
// (None)

class UClass* UQtnAnimWindow_Custom1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnAnimWindow_Custom1_C");

	return Clss;
}


// QtnAnimWindow_Custom1_C QtnAnimWindow_Custom1.Default__QtnAnimWindow_Custom1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnAnimWindow_Custom1_C* UQtnAnimWindow_Custom1_C::GetDefaultObj()
{
	static class UQtnAnimWindow_Custom1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnAnimWindow_Custom1_C*>(UQtnAnimWindow_Custom1_C::StaticClass()->DefaultObject);

	return Default;
}

}


