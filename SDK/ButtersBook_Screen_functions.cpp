#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtersBook_Screen.ButtersBook_Screen_C
// (None)

class UClass* UButtersBook_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtersBook_Screen_C");

	return Clss;
}


// ButtersBook_Screen_C ButtersBook_Screen.Default__ButtersBook_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtersBook_Screen_C* UButtersBook_Screen_C::GetDefaultObj()
{
	static class UButtersBook_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtersBook_Screen_C*>(UButtersBook_Screen_C::StaticClass()->DefaultObject);

	return Default;
}

}


