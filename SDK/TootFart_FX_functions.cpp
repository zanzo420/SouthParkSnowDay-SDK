#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TootFart_FX.TootFart_FX_C
// (Actor)

class UClass* ATootFart_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TootFart_FX_C");

	return Clss;
}


// TootFart_FX_C TootFart_FX.Default__TootFart_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATootFart_FX_C* ATootFart_FX_C::GetDefaultObj()
{
	static class ATootFart_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATootFart_FX_C*>(ATootFart_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


