#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TelemetryEventHandler.TelemetryEventHandler_C
// (None)

class UClass* UTelemetryEventHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TelemetryEventHandler_C");

	return Clss;
}


// TelemetryEventHandler_C TelemetryEventHandler.Default__TelemetryEventHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTelemetryEventHandler_C* UTelemetryEventHandler_C::GetDefaultObj()
{
	static class UTelemetryEventHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTelemetryEventHandler_C*>(UTelemetryEventHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


