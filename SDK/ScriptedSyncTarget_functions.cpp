#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScriptedSyncTarget.ScriptedSyncTarget_C
// (Actor)

class UClass* AScriptedSyncTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScriptedSyncTarget_C");

	return Clss;
}


// ScriptedSyncTarget_C ScriptedSyncTarget.Default__ScriptedSyncTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AScriptedSyncTarget_C* AScriptedSyncTarget_C::GetDefaultObj()
{
	static class AScriptedSyncTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AScriptedSyncTarget_C*>(AScriptedSyncTarget_C::StaticClass()->DefaultObject);

	return Default;
}

}


