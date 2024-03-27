#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnCutsceneObject.QtnCutsceneObject_C
// (None)

class UClass* UQtnCutsceneObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnCutsceneObject_C");

	return Clss;
}


// QtnCutsceneObject_C QtnCutsceneObject.Default__QtnCutsceneObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnCutsceneObject_C* UQtnCutsceneObject_C::GetDefaultObj()
{
	static class UQtnCutsceneObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnCutsceneObject_C*>(UQtnCutsceneObject_C::StaticClass()->DefaultObject);

	return Default;
}

}


