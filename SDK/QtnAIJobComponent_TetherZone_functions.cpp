#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnAIJobComponent_TetherZone.QtnAIJobComponent_TetherZone_C
// (SceneComponent)

class UClass* UQtnAIJobComponent_TetherZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnAIJobComponent_TetherZone_C");

	return Clss;
}


// QtnAIJobComponent_TetherZone_C QtnAIJobComponent_TetherZone.Default__QtnAIJobComponent_TetherZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnAIJobComponent_TetherZone_C* UQtnAIJobComponent_TetherZone_C::GetDefaultObj()
{
	static class UQtnAIJobComponent_TetherZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnAIJobComponent_TetherZone_C*>(UQtnAIJobComponent_TetherZone_C::StaticClass()->DefaultObject);

	return Default;
}

}


