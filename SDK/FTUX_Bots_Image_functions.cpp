#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FTUX_Bots_Image.FTUX_Bots_Image_C
// (None)

class UClass* UFTUX_Bots_Image_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUX_Bots_Image_C");

	return Clss;
}


// FTUX_Bots_Image_C FTUX_Bots_Image.Default__FTUX_Bots_Image_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFTUX_Bots_Image_C* UFTUX_Bots_Image_C::GetDefaultObj()
{
	static class UFTUX_Bots_Image_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFTUX_Bots_Image_C*>(UFTUX_Bots_Image_C::StaticClass()->DefaultObject);

	return Default;
}

}


