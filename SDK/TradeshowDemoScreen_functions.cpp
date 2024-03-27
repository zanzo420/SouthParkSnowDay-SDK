#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TradeshowDemoScreen.TradeshowDemoScreen_C
// (None)

class UClass* UTradeshowDemoScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TradeshowDemoScreen_C");

	return Clss;
}


// TradeshowDemoScreen_C TradeshowDemoScreen.Default__TradeshowDemoScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTradeshowDemoScreen_C* UTradeshowDemoScreen_C::GetDefaultObj()
{
	static class UTradeshowDemoScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTradeshowDemoScreen_C*>(UTradeshowDemoScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


