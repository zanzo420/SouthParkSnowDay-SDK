#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScriptedSkeletalActor_Hub.ScriptedSkeletalActor_Hub_C
// (Actor)

class UClass* AScriptedSkeletalActor_Hub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScriptedSkeletalActor_Hub_C");

	return Clss;
}


// ScriptedSkeletalActor_Hub_C ScriptedSkeletalActor_Hub.Default__ScriptedSkeletalActor_Hub_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AScriptedSkeletalActor_Hub_C* AScriptedSkeletalActor_Hub_C::GetDefaultObj()
{
	static class AScriptedSkeletalActor_Hub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AScriptedSkeletalActor_Hub_C*>(AScriptedSkeletalActor_Hub_C::StaticClass()->DefaultObject);

	return Default;
}

}


